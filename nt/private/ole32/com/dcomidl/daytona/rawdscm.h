/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:43 2019
 */
/* Compiler settings for ..\dscm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __rawdscm_h__
#define __rawdscm_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

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
 * at Tue Oct 08 23:37:43 2019
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][unique][version][uuid] */ 


/* client prototype */
HRESULT _DummyQueryInterfaceIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);
/* server prototype */
HRESULT DummyQueryInterfaceIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

/* client prototype */
HRESULT _DummyAddRefIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);
/* server prototype */
HRESULT DummyAddRefIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

/* client prototype */
HRESULT _DummyReleaseIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);
/* server prototype */
HRESULT DummyReleaseIDSCM( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy);

typedef struct  _ACTIVATION_INFO
    {
    const GUID __RPC_FAR *Clsid;
    COSERVERINFO __RPC_FAR *pServerInfo;
    /* [string] */ WCHAR __RPC_FAR *pwszWinstaDesktop;
    DWORD ClsContext;
    DWORD ProcessSignature;
    BOOL bDynamicSecurity;
    }	ACTIVATION_INFO;

/* client prototype */
HRESULT _SCMGetClassObject( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ long Apartment,
    /* [out] */ OXID __RPC_FAR *pOxidServer,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIDClassFactory);
/* server prototype */
HRESULT SCMGetClassObject( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ ACTIVATION_INFO __RPC_FAR *pActivationInfo,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ long Apartment,
    /* [out] */ OXID __RPC_FAR *pOxidServer,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppServerORBindings,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ MID __RPC_FAR *pLocalMidOfRemote,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIDClassFactory);

/* client prototype */
HRESULT _SCMCreateInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
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
/* server prototype */
HRESULT SCMCreateInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
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

/* client prototype */
HRESULT _SCMGetPersistentInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
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
/* server prototype */
HRESULT SCMGetPersistentInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
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



extern RPC_IF_HANDLE _IDSCM_ClientIfHandle;
extern RPC_IF_HANDLE IDSCM_ClientIfHandle;
extern RPC_IF_HANDLE IDSCM_ServerIfHandle;
#endif /* __IDSCM_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
