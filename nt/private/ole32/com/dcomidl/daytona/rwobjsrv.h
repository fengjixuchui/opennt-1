/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:25 2019
 */
/* Compiler settings for ..\objsrv.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __rwobjsrv_h__
#define __rwobjsrv_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"
#include "obase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IObjServer_INTERFACE_DEFINED__
#define __IObjServer_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IObjServer
 * at Sun Oct 13 05:05:25 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


HRESULT DummyQueryInterfaceIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

HRESULT DummyAddRefIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

HRESULT DummyReleaseIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

typedef error_status_t STATUSTYPE;

HRESULT ObjectServerGetClassObject( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ BOOL fSurrogate,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus);

HRESULT ObjectServerCreateInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus);

HRESULT ObjectServerGetInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Mode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDROT,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus);

HRESULT ObjectServerLoadDll( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus);


extern handle_t any_handle;


extern RPC_IF_HANDLE IObjServer_ClientIfHandle;
extern RPC_IF_HANDLE IObjServer_ServerIfHandle;
#endif /* __IObjServer_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
