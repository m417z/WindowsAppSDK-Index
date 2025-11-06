#pragma once

#if DWRITE_CORE

DWRITE_BEGIN_INTERFACE(IDWriteAsyncResult1, "C50F19A9-B4EC-47DB-9A66-C308C1E0045F") : IDWriteAsyncResult
{
    /// <summary>
    /// Blocks until the asynchronous operation completes, the specified timeout interval
    /// elapses, or Cancel is called, whichever comes first.
    /// </summary>
    /// <param name="timeoutMilliseconds">Maximum number of milliseconds to wait.</param>
    /// <returns>
    /// Returns S_OK if the operation completed successfully, DWRITE_E_DOWNLOADCANCELLED if
    /// Cancel was called, or a standard HRESULT error code of the operation failed. This
    /// should be the same value as returned by IDWriteAsyncResult::GetResult.
    /// </returns>
    /// <remarks>
    /// If this interface is implemented, DirectWrite calls this method instead of waiting
    /// on the event handled returned by IDWriteAsyncResult::GetWaitHandle.
    /// </remarks>
    STDMETHOD(WaitForCompletion)(UINT32 timeoutMilliseconds) PURE;

    /// <summary>
    /// Cancels the pending async operation.
    /// </summary>
    STDMETHOD_(void, Cancel)() PURE;
};

/// <summary>
/// Represents the status of a font download operation.
/// </summary>
enum DWRITE_DOWNLOAD_STATUS : UINT32
{
    /// <summary>
    /// The font download is in progress.
    /// </summary>
    DWRITE_DOWNLOAD_STATUS_PENDING,

    /// <summary>
    /// The font download completed successfully.
    /// </summary>
    DWRITE_DOWNLOAD_STATUS_COMPLETED,

    /// <summary>
    /// The font download failed.
    /// </summary>
    DWRITE_DOWNLOAD_STATUS_FAILED
};

/// <summary>
/// Represents a font file download operation. This object encapsulates all of the
/// font download requests for a specific file and provides methods for processing
/// those download requests.
/// </summary>
DWRITE_BEGIN_INTERFACE(IDWriteFileDownload, "FAC87BFA-B85A-4FEA-9FD5-D060962C297C") : IUnknown
{
    /// <summary>
    /// Gets the current status of the font file download operation. For a newly-created
    /// object, this is always DWRITE_DOWNLOAD_STATUS_PENDING.
    /// </summary>
    STDMETHOD_(DWRITE_DOWNLOAD_STATUS, GetStatus)() PURE;

    /// <summary>
    /// Gets the result of the font file download.
    /// </summary>
    /// <returns>Returns E_PENDING if the status is DWRITE_DOWNLOAD_STATUS_PENDING,
    /// S_OK if the status is DWRITE_DOWNLOAD_STATUS_COMPLETED, or an error code if
    /// the status is DWRITE_DOWNLOAD_STATUS_FAILED.</returns>
    STDMETHOD(GetDownloadResult)() PURE;

    /// <summary>
    /// Gets the remote font file stream for this file.
    /// </summary>
    /// <param name="fileStream">Receives a pointer to the font file stream object.</param>
    /// <returns>Returns a standard HRESULT error code.</returns>
    STDMETHOD(GetStream)(_COM_Outptr_ IDWriteRemoteFontFileStream** fileStream) PURE;

    /// <summary>
    /// Begins or continues a download operation. This function processes as much of the
    /// font file as possible without blocking.
    /// </summary>
    /// <param name="asyncResult">If the status on return is DWRITE_DOWNLOAD_STATUS_PENDING,
    /// receives a pointer to an async result object created by the loader's BeginDownload
    /// method. Otherwise, receives NULL.</param>
    /// <returns>Returns a standard HRESULT error code if the stauts on return is
    /// DWRITE_DOWNLOAD_STATUS_FAILED. Otherwise, returns S_OK.</returns>
    /// <remarks>If a non-null value is returned in asyncResult output parameter, the caller
    /// should wait for the async result to complete and then call BeginDownload again.</remarks>
    STDMETHOD(BeginDownload)(_COM_Outptr_result_maybenull_ IDWriteAsyncResult** asyncResult) PURE;
};

/// <summary>
/// Represents a list of font file download operations.
/// </summary>
DWRITE_BEGIN_INTERFACE(IDWriteFileDownloadList, "8AB33F0B-6724-47C6-A481-93B33AED6478") : IUnknown
{
    /// <summary>
    /// Gets the number of items in the list.
    /// </summary>
    STDMETHOD_(UINT32, GetFileCount)() PURE;

    /// <summary>
    /// Gets the font file download object with the specified index.
    /// </summary>
    /// <param name="index">Zero-based index of the object.</param>
    /// <param name="fileDownload">Receives a pointer to the font file download object.</param>
    /// <returns>Returns a standard HRESULT error code.</returns>
    STDMETHOD(GetFileDownload)(UINT32 index, _COM_Outptr_ IDWriteFileDownload** fileDownload) PURE;
};

