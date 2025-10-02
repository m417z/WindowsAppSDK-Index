from pathlib import Path

PACKAGES_TO_INDEX = [{
    'name': 'Microsoft.UI.Xaml',
}, {
    'name': 'Microsoft.WindowsAppSDK',
}]

# Set to None to index all versions.
NUM_OF_PACKAGES_TO_INDEX_PREVIEW = None
NUM_OF_PACKAGES_TO_INDEX_STABLE = None

REMOVE_OLD_PACKAGES = False

# Running cppwinrt on all versions makes the repository much larger (from 200MB
# to 8.5GB). It can be run locally if needed.
CPPWINRT_RUN = False

# .winmd files of deps are necessary for cppwinrt.
WINMD_FILES_KEEP = False

# WINMDIDL_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\winmdidl.exe'
WINMDIDL_PATH = 'winmdidl.exe'

# CPPWINRT_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\cppwinrt.exe'
CPPWINRT_PATH = 'cppwinrt.exe'

WINMETADATA_PATH = str(Path(__file__).parent / 'WinMetadata/10.0.26100.2605')
