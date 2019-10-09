/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 22:42:06 2019
 */
/* Compiler settings for .\regrpc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __regrpc_h__
#define __regrpc_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __winreg_INTERFACE_DEFINED__
#define __winreg_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: winreg
 * at Tue Oct 08 22:42:06 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][version][ms_union][unique][uuid] */ 


typedef /* [context_handle] */ HKEY RPC_HKEY;

typedef RPC_HKEY __RPC_FAR *PRPC_HKEY;

typedef /* [handle] */ PWCHAR PREGISTRY_SERVER_NAME;

typedef struct  _RPC_SECURITY_DESCRIPTOR
    {
    /* [length_is][size_is] */ PBYTE lpSecurityDescriptor;
    DWORD cbInSecurityDescriptor;
    DWORD cbOutSecurityDescriptor;
    }	RPC_SECURITY_DESCRIPTOR;

typedef struct _RPC_SECURITY_DESCRIPTOR __RPC_FAR *PRPC_SECURITY_DESCRIPTOR;

typedef struct  _RPC_SECURITY_ATTRIBUTES
    {
    DWORD nLength;
    RPC_SECURITY_DESCRIPTOR RpcSecurityDescriptor;
    BOOLEAN bInheritHandle;
    }	RPC_SECURITY_ATTRIBUTES;

typedef struct _RPC_SECURITY_ATTRIBUTES __RPC_FAR *PRPC_SECURITY_ATTRIBUTES;

/* [local] */ LONG ClosePredefinedHandle( 
    /* [in] */ RPC_HKEY Handle);

/* [local] */ BOOL CleanupPredefinedHandles( void);

/* [local] */ BOOL InitializeWinreg( void);

/* [local] */ RPC_HKEY MapPredefinedHandle( 
    /* [in] */ RPC_HKEY Handle);

/* [local] */ LONG MapSAToRpcSA( 
    /* [in] */ LPSECURITY_ATTRIBUTES lpSA,
    /* [out] */ PRPC_SECURITY_ATTRIBUTES pRpcSA);

/* [local] */ LONG MapSDToRpcSD( 
    /* [in] */ PSECURITY_DESCRIPTOR lpSD,
    /* [out][in] */ PRPC_SECURITY_DESCRIPTOR pRpcSD);

/* [local] */ LONG OpenPredefinedKeyForSpecialAccess( 
    /* [in] */ RPC_HKEY Handle,
    /* [in] */ REGSAM AccessMask,
    /* [out] */ PRPC_HKEY pKey);

/* [local] */ LONG PerfRegCloseKey( 
    /* [out][in] */ PRPC_HKEY hKey);

/* [local] */ LONG PerfRegEnumKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpName,
    /* [unique][out][in] */ LPDWORD lpReserved,
    /* [unique][out][in] */ PUNICODE_STRING lpClass,
    /* [unique][out][in] */ PFILETIME lpftLastWriteTime);

/* [local] */ LONG PerfRegQueryInfoKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [out][in] */ PUNICODE_STRING lpClass,
    /* [unique][out][in] */ LPDWORD lpReserved,
    /* [out] */ LPDWORD lpcSubKeys,
    /* [out] */ LPDWORD lpcbMaxSubKeyLen,
    /* [out] */ LPDWORD lpcbMaxClassLen,
    /* [out] */ LPDWORD lpcValues,
    /* [out] */ LPDWORD lpcbMaxValueNameLen,
    /* [out] */ LPDWORD lpcbMaxValueLen,
    /* [out] */ LPDWORD lpcbSecurityDescriptor,
    /* [out] */ PFILETIME lpftLastWriteTime);

/* [local] */ LONG PerfRegQueryValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpReserved,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [local] */ LONG PerfRegSetValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ LPWSTR lpValueName,
    /* [in] */ DWORD Reserved,
    /* [in] */ DWORD dwType,
    /* [size_is][in] */ LPBYTE lpData,
    /* [in] */ DWORD cbData);

/* [local] */ LONG PerfRegEnumValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpReserved,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [local] */ BOOL MakeSemiUniqueName( 
    /* [out] */ PUNICODE_STRING Name,
    /* [in] */ DWORD Sequence);

/* [local] */ BOOL InitializeRegNotifyChangeKeyValue( void);

/* [local] */ BOOL CleanDeadClientInfo( 
    HKEY hKey);

