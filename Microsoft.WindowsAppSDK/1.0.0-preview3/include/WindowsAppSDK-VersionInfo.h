// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#ifndef __WINDOWSAPPSDK_VERSIONINFO_H__
#define __WINDOWSAPPSDK_VERSIONINFO_H__

// Release information
#define WINDOWSAPPSDK_RELEASE_MAJOR                1
#define WINDOWSAPPSDK_RELEASE_MINOR                0
#define WINDOWSAPPSDK_RELEASE_PATCH                0
#define WINDOWSAPPSDK_RELEASE_MAJORMINOR           0x00010000

#define WINDOWSAPPSDK_RELEASE_CHANNEL              "preview"
#define WINDOWSAPPSDK_RELEASE_CHANNEL_W            L"preview"

#define WINDOWSAPPSDK_RELEASE_VERSION_TAG          "preview3"
#define WINDOWSAPPSDK_RELEASE_VERSION_TAG_W        L"preview3"

#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG     "p3"
#define WINDOWSAPPSDK_RELEASE_VERSION_SHORTTAG_W   L"p3"

// Runtime information
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER        "CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHER_W      L"CN=Microsoft Corporation, O=Microsoft Corporation, L=Redmond, S=Washington, C=US"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID      "8wekyb3d8bbwe"
#define WINDOWSAPPSDK_RUNTIME_IDENTITY_PUBLISHERID_W    L"8wekyb3d8bbwe"

#define WINDOWSAPPSDK_RUNTIME_VERSION_MAJOR             0
#define WINDOWSAPPSDK_RUNTIME_VERSION_MINOR             297
#define WINDOWSAPPSDK_RUNTIME_VERSION_BUILD             2018
#define WINDOWSAPPSDK_RUNTIME_VERSION_REVISION          0
#define WINDOWSAPPSDK_RUNTIME_VERSION_UINT64            0x0000012907E20000
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING     "0.297.2018.0"
#define WINDOWSAPPSDK_RUNTIME_VERSION_DOTQUADSTRING_W   L"0.297.2018.0"

#if defined(__cplusplus)
namespace Microsoft::WindowsAppSDK
{
    namespace Release
    {
        constexpr uint16_t Major = 1;
        constexpr uint16_t Minor = 0;
        constexpr uint16_t Patch = 0;
        constexpr uint32_t MajorMinor = 0x00010000;

        constexpr PCWSTR Channel = L"preview";

        constexpr PCWSTR VersionTag = L"preview3";

        constexpr PCWSTR VersionShortTag = L"p3";
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
            constexpr uint16_t Major = 0;
            constexpr uint16_t Minor = 297;
            constexpr uint16_t Build = 2018;
            constexpr uint16_t Revision = 0;
            constexpr uint64_t UInt64 = 0x0000012907E20000;
            constexpr PCWSTR DotQuadString = L"0.297.2018.0";
        }
    }
}
#endif // defined(__cplusplus)

#endif // __WINDOWSAPPSDK_VERSIONINFO_H__
