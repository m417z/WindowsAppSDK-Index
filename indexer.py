import os
import shutil
import subprocess
import tempfile
import xml.etree.ElementTree as ET
import zipfile
from pathlib import Path
from typing import Optional

import requests

import config


def download_file(url: str, dir: Path):
    # https://stackoverflow.com/a/39217788
    target_path = dir / url.split('/')[-1]
    with requests.get(url, stream=True) as r:
        r.raise_for_status()
        with target_path.open('wb') as f:
            shutil.copyfileobj(r.raw, f)

    return target_path


def get_nuget_package_versions(package_name: str):
    url = f'https://www.nuget.org/packages/{package_name}/atom.xml'
    r = requests.get(url)
    r.raise_for_status()

    tree = ET.fromstring(r.content)

    ns = {
        'xmlns': 'http://www.w3.org/2005/Atom',
    }

    links = tree.findall('xmlns:entry/xmlns:link', namespaces=ns)

    return [x.attrib['href'] for x in links]


def parse_nuget_version(version_string: str) -> str:
    """Parse NuGet version notation and extract the specific version.

    Returns as-is if no brackets. If brackets, extracts first version from range.
    Raises ValueError for exclusive ranges (parentheses) or malformed input.
    """
    version_string = version_string.strip()

    # No brackets - return as-is
    if not version_string.startswith(('[', '(')):
        return version_string

    # Reject exclusive range notations
    if version_string.startswith('('):
        raise ValueError(f'Exclusive range notation not supported: {version_string}')

    # Must have closing bracket
    if not version_string.endswith((']', ')')):
        raise ValueError(f'Invalid version notation, missing closing bracket: {version_string}')

    # Extract first version from range
    min_version = version_string[1:-1].split(',')[0].strip()
    if not min_version:
        raise ValueError(f'Unsupported version notation, missing minimum version: {version_string}')

    return min_version


def extract_dependencies_from_nuspec(nuspec_path: Path):
    """Extract dependencies from a .nuspec file."""
    tree = ET.parse(nuspec_path)
    root = tree.getroot()

    # Extract namespace from root element (must be present)
    # Format: {http://schemas.microsoft.com/packaging/2013/05/nuspec.xsd}package
    if not root.tag.startswith('{') or not root.tag.endswith('}package'):
        raise ValueError(f'Root element in {nuspec_path} missing namespace: {root.tag}')

    namespace = root.tag.removeprefix('{').removesuffix('}package')

    # Find metadata element
    metadata = root.find(f'{{{namespace}}}metadata')
    if metadata is None:
        raise RuntimeError(f'No metadata element found in {nuspec_path}')

    # Find dependencies container
    dependencies_container = metadata.find(f'{{{namespace}}}dependencies')
    if dependencies_container is None:
        return []

    dependencies = []
    seen = set()  # Track seen dependencies to avoid duplicates

    # Find all dependency elements (both direct and within groups)
    dep_elements = dependencies_container.findall(f'{{{namespace}}}dependency')

    # Also look for dependencies within group elements
    groups = dependencies_container.findall(f'{{{namespace}}}group')
    for group in groups:
        dep_elements.extend(group.findall(f'{{{namespace}}}dependency'))

    for dep in dep_elements:
        dep_id = dep.attrib.get('id')
        dep_version_raw = dep.attrib.get('version')

        if not dep_id:
            raise ValueError(f'Dependency in {nuspec_path} is missing "id" attribute')
        if not dep_version_raw:
            raise ValueError(f'Dependency in {nuspec_path} is missing "version" attribute')

        # Parse the version notation
        dep_version = parse_nuget_version(dep_version_raw)

        # Check for duplicates
        dep_key = (dep_id, dep_version)
        if dep_key not in seen:
            seen.add(dep_key)
            dependencies.append({'id': dep_id, 'version': dep_version})

    return dependencies


def collect_all_dependencies(
    nuspec_path: Path, deps_dir: Path, collected: Optional[set] = None
) -> set[tuple[str, str]]:
    """Recursively collect all dependencies (including transitive ones) from a .nuspec file.

    Args:
        nuspec_path: Path to the .nuspec file to analyze
        deps_dir: Directory containing dependency packages
        collected: Set to track already collected dependencies (to avoid cycles)

    Returns:
        Set of tuples (dep_id, dep_version) representing all dependencies
    """
    if collected is None:
        collected = set()

    dependencies = extract_dependencies_from_nuspec(nuspec_path)

    for dep in dependencies:
        dep_key = (dep['id'], dep['version'])

        # Skip if already processed (avoids infinite recursion)
        if dep_key in collected:
            continue

        collected.add(dep_key)

        # Recursively collect dependencies of this dependency
        dep_nuspec = deps_dir / dep['id'] / dep['version'] / f"{dep['id']}.nuspec"
        if dep_nuspec.exists():
            collect_all_dependencies(dep_nuspec, deps_dir, collected)

    return collected


