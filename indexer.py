import shutil
import subprocess
import xml.etree.ElementTree as ET
import zipfile
from pathlib import Path

import requests

PACKAGE_NAMES_TO_INDEX = [
    'Microsoft.UI.Xaml',
    'Microsoft.WindowsAppSDK',
]

# WINMDIDL_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.22621.0\x64\winmdidl.exe'
WINMDIDL_PATH = R'winmdidl.exe'


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


def index_nuget_package_version(url: str, dir: Path):
    print(f'  Downloading {url}...')

    assert url.startswith('https://www.nuget.org/packages/'), url

    download_url = ('https://www.nuget.org/api/v2/package/' +
                    url.removeprefix('https://www.nuget.org/packages/'))

    zip_path = download_file(download_url, dir)

    print(f'  Unzipping to {dir}...')

    extensions = ('.c', '.cpp', '.h', '.idl', '.winmd')
    with zipfile.ZipFile(zip_path, 'r') as zip_file:
        for name in zip_file.namelist():
            if name.endswith(extensions):
                zip_file.extract(name, dir)

    zip_path.unlink()

    print(f'  Running winmdidl...')

    for path in dir.glob('**/*.winmd'):
        outdir = str(path) + '_winmdidl'
        cmd = [WINMDIDL_PATH, path, f'/outdir:{outdir}']
        subprocess.check_call(cmd)
        path.unlink()

    # Make sure the folder is not empty, otherwise it won't be committed.
    if not any(dir.iterdir()):
        (dir / '.empty').touch()


def index_nuget_package(package_name: str):
    packages = get_nuget_package_versions(package_name)

    prefix = 'https://www.nuget.org/packages/'
    assert all(x.startswith(prefix) for x in packages), packages

    paths = [Path(x.removeprefix(prefix)) for x in packages]

    for path, package in zip(paths, packages):
        if path.exists():
            continue

        print(f'Indexing {package}...')

        path.mkdir(parents=True, exist_ok=True)
        index_nuget_package_version(package, path)


def main():
    for package_name in PACKAGE_NAMES_TO_INDEX:
        index_nuget_package(package_name)


if __name__ == '__main__':
    main()