/* [local] */ BOOL CleanupRegNotifyChangeKeyValue( void);

/* [local] */ error_status_t LocalOpenClassesRoot( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenCurrentUser( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenLocalMachine( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenUsers( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenPerformanceData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenCurrentConfig( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalOpenDynData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [local] */ error_status_t LocalBaseRegCloseKey( 
    /* [out][in] */ PRPC_HKEY hKey);

/* [local] */ error_status_t LocalBaseRegCreateKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpClass,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES lpSecurityAttributes,
    /* [out] */ PRPC_HKEY phkResult,
    /* [unique][out][in] */ LPDWORD lpdwDisposition);

/* [local] */ error_status_t LocalBaseRegDeleteKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey);

/* [local] */ error_status_t LocalBaseRegDeleteValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName);

/* [local] */ error_status_t LocalBaseRegEnumKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpName,
    /* [unique][out][in] */ PUNICODE_STRING lpClass,
    /* [unique][out][in] */ PFILETIME lpftLastWriteTime);

/* [local] */ error_status_t LocalBaseRegEnumValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [local] */ error_status_t LocalBaseRegFlushKey( 
    /* [in] */ RPC_HKEY hKey);

/* [local] */ error_status_t LocalBaseRegGetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out][in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor);

/* [local] */ error_status_t LocalBaseRegLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpFile);

/* [local] */ error_status_t LocalBaseRegNotifyChangeKeyValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ BOOLEAN bWatchSubtree,
    /* [in] */ DWORD dwNotifyFilter,
    /* [in] */ DWORD hEvent,
    /* [in] */ PUNICODE_STRING MachineName,
    /* [in] */ PUNICODE_STRING PipeName,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pRpcSecurityAttributes);

/* [local] */ error_status_t LocalBaseRegOpenKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phkResult);

/* [local] */ error_status_t LocalBaseRegQueryInfoKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [out][in] */ PUNICODE_STRING lpClass,
    /* [out] */ LPDWORD lpcSubKeys,
    /* [out] */ LPDWORD lpcbMaxSubKeyLen,
    /* [out] */ LPDWORD lpcbMaxClassLen,
    /* [out] */ LPDWORD lpcValues,
    /* [out] */ LPDWORD lpcbMaxValueNameLen,
    /* [out] */ LPDWORD lpcbMaxValueLen,
    /* [out] */ LPDWORD lpcbSecurityDescriptor,
    /* [out] */ PFILETIME lpftLastWriteTime);

/* [local] */ error_status_t LocalBaseRegQueryValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [local] */ error_status_t LocalBaseRegQueryMultipleValues( 
    /* [in] */ RPC_HKEY hKey,
    /* [length_is][size_is][out][in] */ PRVALENT val_list,
    /* [in] */ DWORD num_vals,
    /* [length_is][size_is][unique][out][in] */ LPSTR lpvalueBuf,
    /* [ref][out][in] */ LPDWORD ldwTotsize);

/* [local] */ error_status_t LocalBaseRegReplaceKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpNewFile,
    /* [in] */ PUNICODE_STRING lpOldFile);

/* [local] */ error_status_t LocalBaseRegRestoreKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [in] */ DWORD Flags);

/* [local] */ error_status_t LocalBaseRegSaveKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pSecurityAttributes);

/* [local] */ error_status_t LocalBaseRegSetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor);

/* [local] */ error_status_t LocalBaseRegSetValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [in] */ DWORD dwType,
    /* [size_is][in] */ LPBYTE lpData,
    /* [in] */ DWORD cbData);

/* [local] */ error_status_t LocalBaseRegUnLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey);

/* [fault_status][comm_status] */ error_status_t OpenClassesRoot( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t OpenCurrentUser( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t OpenLocalMachine( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t OpenPerformanceData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t OpenUsers( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t BaseRegCloseKey( 
    /* [out][in] */ PRPC_HKEY hKey);

/* [fault_status][comm_status] */ error_status_t BaseRegCreateKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpClass,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES lpSecurityAttributes,
    /* [out] */ PRPC_HKEY phkResult,
    /* [unique][out][in] */ LPDWORD lpdwDisposition);

/* [fault_status][comm_status] */ error_status_t BaseRegDeleteKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey);

/* [fault_status][comm_status] */ error_status_t BaseRegDeleteValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName);

/* [fault_status][comm_status] */ error_status_t BaseRegEnumKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpName,
    /* [unique][out][in] */ PUNICODE_STRING lpClass,
    /* [unique][out][in] */ PFILETIME lpftLastWriteTime);

