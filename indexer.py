import os
import shutil
import subprocess
import xml.etree.ElementTree as ET
import zipfile
from pathlib import Path

import requests

PACKAGES_TO_INDEX = [{
    'name': 'Microsoft.UI.Xaml',
    'deps': {
        'cppwinrt': [
            str(Path(__file__).parent / 'deps/Microsoft.Web.WebView2.Core/1.0.2045.28/lib'),
        ],
        'winmdidl': [
            str(Path(__file__).parent / 'deps/Microsoft.Web.WebView2.Core/1.0.2045.28/lib'),
        ],
    },
}, {
    'name': 'Microsoft.WindowsAppSDK',
    'deps': {
        'cppwinrt': [
            str(Path(__file__).parent / 'deps/Microsoft.Web.WebView2.Core/1.0.2045.28/lib'),
        ],
        'winmdidl': [
            str(Path(__file__).parent / 'deps/Microsoft.Web.WebView2.Core/1.0.2045.28/lib'),
        ],
    },
}]

# Set to None to index all versions.
NUM_OF_PACKAGES_TO_INDEX_PREVIEW = None
NUM_OF_PACKAGES_TO_INDEX_STABLE = None

REMOVE_OLD_PACKAGES = False

# Running cppwinrt on all versions makes the repository much larger (from 200MB
# to 8.5GB). It can be run locally if needed.
CPPWINRT_RUN = False

# WINMDIDL_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\winmdidl.exe'
WINMDIDL_PATH = 'winmdidl.exe'

# CPPWINRT_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\cppwinrt.exe'
CPPWINRT_PATH = 'cppwinrt.exe'

WINMETADATA_PATH = str(Path(__file__).parent / 'WinMetadata/10.0.26100.2605')


def download_file(url: str, dir: Path):
    # https://stackoverflow.com/a/39217788
    target_path = dir / url.split('/')[-1]
    with requests.get(url, stream=True) as r:
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


def index_nuget_package_version(package_url: str, dir: Path, package_deps: dict):
    print(f'  Downloading {package_url}...')

    assert package_url.startswith('https://www.nuget.org/packages/'), package_url

    download_url = ('https://www.nuget.org/api/v2/package/' +
                    package_url.removeprefix('https://www.nuget.org/packages/'))

    zip_path = download_file(download_url, dir)

    print(f'  Unzipping to {dir}...')

    extensions = ('.c', '.cpp', '.h', '.idl', '.winmd')
    with zipfile.ZipFile(zip_path, 'r') as zip_file:
        for name in zip_file.namelist():
            if name.endswith(extensions):
                zip_file.extract(name, dir)

    zip_path.unlink()

    if CPPWINRT_RUN and (lib_dir := dir / 'lib') and lib_dir.exists():
        print(f'  Running cppwinrt...')

        cppwinrt_dir = os.environ.get('CPPWINRT_DIR')
        if cppwinrt_dir:
            cppwinrt_exe = list(Path(cppwinrt_dir).glob('Microsoft.Windows.CppWinRT.*/bin/cppwinrt.exe'))
            if len(cppwinrt_exe) != 1:
                raise RuntimeError(f'Expected 1 cppwinrt.exe, found: {cppwinrt_exe}')

            cppwinrt_path = cppwinrt_exe[0]
        else:
            cppwinrt_path = CPPWINRT_PATH

        cmd = [cppwinrt_path, '-input', WINMETADATA_PATH]

        for path in lib_dir.iterdir():
            if path.is_dir():
                cmd += ['-input', str(path)]

        for dep in package_deps.get('cppwinrt', []):
            cmd += ['-input', dep]

        cmd += ['-output', str(lib_dir)]

        subprocess.check_call(cmd)

    print(f'  Running winmdidl...')

    cmd_start = [WINMDIDL_PATH, f'/metadata_dir:{WINMETADATA_PATH}']
    for dep in package_deps.get('winmdidl', []):
        cmd_start += [f'/metadata_dir:{dep}']

    for path in dir.glob('**/*.winmd'):
        outdir = str(path) + '_winmdidl'
        cmd = cmd_start + [str(path), f'/outdir:{outdir}']
        subprocess.check_call(cmd)
        path.unlink()

    # Make sure the folder is not empty, otherwise it won't be committed.
    if not any(p.is_file() for p in dir.rglob('*')):
        (dir / '.empty').touch()


def index_nuget_package(package_name: str, package_deps: dict):
    package_urls = get_nuget_package_versions(package_name)

    if (NUM_OF_PACKAGES_TO_INDEX_PREVIEW is not None or
        NUM_OF_PACKAGES_TO_INDEX_STABLE is not None):
        def is_preview(url: str):
            return '-' in url.split('/')[-1]

        package_urls_preview = list(filter(is_preview, package_urls))
        package_urls_stable = list(filter(lambda url: not is_preview(url), package_urls))

        if NUM_OF_PACKAGES_TO_INDEX_PREVIEW is not None:
            package_urls_preview = package_urls_preview[:NUM_OF_PACKAGES_TO_INDEX_PREVIEW]

        if NUM_OF_PACKAGES_TO_INDEX_STABLE is not None:
            package_urls_stable = package_urls_stable[:NUM_OF_PACKAGES_TO_INDEX_STABLE]

        package_urls = package_urls_preview + package_urls_stable

    package_url_prefix = 'https://www.nuget.org/packages/'

    for package_url in sorted(package_urls):
        assert package_url.startswith(f'{package_url_prefix}{package_name}/'), package_url
        path = Path(package_url.removeprefix(package_url_prefix))
        if path.exists():
            continue

        print(f'Indexing {package_url}...')

        path.mkdir(parents=True, exist_ok=True)
        index_nuget_package_version(package_url, path, package_deps)

    if REMOVE_OLD_PACKAGES:
        for path in Path(package_name).iterdir():
            if not path.is_dir():
                continue

            if f'{package_url_prefix}{package_name}/{path.name}' in package_urls:
                continue

            print(f'Removing {path}...')
            shutil.rmtree(path)


def main():
    for package_details in PACKAGES_TO_INDEX:
        index_nuget_package(
            package_details['name'], package_details.get('deps', {}))


if __name__ == '__main__':
    main()