def get_winmd_dirs(package_id: str, package_dir: Path, deps_dir: Path):
    nuspec_file = package_dir / f'{package_id}.nuspec'

    winrt_dirs = {p.parent for p in package_dir.rglob('*.winmd')}

    dependencies = collect_all_dependencies(nuspec_file, deps_dir)
    for dep_id, dep_version in dependencies:
        dep_dir = deps_dir / dep_id / dep_version
        winrt_dirs.update(p.parent for p in dep_dir.rglob('*.winmd'))

    return winrt_dirs


def process_package(package_id: str, package_version: str, package_dir: Path, deps_dir: Path):
    """Download, extract, and process a NuGet package (main or dependency)."""
    print(f'Downloading {package_id} {package_version}...')

    download_url = f'https://www.nuget.org/api/v2/package/{package_id}/{package_version}'
    zip_path = download_file(download_url, package_dir)

    print(f'Unzipping to {package_dir}...')

    extensions = ('.c', '.cpp', '.h', '.idl', '.winmd', '.nuspec')
    with zipfile.ZipFile(zip_path, 'r') as zip_file:
        for name in zip_file.namelist():
            if name.endswith(extensions):
                zip_file.extract(name, package_dir)

    zip_path.unlink()

    # Process dependencies recursively
    nuspec_file = package_dir / f'{package_id}.nuspec'
    if not nuspec_file.exists():
        raise RuntimeError(f'Expected .nuspec file not found: {nuspec_file}')

    print(f'Processing dependencies...')
    dependencies = extract_dependencies_from_nuspec(nuspec_file)

    for dep in dependencies:
        dep_dir = deps_dir / dep['id'] / dep['version']

        # Process dependency if it doesn't exist
        if not dep_dir.exists():
            try:
                dep_dir.mkdir(parents=True, exist_ok=True)
                process_package(dep['id'], dep['version'], dep_dir, deps_dir)
            except requests.exceptions.HTTPError as e:
                if e.response.status_code != 404:
                    raise

                prev_version = dep['version']

                # Check if this dependency has a version override.
                override_found = False
                for override in config.DEPENDENCY_VERSION_OVERRIDES:
                    if dep['id'] == override['id'] and dep['version'] in override['old_versions']:
                        dep = {'id': dep['id'], 'version': override['new_version']}
                        override_found = True
                        break

                if not override_found:
                    raise

                print(f'Dependency {dep["id"]} {prev_version} not found, trying {dep["version"]}...')
                dep_dir = deps_dir / dep['id'] / dep['version']
                if not dep_dir.exists():
                    dep_dir.mkdir(parents=True, exist_ok=True)
                    process_package(dep['id'], dep['version'], dep_dir, deps_dir)

    cmd_start = [config.WINMDIDL_PATH, f'/metadata_dir:{config.WINMETADATA_PATH}']

    for winmd_dir in get_winmd_dirs(package_id, package_dir, deps_dir):
        cmd_start += [f'/metadata_dir:{winmd_dir}']

    for path in package_dir.rglob('*.winmd'):
        # Use a temp directory to avoid long path issues
        with tempfile.TemporaryDirectory() as temp_dir:
            temp_outdir = Path(temp_dir) / 'w'
            cmd = cmd_start + [str(path), f'/outdir:{temp_outdir}']
            print(f'Running winmdidl: {cmd}')
            subprocess.check_call(cmd)

            # Move output from temp dir to final location
            final_outdir = Path(str(path) + '_winmdidl')
            final_outdir.parent.mkdir(parents=True, exist_ok=True)
            shutil.move(temp_outdir, final_outdir)

        if not config.WINMD_FILES_KEEP:
            path.unlink()

    # Make sure the folder is not empty, otherwise it won't be committed.
    if not any(p.is_file() for p in package_dir.rglob('*')):
        (package_dir / '.empty').touch()


