/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:37 2020
 */
/* Compiler settings for ..\scm.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __scm_h__
#define __scm_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ISCM_INTERFACE_DEFINED__
#define __ISCM_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: ISCM
 * at Sun Mar 15 01:24:37 2020
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


 
//-----------------
// SUCCESS HRESULTS
//-----------------
#define SCM_S_SUCCESS                 0
#define SCM_S_HANDLER                 1
#define SCM_S_INPROCSERVER            2
#define SCM_S_HANDLER16               3
#define SCM_S_INPROCSERVER16          4
 
 
//---------------------------------
// Internal DLL Thread Model Values
//---------------------------------
#define APT_THREADED                  0
#define FREE_THREADED                 1
#define SINGLE_THREADED               2
#define BOTH_THREADED                 3
#define GOT_FROM_ROT                  0x80000000
 
 
//-------------------------------------------------
// Internal CLSCTX used for loading Proxy/Stub DLLs
//-------------------------------------------------
#define CLSCTX_PS_DLL                 0x80000000
 
typedef struct  _RegOutputEnt
    {
    DWORD dwReg;
    DWORD dwAtStorage;
    }	RegOutputEnt;

typedef struct  _RegOutput
    {
    DWORD dwSize;
    /* [size_is] */ RegOutputEnt regoutent[ 1 ];
    }	RegOutput;

typedef struct  _RegInputEntry
    {
    CLSID clsid;
    /* [string][ref] */ WCHAR __RPC_FAR *pwszEndPoint;
    DWORD dwFlags;
    }	RegInputEntry;

typedef struct  _RegInput
    {
    DWORD dwSize;
    /* [size_is] */ RegInputEntry rginent[ 1 ];
    }	RegInput;

typedef struct  _RevokeEntry
    {
    CLSID clsid;
    DWORD dwReg;
    }	RevokeEntry;

typedef struct  _RevokeClasses
    {
    DWORD dwSize;
    /* [size_is] */ RevokeEntry revent[ 1 ];
    }	RevokeClasses;

/* client prototype */
HRESULT _StartObjectService( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwCtrl,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServer,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDClassObj,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *ppwszDllToLoad,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT StartObjectService( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwCtrl,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServer,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDClassObj,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *ppwszDllToLoad,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _SvcActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwOptions,
    /* [in] */ DWORD grfMode,
    /* [in] */ DWORD dwHash,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServerAddress,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT SvcActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwOptions,
    /* [in] */ DWORD grfMode,
    /* [in] */ DWORD dwHash,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServerAddress,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _SvcCreateActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwOptions,
    /* [in] */ DWORD dwMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszNewName,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServerAddress,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT SvcCreateActivateObject( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD dwOptions,
    /* [in] */ DWORD dwMode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDstg,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszNewName,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [out][in] */ DWORD __RPC_FAR *pdwDllServerType,
    /* [string][out] */ WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszServerAddress,
    /* [in] */ DWORD dwTIDCaller,
    /* [out][in] */ DWORD __RPC_FAR *pdwTIDCallee,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _ObjectServerStarted( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [in] */ RegInput __RPC_FAR *pregin,
    /* [out] */ RegOutput __RPC_FAR *__RPC_FAR *ppregout,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT ObjectServerStarted( 
    /* [in] */ handle_t hRpc,
    /* [unique][string][in] */ WCHAR __RPC_FAR *lpDesktop,
    /* [in] */ RegInput __RPC_FAR *pregin,
    /* [out] */ RegOutput __RPC_FAR *__RPC_FAR *ppregout,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
void _StopServer( 
    /* [in] */ handle_t hRpc,
    /* [in] */ RevokeClasses __RPC_FAR *prevcls,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
void StopServer( 
    /* [in] */ handle_t hRpc,
    /* [in] */ RevokeClasses __RPC_FAR *prevcls,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
DWORD _ScmSetInfoLevel( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwNewFlags,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
DWORD ScmSetInfoLevel( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD dwNewFlags,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _UpdateShrdTbls( 
    /* [in] */ handle_t hRpc,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT UpdateShrdTbls( 
    /* [in] */ handle_t hRpc,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE _ISCM_ClientIfHandle;
extern RPC_IF_HANDLE ISCM_ClientIfHandle;
extern RPC_IF_HANDLE ISCM_ServerIfHandle;
#endif /* __ISCM_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
