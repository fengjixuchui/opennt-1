/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:07 2019
 */
/* Compiler settings for ..\irot.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __irot_h__
#define __irot_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IROT_INTERFACE_DEFINED__
#define __IROT_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IROT
 * at Thu Oct 17 18:16:07 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


 
//------------------------
// Invalid Key for SCM Reg
//------------------------
#define SCMREG_INVALID_ENTRY_LOC                0xFFFFFFFF
 
typedef /* [context_handle] */ void __RPC_FAR *PHPROCESS;

typedef struct  _SCMREGKEY
    {
    DWORD dwEntryLoc;
    DWORD dwScmId;
    }	SCMREGKEY;

typedef struct  _MnkEqBuf
    {
    DWORD cdwSize;
    /* [size_is] */ BYTE abEqData[ 1 ];
    }	MNKEQBUF;

typedef struct  _MkInterfaceList
    {
    DWORD dwSize;
    /* [size_is] */ InterfaceData __RPC_FAR *apIFDList[ 1 ];
    }	MkInterfaceList;

HRESULT IrotRegister( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszWinstaDesktop,
    /* [in] */ MNKEQBUF __RPC_FAR *pmkeqbuf,
    /* [in] */ InterfaceData __RPC_FAR *pifdObject,
    /* [in] */ InterfaceData __RPC_FAR *pifdObjectName,
    /* [in] */ FILETIME __RPC_FAR *pfiletime,
    /* [in] */ DWORD dwProcessId,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszServerExe,
    /* [out] */ SCMREGKEY __RPC_FAR *psrkRegister,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotRevoke( 
    /* [in] */ handle_t hRpc,
    /* [in] */ SCMREGKEY __RPC_FAR *psrkRegister,
    /* [in] */ BOOL fServerRevoke,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *pifdObject,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *pifdName,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotIsRunning( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszWinstaDesktop,
    /* [in] */ MNKEQBUF __RPC_FAR *pmkeqbuf,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotGetObject( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszWinstaDesktop,
    /* [in] */ DWORD dwProcessId,
    /* [in] */ MNKEQBUF __RPC_FAR *pmkeqbuf,
    /* [out] */ SCMREGKEY __RPC_FAR *psrkRegister,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *pifdObject,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotNoteChangeTime( 
    /* [in] */ handle_t hRpc,
    /* [in] */ SCMREGKEY __RPC_FAR *psrkRegister,
    /* [in] */ FILETIME __RPC_FAR *pfiletime,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotGetTimeOfLastChange( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszWinstaDesktop,
    /* [in] */ MNKEQBUF __RPC_FAR *pmkeqbuf,
    /* [out] */ FILETIME __RPC_FAR *pfiletime,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

HRESULT IrotEnumRunning( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [string][unique][in] */ WCHAR __RPC_FAR *pwszWinstaDesktop,
    /* [out] */ MkInterfaceList __RPC_FAR *__RPC_FAR *ppMkIFList,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE IROT_ClientIfHandle;
extern RPC_IF_HANDLE IROT_ServerIfHandle;
#endif /* __IROT_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PHPROCESS_rundown( PHPROCESS );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
