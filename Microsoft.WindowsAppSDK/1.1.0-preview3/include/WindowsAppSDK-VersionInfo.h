// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifndef __WINDOWSAPPSDK_VERSIONINFO_H__
#define __WINDOWSAPPSDK_VERSIONINFO_H__

// Release information
#define WINDOWSAPPSDK_RELEASE_MAJOR                         1
#define WINDOWSAPPSDK_RELEASE_MINOR                         1
#define WINDOWSAPPSDK_RELEASE_PATCH                         0
#define WINDOWSAPPSDK_RELEASE_MAJORMINOR                    0x00010001

#define WINDOWSAPPSDK_RELEASE_CHANNEL                       "preview"
#define WINDOWSAPPSDK_RELEASE_CHANNEL_W                     L"preview"

#define WINDOWSAPPSDK_RELEASE_VERSION_TAG                   "preview3"
#define WINDOWSAPPSDK_RELEASE_VERSION_TAG_W                 L"preview3"

#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG              "p3"
#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG_W            L"p3"

#define WINDOWSAPPSDK_RELEASE_FORMATTED_VERSION_TAG         "-preview3"
#define WINDOWSAPPSDK_RELEASE_FORMATTED_VERSION_TAG_W       L"-preview3"

#define WINDOWSAPPSDK_RELEASE_FORMATTED_VERSION_SHORTTAG    "-p3"
#define WINDOWSAPPSDK_RELEASE_FORMATTED_VERSION_SHORTTAG_W  L"-p3"

// Runtime information
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER        "CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER_W      L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID      "8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID_W    L"8wekyb3d8bbwe"

#define WINDOWSAPPSDK_RUNTIME_VERSION_MAJOR             1000
#define WINDOWSAPPSDK_RUNTIME_VERSION_MINOR             485
#define WINDOWSAPPSDK_RUNTIME_VERSION_BUILD             2229
#define WINDOWSAPPSDK_RUNTIME_VERSION_REVISION          0
#define WINDOWSAPPSDK_RUNTIME_VERSION_UINT64            0x03E801E508B50000
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING     "1000.485.2229.0"
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING_W   L"1000.485.2229.0"

#define WINDOWSAPPSDK_RUNTIME_PACKAGE_FRAMEWORK_PACKAGEFAMILYNAME   "Microsoft.WindowsAppRuntime.1.1-preview3_8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_PACKAGE_FRAMEWORK_PACKAGEFAMILYNAME_W L"Microsoft.WindowsAppRuntime.1.1-preview3_8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_PACKAGE_MAIN_PACKAGEFAMILYNAME        "MicrosoftCorporationII.WinAppRuntime.Main.1.1-p3_8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_PACKAGE_MAIN_PACKAGEFAMILYNAME_W      L"MicrosoftCorporationII.WinAppRuntime.Main.1.1-p3_8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_PACKAGE_SINGLETON_PACKAGEFAMILYNAME   "Microsoft.WindowsAppRuntime.Singleton-preview3_8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_PACKAGE_SINGLETON_PACKAGEFAMILYNAME_W L"Microsoft.WindowsAppRuntime.Singleton-preview3_8wekyb3d8bbwe"

#ifdef RC_INVOKED
// Only first 31 characters are significant for ResourceCompiler macro names (anything beyond that's silently ignored)
// These definitions provide RC-compatible equivalents to the macros above. Here's the translation key:
//   * WAS == WINDOWSAPPSDK
//   * WASR == WINDOWSAPPSDK_RUNTIME
//   * FMT == FORMATTED
//   * STAG == SHORTTAG
//   * PKG == PACKAGE
//   * FAMILY == PACKAGEFAMILYNAME

// Release information
#define WAS_RELEASE_MAJOR               1
#define WAS_RELEASE_MINOR               1
#define WAS_RELEASE_PATCH               0
#define WAS_RELEASE_MAJORMINOR          0x00010001

#define WAS_RELEASE_CHANNEL             "preview"
#define WAS_RELEASE_CHANNEL_W           L"preview"

#define WAS_RELEASE_VERSION_TAG         "preview3"
#define WAS_RELEASE_VERSION_TAG_W       L"preview3"

#define WAS_RELEASE_VERSION_STAG        "p3"
#define WAS_RELEASE_VERSION_STAG_W      L"p3"

#define WAS_RELEASE_FMT_VERSION_TAG     "-preview3"
#define WAS_RELEASE_FMT_VERSION_TAG_W   L"-preview3"

#define WAS_RELEASE_FMT_VERSION_STAG    "-p3"
#define WAS_RELEASE_FMT_VERSION_STAG_W  L"-p3"