DWRITE_BEGIN_INTERFACE(IDWriteFontDownloadQueue1, "96E1C125-3AB4-4728-AABA-E3C919B7F0D0") : IDWriteFontDownloadQueue
{
    /// <summary>
    /// Transfers the contents of the font download queue to a newly-created object. The returned
    /// object exposes a list of IDWriteFileDownload objects, each of which encapsulates the
    /// download requests for a given font file.
    /// </summary>
    /// <param name="downloadList">Receives a pointer to the newly-created object.</param>
    /// <returns>Returns a standard HRESULT error code.</returns>
    /// <remarks>This method provides an alternative to calling IDWriteFontDownloadQueue::BeginDownload.
    /// The client can call this method and then process the download requests for each file itself.</remarks>
    STDMETHOD(CreateDownloadListAndClearQueue)(_COM_Outptr_ IDWriteFileDownloadList** downloadList) PURE;

    /// <summary>
    /// Invokes the DownloadCompleted method of each registered IDWriteFontDownloadListener object.
    /// </summary>
    /// <param name="clientContext">Optional context object.</param>
    /// <param name="downloadResult">Result of the download operation.</param>
    /// <remarks>Downloads initiated by IDWriteFontDownloadQueue::BeginDownload automatically call
    /// this method. However, if a client calls CreateDownloadListAndClearQueue and processes the
    /// download requests itself, the client may call this method to notify download listeners upon
    /// completion.
    /// </remarks>
    STDMETHOD_(void, InvokeDownloadCompleted)(_In_opt_ IUnknown* context, HRESULT downloadResult) PURE;
};

DWRITE_BEGIN_INTERFACE(IDWriteFontSet5, "a98f357c-5e4d-48f7-8287-085a74bb836c") : IDWriteFontSet4
{
    /// <summary>
    /// Gets a binary representation of the font set that can cached by the client.
    /// </summary>
    /// <param name="cachedData">Receives a pointer to the font set data.</param>
    /// <param name="cachedDataSize">Receives the size in bytes of the font set data.</param>
    /// <param name="cacheReference">Receives a pointer to an object that manages the lifetime of the font set data.</param>
    /// <remarks>
    /// The font set data can be cached by the client and subsequently passed to
    /// IDWriteFactory9::CreateFontSetFromCachedData or IDWriteFactory9::CreateFontSetBuilderWithCache.
    /// </remarks>
    STDMETHOD_(void, GetCachedData)(
        _Outptr_result_bytebuffer_(*cachedDataSize) void const** cachedData,
        _Out_ UINT32* cachedDataSize,
        _COM_Outptr_ IUnknown** cacheReference
    ) PURE;
};

/// <summary>
/// Represents an object that can be used to create a new font set taking advantage of cached
/// data from an old font set.
/// </summary>
DWRITE_BEGIN_INTERFACE(IDWriteFontSetBuilderWithCache, "d2719864-547b-449d-a3e9-e47c4e1e792f") : IUnknown
{
    /// <summary>
    /// Adds a font file to the new font set. If the font file was present in the old font set
    /// then its properties are copied from there; otherwise its properties are recomputed by
    /// parsing the font.
    /// </summary>
    STDMETHOD(AddFontFile)(IDWriteFontFile* fontFileReference) PURE;

    /// <summary>
    /// Creates a new font set containig all of the fonts added using the AddFontFile method.
    /// </summary>
    STDMETHOD(CreateFontSet)(_COM_Outptr_ IDWriteFontSet5** fontSet) PURE;
};

DWRITE_BEGIN_INTERFACE(IDWriteFactory9, "6b718546-8fb4-4889-b1f4-4da1a43bbdd9") : IDWriteFactory8
{
    /// <summary>
    /// Creates an object that can be used to create a new font set taking advantage of cached data
    /// from an old font set.
    /// </summary>
    /// <param name="cachedData">Optional pointer to cached data returned by IDWriteFontSet5::GetCacheData.</param>
    /// <param name="cachedDataSize">Size in bytes of the font set data.</param>
    /// <param name="cacheReference">Object that manages the lifetime of the cached data.</param>
    /// <param name="builder">Receives a pointer to the newly created object.</param>
    /// <returns>Standard HRESULT error code.</returns>
    /// <remarks>If no cached data is specified or the data is invalid or the wrong versoin, the
    /// function succeeds but the resulting builder object does not use any cached data.</remarks>
    STDMETHOD(CreateFontSetBuilderWithCache)(
        _In_reads_bytes_opt_(cachedDataSize) void const* cachedData,
        UINT32 cachedDataSize,
        IUnknown* cacheReference,
        _COM_Outptr_ IDWriteFontSetBuilderWithCache** builder
        ) PURE;

    /// <summary>
    /// Creates a new font set object from the data returned by IDWriteFontSet5::GetCachedData.
    /// </summary>
    /// <param name="cachedData">Pointer to cached data returned by IDWriteFontSet5::GetCacheData.</param>
    /// <param name="cachedDataSize">Size in bytes of the font set data.</param>
    /// <param name="cacheReference">Object that manages the lifetime of the cached data.</param>
    /// <param name="fontSet">Receives a pointer to the newly created font set.</param>
    /// <returns>Standard HRESULT error code or DWRITE_E_CACHEFORMAT if the cached data is invalid
    /// or is the wrong version.</returns>
    /// <remarks>The binary layout of the cached data may change between versions. If the cached data
    /// was created by an older version o the API, the method fails with DWRITE_E_CACHEFORMAT.</remarks>
    STDMETHOD(CreateFontSetFromCachedData)(
        _In_reads_bytes_(cachedDataSize) void const* cachedData,
        UINT32 cachedDataSize,
        IUnknown* cacheReference,
        _COM_Outptr_ IDWriteFontSet5** fontSet
    ) PURE;
};

#endif
