/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:20 2019
 */
/* Compiler settings for iconn.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __iconn_h__
#define __iconn_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IDocfileAsyncConnectionPoint_FWD_DEFINED__
#define __IDocfileAsyncConnectionPoint_FWD_DEFINED__
typedef interface IDocfileAsyncConnectionPoint IDocfileAsyncConnectionPoint;
#endif 	/* __IDocfileAsyncConnectionPoint_FWD_DEFINED__ */


#ifndef __IFillInfo_FWD_DEFINED__
#define __IFillInfo_FWD_DEFINED__
typedef interface IFillInfo IFillInfo;
#endif 	/* __IFillInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IDocfileAsyncConnectionPoint_INTERFACE_DEFINED__
#define __IDocfileAsyncConnectionPoint_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IDocfileAsyncConnectionPoint
 * at Thu Oct 17 18:16:20 2019
 * using MIDL 3.00.44
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IDocfileAsyncConnectionPoint;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IDocfileAsyncConnectionPoint : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddConnection( 
            /* [in] */ IProgressNotify __RPC_FAR *pSink,
            /* [out] */ DWORD __RPC_FAR *pdwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoveConnection( 
            /* [in] */ DWORD dwCookie) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySinks( 
            /* [in] */ ULONG ulProgressCurrent,
            /* [in] */ ULONG ulProgressMaximum,
            /* [in] */ BOOL fAccurate,
            /* [in] */ SCODE sc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ IDocfileAsyncConnectionPoint __RPC_FAR *__RPC_FAR *ppParent) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDocfileAsyncConnectionPointVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *AddConnection )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This,
            /* [in] */ IProgressNotify __RPC_FAR *pSink,
            /* [out] */ DWORD __RPC_FAR *pdwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *RemoveConnection )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This,
            /* [in] */ DWORD dwCookie);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *NotifySinks )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This,
            /* [in] */ ULONG ulProgressCurrent,
            /* [in] */ ULONG ulProgressMaximum,
            /* [in] */ BOOL fAccurate,
            /* [in] */ SCODE sc);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetParent )( 
            IDocfileAsyncConnectionPoint __RPC_FAR * This,
            /* [out] */ IDocfileAsyncConnectionPoint __RPC_FAR *__RPC_FAR *ppParent);
        
        END_INTERFACE
    } IDocfileAsyncConnectionPointVtbl;

    interface IDocfileAsyncConnectionPoint
    {
        CONST_VTBL struct IDocfileAsyncConnectionPointVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocfileAsyncConnectionPoint_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDocfileAsyncConnectionPoint_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDocfileAsyncConnectionPoint_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDocfileAsyncConnectionPoint_AddConnection(This,pSink,pdwCookie)	\
    (This)->lpVtbl -> AddConnection(This,pSink,pdwCookie)

#define IDocfileAsyncConnectionPoint_RemoveConnection(This,dwCookie)	\
    (This)->lpVtbl -> RemoveConnection(This,dwCookie)

#define IDocfileAsyncConnectionPoint_NotifySinks(This,ulProgressCurrent,ulProgressMaximum,fAccurate,sc)	\
    (This)->lpVtbl -> NotifySinks(This,ulProgressCurrent,ulProgressMaximum,fAccurate,sc)

#define IDocfileAsyncConnectionPoint_GetParent(This,ppParent)	\
    (This)->lpVtbl -> GetParent(This,ppParent)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDocfileAsyncConnectionPoint_AddConnection_Proxy( 
    IDocfileAsyncConnectionPoint __RPC_FAR * This,
    /* [in] */ IProgressNotify __RPC_FAR *pSink,
    /* [out] */ DWORD __RPC_FAR *pdwCookie);


void __RPC_STUB IDocfileAsyncConnectionPoint_AddConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDocfileAsyncConnectionPoint_RemoveConnection_Proxy( 
    IDocfileAsyncConnectionPoint __RPC_FAR * This,
    /* [in] */ DWORD dwCookie);


void __RPC_STUB IDocfileAsyncConnectionPoint_RemoveConnection_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDocfileAsyncConnectionPoint_NotifySinks_Proxy( 
    IDocfileAsyncConnectionPoint __RPC_FAR * This,
    /* [in] */ ULONG ulProgressCurrent,
    /* [in] */ ULONG ulProgressMaximum,
    /* [in] */ BOOL fAccurate,
    /* [in] */ SCODE sc);


void __RPC_STUB IDocfileAsyncConnectionPoint_NotifySinks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDocfileAsyncConnectionPoint_GetParent_Proxy( 
    IDocfileAsyncConnectionPoint __RPC_FAR * This,
    /* [out] */ IDocfileAsyncConnectionPoint __RPC_FAR *__RPC_FAR *ppParent);


void __RPC_STUB IDocfileAsyncConnectionPoint_GetParent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDocfileAsyncConnectionPoint_INTERFACE_DEFINED__ */


#ifndef __IFillInfo_INTERFACE_DEFINED__
#define __IFillInfo_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IFillInfo
 * at Thu Oct 17 18:16:20 2019
 * using MIDL 3.00.44
 ****************************************/
/* [unique][uuid][object] */ 



EXTERN_C const IID IID_IFillInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IFillInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFailureInfo( 
            /* [out] */ ULONG __RPC_FAR *pulWaterMark,
            /* [out] */ ULONG __RPC_FAR *pulFailurePoint) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTerminationStatus( 
            /* [out] */ DWORD __RPC_FAR *pdwFlags) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IFillInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IFillInfo __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IFillInfo __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IFillInfo __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetFailureInfo )( 
            IFillInfo __RPC_FAR * This,
            /* [out] */ ULONG __RPC_FAR *pulWaterMark,
            /* [out] */ ULONG __RPC_FAR *pulFailurePoint);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTerminationStatus )( 
            IFillInfo __RPC_FAR * This,
            /* [out] */ DWORD __RPC_FAR *pdwFlags);
        
        END_INTERFACE
    } IFillInfoVtbl;

    interface IFillInfo
    {
        CONST_VTBL struct IFillInfoVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFillInfo_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IFillInfo_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IFillInfo_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IFillInfo_GetFailureInfo(This,pulWaterMark,pulFailurePoint)	\
    (This)->lpVtbl -> GetFailureInfo(This,pulWaterMark,pulFailurePoint)

#define IFillInfo_GetTerminationStatus(This,pdwFlags)	\
    (This)->lpVtbl -> GetTerminationStatus(This,pdwFlags)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IFillInfo_GetFailureInfo_Proxy( 
    IFillInfo __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pulWaterMark,
    /* [out] */ ULONG __RPC_FAR *pulFailurePoint);


void __RPC_STUB IFillInfo_GetFailureInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IFillInfo_GetTerminationStatus_Proxy( 
    IFillInfo __RPC_FAR * This,
    /* [out] */ DWORD __RPC_FAR *pdwFlags);


void __RPC_STUB IFillInfo_GetTerminationStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IFillInfo_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
