

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.xx.xxxx */
/* at a redacted point in time
 */
/* Compiler settings for ../../edge_embedded_browser/client/win/current/webview2experimental.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.xx.xxxx 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __webview2experimental_h__
#define __webview2experimental_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ICoreWebView2Experimental20_FWD_DEFINED__
#define __ICoreWebView2Experimental20_FWD_DEFINED__
typedef interface ICoreWebView2Experimental20 ICoreWebView2Experimental20;

#endif 	/* __ICoreWebView2Experimental20_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental22_FWD_DEFINED__
#define __ICoreWebView2Experimental22_FWD_DEFINED__
typedef interface ICoreWebView2Experimental22 ICoreWebView2Experimental22;

#endif 	/* __ICoreWebView2Experimental22_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationReceivedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalNotificationReceivedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalNotificationReceivedEventHandler ICoreWebView2ExperimentalNotificationReceivedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalNotificationReceivedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental25_FWD_DEFINED__
#define __ICoreWebView2Experimental25_FWD_DEFINED__
typedef interface ICoreWebView2Experimental25 ICoreWebView2Experimental25;

#endif 	/* __ICoreWebView2Experimental25_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSaveAsUIShowingEventHandler ICoreWebView2ExperimentalSaveAsUIShowingEventHandler;

#endif 	/* __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalShowSaveAsUICompletedHandler ICoreWebView2ExperimentalShowSaveAsUICompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental26_FWD_DEFINED__
#define __ICoreWebView2Experimental26_FWD_DEFINED__
typedef interface ICoreWebView2Experimental26 ICoreWebView2Experimental26;

#endif 	/* __ICoreWebView2Experimental26_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalScreenCaptureStartingEventHandler ICoreWebView2ExperimentalScreenCaptureStartingEventHandler;

#endif 	/* __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2Experimental27_FWD_DEFINED__
#define __ICoreWebView2Experimental27_FWD_DEFINED__
typedef interface ICoreWebView2Experimental27 ICoreWebView2Experimental27;

#endif 	/* __ICoreWebView2Experimental27_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler;

#endif 	/* __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalCompositionController4 ICoreWebView2ExperimentalCompositionController4;

#endif 	/* __ICoreWebView2ExperimentalCompositionController4_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalControllerOptions2_FWD_DEFINED__
#define __ICoreWebView2ExperimentalControllerOptions2_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalControllerOptions2 ICoreWebView2ExperimentalControllerOptions2;

#endif 	/* __ICoreWebView2ExperimentalControllerOptions2_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment3 ICoreWebView2ExperimentalEnvironment3;

#endif 	/* __ICoreWebView2ExperimentalEnvironment3_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalEnvironment12 ICoreWebView2ExperimentalEnvironment12;

#endif 	/* __ICoreWebView2ExperimentalEnvironment12_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame6_FWD_DEFINED__
#define __ICoreWebView2ExperimentalFrame6_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalFrame6 ICoreWebView2ExperimentalFrame6;

#endif 	/* __ICoreWebView2ExperimentalFrame6_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler;

#endif 	/* __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotification_FWD_DEFINED__
#define __ICoreWebView2ExperimentalNotification_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalNotification ICoreWebView2ExperimentalNotification;

#endif 	/* __ICoreWebView2ExperimentalNotification_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationReceivedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalNotificationReceivedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalNotificationReceivedEventArgs ICoreWebView2ExperimentalNotificationReceivedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalNotificationReceivedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__
#define __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalProfile7 ICoreWebView2ExperimentalProfile7;

#endif 	/* __ICoreWebView2ExperimentalProfile7_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler;

#endif 	/* __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSaveAsUIShowingEventArgs ICoreWebView2ExperimentalSaveAsUIShowingEventArgs;

#endif 	/* __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs;

#endif 	/* __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalScreenCaptureStartingEventArgs ICoreWebView2ExperimentalScreenCaptureStartingEventArgs;

#endif 	/* __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTexture_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTexture_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTexture ICoreWebView2ExperimentalTexture;

#endif 	/* __ICoreWebView2ExperimentalTexture_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStream ICoreWebView2ExperimentalTextureStream;

#endif 	/* __ICoreWebView2ExperimentalTextureStream_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler ICoreWebView2ExperimentalTextureStreamStoppedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs;

#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalUpdateRuntimeResult ICoreWebView2ExperimentalUpdateRuntimeResult;

#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_FWD_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__
#define __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__
typedef interface ICoreWebView2ExperimentalWebTexture ICoreWebView2ExperimentalWebTexture;

#endif 	/* __ICoreWebView2ExperimentalWebTexture_FWD_DEFINED__ */


/* header files for imported files */
#include "webview2.h"

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __WebView2Experimental_LIBRARY_DEFINED__
#define __WebView2Experimental_LIBRARY_DEFINED__

/* library WebView2Experimental */
/* [version][uuid] */ 






































typedef /* [v1_enum] */ 
enum COREWEBVIEW2_SAVE_AS_KIND
    {
        COREWEBVIEW2_SAVE_AS_KIND_DEFAULT	= 0,
        COREWEBVIEW2_SAVE_AS_KIND_HTML_ONLY	= ( COREWEBVIEW2_SAVE_AS_KIND_DEFAULT + 1 ) ,
        COREWEBVIEW2_SAVE_AS_KIND_SINGLE_FILE	= ( COREWEBVIEW2_SAVE_AS_KIND_HTML_ONLY + 1 ) ,
        COREWEBVIEW2_SAVE_AS_KIND_COMPLETE	= ( COREWEBVIEW2_SAVE_AS_KIND_SINGLE_FILE + 1 ) 
    } 	COREWEBVIEW2_SAVE_AS_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_SAVE_AS_UI_RESULT
    {
        COREWEBVIEW2_SAVE_AS_UI_RESULT_SUCCESS	= 0,
        COREWEBVIEW2_SAVE_AS_UI_RESULT_INVALID_PATH	= ( COREWEBVIEW2_SAVE_AS_UI_RESULT_SUCCESS + 1 ) ,
        COREWEBVIEW2_SAVE_AS_UI_RESULT_FILE_ALREADY_EXISTS	= ( COREWEBVIEW2_SAVE_AS_UI_RESULT_INVALID_PATH + 1 ) ,
        COREWEBVIEW2_SAVE_AS_UI_RESULT_KIND_NOT_SUPPORTED	= ( COREWEBVIEW2_SAVE_AS_UI_RESULT_FILE_ALREADY_EXISTS + 1 ) ,
        COREWEBVIEW2_SAVE_AS_UI_RESULT_CANCELLED	= ( COREWEBVIEW2_SAVE_AS_UI_RESULT_KIND_NOT_SUPPORTED + 1 ) 
    } 	COREWEBVIEW2_SAVE_AS_UI_RESULT;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_TEXT_DIRECTION_KIND
    {
        COREWEBVIEW2_TEXT_DIRECTION_KIND_DEFAULT	= 0,
        COREWEBVIEW2_TEXT_DIRECTION_KIND_LEFT_TO_RIGHT	= ( COREWEBVIEW2_TEXT_DIRECTION_KIND_DEFAULT + 1 ) ,
        COREWEBVIEW2_TEXT_DIRECTION_KIND_RIGHT_TO_LEFT	= ( COREWEBVIEW2_TEXT_DIRECTION_KIND_LEFT_TO_RIGHT + 1 ) 
    } 	COREWEBVIEW2_TEXT_DIRECTION_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND
    {
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_NO_VIDEO_TRACK_STARTED	= 0,
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_ERROR	= ( COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_NO_VIDEO_TRACK_STARTED + 1 ) ,
        COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_IN_USE	= ( COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND_TEXTURE_ERROR + 1 ) 
    } 	COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND;

