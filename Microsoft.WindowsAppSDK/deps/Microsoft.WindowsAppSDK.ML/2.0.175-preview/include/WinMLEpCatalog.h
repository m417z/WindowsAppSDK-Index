// Copyright (C) Microsoft Corporation. All rights reserved.
#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <Windows.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WinMLEpCatalog* WinMLEpCatalogHandle;
typedef struct WinMLEp* WinMLEpHandle;

typedef enum WinMLEpReadyState
{
    WinMLEpReadyState_Ready = 0,
    WinMLEpReadyState_NotReady = 1,
    WinMLEpReadyState_NotPresent = 2
} WinMLEpReadyState;

typedef enum WinMLEpCertification
{
    WinMLEpCertification_Unknown = 0,
    WinMLEpCertification_Certified = 1,
    WinMLEpCertification_Uncertified = 2
} WinMLEpCertification;

typedef struct WinMLEpInfo
{
    const char* name;
    const char* version;
    const char* packageFamilyName;
    WinMLEpReadyState readyState;
    WinMLEpCertification certification;
} WinMLEpInfo;

typedef struct WinMLEpReadyResult
{
    HRESULT hr;
    const char* libraryPath;
    const char* packageRootPath;
    const char* errorMessage;
} WinMLEpReadyResult;

typedef struct WinMLAsyncBlock WinMLAsyncBlock;

typedef void (CALLBACK* WinMLAsyncCompletionCallback)(
    _Inout_ WinMLAsyncBlock* async
);

typedef void (CALLBACK* WinMLAsyncProgressCallback)(
    _Inout_ WinMLAsyncBlock* async,
    double progress
);

typedef struct WinMLAsyncBlock
{
    void* context;
    WinMLAsyncCompletionCallback callback;
    WinMLAsyncProgressCallback progress;
} WinMLAsyncBlock;

typedef bool (CALLBACK* WinMLEpEnumCallback)(
    _In_ WinMLEpHandle ep,
    _In_ const WinMLEpInfo* info,
    _In_opt_ void* context
);

STDAPI WinMLEpCatalogCreate(
    _Out_ WinMLEpCatalogHandle* catalog
);

STDAPI_(void) WinMLEpCatalogRelease(
    _In_opt_ WinMLEpCatalogHandle catalog
);

STDAPI WinMLEpCatalogEnumProviders(
    _In_ WinMLEpCatalogHandle catalog,
    _In_ WinMLEpEnumCallback callback,
    _In_opt_ void* context
);

STDAPI WinMLEpCatalogFindProvider(
    _In_ WinMLEpCatalogHandle catalog,
    _In_z_ const char* providerName,
    _In_opt_z_ const char* packageFamilyName,
    _Out_ WinMLEpHandle* ep
);

STDAPI WinMLEpGetLibraryPathSize(
    _In_ WinMLEpHandle ep,
    _Out_ size_t* size
);

STDAPI WinMLEpGetLibraryPath(
    _In_ WinMLEpHandle ep,
    size_t bufferSize,
    _Out_writes_to_(bufferSize, *bufferUsed) char* buffer,
    _Out_opt_ size_t* bufferUsed
);

STDAPI WinMLEpGetPackageRootPathSize(
    _In_ WinMLEpHandle ep,
    _Out_ size_t* size
);

STDAPI WinMLEpGetPackageRootPath(
    _In_ WinMLEpHandle ep,
    size_t bufferSize,
    _Out_writes_to_(bufferSize, *bufferUsed) char* buffer,
    _Out_opt_ size_t* bufferUsed
);

STDAPI WinMLEpEnsureReady(
    _In_ WinMLEpHandle ep,
    _Out_ WinMLEpReadyResult* result
);

STDAPI WinMLEpEnsureReadyAsync(
    _In_ WinMLEpHandle ep,
    _Inout_ WinMLAsyncBlock* async
);

STDAPI WinMLEpEnsureReadyResult(
    _In_ WinMLAsyncBlock* async,
    _Out_ WinMLEpReadyResult* result
);

STDAPI WinMLAsyncGetStatus(
    _In_ WinMLAsyncBlock* async,
    bool wait
);

STDAPI WinMLAsyncCancel(
    _Inout_ WinMLAsyncBlock* async
);

STDAPI_(void) WinMLAsyncClose(
    _In_opt_ WinMLAsyncBlock* async
);

#ifdef __cplusplus
}
#endif
