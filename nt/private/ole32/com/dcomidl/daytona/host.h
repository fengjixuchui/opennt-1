/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:36 2019
 */
/* Compiler settings for ..\host.idl:
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

#ifndef __host_h__
#define __host_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IDLLHost_FWD_DEFINED__
#define __IDLLHost_FWD_DEFINED__
typedef interface IDLLHost IDLLHost;
#endif 	/* __IDLLHost_FWD_DEFINED__ */


/* header files for imported files */
#include "iface.h"
#include "unknwn.h"
#include "objidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IDLLHost_INTERFACE_DEFINED__
#define __IDLLHost_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IDLLHost
 * at Tue Oct 08 23:37:36 2019
 * using MIDL 3.00.44
 ****************************************/
/* [object][unique][uuid] */ 



EXTERN_C const IID IID_IDLLHost;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IDLLHost : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DllGetClassObject( 
            /* [in] */ DWORD pfnGetClassObject,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IDLLHostVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IDLLHost __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IDLLHost __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IDLLHost __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *DllGetClassObject )( 
            IDLLHost __RPC_FAR * This,
            /* [in] */ DWORD pfnGetClassObject,
            /* [in] */ REFCLSID rclsid,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);
        
        END_INTERFACE
    } IDLLHostVtbl;

    interface IDLLHost
    {
        CONST_VTBL struct IDLLHostVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDLLHost_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IDLLHost_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IDLLHost_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IDLLHost_DllGetClassObject(This,pfnGetClassObject,rclsid,riid,ppunk)	\
    (This)->lpVtbl -> DllGetClassObject(This,pfnGetClassObject,rclsid,riid,ppunk)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IDLLHost_DllGetClassObject_Proxy( 
    IDLLHost __RPC_FAR * This,
    /* [in] */ DWORD pfnGetClassObject,
    /* [in] */ REFCLSID rclsid,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk);


void __RPC_STUB IDLLHost_DllGetClassObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDLLHost_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