typedef /* [v1_enum] */ 
enum COREWEBVIEW2_UPDATE_RUNTIME_STATUS
    {
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED	= 0,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_LATEST_VERSION_INSTALLED + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_UPDATE_ALREADY_RUNNING + 1 ) ,
        COREWEBVIEW2_UPDATE_RUNTIME_STATUS_FAILED	= ( COREWEBVIEW2_UPDATE_RUNTIME_STATUS_BLOCKED_BY_POLICY + 1 ) 
    } 	COREWEBVIEW2_UPDATE_RUNTIME_STATUS;

typedef struct COREWEBVIEW2_MATRIX_4X4
    {
    FLOAT _11;
    FLOAT _12;
    FLOAT _13;
    FLOAT _14;
    FLOAT _21;
    FLOAT _22;
    FLOAT _23;
    FLOAT _24;
    FLOAT _31;
    FLOAT _32;
    FLOAT _33;
    FLOAT _34;
    FLOAT _41;
    FLOAT _42;
    FLOAT _43;
    FLOAT _44;
    } 	COREWEBVIEW2_MATRIX_4X4;


EXTERN_C const IID LIBID_WebView2Experimental;

#ifndef __ICoreWebView2Experimental20_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental20_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental20 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental20 = {0x5a4d0ecf,0x3fe5,0x4456,{0xac,0xe5,0xd3,0x17,0xcc,0xa0,0xef,0xf1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5a4d0ecf-3fe5-4456-ace5-d317cca0eff1")
    ICoreWebView2Experimental20 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CustomDataPartitionId( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CustomDataPartitionId( 
            /* [in] */ LPCWSTR value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental20Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental20 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental20 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental20 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental20, get_CustomDataPartitionId)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomDataPartitionId )( 
            ICoreWebView2Experimental20 * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental20, put_CustomDataPartitionId)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomDataPartitionId )( 
            ICoreWebView2Experimental20 * This,
            /* [in] */ LPCWSTR value);
        
        END_INTERFACE
    } ICoreWebView2Experimental20Vtbl;

    interface ICoreWebView2Experimental20
    {
        CONST_VTBL struct ICoreWebView2Experimental20Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental20_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental20_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental20_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental20_get_CustomDataPartitionId(This,value)	\
    ( (This)->lpVtbl -> get_CustomDataPartitionId(This,value) ) 

#define ICoreWebView2Experimental20_put_CustomDataPartitionId(This,value)	\
    ( (This)->lpVtbl -> put_CustomDataPartitionId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental20_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental22_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental22_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental22 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental22 = {0x6c2fc9ee,0x83f1,0x4f0b,{0x80,0xe3,0xd8,0x2a,0xb9,0x77,0xe6,0x98}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6c2fc9ee-83f1-4f0b-80e3-d82ab977e698")
    ICoreWebView2Experimental22 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_NotificationReceived( 
            /* [in] */ ICoreWebView2ExperimentalNotificationReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_NotificationReceived( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental22Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental22 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental22 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental22 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental22, add_NotificationReceived)
        HRESULT ( STDMETHODCALLTYPE *add_NotificationReceived )( 
            ICoreWebView2Experimental22 * This,
            /* [in] */ ICoreWebView2ExperimentalNotificationReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental22, remove_NotificationReceived)
        HRESULT ( STDMETHODCALLTYPE *remove_NotificationReceived )( 
            ICoreWebView2Experimental22 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2Experimental22Vtbl;

    interface ICoreWebView2Experimental22
    {
        CONST_VTBL struct ICoreWebView2Experimental22Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental22_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental22_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental22_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental22_add_NotificationReceived(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_NotificationReceived(This,eventHandler,token) ) 

#define ICoreWebView2Experimental22_remove_NotificationReceived(This,token)	\
    ( (This)->lpVtbl -> remove_NotificationReceived(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental22_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationReceivedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalNotificationReceivedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalNotificationReceivedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalNotificationReceivedEventHandler = {0x89c5d598,0x8788,0x423b,{0xbe,0x97,0xe6,0xe0,0x1c,0x0f,0x9e,0xe3}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("89c5d598-8788-423b-be97-e6e01c0f9ee3")
    ICoreWebView2ExperimentalNotificationReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalNotificationReceivedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalNotificationReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalNotificationReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalNotificationReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalNotificationReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalNotificationReceivedEventHandler * This,
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalNotificationReceivedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalNotificationReceivedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalNotificationReceivedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalNotificationReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalNotificationReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalNotificationReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalNotificationReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental25_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental25_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental25 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental25 = {0xa87d6f2f,0xfc6b,0x5135,{0x93,0xef,0x52,0xe6,0xe4,0x6a,0x74,0x56}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a87d6f2f-fc6b-5135-93ef-52e6e46a7456")
    ICoreWebView2Experimental25 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ShowSaveAsUI( 
            /* [in] */ ICoreWebView2ExperimentalShowSaveAsUICompletedHandler *handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_SaveAsUIShowing( 
            /* [in] */ ICoreWebView2ExperimentalSaveAsUIShowingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_SaveAsUIShowing( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental25Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental25 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental25 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental25 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental25, ShowSaveAsUI)
        HRESULT ( STDMETHODCALLTYPE *ShowSaveAsUI )( 
            ICoreWebView2Experimental25 * This,
            /* [in] */ ICoreWebView2ExperimentalShowSaveAsUICompletedHandler *handler);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental25, add_SaveAsUIShowing)
        HRESULT ( STDMETHODCALLTYPE *add_SaveAsUIShowing )( 
            ICoreWebView2Experimental25 * This,
            /* [in] */ ICoreWebView2ExperimentalSaveAsUIShowingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental25, remove_SaveAsUIShowing)
        HRESULT ( STDMETHODCALLTYPE *remove_SaveAsUIShowing )( 
            ICoreWebView2Experimental25 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2Experimental25Vtbl;

    interface ICoreWebView2Experimental25
    {
        CONST_VTBL struct ICoreWebView2Experimental25Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental25_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental25_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental25_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental25_ShowSaveAsUI(This,handler)	\
    ( (This)->lpVtbl -> ShowSaveAsUI(This,handler) ) 

#define ICoreWebView2Experimental25_add_SaveAsUIShowing(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_SaveAsUIShowing(This,eventHandler,token) ) 

#define ICoreWebView2Experimental25_remove_SaveAsUIShowing(This,token)	\
    ( (This)->lpVtbl -> remove_SaveAsUIShowing(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental25_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSaveAsUIShowingEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSaveAsUIShowingEventHandler = {0x6baa177e,0x3a2e,0x5ccf,{0x9a,0x13,0xfa,0xd6,0x76,0xcd,0x05,0x22}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6baa177e-3a2e-5ccf-9a13-fad676cd0522")
    ICoreWebView2ExperimentalSaveAsUIShowingEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalSaveAsUIShowingEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSaveAsUIShowingEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventHandler * This,
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalSaveAsUIShowingEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSaveAsUIShowingEventHandlerVtbl;

    interface ICoreWebView2ExperimentalSaveAsUIShowingEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSaveAsUIShowingEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSaveAsUIShowingEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalShowSaveAsUICompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalShowSaveAsUICompletedHandler = {0xe24b07e3,0x8169,0x5c34,{0x99,0x4a,0x7f,0x64,0x78,0x94,0x6a,0x3c}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e24b07e3-8169-5c34-994a-7f6478946a3c")
    ICoreWebView2ExperimentalShowSaveAsUICompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ COREWEBVIEW2_SAVE_AS_UI_RESULT result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalShowSaveAsUICompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalShowSaveAsUICompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalShowSaveAsUICompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalShowSaveAsUICompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalShowSaveAsUICompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalShowSaveAsUICompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ COREWEBVIEW2_SAVE_AS_UI_RESULT result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalShowSaveAsUICompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalShowSaveAsUICompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalShowSaveAsUICompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalShowSaveAsUICompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental26_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental26_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental26 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental26 = {0xb812bcc9,0x7dc8,0x553d,{0x9e,0x0d,0xda,0xc0,0xe4,0xa6,0x65,0x7f}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b812bcc9-7dc8-553d-9e0d-dac0e4a6657f")
    ICoreWebView2Experimental26 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_ScreenCaptureStarting( 
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_ScreenCaptureStarting( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental26Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental26 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental26 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental26 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental26, add_ScreenCaptureStarting)
        HRESULT ( STDMETHODCALLTYPE *add_ScreenCaptureStarting )( 
            ICoreWebView2Experimental26 * This,
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental26, remove_ScreenCaptureStarting)
        HRESULT ( STDMETHODCALLTYPE *remove_ScreenCaptureStarting )( 
            ICoreWebView2Experimental26 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2Experimental26Vtbl;

    interface ICoreWebView2Experimental26
    {
        CONST_VTBL struct ICoreWebView2Experimental26Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental26_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental26_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental26_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental26_add_ScreenCaptureStarting(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_ScreenCaptureStarting(This,eventHandler,token) ) 

#define ICoreWebView2Experimental26_remove_ScreenCaptureStarting(This,token)	\
    ( (This)->lpVtbl -> remove_ScreenCaptureStarting(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental26_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalScreenCaptureStartingEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalScreenCaptureStartingEventHandler = {0xe24ff05a,0x1db5,0x59d9,{0x89,0xf3,0x3c,0x86,0x42,0x68,0xdb,0x4a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e24ff05a-1db5-59d9-89f3-3c864268db4a")
    ICoreWebView2ExperimentalScreenCaptureStartingEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalScreenCaptureStartingEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventHandler * This,
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalScreenCaptureStartingEventHandlerVtbl;

    interface ICoreWebView2ExperimentalScreenCaptureStartingEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalScreenCaptureStartingEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalScreenCaptureStartingEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2Experimental27_INTERFACE_DEFINED__
#define __ICoreWebView2Experimental27_INTERFACE_DEFINED__

/* interface ICoreWebView2Experimental27 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2Experimental27 = {0x16163f44,0xca9a,0x57bf,{0xba,0x68,0xbf,0x53,0x19,0x88,0x58,0x4b}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16163f44-ca9a-57bf-ba68-bf531988584b")
    ICoreWebView2Experimental27 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_SaveFileSecurityCheckStarting( 
            /* [in] */ ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_SaveFileSecurityCheckStarting( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2Experimental27Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2Experimental27 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2Experimental27 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2Experimental27 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental27, add_SaveFileSecurityCheckStarting)
        HRESULT ( STDMETHODCALLTYPE *add_SaveFileSecurityCheckStarting )( 
            ICoreWebView2Experimental27 * This,
            /* [in] */ ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2Experimental27, remove_SaveFileSecurityCheckStarting)
        HRESULT ( STDMETHODCALLTYPE *remove_SaveFileSecurityCheckStarting )( 
            ICoreWebView2Experimental27 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2Experimental27Vtbl;

    interface ICoreWebView2Experimental27
    {
        CONST_VTBL struct ICoreWebView2Experimental27Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2Experimental27_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2Experimental27_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2Experimental27_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2Experimental27_add_SaveFileSecurityCheckStarting(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_SaveFileSecurityCheckStarting(This,eventHandler,token) ) 

#define ICoreWebView2Experimental27_remove_SaveFileSecurityCheckStarting(This,token)	\
    ( (This)->lpVtbl -> remove_SaveFileSecurityCheckStarting(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2Experimental27_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler = {0x7899576c,0x19e3,0x57c8,{0xb7,0xd1,0x55,0x80,0x82,0x92,0xde,0x57}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7899576c-19e3-57c8-b7d1-55808292de57")
    ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler * This,
            /* [in] */ ICoreWebView2 *sender,
            /* [in] */ ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandlerVtbl;

    interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalCompositionController4 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalCompositionController4 = {0xe6041d7f,0x18ac,0x4654,{0xa0,0x4e,0x8b,0x3f,0x81,0x25,0x1c,0x33}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e6041d7f-18ac-4654-a04e-8b3f81251c33")
    ICoreWebView2ExperimentalCompositionController4 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AutomationProvider( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateCoreWebView2PointerInfoFromPointerId( 
            /* [in] */ UINT32 PointerId,
            /* [in] */ HWND ParentWindow,
            /* [in] */ COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalCompositionController4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalCompositionController4 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, get_AutomationProvider)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalCompositionController4, CreateCoreWebView2PointerInfoFromPointerId)
        HRESULT ( STDMETHODCALLTYPE *CreateCoreWebView2PointerInfoFromPointerId )( 
            ICoreWebView2ExperimentalCompositionController4 * This,
            /* [in] */ UINT32 PointerId,
            /* [in] */ HWND ParentWindow,
            /* [in] */ COREWEBVIEW2_MATRIX_4X4 transform,
            /* [retval][out] */ ICoreWebView2PointerInfo **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalCompositionController4Vtbl;

    interface ICoreWebView2ExperimentalCompositionController4
    {
        CONST_VTBL struct ICoreWebView2ExperimentalCompositionController4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalCompositionController4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalCompositionController4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalCompositionController4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalCompositionController4_get_AutomationProvider(This,value)	\
    ( (This)->lpVtbl -> get_AutomationProvider(This,value) ) 

#define ICoreWebView2ExperimentalCompositionController4_CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,value)	\
    ( (This)->lpVtbl -> CreateCoreWebView2PointerInfoFromPointerId(This,PointerId,ParentWindow,transform,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalCompositionController4_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalControllerOptions2_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalControllerOptions2_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalControllerOptions2 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalControllerOptions2 = {0x04c3310b,0x06c0,0x4861,{0xa7,0xaf,0x5c,0x7e,0x78,0xe0,0x6f,0x88}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04c3310b-06c0-4861-a7af-5c7e78e06f88")
    ICoreWebView2ExperimentalControllerOptions2 : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowHostInputProcessing( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowHostInputProcessing( 
            /* [in] */ BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalControllerOptions2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalControllerOptions2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalControllerOptions2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalControllerOptions2 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalControllerOptions2, get_AllowHostInputProcessing)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowHostInputProcessing )( 
            ICoreWebView2ExperimentalControllerOptions2 * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalControllerOptions2, put_AllowHostInputProcessing)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowHostInputProcessing )( 
            ICoreWebView2ExperimentalControllerOptions2 * This,
            /* [in] */ BOOL value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalControllerOptions2Vtbl;

    interface ICoreWebView2ExperimentalControllerOptions2
    {
        CONST_VTBL struct ICoreWebView2ExperimentalControllerOptions2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalControllerOptions2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalControllerOptions2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalControllerOptions2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalControllerOptions2_get_AllowHostInputProcessing(This,value)	\
    ( (This)->lpVtbl -> get_AllowHostInputProcessing(This,value) ) 

#define ICoreWebView2ExperimentalControllerOptions2_put_AllowHostInputProcessing(This,value)	\
    ( (This)->lpVtbl -> put_AllowHostInputProcessing(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalControllerOptions2_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment3 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment3 = {0x9a2be885,0x7f0b,0x4b26,{0xb6,0xdd,0xc9,0x69,0xba,0xa0,0x0b,0xf1}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9a2be885-7f0b-4b26-b6dd-c969baa00bf1")
    ICoreWebView2ExperimentalEnvironment3 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateRuntime( 
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment3 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment3, UpdateRuntime)
        HRESULT ( STDMETHODCALLTYPE *UpdateRuntime )( 
            ICoreWebView2ExperimentalEnvironment3 * This,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment3Vtbl;

    interface ICoreWebView2ExperimentalEnvironment3
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment3_UpdateRuntime(This,handler)	\
    ( (This)->lpVtbl -> UpdateRuntime(This,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment3_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler = {0xf1d2d722,0x3721,0x499c,{0x87,0xf5,0x4c,0x40,0x52,0x60,0x69,0x7a}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f1d2d722-3721-499c-87f5-4c405260697a")
    ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler * This,
            /* [in] */ HRESULT errorCode,
            /* [in] */ ICoreWebView2ExperimentalUpdateRuntimeResult *result);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_Invoke(This,errorCode,result)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalEnvironment12 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalEnvironment12 = {0x96c27a45,0xf142,0x4873,{0x80,0xad,0x9d,0x0c,0xd8,0x99,0xb2,0xb9}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("96c27a45-f142-4873-80ad-9d0cd899b2b9")
    ICoreWebView2ExperimentalEnvironment12 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateTextureStream( 
            /* [in] */ LPCWSTR streamId,
            /* [in] */ IUnknown *d3dDevice,
            /* [retval][out] */ ICoreWebView2ExperimentalTextureStream **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RenderAdapterLUID( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_RenderAdapterLUIDChanged( 
            /* [in] */ ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_RenderAdapterLUIDChanged( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalEnvironment12Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalEnvironment12 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalEnvironment12 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, CreateTextureStream)
        HRESULT ( STDMETHODCALLTYPE *CreateTextureStream )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ LPCWSTR streamId,
            /* [in] */ IUnknown *d3dDevice,
            /* [retval][out] */ ICoreWebView2ExperimentalTextureStream **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, get_RenderAdapterLUID)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RenderAdapterLUID )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, add_RenderAdapterLUIDChanged)
        HRESULT ( STDMETHODCALLTYPE *add_RenderAdapterLUIDChanged )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalEnvironment12, remove_RenderAdapterLUIDChanged)
        HRESULT ( STDMETHODCALLTYPE *remove_RenderAdapterLUIDChanged )( 
            ICoreWebView2ExperimentalEnvironment12 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalEnvironment12Vtbl;

    interface ICoreWebView2ExperimentalEnvironment12
    {
        CONST_VTBL struct ICoreWebView2ExperimentalEnvironment12Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalEnvironment12_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalEnvironment12_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalEnvironment12_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalEnvironment12_CreateTextureStream(This,streamId,d3dDevice,value)	\
    ( (This)->lpVtbl -> CreateTextureStream(This,streamId,d3dDevice,value) ) 

#define ICoreWebView2ExperimentalEnvironment12_get_RenderAdapterLUID(This,value)	\
    ( (This)->lpVtbl -> get_RenderAdapterLUID(This,value) ) 

#define ICoreWebView2ExperimentalEnvironment12_add_RenderAdapterLUIDChanged(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_RenderAdapterLUIDChanged(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalEnvironment12_remove_RenderAdapterLUIDChanged(This,token)	\
    ( (This)->lpVtbl -> remove_RenderAdapterLUIDChanged(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalEnvironment12_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler = {0x431721e0,0x0f18,0x4d7b,{0xbd,0x4d,0xe5,0xb1,0x52,0x2b,0xb1,0x10}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("431721e0-0f18-4d7b-bd4d-e5b1522bb110")
    ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalEnvironment12 *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalEnvironment12 *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalRenderAdapterLUIDChangedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrame6_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalFrame6_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalFrame6 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalFrame6 = {0x9245fc85,0xc957,0x5332,{0x86,0x24,0xd2,0xce,0x7f,0x79,0xb2,0xe8}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9245fc85-c957-5332-8624-d2ce7f79b2e8")
    ICoreWebView2ExperimentalFrame6 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_ScreenCaptureStarting( 
            /* [in] */ ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_ScreenCaptureStarting( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalFrame6Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalFrame6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalFrame6 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalFrame6 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrame6, add_ScreenCaptureStarting)
        HRESULT ( STDMETHODCALLTYPE *add_ScreenCaptureStarting )( 
            ICoreWebView2ExperimentalFrame6 * This,
            /* [in] */ ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrame6, remove_ScreenCaptureStarting)
        HRESULT ( STDMETHODCALLTYPE *remove_ScreenCaptureStarting )( 
            ICoreWebView2ExperimentalFrame6 * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalFrame6Vtbl;

    interface ICoreWebView2ExperimentalFrame6
    {
        CONST_VTBL struct ICoreWebView2ExperimentalFrame6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalFrame6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalFrame6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalFrame6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalFrame6_add_ScreenCaptureStarting(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_ScreenCaptureStarting(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalFrame6_remove_ScreenCaptureStarting(This,token)	\
    ( (This)->lpVtbl -> remove_ScreenCaptureStarting(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalFrame6_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler = {0xa6c1d8ad,0xbb80,0x59c5,{0x89,0x5b,0xfb,0xa1,0x69,0x8b,0x93,0x09}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a6c1d8ad-bb80-59c5-895b-fba1698b9309")
    ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2Frame *sender,
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler * This,
            /* [in] */ ICoreWebView2Frame *sender,
            /* [in] */ ICoreWebView2ExperimentalScreenCaptureStartingEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandlerVtbl;

    interface ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalFrameScreenCaptureStartingEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotification_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalNotification_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalNotification */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalNotification = {0xB7434D98,0x6BC8,0x419D,{0x9D,0xA5,0xFB,0x5A,0x96,0xD4,0xDA,0xCD}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B7434D98-6BC8-419D-9DA5-FB5A96D4DACD")
    ICoreWebView2ExperimentalNotification : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE add_CloseRequested( 
            /* [in] */ ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_CloseRequested( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportShown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportClicked( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReportClosed( void) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Body( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Direction( 
            /* [retval][out] */ COREWEBVIEW2_TEXT_DIRECTION_KIND *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Language( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Tag( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IconUri( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BadgeUri( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BodyImageUri( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ShouldRenotify( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_RequiresInteraction( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsSilent( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
            /* [retval][out] */ double *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVibrationPattern( 
            /* [out] */ UINT32 *count,
            /* [out] */ UINT64 **vibrationPattern) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalNotificationVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalNotification * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalNotification * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, add_CloseRequested)
        HRESULT ( STDMETHODCALLTYPE *add_CloseRequested )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [in] */ ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, remove_CloseRequested)
        HRESULT ( STDMETHODCALLTYPE *remove_CloseRequested )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, ReportShown)
        HRESULT ( STDMETHODCALLTYPE *ReportShown )( 
            ICoreWebView2ExperimentalNotification * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, ReportClicked)
        HRESULT ( STDMETHODCALLTYPE *ReportClicked )( 
            ICoreWebView2ExperimentalNotification * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, ReportClosed)
        HRESULT ( STDMETHODCALLTYPE *ReportClosed )( 
            ICoreWebView2ExperimentalNotification * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Body)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Body )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Direction)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Direction )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ COREWEBVIEW2_TEXT_DIRECTION_KIND *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Language)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Language )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Tag)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Tag )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_IconUri)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IconUri )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Title)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_BadgeUri)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BadgeUri )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_BodyImageUri)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BodyImageUri )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_ShouldRenotify)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShouldRenotify )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_RequiresInteraction)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_RequiresInteraction )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_IsSilent)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSilent )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, get_Timestamp)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [retval][out] */ double *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotification, GetVibrationPattern)
        HRESULT ( STDMETHODCALLTYPE *GetVibrationPattern )( 
            ICoreWebView2ExperimentalNotification * This,
            /* [out] */ UINT32 *count,
            /* [out] */ UINT64 **vibrationPattern);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalNotificationVtbl;

    interface ICoreWebView2ExperimentalNotification
    {
        CONST_VTBL struct ICoreWebView2ExperimentalNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalNotification_add_CloseRequested(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_CloseRequested(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalNotification_remove_CloseRequested(This,token)	\
    ( (This)->lpVtbl -> remove_CloseRequested(This,token) ) 

#define ICoreWebView2ExperimentalNotification_ReportShown(This)	\
    ( (This)->lpVtbl -> ReportShown(This) ) 

#define ICoreWebView2ExperimentalNotification_ReportClicked(This)	\
    ( (This)->lpVtbl -> ReportClicked(This) ) 

#define ICoreWebView2ExperimentalNotification_ReportClosed(This)	\
    ( (This)->lpVtbl -> ReportClosed(This) ) 

#define ICoreWebView2ExperimentalNotification_get_Body(This,value)	\
    ( (This)->lpVtbl -> get_Body(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_Direction(This,value)	\
    ( (This)->lpVtbl -> get_Direction(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_Language(This,value)	\
    ( (This)->lpVtbl -> get_Language(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_Tag(This,value)	\
    ( (This)->lpVtbl -> get_Tag(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_IconUri(This,value)	\
    ( (This)->lpVtbl -> get_IconUri(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_Title(This,value)	\
    ( (This)->lpVtbl -> get_Title(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_BadgeUri(This,value)	\
    ( (This)->lpVtbl -> get_BadgeUri(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_BodyImageUri(This,value)	\
    ( (This)->lpVtbl -> get_BodyImageUri(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_ShouldRenotify(This,value)	\
    ( (This)->lpVtbl -> get_ShouldRenotify(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_RequiresInteraction(This,value)	\
    ( (This)->lpVtbl -> get_RequiresInteraction(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_IsSilent(This,value)	\
    ( (This)->lpVtbl -> get_IsSilent(This,value) ) 

#define ICoreWebView2ExperimentalNotification_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#define ICoreWebView2ExperimentalNotification_GetVibrationPattern(This,count,vibrationPattern)	\
    ( (This)->lpVtbl -> GetVibrationPattern(This,count,vibrationPattern) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalNotification_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler = {0x47c32d23,0x1e94,0x4733,{0x85,0xf1,0xd9,0xbf,0x4a,0xcd,0x09,0x74}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47c32d23-1e94-4733-85f1-d9bf4acd0974")
    ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalNotification *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalNotificationCloseRequestedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalNotification *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalNotificationCloseRequestedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalNotificationCloseRequestedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalNotificationCloseRequestedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalNotificationReceivedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalNotificationReceivedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalNotificationReceivedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalNotificationReceivedEventArgs = {0x1512DD5B,0x5514,0x4F85,{0x88,0x6E,0x21,0xC3,0xA4,0xC9,0xCF,0xE6}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1512DD5B-5514-4F85-886E-21C3A4C9CFE6")
    ICoreWebView2ExperimentalNotificationReceivedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SenderOrigin( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Notification( 
            /* [retval][out] */ ICoreWebView2ExperimentalNotification **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Handled( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeferral( 
            /* [retval][out] */ ICoreWebView2Deferral **deferral) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalNotificationReceivedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventArgs, get_SenderOrigin)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SenderOrigin )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventArgs, get_Notification)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Notification )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2ExperimentalNotification **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventArgs, put_Handled)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Handled )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventArgs, get_Handled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handled )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalNotificationReceivedEventArgs, GetDeferral)
        HRESULT ( STDMETHODCALLTYPE *GetDeferral )( 
            ICoreWebView2ExperimentalNotificationReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2Deferral **deferral);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalNotificationReceivedEventArgsVtbl;

    interface ICoreWebView2ExperimentalNotificationReceivedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalNotificationReceivedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_get_SenderOrigin(This,value)	\
    ( (This)->lpVtbl -> get_SenderOrigin(This,value) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_get_Notification(This,value)	\
    ( (This)->lpVtbl -> get_Notification(This,value) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_put_Handled(This,value)	\
    ( (This)->lpVtbl -> put_Handled(This,value) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_get_Handled(This,value)	\
    ( (This)->lpVtbl -> get_Handled(This,value) ) 

#define ICoreWebView2ExperimentalNotificationReceivedEventArgs_GetDeferral(This,deferral)	\
    ( (This)->lpVtbl -> GetDeferral(This,deferral) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalNotificationReceivedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalProfile7 */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalProfile7 = {0x11a14762,0x7780,0x46a1,{0xa1,0xc3,0x73,0xde,0x81,0x2d,0xae,0x12}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("11a14762-7780-46a1-a1c3-73de812dae12")
    ICoreWebView2ExperimentalProfile7 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ClearCustomDataPartition( 
            /* [in] */ LPCWSTR CustomDataPartitionId,
            /* [in] */ ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler *handler) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalProfile7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalProfile7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalProfile7 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalProfile7 * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalProfile7, ClearCustomDataPartition)
        HRESULT ( STDMETHODCALLTYPE *ClearCustomDataPartition )( 
            ICoreWebView2ExperimentalProfile7 * This,
            /* [in] */ LPCWSTR CustomDataPartitionId,
            /* [in] */ ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler *handler);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalProfile7Vtbl;

    interface ICoreWebView2ExperimentalProfile7
    {
        CONST_VTBL struct ICoreWebView2ExperimentalProfile7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalProfile7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalProfile7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalProfile7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalProfile7_ClearCustomDataPartition(This,CustomDataPartitionId,handler)	\
    ( (This)->lpVtbl -> ClearCustomDataPartition(This,CustomDataPartitionId,handler) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalProfile7_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler = {0xfe753727,0x5758,0x4fea,{0x8c,0xad,0x1e,0x68,0x5b,0x9c,0x3a,0xe8}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe753727-5758-4fea-8cad-1e685b9c3ae8")
    ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ HRESULT errorCode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler * This,
            /* [in] */ HRESULT errorCode);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl;

    interface ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_Invoke(This,errorCode)	\
    ( (This)->lpVtbl -> Invoke(This,errorCode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalClearCustomDataPartitionCompletedHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSaveAsUIShowingEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSaveAsUIShowingEventArgs = {0x55902952,0x0e0d,0x5aaa,{0xa7,0xd0,0xe8,0x33,0xcd,0xb3,0x4f,0x62}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55902952-0e0d-5aaa-a7d0-e833cdb34f62")
    ICoreWebView2ExperimentalSaveAsUIShowingEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ContentMimeType( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Cancel( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Cancel( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuppressDefaultDialog( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuppressDefaultDialog( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeferral( 
            /* [retval][out] */ ICoreWebView2Deferral **value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SaveAsFilePath( 
            /* [in] */ LPCWSTR value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SaveAsFilePath( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_AllowReplace( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_AllowReplace( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Kind( 
            /* [in] */ COREWEBVIEW2_SAVE_AS_KIND value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
            /* [retval][out] */ COREWEBVIEW2_SAVE_AS_KIND *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSaveAsUIShowingEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_ContentMimeType)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ContentMimeType )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, put_Cancel)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cancel )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_Cancel)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cancel )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, put_SuppressDefaultDialog)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaultDialog )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_SuppressDefaultDialog)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaultDialog )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, GetDeferral)
        HRESULT ( STDMETHODCALLTYPE *GetDeferral )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ ICoreWebView2Deferral **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, put_SaveAsFilePath)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SaveAsFilePath )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ LPCWSTR value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_SaveAsFilePath)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SaveAsFilePath )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, put_AllowReplace)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowReplace )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_AllowReplace)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowReplace )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, put_Kind)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Kind )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [in] */ COREWEBVIEW2_SAVE_AS_KIND value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveAsUIShowingEventArgs, get_Kind)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            ICoreWebView2ExperimentalSaveAsUIShowingEventArgs * This,
            /* [retval][out] */ COREWEBVIEW2_SAVE_AS_KIND *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSaveAsUIShowingEventArgsVtbl;

    interface ICoreWebView2ExperimentalSaveAsUIShowingEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSaveAsUIShowingEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_ContentMimeType(This,value)	\
    ( (This)->lpVtbl -> get_ContentMimeType(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_put_Cancel(This,value)	\
    ( (This)->lpVtbl -> put_Cancel(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_Cancel(This,value)	\
    ( (This)->lpVtbl -> get_Cancel(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_put_SuppressDefaultDialog(This,value)	\
    ( (This)->lpVtbl -> put_SuppressDefaultDialog(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_SuppressDefaultDialog(This,value)	\
    ( (This)->lpVtbl -> get_SuppressDefaultDialog(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_GetDeferral(This,value)	\
    ( (This)->lpVtbl -> GetDeferral(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_put_SaveAsFilePath(This,value)	\
    ( (This)->lpVtbl -> put_SaveAsFilePath(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_SaveAsFilePath(This,value)	\
    ( (This)->lpVtbl -> get_SaveAsFilePath(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_put_AllowReplace(This,value)	\
    ( (This)->lpVtbl -> put_AllowReplace(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_AllowReplace(This,value)	\
    ( (This)->lpVtbl -> get_AllowReplace(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_put_Kind(This,value)	\
    ( (This)->lpVtbl -> put_Kind(This,value) ) 

#define ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_get_Kind(This,value)	\
    ( (This)->lpVtbl -> get_Kind(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSaveAsUIShowingEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs = {0xcf4ff1d1,0x5a67,0x5660,{0x8d,0x63,0xef,0x69,0x98,0x81,0xea,0x65}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cf4ff1d1-5a67-5660-8d63-ef699881ea65")
    ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CancelSave( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CancelSave( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DocumentOriginUri( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileExtension( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FilePath( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuppressDefaultPolicy( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuppressDefaultPolicy( 
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeferral( 
            /* [retval][out] */ ICoreWebView2Deferral **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, get_CancelSave)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CancelSave )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, put_CancelSave)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CancelSave )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, get_DocumentOriginUri)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DocumentOriginUri )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, get_FileExtension)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileExtension )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, get_FilePath)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FilePath )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, get_SuppressDefaultPolicy)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuppressDefaultPolicy )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, put_SuppressDefaultPolicy)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuppressDefaultPolicy )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs, GetDeferral)
        HRESULT ( STDMETHODCALLTYPE *GetDeferral )( 
            ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs * This,
            /* [retval][out] */ ICoreWebView2Deferral **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgsVtbl;

    interface ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_get_CancelSave(This,value)	\
    ( (This)->lpVtbl -> get_CancelSave(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_put_CancelSave(This,value)	\
    ( (This)->lpVtbl -> put_CancelSave(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_get_DocumentOriginUri(This,value)	\
    ( (This)->lpVtbl -> get_DocumentOriginUri(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_get_FileExtension(This,value)	\
    ( (This)->lpVtbl -> get_FileExtension(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_get_FilePath(This,value)	\
    ( (This)->lpVtbl -> get_FilePath(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_get_SuppressDefaultPolicy(This,value)	\
    ( (This)->lpVtbl -> get_SuppressDefaultPolicy(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_put_SuppressDefaultPolicy(This,value)	\
    ( (This)->lpVtbl -> put_SuppressDefaultPolicy(This,value) ) 

#define ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_GetDeferral(This,value)	\
    ( (This)->lpVtbl -> GetDeferral(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalSaveFileSecurityCheckStartingEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalScreenCaptureStartingEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalScreenCaptureStartingEventArgs = {0x892c03fd,0xaee3,0x5eba,{0xa1,0xfa,0x6f,0xd2,0xf6,0x48,0x4b,0x2b}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("892c03fd-aee3-5eba-a1fa-6fd2f6484b2b")
    ICoreWebView2ExperimentalScreenCaptureStartingEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Cancel( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Cancel( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handled( 
            /* [retval][out] */ BOOL *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Handled( 
            /* [in] */ BOOL value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_OriginalSourceFrameInfo( 
            /* [retval][out] */ ICoreWebView2FrameInfo **value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeferral( 
            /* [retval][out] */ ICoreWebView2Deferral **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalScreenCaptureStartingEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, get_Cancel)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cancel )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, put_Cancel)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cancel )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, get_Handled)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handled )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [retval][out] */ BOOL *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, put_Handled)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Handled )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, get_OriginalSourceFrameInfo)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_OriginalSourceFrameInfo )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [retval][out] */ ICoreWebView2FrameInfo **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalScreenCaptureStartingEventArgs, GetDeferral)
        HRESULT ( STDMETHODCALLTYPE *GetDeferral )( 
            ICoreWebView2ExperimentalScreenCaptureStartingEventArgs * This,
            /* [retval][out] */ ICoreWebView2Deferral **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalScreenCaptureStartingEventArgsVtbl;

    interface ICoreWebView2ExperimentalScreenCaptureStartingEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalScreenCaptureStartingEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_get_Cancel(This,value)	\
    ( (This)->lpVtbl -> get_Cancel(This,value) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_put_Cancel(This,value)	\
    ( (This)->lpVtbl -> put_Cancel(This,value) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_get_Handled(This,value)	\
    ( (This)->lpVtbl -> get_Handled(This,value) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_put_Handled(This,value)	\
    ( (This)->lpVtbl -> put_Handled(This,value) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_get_OriginalSourceFrameInfo(This,value)	\
    ( (This)->lpVtbl -> get_OriginalSourceFrameInfo(This,value) ) 

#define ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_GetDeferral(This,value)	\
    ( (This)->lpVtbl -> GetDeferral(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalScreenCaptureStartingEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTexture */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTexture = {0x0836f09c,0x34bd,0x47bf,{0x91,0x4a,0x99,0xfb,0x56,0xae,0x2d,0x07}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0836f09c-34bd-47bf-914a-99fb56ae2d07")
    ICoreWebView2ExperimentalTexture : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ HANDLE *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Resource( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
            /* [retval][out] */ UINT64 *value) = 0;
        
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Timestamp( 
            /* [in] */ UINT64 value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTexture * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTexture * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Handle)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ HANDLE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Resource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resource )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, get_Timestamp)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [retval][out] */ UINT64 *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTexture, put_Timestamp)
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Timestamp )( 
            ICoreWebView2ExperimentalTexture * This,
            /* [in] */ UINT64 value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureVtbl;

    interface ICoreWebView2ExperimentalTexture
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTexture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTexture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTexture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTexture_get_Handle(This,value)	\
    ( (This)->lpVtbl -> get_Handle(This,value) ) 

#define ICoreWebView2ExperimentalTexture_get_Resource(This,value)	\
    ( (This)->lpVtbl -> get_Resource(This,value) ) 

#define ICoreWebView2ExperimentalTexture_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#define ICoreWebView2ExperimentalTexture_put_Timestamp(This,value)	\
    ( (This)->lpVtbl -> put_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTexture_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStream */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStream = {0xafca8431,0x633f,0x4528,{0xab,0xfe,0x7f,0xc3,0xbe,0xdd,0x89,0x62}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("afca8431-633f-4528-abfe-7fc3bedd8962")
    ICoreWebView2ExperimentalTextureStream : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ LPWSTR *value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddAllowedOrigin( 
            /* [in] */ LPCWSTR origin,
            /* [in] */ BOOL value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveAllowedOrigin( 
            /* [in] */ LPCWSTR origin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_StartRequested( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_StartRequested( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_Stopped( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_Stopped( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateTexture( 
            /* [in] */ UINT32 widthInTexels,
            /* [in] */ UINT32 heightInTexels,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAvailableTexture( 
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseTexture( 
            /* [in] */ ICoreWebView2ExperimentalTexture *texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PresentTexture( 
            /* [in] */ ICoreWebView2ExperimentalTexture *texture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_ErrorReceived( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_ErrorReceived( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetD3DDevice( 
            /* [in] */ IUnknown *d3dDevice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_WebTextureReceived( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_WebTextureReceived( 
            /* [in] */ EventRegistrationToken token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE add_WebTextureStreamStopped( 
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE remove_WebTextureStreamStopped( 
            /* [in] */ EventRegistrationToken token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, get_Id)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [retval][out] */ LPWSTR *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, AddAllowedOrigin)
        HRESULT ( STDMETHODCALLTYPE *AddAllowedOrigin )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ LPCWSTR origin,
            /* [in] */ BOOL value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, RemoveAllowedOrigin)
        HRESULT ( STDMETHODCALLTYPE *RemoveAllowedOrigin )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ LPCWSTR origin);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_StartRequested)
        HRESULT ( STDMETHODCALLTYPE *add_StartRequested )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_StartRequested)
        HRESULT ( STDMETHODCALLTYPE *remove_StartRequested )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_Stopped)
        HRESULT ( STDMETHODCALLTYPE *add_Stopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_Stopped)
        HRESULT ( STDMETHODCALLTYPE *remove_Stopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, CreateTexture)
        HRESULT ( STDMETHODCALLTYPE *CreateTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ UINT32 widthInTexels,
            /* [in] */ UINT32 heightInTexels,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, GetAvailableTexture)
        HRESULT ( STDMETHODCALLTYPE *GetAvailableTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, CloseTexture)
        HRESULT ( STDMETHODCALLTYPE *CloseTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTexture *texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, PresentTexture)
        HRESULT ( STDMETHODCALLTYPE *PresentTexture )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTexture *texture);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, Stop)
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            ICoreWebView2ExperimentalTextureStream * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_ErrorReceived)
        HRESULT ( STDMETHODCALLTYPE *add_ErrorReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_ErrorReceived)
        HRESULT ( STDMETHODCALLTYPE *remove_ErrorReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, SetD3DDevice)
        HRESULT ( STDMETHODCALLTYPE *SetD3DDevice )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ IUnknown *d3dDevice);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_WebTextureReceived)
        HRESULT ( STDMETHODCALLTYPE *add_WebTextureReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_WebTextureReceived)
        HRESULT ( STDMETHODCALLTYPE *remove_WebTextureReceived )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, add_WebTextureStreamStopped)
        HRESULT ( STDMETHODCALLTYPE *add_WebTextureStreamStopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler *eventHandler,
            /* [out] */ EventRegistrationToken *token);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStream, remove_WebTextureStreamStopped)
        HRESULT ( STDMETHODCALLTYPE *remove_WebTextureStreamStopped )( 
            ICoreWebView2ExperimentalTextureStream * This,
            /* [in] */ EventRegistrationToken token);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamVtbl;

    interface ICoreWebView2ExperimentalTextureStream
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStream_get_Id(This,value)	\
    ( (This)->lpVtbl -> get_Id(This,value) ) 

#define ICoreWebView2ExperimentalTextureStream_AddAllowedOrigin(This,origin,value)	\
    ( (This)->lpVtbl -> AddAllowedOrigin(This,origin,value) ) 

#define ICoreWebView2ExperimentalTextureStream_RemoveAllowedOrigin(This,origin)	\
    ( (This)->lpVtbl -> RemoveAllowedOrigin(This,origin) ) 

#define ICoreWebView2ExperimentalTextureStream_add_StartRequested(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_StartRequested(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_StartRequested(This,token)	\
    ( (This)->lpVtbl -> remove_StartRequested(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_add_Stopped(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_Stopped(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_Stopped(This,token)	\
    ( (This)->lpVtbl -> remove_Stopped(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_CreateTexture(This,widthInTexels,heightInTexels,texture)	\
    ( (This)->lpVtbl -> CreateTexture(This,widthInTexels,heightInTexels,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_GetAvailableTexture(This,texture)	\
    ( (This)->lpVtbl -> GetAvailableTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_CloseTexture(This,texture)	\
    ( (This)->lpVtbl -> CloseTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_PresentTexture(This,texture)	\
    ( (This)->lpVtbl -> PresentTexture(This,texture) ) 

#define ICoreWebView2ExperimentalTextureStream_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define ICoreWebView2ExperimentalTextureStream_add_ErrorReceived(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_ErrorReceived(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_ErrorReceived(This,token)	\
    ( (This)->lpVtbl -> remove_ErrorReceived(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_SetD3DDevice(This,d3dDevice)	\
    ( (This)->lpVtbl -> SetD3DDevice(This,d3dDevice) ) 

#define ICoreWebView2ExperimentalTextureStream_add_WebTextureReceived(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_WebTextureReceived(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_WebTextureReceived(This,token)	\
    ( (This)->lpVtbl -> remove_WebTextureReceived(This,token) ) 

#define ICoreWebView2ExperimentalTextureStream_add_WebTextureStreamStopped(This,eventHandler,token)	\
    ( (This)->lpVtbl -> add_WebTextureStreamStopped(This,eventHandler,token) ) 

#define ICoreWebView2ExperimentalTextureStream_remove_WebTextureStreamStopped(This,token)	\
    ( (This)->lpVtbl -> remove_WebTextureStreamStopped(This,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStream_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler = {0x52cb8898,0xc711,0x401a,{0x8f,0x97,0x36,0x46,0x83,0x1b,0xa7,0x2d}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("52cb8898-c711-401a-8f97-3646831ba72d")
    ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler = {0x62d09330,0x00a9,0x41bf,{0xa9,0xae,0x55,0xaa,0xef,0x8b,0x3c,0x44}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("62d09330-00a9-41bf-a9ae-55aaef8b3c44")
    ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamStartRequestedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamStoppedEventHandler = {0x4111102a,0xd19f,0x4438,{0xaf,0x46,0xef,0xc5,0x63,0xb2,0xb9,0xcf}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4111102a-d19f-4438-af46-efc563b2b9cf")
    ICoreWebView2ExperimentalTextureStreamStoppedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamStoppedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamStoppedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamStoppedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamStoppedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamStoppedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler = {0x9ea4228c,0x295a,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9ea4228c-295a-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler = {0x77eb4638,0x2f05,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77eb4638-2f05-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler, Invoke)
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler * This,
            /* [in] */ ICoreWebView2ExperimentalTextureStream *sender,
            /* [in] */ IUnknown *args);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_Invoke(This,sender,args)	\
    ( (This)->lpVtbl -> Invoke(This,sender,args) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureStreamStoppedEventHandler_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs = {0x0e1730c1,0x03df,0x4ad2,{0xb8,0x47,0xbe,0x4d,0x63,0xad,0xf7,0x00}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0e1730c1-03df-4ad2-b847-be4d63adf700")
    ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Kind( 
            /* [retval][out] */ COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Texture( 
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs, get_Kind)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Kind )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [retval][out] */ COREWEBVIEW2_TEXTURE_STREAM_ERROR_KIND *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs, get_Texture)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Texture )( 
            ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2ExperimentalTexture **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl;

    interface ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_get_Kind(This,value)	\
    ( (This)->lpVtbl -> get_Kind(This,value) ) 

#define ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_get_Texture(This,value)	\
    ( (This)->lpVtbl -> get_Texture(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamErrorReceivedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs = {0xa4c2fa3a,0x295a,0x11ed,{0xa2,0x61,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a4c2fa3a-295a-11ed-a261-0242ac120002")
    ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_WebTexture( 
            /* [retval][out] */ ICoreWebView2ExperimentalWebTexture **value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs, get_WebTexture)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_WebTexture )( 
            ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs * This,
            /* [retval][out] */ ICoreWebView2ExperimentalWebTexture **value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl;

    interface ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs
    {
        CONST_VTBL struct ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_get_WebTexture(This,value)	\
    ( (This)->lpVtbl -> get_WebTexture(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalTextureStreamWebTextureReceivedEventArgs_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalUpdateRuntimeResult */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalUpdateRuntimeResult = {0xDD503E49,0xAB19,0x47C0,{0xB2,0xAD,0x6D,0xDD,0x09,0xCC,0x3E,0x3A}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DD503E49-AB19-47C0-B2AD-6DDD09CC3E3A")
    ICoreWebView2ExperimentalUpdateRuntimeResult : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ExtendedError( 
            /* [retval][out] */ HRESULT *error) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_Status)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ COREWEBVIEW2_UPDATE_RUNTIME_STATUS *status);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalUpdateRuntimeResult, get_ExtendedError)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )( 
            ICoreWebView2ExperimentalUpdateRuntimeResult * This,
            /* [retval][out] */ HRESULT *error);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalUpdateRuntimeResultVtbl;

    interface ICoreWebView2ExperimentalUpdateRuntimeResult
    {
        CONST_VTBL struct ICoreWebView2ExperimentalUpdateRuntimeResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalUpdateRuntimeResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_Status(This,status)	\
    ( (This)->lpVtbl -> get_Status(This,status) ) 

#define ICoreWebView2ExperimentalUpdateRuntimeResult_get_ExtendedError(This,error)	\
    ( (This)->lpVtbl -> get_ExtendedError(This,error) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalUpdateRuntimeResult_INTERFACE_DEFINED__ */


#ifndef __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__
#define __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__

/* interface ICoreWebView2ExperimentalWebTexture */
/* [unique][object][uuid] */ 


EXTERN_C __declspec(selectany) const IID IID_ICoreWebView2ExperimentalWebTexture = {0xb94265ae,0x4c1e,0x11ed,{0xbd,0xc3,0x02,0x42,0xac,0x12,0x00,0x02}};

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b94265ae-4c1e-11ed-bdc3-0242ac120002")
    ICoreWebView2ExperimentalWebTexture : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Handle( 
            /* [retval][out] */ HANDLE *value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Resource( 
            /* [retval][out] */ IUnknown **value) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Timestamp( 
            /* [retval][out] */ UINT64 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoreWebView2ExperimentalWebTextureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoreWebView2ExperimentalWebTexture * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoreWebView2ExperimentalWebTexture * This);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Handle)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Handle )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ HANDLE *value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Resource)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Resource )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ IUnknown **value);
        
        DECLSPEC_XFGVIRT(ICoreWebView2ExperimentalWebTexture, get_Timestamp)
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Timestamp )( 
            ICoreWebView2ExperimentalWebTexture * This,
            /* [retval][out] */ UINT64 *value);
        
        END_INTERFACE
    } ICoreWebView2ExperimentalWebTextureVtbl;

    interface ICoreWebView2ExperimentalWebTexture
    {
        CONST_VTBL struct ICoreWebView2ExperimentalWebTextureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoreWebView2ExperimentalWebTexture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoreWebView2ExperimentalWebTexture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoreWebView2ExperimentalWebTexture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoreWebView2ExperimentalWebTexture_get_Handle(This,value)	\
    ( (This)->lpVtbl -> get_Handle(This,value) ) 

#define ICoreWebView2ExperimentalWebTexture_get_Resource(This,value)	\
    ( (This)->lpVtbl -> get_Resource(This,value) ) 

#define ICoreWebView2ExperimentalWebTexture_get_Timestamp(This,value)	\
    ( (This)->lpVtbl -> get_Timestamp(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoreWebView2ExperimentalWebTexture_INTERFACE_DEFINED__ */

#endif /* __WebView2Experimental_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