def run_cppwinrt(package_id: str, package_version: str, package_dir: Path, deps_dir: Path):
    cppwinrt_inputs = get_winmd_dirs(package_id, package_dir, deps_dir)
    if not cppwinrt_inputs:
        print(f'No inputs found for cppwinrt, skipping...')
        return

    cppwinrt_dir = os.environ.get('CPPWINRT_DIR')
    if cppwinrt_dir:
        cppwinrt_exe = list(Path(cppwinrt_dir).glob('Microsoft.Windows.CppWinRT.*/bin/cppwinrt.exe'))
        if len(cppwinrt_exe) != 1:
            raise RuntimeError(f'Expected 1 cppwinrt.exe, found: {cppwinrt_exe}')

        cppwinrt_path = cppwinrt_exe[0]
    else:
        cppwinrt_path = config.CPPWINRT_PATH

    cmd = [cppwinrt_path, '-input', config.WINMETADATA_PATH]

    for path in cppwinrt_inputs:
        cmd += ['-input', str(path)]

    output_dir = package_dir / 'cppwinrt'
    cmd += ['-output', str(output_dir)]

    print(f'Running cppwinrt: {cmd}')
    subprocess.check_call(cmd)


def remove_unused_dependencies(package_name: str, package_root_dir: Path):
    """Remove dependencies that are not used by any package version.

    Args:
        package_root_dir: Root directory containing all package versions
        package_deps_dir: Directory containing all dependencies
    """
    package_deps_dir = package_root_dir / 'deps'
    if not package_deps_dir.exists():
        return

    # Collect all dependencies actually used by all package versions
    all_used_deps = set()
    for package_version_dir in package_root_dir.iterdir():
        if not package_version_dir.is_dir() or package_version_dir.name == 'deps':
            continue

        # Construct the .nuspec file path using the package name
        nuspec_file = package_version_dir / f'{package_name}.nuspec'
        version_deps = collect_all_dependencies(nuspec_file, package_deps_dir)
        all_used_deps.update(version_deps)

    # Remove dependencies that are not in the used set
    for dep_id_dir in package_deps_dir.iterdir():
        if not dep_id_dir.is_dir():
            continue

        for dep_version_dir in dep_id_dir.iterdir():
            if not dep_version_dir.is_dir():
                continue

            dep_key = (dep_id_dir.name, dep_version_dir.name)
            if dep_key not in all_used_deps:
                print(f'Removing unused dependency {dep_id_dir.name}/{dep_version_dir.name}...')
                shutil.rmtree(dep_version_dir)


def index_nuget_package(package_name: str):
    package_urls = get_nuget_package_versions(package_name)

    if (config.NUM_OF_PACKAGES_TO_INDEX_PREVIEW is not None or
        config.NUM_OF_PACKAGES_TO_INDEX_STABLE is not None):
        def is_preview(url: str):
            return '-' in url.split('/')[-1]

        package_urls_preview = list(filter(is_preview, package_urls))
        package_urls_stable = list(filter(lambda url: not is_preview(url), package_urls))

        if config.NUM_OF_PACKAGES_TO_INDEX_PREVIEW is not None:
            package_urls_preview = package_urls_preview[:config.NUM_OF_PACKAGES_TO_INDEX_PREVIEW]

        if config.NUM_OF_PACKAGES_TO_INDEX_STABLE is not None:
            package_urls_stable = package_urls_stable[:config.NUM_OF_PACKAGES_TO_INDEX_STABLE]

        package_urls = package_urls_preview + package_urls_stable

    package_url_prefix = 'https://www.nuget.org/packages/'

    # Shared dependencies directory for all versions of this package
    package_deps_dir = Path(package_name) / 'deps'

    for package_url in sorted(package_urls):
        assert package_url.startswith(f'{package_url_prefix}{package_name}/'), package_url
        version_path = Path(package_url.removeprefix(package_url_prefix))
        if version_path.exists():
            continue

        print(f'Indexing {package_url}...')

        package_version = version_path.name
        version_path.mkdir(parents=True, exist_ok=True)
        process_package(package_name, package_version, version_path, package_deps_dir)

        if config.CPPWINRT_RUN:
            run_cppwinrt(package_name, package_version, version_path, package_deps_dir)

    if config.REMOVE_OLD_PACKAGES:
        for path in Path(package_name).iterdir():
            if not path.is_dir() or path.name == 'deps':
                continue

            if f'{package_url_prefix}{package_name}/{path.name}' in package_urls:
                continue

            print(f'Removing {path}...')
            shutil.rmtree(path)

        remove_unused_dependencies(package_name, Path(package_name))


def main():
    for package_details in config.PACKAGES_TO_INDEX:
        index_nuget_package(package_details['name'])


if __name__ == '__main__':
    main()
