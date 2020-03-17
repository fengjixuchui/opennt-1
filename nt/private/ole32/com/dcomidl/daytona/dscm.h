/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:39 2020
 */
/* Compiler settings for ..\dscm.idl:
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

#ifndef __dscm_h__
#define __dscm_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IDSCM_FWD_DEFINED__
#define __IDSCM_FWD_DEFINED__
typedef interface IDSCM IDSCM;
#endif 	/* __IDSCM_FWD_DEFINED__ */


/* header files for imported files */
#include "iface.h"
#include "objidl.h"
#include "obase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IDSCM_INTERFACE_DEFINED__
#define __IDSCM_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IDSCM
 * at Sun Mar 15 01:24:39 2020
 * using MIDL 3.00.44
 ****************************************/
/* [object][unique][version][uuid] */ 


typedef struct  _ACTIVATION_INFO
    {
    const GUID __RPC_FAR *Clsid;
    COSERVERINFO __RPC_FAR *pServerInfo;
    /* [string] */ WCHAR __RPC_FAR *pwszWinstaDesktop;
    DWORD ClsContext;
    DWORD ProcessSignature;
    BOOL bDynamicSecurity;
    }	ACTIVATION_INFO;


EXTERN_C const IID IID_IDSCM;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IDSCM : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SCMGetClassObject( 
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [in] */ IID __RPC_FAR *pIID,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIDClassFactory) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SCMCreateInstance( 
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SCMGetPersistentInstance( 
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
            /* [in] */ DWORD FileMode,
            /* [in] */ BOOL FileWasOpened,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [out] */ BOOL __RPC_FAR *pFoundInROT,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDSCMVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDSCM __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDSCM __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDSCM __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SCMGetClassObject )( 
            IDSCM __RPC_FAR * This,
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [in] */ IID __RPC_FAR *pIID,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIDClassFactory);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SCMCreateInstance )( 
            IDSCM __RPC_FAR * This,
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SCMGetPersistentInstance )( 
            IDSCM __RPC_FAR * This,
            /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
            /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
            /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
            /* [in] */ DWORD FileMode,
            /* [in] */ BOOL FileWasOpened,
            /* [in] */ DWORD Interfaces,
            /* [size_is][in] */ IID __RPC_FAR *pIIDs,
            /* [in] */ long Apartment,
            /* [out] */ OXID __RPC_FAR *pOxidServer,
            /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
            /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
            /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
            /* [out] */ BOOL __RPC_FAR *pFoundInROT,
            /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
            /* [size_is][out] */ HRESULT __RPC_FAR *pResults);
        
        END_INTERFACE
    } IDSCMVtbl;

    interface IDSCM
    {
        CONST_VTBL struct IDSCMVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDSCM_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDSCM_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDSCM_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDSCM_SCMGetClassObject(This,pActivationInfo,pIID,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,ppIDClassFactory)	\
    (This)->lpVtbl -> SCMGetClassObject(This,pActivationInfo,pIID,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,ppIDClassFactory)

#define IDSCM_SCMCreateInstance(This,pActivationInfo,Interfaces,pIIDs,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,ppInterfaceData,pResults)	\
    (This)->lpVtbl -> SCMCreateInstance(This,pActivationInfo,Interfaces,pIIDs,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,ppInterfaceData,pResults)

#define IDSCM_SCMGetPersistentInstance(This,pActivationInfo,pwszPath,pIFDStorage,FileMode,FileWasOpened,Interfaces,pIIDs,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,pFoundInROT,ppInterfaceData,pResults)	\
    (This)->lpVtbl -> SCMGetPersistentInstance(This,pActivationInfo,pwszPath,pIFDStorage,FileMode,FileWasOpened,Interfaces,pIIDs,Apartment,pOxidServer,ppServerORBindings,pOxidInfo,pLocalMidOfRemote,pFoundInROT,ppInterfaceData,pResults)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDSCM_SCMGetClassObject_Proxy( 
    IDSCM __RPC_FAR * This,
    /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ long Apartment,
    /* [out] */ OXID __RPC_FAR *pOxidServer,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIDClassFactory);


void __RPC_STUB IDSCM_SCMGetClassObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDSCM_SCMCreateInstance_Proxy( 
    IDSCM __RPC_FAR * This,
    /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [in] */ long Apartment,
    /* [out] */ OXID __RPC_FAR *pOxidServer,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults);


void __RPC_STUB IDSCM_SCMCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IDSCM_SCMGetPersistentInstance_Proxy( 
    IDSCM __RPC_FAR * This,
    /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
    /* [in] */ DWORD FileMode,
    /* [in] */ BOOL FileWasOpened,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [in] */ long Apartment,
    /* [out] */ OXID __RPC_FAR *pOxidServer,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
    /* [out] */ BOOL __RPC_FAR *pFoundInROT,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults);


void __RPC_STUB IDSCM_SCMGetPersistentInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDSCM_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
