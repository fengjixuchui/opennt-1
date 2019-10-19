/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:10:21 2019
 */
/* Compiler settings for .\svcctl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __svcctl_h__
#define __svcctl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __svcctl_INTERFACE_DEFINED__
#define __svcctl_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: svcctl
 * at Sat Oct 19 00:10:21 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [handle] */ SERVICE_STATUS_HANDLE RPC_SERVICE_STATUS_HANDLE;

typedef /* [handle] */ wchar_t __RPC_FAR *SVCCTL_HANDLEW;

typedef /* [handle] */ LPSTR SVCCTL_HANDLEA;

typedef /* [context_handle] */ PVOID SC_RPC_HANDLE;

typedef /* [context_handle] */ PVOID SC_RPC_LOCK;

typedef SC_RPC_HANDLE __RPC_FAR *LPSC_RPC_HANDLE;

typedef SC_RPC_LOCK __RPC_FAR *LPSC_RPC_LOCK;

typedef struct  _STRING_PTRSA
    {
    /* [string] */ LPSTR StringPtr;
    }	STRING_PTRSA;

typedef struct _STRING_PTRSA __RPC_FAR *PSTRING_PTRSA;

typedef struct _STRING_PTRSA __RPC_FAR *LPSTRING_PTRSA;

typedef struct  _STRING_PTRSW
    {
    /* [string] */ wchar_t __RPC_FAR *StringPtr;
    }	STRING_PTRSW;

typedef struct _STRING_PTRSW __RPC_FAR *PSTRING_PTRSW;

typedef struct _STRING_PTRSW __RPC_FAR *LPSTRING_PTRSW;

DWORD RCloseServiceHandle( 
    /* [out][in] */ LPSC_RPC_HANDLE hSCObject);

DWORD RControlService( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwControl,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RDeleteService( 
    /* [in] */ SC_RPC_HANDLE hService);

DWORD RLockServiceDatabase( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [out] */ LPSC_RPC_LOCK lpLock);

DWORD RQueryServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][out] */ LPBYTE lpSecurityDescriptor,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RSetServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][in] */ LPBYTE lpSecurityDescriptor,
    /* [in] */ DWORD cbBufSize);

DWORD RQueryServiceStatus( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RSetServiceStatus( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ LPSERVICE_STATUS lpServiceStatus);

DWORD RUnlockServiceDatabase( 
    /* [out][in] */ LPSC_RPC_LOCK Lock);

DWORD RNotifyBootConfigStatus( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [in] */ DWORD BootAcceptable);

DWORD RI_ScSetServiceBitsW( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszTransportName);

DWORD RChangeServiceConfigW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpBinaryPathName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpDisplayName);

DWORD RCreateServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpDisplayName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [string][in] */ wchar_t __RPC_FAR *lpBinaryPathName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD REnumDependentServicesW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned);

DWORD REnumServicesStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex);

DWORD ROpenSCManagerW( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle);

DWORD ROpenServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD RQueryServiceConfigW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGW lpServiceConfig,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceLockStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RStartServiceW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSW argv);

DWORD RGetServiceDisplayNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [size_is][string][out] */ wchar_t __RPC_FAR *lpDisplayName,
    /* [out][in] */ LPDWORD lpcchBuffer);

DWORD RGetServiceKeyNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpDisplayName,
    /* [size_is][string][out] */ wchar_t __RPC_FAR *lpServiceName,
    /* [out][in] */ LPDWORD lpcchBuffer);

DWORD RI_ScSetServiceBitsA( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][out][in] */ LPSTR pszTransportName);

DWORD RChangeServiceConfigA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [unique][string][in] */ LPSTR lpBinaryPathName,
    /* [unique][string][in] */ LPSTR lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ LPSTR lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [unique][string][in] */ LPSTR lpDisplayName);

DWORD RCreateServiceA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [unique][string][in] */ LPSTR lpDisplayName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwStartType,
    /* [in] */ DWORD dwErrorControl,
    /* [string][in] */ LPSTR lpBinaryPathName,
    /* [unique][string][in] */ LPSTR lpLoadOrderGroup,
    /* [unique][out][in] */ LPDWORD lpdwTagId,
    /* [size_is][unique][in] */ LPBYTE lpDependencies,
    /* [in] */ DWORD dwDependSize,
    /* [unique][string][in] */ LPSTR lpServiceStartName,
    /* [size_is][unique][in] */ LPBYTE lpPassword,
    /* [in] */ DWORD dwPwSize,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD REnumDependentServicesA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned);

DWORD REnumServicesStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex);

DWORD ROpenSCManagerA( 
    /* [unique][string][in] */ SVCCTL_HANDLEA lpMachineName,
    /* [unique][string][in] */ LPSTR lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle);

DWORD ROpenServiceA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle);

DWORD RQueryServiceConfigA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGA lpServiceConfig,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RQueryServiceLockStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded);

DWORD RStartServiceA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSA argv);

DWORD RGetServiceDisplayNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [size_is][string][out] */ LPSTR lpDisplayName,
    /* [out][in] */ LPDWORD lpcchBuffer);

DWORD RGetServiceKeyNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpDisplayName,
    /* [size_is][string][out] */ LPSTR lpKeyName,
    /* [out][in] */ LPDWORD lpcchBuffer);

DWORD RI_ScGetCurrentGroupStateW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszGroupName,
    /* [out] */ LPDWORD pdwCurrentState);

DWORD REnumServiceGroupW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex,
    /* [unique][string][in] */ LPCWSTR pszGroupName);


extern handle_t svcctl_handle;


extern RPC_IF_HANDLE svcctl_ClientIfHandle;
extern RPC_IF_HANDLE svcctl_ServerIfHandle;
#endif /* __svcctl_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER RPC_SERVICE_STATUS_HANDLE_bind  ( RPC_SERVICE_STATUS_HANDLE );
void     __RPC_USER RPC_SERVICE_STATUS_HANDLE_unbind( RPC_SERVICE_STATUS_HANDLE, handle_t );
handle_t __RPC_USER SVCCTL_HANDLEW_bind  ( SVCCTL_HANDLEW );
void     __RPC_USER SVCCTL_HANDLEW_unbind( SVCCTL_HANDLEW, handle_t );
handle_t __RPC_USER SVCCTL_HANDLEA_bind  ( SVCCTL_HANDLEA );
void     __RPC_USER SVCCTL_HANDLEA_unbind( SVCCTL_HANDLEA, handle_t );

void __RPC_USER SC_RPC_HANDLE_rundown( SC_RPC_HANDLE );
void __RPC_USER SC_RPC_LOCK_rundown( SC_RPC_LOCK );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
