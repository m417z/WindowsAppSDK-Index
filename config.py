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

# .winmd files of deps are necessary for cppwinrt and winmdidl.
WINMD_FILES_KEEP = True

# WINMDIDL_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\winmdidl.exe'
WINMDIDL_PATH = 'winmdidl.exe'

# CPPWINRT_PATH = R'C:\Program Files (x86)\Windows Kits\10\bin\10.0.26100.0\x64\cppwinrt.exe'
CPPWINRT_PATH = 'cppwinrt.exe'

WINMETADATA_PATH = str(Path(__file__).parent / 'WinMetadata/10.0.26100.2605')

# Dependency version mappings for missing packages.
DEPENDENCY_VERSION_OVERRIDES = [
    {
        'id': 'Microsoft.WindowsAppSDK.Base',
        'old_versions': ['1.8.250501001-experimental'],
        'new_version': '1.8.250509001-experimental',
    },
    {
        'id': 'Microsoft.WindowsAppSDK.Foundation',
        'old_versions': [
            '1.8.0-20250429.5.nightly.internal',
            '1.8.250504002-experimental',
        ],
        'new_version': '1.8.250507001-experimental',
    },
    {
        'id': 'Microsoft.WindowsAppSDK.InteractiveExperiences',
        'old_versions': ['1.8.250506001-experimental'],
        'new_version': '1.8.250509002-experimental',
    },
]
