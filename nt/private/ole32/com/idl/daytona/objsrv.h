/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:23 2019
 */
/* Compiler settings for ..\objsrv.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __objsrv_h__
#define __objsrv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IObjServer_INTERFACE_DEFINED__
#define __IObjServer_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IObjServer
 * at Sun Oct 13 05:05:23 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


/* client prototype */
HRESULT _RemCoGetActiveClassObject( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RemCoGetActiveClassObject( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _RemCoActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD grfMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDFromROT,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RemCoActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD grfMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDFromROT,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _RemCoCreateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD grfMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPathFrom,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstgFrom,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RemCoCreateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD grfMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPathFrom,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstgFrom,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE _IObjServer_ClientIfHandle;
extern RPC_IF_HANDLE IObjServer_ClientIfHandle;
extern RPC_IF_HANDLE IObjServer_ServerIfHandle;
#endif /* __IObjServer_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
