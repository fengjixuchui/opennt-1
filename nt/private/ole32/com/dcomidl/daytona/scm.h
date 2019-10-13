/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:26 2019
 */
/* Compiler settings for ..\scm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
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
#include "obase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ISCM_INTERFACE_DEFINED__
#define __ISCM_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: ISCM
 * at Sun Oct 13 05:05:26 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef /* [context_handle] */ void __RPC_FAR *PHPROCESS;

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
    OXID oxid;
    IPID ipid;
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
HRESULT _ServerRegisterClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pWinstaDesktop,
    /* [in] */ RegInput __RPC_FAR *pregin,
    /* [out] */ RegOutput __RPC_FAR *__RPC_FAR *ppregout,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT ServerRegisterClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pWinstaDesktop,
    /* [in] */ RegInput __RPC_FAR *pregin,
    /* [out] */ RegOutput __RPC_FAR *__RPC_FAR *ppregout,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
void _ServerRevokeClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [in] */ RevokeClasses __RPC_FAR *prevcls,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
void ServerRevokeClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [in] */ RevokeClasses __RPC_FAR *prevcls,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
void _GetThreadID( 
    /* [in] */ handle_t hRpc,
    /* [out] */ DWORD __RPC_FAR *pThreadID,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
void GetThreadID( 
    /* [in] */ handle_t hRpc,
    /* [out] */ DWORD __RPC_FAR *pThreadID,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _UpdateShrdTbls( 
    /* [in] */ handle_t hRpc,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT UpdateShrdTbls( 
    /* [in] */ handle_t hRpc,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
void _UpdateActivationSettings( 
    /* [in] */ handle_t hRpc,
    /* [out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
void UpdateActivationSettings( 
    /* [in] */ handle_t hRpc,
    /* [out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _RegisterWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ STDOBJREF __RPC_FAR *pStd,
    /* [in] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ DWORD __RPC_FAR *pdwCookie,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT RegisterWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ STDOBJREF __RPC_FAR *pStd,
    /* [in] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ DWORD __RPC_FAR *pdwCookie,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _GetWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ DWORD dwCookie,
    /* [in] */ BOOL fRevoke,
    /* [out] */ STDOBJREF __RPC_FAR *pStd,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT GetWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ DWORD dwCookie,
    /* [in] */ BOOL fRevoke,
    /* [out] */ STDOBJREF __RPC_FAR *pStd,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE _ISCM_ClientIfHandle;
extern RPC_IF_HANDLE ISCM_ClientIfHandle;
extern RPC_IF_HANDLE ISCM_ServerIfHandle;
#endif /* __ISCM_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PHPROCESS_rundown( PHPROCESS );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
