/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:50:08 2019
 */
/* Compiler settings for ..\getif.idl:
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

#ifndef __getif_h__
#define __getif_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IInterfaceFromWindowProp_FWD_DEFINED__
#define __IInterfaceFromWindowProp_FWD_DEFINED__
typedef interface IInterfaceFromWindowProp IInterfaceFromWindowProp;
#endif 	/* __IInterfaceFromWindowProp_FWD_DEFINED__ */


/* header files for imported files */
#include "iface.h"
#include "unknwn.h"
#include "objidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IInterfaceFromWindowProp_INTERFACE_DEFINED__
#define __IInterfaceFromWindowProp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IInterfaceFromWindowProp
 * at Sat Oct 19 00:50:08 2019
 * using MIDL 3.00.44
 ****************************************/
/* [object][unique][version][uuid] */ 



EXTERN_C const IID IID_IInterfaceFromWindowProp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IInterfaceFromWindowProp : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInterfaceFromWindowProp( 
            /* [in] */ DWORD hWnd,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk,
            /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PrivDragDrop( 
            /* [in] */ DWORD hWnd,
            /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
            /* [in] */ DWORD dop,
            /* [in] */ DWORD grfKeyState,
            /* [in] */ POINTL pt,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwEffect,
            /* [in] */ DWORD dwSmId,
            /* [in] */ IDataObject __RPC_FAR *pRealDataObject,
            /* [in] */ DWORD hwndSource) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IInterfaceFromWindowPropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IInterfaceFromWindowProp __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IInterfaceFromWindowProp __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IInterfaceFromWindowProp __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetInterfaceFromWindowProp )( 
            IInterfaceFromWindowProp __RPC_FAR * This,
            /* [in] */ DWORD hWnd,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk,
            /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *PrivDragDrop )( 
            IInterfaceFromWindowProp __RPC_FAR * This,
            /* [in] */ DWORD hWnd,
            /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
            /* [in] */ DWORD dop,
            /* [in] */ DWORD grfKeyState,
            /* [in] */ POINTL pt,
            /* [unique][out][in] */ DWORD __RPC_FAR *pdwEffect,
            /* [in] */ DWORD dwSmId,
            /* [in] */ IDataObject __RPC_FAR *pRealDataObject,
            /* [in] */ DWORD hwndSource);
        
        END_INTERFACE
    } IInterfaceFromWindowPropVtbl;

    interface IInterfaceFromWindowProp
    {
        CONST_VTBL struct IInterfaceFromWindowPropVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInterfaceFromWindowProp_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IInterfaceFromWindowProp_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IInterfaceFromWindowProp_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IInterfaceFromWindowProp_GetInterfaceFromWindowProp(This,hWnd,riid,ppunk,pwszPropertyName)	\
    (This)->lpVtbl -> GetInterfaceFromWindowProp(This,hWnd,riid,ppunk,pwszPropertyName)

#define IInterfaceFromWindowProp_PrivDragDrop(This,hWnd,pIFDDataObject,dop,grfKeyState,pt,pdwEffect,dwSmId,pRealDataObject,hwndSource)	\
    (This)->lpVtbl -> PrivDragDrop(This,hWnd,pIFDDataObject,dop,grfKeyState,pt,pdwEffect,dwSmId,pRealDataObject,hwndSource)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IInterfaceFromWindowProp_GetInterfaceFromWindowProp_Proxy( 
    IInterfaceFromWindowProp __RPC_FAR * This,
    /* [in] */ DWORD hWnd,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppunk,
    /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName);


void __RPC_STUB IInterfaceFromWindowProp_GetInterfaceFromWindowProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IInterfaceFromWindowProp_PrivDragDrop_Proxy( 
    IInterfaceFromWindowProp __RPC_FAR * This,
    /* [in] */ DWORD hWnd,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
    /* [in] */ DWORD dop,
    /* [in] */ DWORD grfKeyState,
    /* [in] */ POINTL pt,
    /* [unique][out][in] */ DWORD __RPC_FAR *pdwEffect,
    /* [in] */ DWORD dwSmId,
    /* [in] */ IDataObject __RPC_FAR *pRealDataObject,
    /* [in] */ DWORD hwndSource);


void __RPC_STUB IInterfaceFromWindowProp_PrivDragDrop_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IInterfaceFromWindowProp_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
