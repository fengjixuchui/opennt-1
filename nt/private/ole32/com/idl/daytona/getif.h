/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:50:07 2019
 */
/* Compiler settings for ..\getif.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __getif_h__
#define __getif_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IInterfaceFromWindowProp_INTERFACE_DEFINED__
#define __IInterfaceFromWindowProp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IInterfaceFromWindowProp
 * at Sat Oct 19 00:50:07 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


/* client prototype */
HRESULT _RemGetInterfaceFromWindowProp( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *pguidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [in] */ const GUID __RPC_FAR *riid,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RemGetInterfaceFromWindowProp( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *pguidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [in] */ const GUID __RPC_FAR *riid,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _RemPrivDragDrop( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
    /* [in] */ DWORD dop,
    /* [in] */ DWORD grfKeyState,
    /* [in] */ POINTL pt,
    /* [out][in] */ DWORD __RPC_FAR *pdwEffect,
    /* [out] */ HRESULT __RPC_FAR *phrDragOp,
    /* [in] */ DWORD dwSmId,
    /* [in] */ DWORD hwndSource,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RemPrivDragDrop( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
    /* [in] */ DWORD dop,
    /* [in] */ DWORD grfKeyState,
    /* [in] */ POINTL pt,
    /* [out][in] */ DWORD __RPC_FAR *pdwEffect,
    /* [out] */ HRESULT __RPC_FAR *phrDragOp,
    /* [in] */ DWORD dwSmId,
    /* [in] */ DWORD hwndSource,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE _IInterfaceFromWindowProp_ClientIfHandle;
extern RPC_IF_HANDLE IInterfaceFromWindowProp_ClientIfHandle;
extern RPC_IF_HANDLE IInterfaceFromWindowProp_ServerIfHandle;
#endif /* __IInterfaceFromWindowProp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
