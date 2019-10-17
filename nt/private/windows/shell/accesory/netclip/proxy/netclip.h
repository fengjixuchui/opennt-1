/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 17:23:43 2019
 */
/* Compiler settings for netclip.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __netclip_h__
#define __netclip_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IClipboard_FWD_DEFINED__
#define __IClipboard_FWD_DEFINED__
typedef interface IClipboard IClipboard;
#endif 	/* __IClipboard_FWD_DEFINED__ */


#ifndef __IClipboardNotify_FWD_DEFINED__
#define __IClipboardNotify_FWD_DEFINED__
typedef interface IClipboardNotify IClipboardNotify;
#endif 	/* __IClipboardNotify_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

/****************************************
 * Generated header for interface: __MIDL__intf_0000
 * at Thu Oct 17 17:23:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [local] */ 


//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright 1995 - 1996 Microsoft Corporation. All Rights Reserved.
//
//  File: netclip.h
//
//--------------------------------------------------------------------------

////////////////////////////////////////////////////////////////////////////
//  Classes (link with netclip.lib)

// {F7565504-4B54-11CF-B63C-0080C792B782}
EXTERN_C const CLSID CLSID_NetClip;

////////////////////////////////////////////////////////////////////////////
//  Types

////////////////////////////////////////////////////////////////////////////
//  Interface Definitions
#ifndef _LPNETCLIP_DEFINED
#define _LPNETCLIP_DEFINED


extern RPC_IF_HANDLE __MIDL__intf_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL__intf_0000_v0_0_s_ifspec;

#ifndef __IClipboard_INTERFACE_DEFINED__
#define __IClipboard_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IClipboard
 * at Thu Oct 17 17:23:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IClipboard;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IClipboard : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetClipboardFormatName( 
            /* [in] */ CLIPFORMAT cf,
            /* [out] */ LPOLESTR __RPC_FAR *ppsz) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClipboard( 
            /* [out] */ IDataObject __RPC_FAR *__RPC_FAR *ppDataObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetClipboard( 
            /* [in] */ IDataObject __RPC_FAR *pDataObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsCurrentClipboard( 
            /* [in] */ IDataObject __RPC_FAR *pDataObject) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FlushClipboard( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IClipboardVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IClipboard __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IClipboard __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IClipboard __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetClipboardFormatName )( 
            IClipboard __RPC_FAR * This,
            /* [in] */ CLIPFORMAT cf,
            /* [out] */ LPOLESTR __RPC_FAR *ppsz);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetClipboard )( 
            IClipboard __RPC_FAR * This,
            /* [out] */ IDataObject __RPC_FAR *__RPC_FAR *ppDataObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetClipboard )( 
            IClipboard __RPC_FAR * This,
            /* [in] */ IDataObject __RPC_FAR *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsCurrentClipboard )( 
            IClipboard __RPC_FAR * This,
            /* [in] */ IDataObject __RPC_FAR *pDataObject);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FlushClipboard )( 
            IClipboard __RPC_FAR * This);
        
        END_INTERFACE
    } IClipboardVtbl;

    interface IClipboard
    {
        CONST_VTBL struct IClipboardVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClipboard_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IClipboard_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IClipboard_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IClipboard_GetClipboardFormatName(This,cf,ppsz)	\
    (This)->lpVtbl -> GetClipboardFormatName(This,cf,ppsz)

#define IClipboard_GetClipboard(This,ppDataObject)	\
    (This)->lpVtbl -> GetClipboard(This,ppDataObject)

#define IClipboard_SetClipboard(This,pDataObject)	\
    (This)->lpVtbl -> SetClipboard(This,pDataObject)

#define IClipboard_IsCurrentClipboard(This,pDataObject)	\
    (This)->lpVtbl -> IsCurrentClipboard(This,pDataObject)

#define IClipboard_FlushClipboard(This)	\
    (This)->lpVtbl -> FlushClipboard(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IClipboard_GetClipboardFormatName_Proxy( 
    IClipboard __RPC_FAR * This,
    /* [in] */ CLIPFORMAT cf,
    /* [out] */ LPOLESTR __RPC_FAR *ppsz);


void __RPC_STUB IClipboard_GetClipboardFormatName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IClipboard_GetClipboard_Proxy( 
    IClipboard __RPC_FAR * This,
    /* [out] */ IDataObject __RPC_FAR *__RPC_FAR *ppDataObject);


void __RPC_STUB IClipboard_GetClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IClipboard_SetClipboard_Proxy( 
    IClipboard __RPC_FAR * This,
    /* [in] */ IDataObject __RPC_FAR *pDataObject);


void __RPC_STUB IClipboard_SetClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IClipboard_IsCurrentClipboard_Proxy( 
    IClipboard __RPC_FAR * This,
    /* [in] */ IDataObject __RPC_FAR *pDataObject);


void __RPC_STUB IClipboard_IsCurrentClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IClipboard_FlushClipboard_Proxy( 
    IClipboard __RPC_FAR * This);


void __RPC_STUB IClipboard_FlushClipboard_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IClipboard_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL__intf_0056
 * at Thu Oct 17 17:23:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [local] */ 


#endif
#ifndef _LPNETCLIPNOTIFY_DEFINED
#define _LPNETCLIPNOTIFY_DEFINED


extern RPC_IF_HANDLE __MIDL__intf_0056_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL__intf_0056_v0_0_s_ifspec;

#ifndef __IClipboardNotify_INTERFACE_DEFINED__
#define __IClipboardNotify_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IClipboardNotify
 * at Thu Oct 17 17:23:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IClipboardNotify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IClipboardNotify : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnClipboardChanged( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IClipboardNotifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IClipboardNotify __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IClipboardNotify __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IClipboardNotify __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OnClipboardChanged )( 
            IClipboardNotify __RPC_FAR * This);
        
        END_INTERFACE
    } IClipboardNotifyVtbl;

    interface IClipboardNotify
    {
        CONST_VTBL struct IClipboardNotifyVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClipboardNotify_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IClipboardNotify_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IClipboardNotify_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IClipboardNotify_OnClipboardChanged(This)	\
    (This)->lpVtbl -> OnClipboardChanged(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IClipboardNotify_OnClipboardChanged_Proxy( 
    IClipboardNotify __RPC_FAR * This);


void __RPC_STUB IClipboardNotify_OnClipboardChanged_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IClipboardNotify_INTERFACE_DEFINED__ */


/****************************************
 * Generated header for interface: __MIDL__intf_0057
 * at Thu Oct 17 17:23:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [local] */ 


#endif


extern RPC_IF_HANDLE __MIDL__intf_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL__intf_0057_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  CLIPFORMAT_UserSize(     unsigned long __RPC_FAR *, unsigned long            , CLIPFORMAT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  CLIPFORMAT_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, CLIPFORMAT __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  CLIPFORMAT_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, CLIPFORMAT __RPC_FAR * ); 
void                      __RPC_USER  CLIPFORMAT_UserFree(     unsigned long __RPC_FAR *, CLIPFORMAT __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
