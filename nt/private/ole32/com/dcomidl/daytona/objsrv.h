/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:10 2019
 */
/* Compiler settings for ..\objsrv.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __objsrv_h__
#define __objsrv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IObjServer_FWD_DEFINED__
#define __IObjServer_FWD_DEFINED__
typedef interface IObjServer IObjServer;
#endif 	/* __IObjServer_FWD_DEFINED__ */


/* header files for imported files */
#include "iface.h"
#include "obase.h"
#include "unknwn.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IObjServer_INTERFACE_DEFINED__
#define __IObjServer_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IObjServer
 * at Thu Oct 17 18:16:10 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][object][unique][version][uuid] */ 


typedef DWORD STATUSTYPE;


EXTERN_C const IID IID_IObjServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IObjServer : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ObjectServerGetClassObject( 
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ IID __RPC_FAR *pIID,
            /* [in] */ BOOL fSurrogate,
            /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectServerCreateInstance( 
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectServerGetInstance( 
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ DWORD Mode,
            /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDROT,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ObjectServerLoadDll( 
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IObjServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IObjServer __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IObjServer __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IObjServer __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ObjectServerGetClassObject )( 
            IObjServer __RPC_FAR * This,
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ IID __RPC_FAR *pIID,
            /* [in] */ BOOL fSurrogate,
            /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ObjectServerCreateInstance )( 
            IObjServer __RPC_FAR * This,
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ObjectServerGetInstance )( 
            IObjServer __RPC_FAR * This,
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [in] */ DWORD Mode,
            /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDROT,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ObjectServerLoadDll )( 
            IObjServer __RPC_FAR * This,
            /* [in] */ const GUID __RPC_FAR *rclsid,
            /* [out] */ STATUSTYPE __RPC_FAR *pStatus);
        
        END_INTERFACE
    } IObjServerVtbl;

    interface IObjServer
    {
        CONST_VTBL struct IObjServerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjServer_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IObjServer_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IObjServer_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IObjServer_ObjectServerGetClassObject(This,rclsid,pIID,fSurrogate,ppIFD,pStatus)	\
    (This)->lpVtbl -> ObjectServerGetClassObject(This,rclsid,pIID,fSurrogate,ppIFD,pStatus)

#define IObjServer_ObjectServerCreateInstance(This,rclsid,Interfaces,pIIDs,ppIFD,pResults,pStatus)	\
    (This)->lpVtbl -> ObjectServerCreateInstance(This,rclsid,Interfaces,pIIDs,ppIFD,pResults,pStatus)

#define IObjServer_ObjectServerGetInstance(This,rclsid,Mode,pwszPath,pIFDStorage,Interfaces,pIIDs,pIFDROT,ppIFD,pResults,pStatus)	\
    (This)->lpVtbl -> ObjectServerGetInstance(This,rclsid,Mode,pwszPath,pIFDStorage,Interfaces,pIIDs,pIFDROT,ppIFD,pResults,pStatus)

#define IObjServer_ObjectServerLoadDll(This,rclsid,pStatus)	\
    (This)->lpVtbl -> ObjectServerLoadDll(This,rclsid,pStatus)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IObjServer_ObjectServerGetClassObject_Proxy( 
    IObjServer __RPC_FAR * This,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ BOOL fSurrogate,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [out] */ STATUSTYPE __RPC_FAR *pStatus);


void __RPC_STUB IObjServer_ObjectServerGetClassObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IObjServer_ObjectServerCreateInstance_Proxy( 
    IObjServer __RPC_FAR * This,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [out] */ STATUSTYPE __RPC_FAR *pStatus);


void __RPC_STUB IObjServer_ObjectServerCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IObjServer_ObjectServerGetInstance_Proxy( 
    IObjServer __RPC_FAR * This,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Mode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDROT,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [out] */ STATUSTYPE __RPC_FAR *pStatus);


void __RPC_STUB IObjServer_ObjectServerGetInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IObjServer_ObjectServerLoadDll_Proxy( 
    IObjServer __RPC_FAR * This,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [out] */ STATUSTYPE __RPC_FAR *pStatus);


void __RPC_STUB IObjServer_ObjectServerLoadDll_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IObjServer_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