/* [fault_status][comm_status] */ error_status_t BaseRegEnumValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [fault_status][comm_status] */ error_status_t BaseRegFlushKey( 
    /* [in] */ RPC_HKEY hKey);

/* [fault_status][comm_status] */ error_status_t BaseRegGetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out][in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor);

/* [fault_status][comm_status] */ error_status_t BaseRegLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpFile);

/* [fault_status][comm_status] */ error_status_t BaseRegNotifyChangeKeyValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ BOOLEAN bWatchSubtree,
    /* [in] */ DWORD dwNotifyFilter,
    /* [in] */ DWORD hEvent,
    /* [in] */ PUNICODE_STRING MachineName,
    /* [in] */ PUNICODE_STRING PipeName,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pRpcSecurityAttributes);

/* [fault_status][comm_status] */ error_status_t BaseRegOpenKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phkResult);

/* [fault_status][comm_status] */ error_status_t BaseRegQueryInfoKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [out][in] */ PUNICODE_STRING lpClass,
    /* [out] */ LPDWORD lpcSubKeys,
    /* [out] */ LPDWORD lpcbMaxSubKeyLen,
    /* [out] */ LPDWORD lpcbMaxClassLen,
    /* [out] */ LPDWORD lpcValues,
    /* [out] */ LPDWORD lpcbMaxValueNameLen,
    /* [out] */ LPDWORD lpcbMaxValueLen,
    /* [out] */ LPDWORD lpcbSecurityDescriptor,
    /* [out] */ PFILETIME lpftLastWriteTime);

/* [fault_status][comm_status] */ error_status_t BaseRegQueryValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen);

/* [fault_status][comm_status] */ error_status_t BaseRegReplaceKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpNewFile,
    /* [in] */ PUNICODE_STRING lpOldFile);

/* [fault_status][comm_status] */ error_status_t BaseRegRestoreKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [in] */ DWORD Flags);

/* [fault_status][comm_status] */ error_status_t BaseRegSaveKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pSecurityAttributes);

/* [fault_status][comm_status] */ error_status_t BaseRegSetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor);

/* [fault_status][comm_status] */ error_status_t BaseRegSetValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [in] */ DWORD dwType,
    /* [size_is][in] */ LPBYTE lpData,
    /* [in] */ DWORD cbData);

/* [fault_status][comm_status] */ error_status_t BaseRegUnLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey);

ULONG BaseInitiateSystemShutdown( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [unique][in] */ PUNICODE_STRING lpMessage,
    /* [in] */ DWORD dwTimeout,
    /* [in] */ BOOLEAN bForceAppsClosed,
    /* [in] */ BOOLEAN bRebootAfterShutdown);

ULONG BaseAbortSystemShutdown( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName);

/* [fault_status][comm_status] */ error_status_t BaseRegGetVersion( 
    /* [in] */ RPC_HKEY hKey,
    /* [out] */ LPDWORD lpdwVersion);

/* [fault_status][comm_status] */ error_status_t OpenCurrentConfig( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t OpenDynData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey);

/* [fault_status][comm_status] */ error_status_t BaseRegQueryMultipleValues( 
    /* [in] */ RPC_HKEY hKey,
    /* [length_is][size_is][out][in] */ PRVALENT val_list,
    /* [in] */ DWORD num_vals,
    /* [length_is][size_is][unique][out][in] */ LPSTR lpvalueBuf,
    /* [ref][out][in] */ LPDWORD ldwTotsize);


extern handle_t winreg_bhandle;


extern RPC_IF_HANDLE winreg_ClientIfHandle;
extern RPC_IF_HANDLE winreg_ServerIfHandle;
#endif /* __winreg_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER PREGISTRY_SERVER_NAME_bind  ( PREGISTRY_SERVER_NAME );
void     __RPC_USER PREGISTRY_SERVER_NAME_unbind( PREGISTRY_SERVER_NAME, handle_t );

void __RPC_USER RPC_HKEY_rundown( RPC_HKEY );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