// Runtime information
#define WASR_IDENTITY_PUBLISHER         "CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WASR_IDENTITY_PUBLISHER_W       L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WASR_IDENTITY_PUBLISHERID       "8wekyb3d8bbwe"
#define WASR_IDENTITY_PUBLISHERID_W     L"8wekyb3d8bbwe"

#define WASR_VERSION_MAJOR              1000
#define WASR_VERSION_MINOR              485
#define WASR_VERSION_BUILD              2229
#define WASR_VERSION_REVISION           0
#define WASR_VERSION_UINT64             0x03E801E508B50000
#define WASR_VERSION_DOTQUADSTRING      "1000.485.2229.0"
#define WASR_VERSION_DOTQUADSTRING_W    L"1000.485.2229.0"

#define WASR_PKG_FRAMEWORK_FAMILY       "Microsoft.WindowsAppRuntime.1.1-preview3_8wekyb3d8bbwe"
#define WASR_PKG_FRAMEWORK_FAMILY_W     L"Microsoft.WindowsAppRuntime.1.1-preview3_8wekyb3d8bbwe"
#define WASR_PKG_MAIN_FAMILY            "MicrosoftCorporationII.WinAppRuntime.Main.1.1-p3_8wekyb3d8bbwe"
#define WASR_PKG_MAIN_FAMILY_W          L"MicrosoftCorporationII.WinAppRuntime.Main.1.1-p3_8wekyb3d8bbwe"
#define WASR_PKG_SINGLETON_FAMILY       "Microsoft.WindowsAppRuntime.Singleton-preview3_8wekyb3d8bbwe"
#define WASR_PKG_SINGLETON_FAMILY_W     L"Microsoft.WindowsAppRuntime.Singleton-preview3_8wekyb3d8bbwe"
#endif

#ifdef __cplusplus
namespace Microsoft::WindowsAppSDK
{
    // Compile-time constants for the Windows App SDK release
    namespace Release
    {
        constexpr uint16_t Major = 1;
        constexpr uint16_t Minor = 1;
        constexpr uint16_t Patch = 0;
        constexpr uint32_t MajorMinor = 0x00010001;

        constexpr PCWSTR Channel = L"preview";

        constexpr PCWSTR VersionTag = L"preview3";
        constexpr PCWSTR VersionShortTag = L"p3";

        constexpr PCWSTR FormattedVersionTag = L"-preview3";
        constexpr PCWSTR FormattedVersionShortTag = L"-p3";
    }

    namespace Runtime
    {
        namespace Identity
        {
            constexpr PCWSTR Publisher = L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US";
            constexpr PCWSTR PublisherId = L"8wekyb3d8bbwe";
        }

        namespace Version
        {
            constexpr uint16_t Major = 1000;
            constexpr uint16_t Minor = 485;
            constexpr uint16_t Build = 2229;
            constexpr uint16_t Revision = 0;
            constexpr uint64_t UInt64 = 0x03E801E508B50000;
            constexpr PCWSTR DotQuadString = L"1000.485.2229.0";
        }

        namespace Packages
        {
            namespace Framework
            {
                constexpr PCWSTR PackageFamilyName = L"Microsoft.WindowsAppRuntime.1.1-preview3_8wekyb3d8bbwe";
            }
            namespace Main
            {
                constexpr PCWSTR PackageFamilyName = L"MicrosoftCorporationII.WinAppRuntime.Main.1.1-p3_8wekyb3d8bbwe";
            }
            namespace Singleton
            {
                constexpr PCWSTR PackageFamilyName = L"Microsoft.WindowsAppRuntime.Singleton-preview3_8wekyb3d8bbwe";
            }
        }
    }

    // Run-time query'able version information for the Windows App SDK release
    struct VersionInfo
    {
        struct Release
        {
            uint16_t Major;
            uint16_t Minor;
            uint16_t Patch;
            uint32_t MajorMinor;

            PCWSTR Channel;

            PCWSTR VersionTag;
            PCWSTR VersionShortTag;
        } Release;

        struct Runtime
        {
            struct Identity
            {
                PCWSTR Publisher;
                PCWSTR PublisherId;
            } Identity;

            struct Version
            {
                uint16_t Major;
                uint16_t Minor;
                uint16_t Build;
                uint16_t Revision;
                uint64_t UInt64;
                PCWSTR DotQuadString;
            } Version;
        } Runtime;
    };
}
#endif // __cplusplus

#endif // _WINDOWSAPPSDK_VERSIONINFO_H__
