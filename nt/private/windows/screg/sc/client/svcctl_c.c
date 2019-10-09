/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 22:42:08 2019
 */
/* Compiler settings for .\svcctl.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "svcctl.h"

#define TYPE_FORMAT_STRING_SIZE   519                               
#define PROC_FORMAT_STRING_SIZE   1125                              

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

/* Standard interface: svcctl, ver. 2.0,
   GUID={0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}} */

handle_t svcctl_handle;


static const RPC_CLIENT_INTERFACE svcctl___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE svcctl_ClientIfHandle = (RPC_IF_HANDLE)& svcctl___RpcClientInterface;

extern const MIDL_STUB_DESC svcctl_StubDesc;

static RPC_BINDING_HANDLE svcctl__MIDL_AutoBindHandle;


DWORD RCloseServiceHandle( 
    /* [out][in] */ LPSC_RPC_HANDLE hSCObject)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hSCObject);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&hSCObject);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&hSCObject);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RControlService( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwControl,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceStatus);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwControl,
                 ( unsigned char __RPC_FAR * )&lpServiceStatus);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RDeleteService( 
    /* [in] */ SC_RPC_HANDLE hService)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hService);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&hService);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RLockServiceDatabase( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [out] */ LPSC_RPC_LOCK lpLock)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpLock);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpLock);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][out] */ LPBYTE lpSecurityDescriptor,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwSecurityInformation,
                 ( unsigned char __RPC_FAR * )&lpSecurityDescriptor,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RSetServiceObjectSecurity( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ SECURITY_INFORMATION dwSecurityInformation,
    /* [size_is][in] */ LPBYTE lpSecurityDescriptor,
    /* [in] */ DWORD cbBufSize)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,cbBufSize);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwSecurityInformation,
                 ( unsigned char __RPC_FAR * )&lpSecurityDescriptor,
                 ( unsigned char __RPC_FAR * )&cbBufSize);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceStatus( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [out] */ LPSERVICE_STATUS lpServiceStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceStatus);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&lpServiceStatus);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RSetServiceStatus( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ LPSERVICE_STATUS lpServiceStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceStatus);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[160],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[160],
                 ( unsigned char __RPC_FAR * )&hServiceStatus,
                 ( unsigned char __RPC_FAR * )&lpServiceStatus);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[160],
                 ( unsigned char __RPC_FAR * )&hServiceStatus);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RUnlockServiceDatabase( 
    /* [out][in] */ LPSC_RPC_LOCK Lock)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Lock);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180],
                 ( unsigned char __RPC_FAR * )&Lock);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180],
                 ( unsigned char __RPC_FAR * )&Lock);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RNotifyBootConfigStatus( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [in] */ DWORD BootAcceptable)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,BootAcceptable);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 ( unsigned char __RPC_FAR * )&lpMachineName,
                 ( unsigned char __RPC_FAR * )&BootAcceptable);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 ( unsigned char __RPC_FAR * )&lpMachineName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RI_ScSetServiceBitsW( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszTransportName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszTransportName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 ( unsigned char __RPC_FAR * )&hServiceStatus,
                 ( unsigned char __RPC_FAR * )&dwServiceBits,
                 ( unsigned char __RPC_FAR * )&bSetBitsOn,
                 ( unsigned char __RPC_FAR * )&bUpdateImmediately,
                 ( unsigned char __RPC_FAR * )&pszTransportName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[218],
                 ( unsigned char __RPC_FAR * )&hServiceStatus);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


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
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpDisplayName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpDisplayName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[244],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[244],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwStartType,
                 ( unsigned char __RPC_FAR * )&dwErrorControl,
                 ( unsigned char __RPC_FAR * )&lpBinaryPathName,
                 ( unsigned char __RPC_FAR * )&lpLoadOrderGroup,
                 ( unsigned char __RPC_FAR * )&lpdwTagId,
                 ( unsigned char __RPC_FAR * )&lpDependencies,
                 ( unsigned char __RPC_FAR * )&dwDependSize,
                 ( unsigned char __RPC_FAR * )&lpServiceStartName,
                 ( unsigned char __RPC_FAR * )&lpPassword,
                 ( unsigned char __RPC_FAR * )&dwPwSize,
                 ( unsigned char __RPC_FAR * )&lpDisplayName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[244],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


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
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwStartType,
                 ( unsigned char __RPC_FAR * )&dwErrorControl,
                 ( unsigned char __RPC_FAR * )&lpBinaryPathName,
                 ( unsigned char __RPC_FAR * )&lpLoadOrderGroup,
                 ( unsigned char __RPC_FAR * )&lpdwTagId,
                 ( unsigned char __RPC_FAR * )&lpDependencies,
                 ( unsigned char __RPC_FAR * )&dwDependSize,
                 ( unsigned char __RPC_FAR * )&lpServiceStartName,
                 ( unsigned char __RPC_FAR * )&lpPassword,
                 ( unsigned char __RPC_FAR * )&dwPwSize,
                 ( unsigned char __RPC_FAR * )&lpServiceHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD REnumDependentServicesW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServicesReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[366],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[366],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwServiceState,
                 ( unsigned char __RPC_FAR * )&lpServices,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded,
                 ( unsigned char __RPC_FAR * )&lpServicesReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[366],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD REnumServicesStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpResumeIndex);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[400],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[400],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwServiceState,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded,
                 ( unsigned char __RPC_FAR * )&lpServicesReturned,
                 ( unsigned char __RPC_FAR * )&lpResumeIndex);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[400],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD ROpenSCManagerW( 
    /* [unique][string][in] */ SVCCTL_HANDLEW lpMachineName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpScHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[440],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[440],
                 ( unsigned char __RPC_FAR * )&lpMachineName,
                 ( unsigned char __RPC_FAR * )&lpDatabaseName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&lpScHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[440],
                 ( unsigned char __RPC_FAR * )&lpMachineName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD ROpenServiceW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[468],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[468],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&lpServiceHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[468],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceConfigW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGW lpServiceConfig,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[496],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[496],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&lpServiceConfig,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[496],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceLockStatusW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[524],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[524],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpLockStatus,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[524],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RStartServiceW( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSW argv)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,argv);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&argc,
                 ( unsigned char __RPC_FAR * )&argv);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RGetServiceDisplayNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpServiceName,
    /* [size_is][string][out] */ wchar_t __RPC_FAR *lpDisplayName,
    /* [out][in] */ LPDWORD lpcchBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpcchBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&lpcchBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[576],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RGetServiceKeyNameW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ wchar_t __RPC_FAR *lpDisplayName,
    /* [size_is][string][out] */ wchar_t __RPC_FAR *lpServiceName,
    /* [out][in] */ LPDWORD lpcchBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpcchBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&lpcchBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RI_ScSetServiceBitsA( 
    /* [in] */ RPC_SERVICE_STATUS_HANDLE hServiceStatus,
    /* [in] */ DWORD dwServiceBits,
    /* [in] */ DWORD bSetBitsOn,
    /* [in] */ DWORD bUpdateImmediately,
    /* [unique][string][out][in] */ LPSTR pszTransportName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszTransportName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[636],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[636],
                 ( unsigned char __RPC_FAR * )&hServiceStatus,
                 ( unsigned char __RPC_FAR * )&dwServiceBits,
                 ( unsigned char __RPC_FAR * )&bSetBitsOn,
                 ( unsigned char __RPC_FAR * )&bUpdateImmediately,
                 ( unsigned char __RPC_FAR * )&pszTransportName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[636],
                 ( unsigned char __RPC_FAR * )&hServiceStatus);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


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
    /* [unique][string][in] */ LPSTR lpDisplayName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpDisplayName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[662],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[662],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwStartType,
                 ( unsigned char __RPC_FAR * )&dwErrorControl,
                 ( unsigned char __RPC_FAR * )&lpBinaryPathName,
                 ( unsigned char __RPC_FAR * )&lpLoadOrderGroup,
                 ( unsigned char __RPC_FAR * )&lpdwTagId,
                 ( unsigned char __RPC_FAR * )&lpDependencies,
                 ( unsigned char __RPC_FAR * )&dwDependSize,
                 ( unsigned char __RPC_FAR * )&lpServiceStartName,
                 ( unsigned char __RPC_FAR * )&lpPassword,
                 ( unsigned char __RPC_FAR * )&dwPwSize,
                 ( unsigned char __RPC_FAR * )&lpDisplayName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[662],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


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
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwStartType,
                 ( unsigned char __RPC_FAR * )&dwErrorControl,
                 ( unsigned char __RPC_FAR * )&lpBinaryPathName,
                 ( unsigned char __RPC_FAR * )&lpLoadOrderGroup,
                 ( unsigned char __RPC_FAR * )&lpdwTagId,
                 ( unsigned char __RPC_FAR * )&lpDependencies,
                 ( unsigned char __RPC_FAR * )&dwDependSize,
                 ( unsigned char __RPC_FAR * )&lpServiceStartName,
                 ( unsigned char __RPC_FAR * )&lpPassword,
                 ( unsigned char __RPC_FAR * )&dwPwSize,
                 ( unsigned char __RPC_FAR * )&lpServiceHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD REnumDependentServicesA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpServices,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServicesReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[784],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[784],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&dwServiceState,
                 ( unsigned char __RPC_FAR * )&lpServices,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded,
                 ( unsigned char __RPC_FAR * )&lpServicesReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[784],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD REnumServicesStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpResumeIndex);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwServiceState,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded,
                 ( unsigned char __RPC_FAR * )&lpServicesReturned,
                 ( unsigned char __RPC_FAR * )&lpResumeIndex);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[818],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD ROpenSCManagerA( 
    /* [unique][string][in] */ SVCCTL_HANDLEA lpMachineName,
    /* [unique][string][in] */ LPSTR lpDatabaseName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpScHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpScHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[858],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[858],
                 ( unsigned char __RPC_FAR * )&lpMachineName,
                 ( unsigned char __RPC_FAR * )&lpDatabaseName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&lpScHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[858],
                 ( unsigned char __RPC_FAR * )&lpMachineName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD ROpenServiceA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [in] */ DWORD dwDesiredAccess,
    /* [out] */ LPSC_RPC_HANDLE lpServiceHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpServiceHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[886],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[886],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&dwDesiredAccess,
                 ( unsigned char __RPC_FAR * )&lpServiceHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[886],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceConfigA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [byte_count][out] */ LPQUERY_SERVICE_CONFIGA lpServiceConfig,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[914],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[914],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&lpServiceConfig,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[914],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RQueryServiceLockStatusA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [byte_count][out] */ LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[942],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[942],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpLockStatus,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[942],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RStartServiceA( 
    /* [in] */ SC_RPC_HANDLE hService,
    /* [in] */ DWORD argc,
    /* [size_is][unique][in] */ LPSTRING_PTRSA argv)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,argv);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[970],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[970],
                 ( unsigned char __RPC_FAR * )&hService,
                 ( unsigned char __RPC_FAR * )&argc,
                 ( unsigned char __RPC_FAR * )&argv);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[970],
                 ( unsigned char __RPC_FAR * )&hService);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RGetServiceDisplayNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpServiceName,
    /* [size_is][string][out] */ LPSTR lpDisplayName,
    /* [out][in] */ LPDWORD lpcchBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpcchBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[994],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[994],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpServiceName,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&lpcchBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[994],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RGetServiceKeyNameA( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [string][in] */ LPSTR lpDisplayName,
    /* [size_is][string][out] */ LPSTR lpKeyName,
    /* [out][in] */ LPDWORD lpcchBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpcchBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1024],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1024],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&lpDisplayName,
                 ( unsigned char __RPC_FAR * )&lpKeyName,
                 ( unsigned char __RPC_FAR * )&lpcchBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1024],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RI_ScGetCurrentGroupStateW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszGroupName,
    /* [out] */ LPDWORD pdwCurrentState)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pdwCurrentState);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1054],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1054],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&pszGroupName,
                 ( unsigned char __RPC_FAR * )&pdwCurrentState);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1054],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD REnumServiceGroupW( 
    /* [in] */ SC_RPC_HANDLE hSCManager,
    /* [in] */ DWORD dwServiceType,
    /* [in] */ DWORD dwServiceState,
    /* [size_is][out] */ LPBYTE lpBuffer,
    /* [in] */ DWORD cbBufSize,
    /* [out] */ LPDWORD pcbBytesNeeded,
    /* [out] */ LPDWORD lpServicesReturned,
    /* [unique][out][in] */ LPDWORD lpResumeIndex,
    /* [unique][string][in] */ LPCWSTR pszGroupName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszGroupName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1080],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1080],
                 ( unsigned char __RPC_FAR * )&hSCManager,
                 ( unsigned char __RPC_FAR * )&dwServiceType,
                 ( unsigned char __RPC_FAR * )&dwServiceState,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cbBufSize,
                 ( unsigned char __RPC_FAR * )&pcbBytesNeeded,
                 ( unsigned char __RPC_FAR * )&lpServicesReturned,
                 ( unsigned char __RPC_FAR * )&lpResumeIndex,
                 ( unsigned char __RPC_FAR * )&pszGroupName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&svcctl_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1080],
                 ( unsigned char __RPC_FAR * )&hSCManager);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[3];
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC svcctl_StubDesc = 
    {
    (void __RPC_FAR *)& svcctl___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &svcctl_handle,
    0,
    BindingRoutines,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[3] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)RPC_SERVICE_STATUS_HANDLE_bind,
            (GENERIC_UNBIND_ROUTINE)RPC_SERVICE_STATUS_HANDLE_unbind
         }
        ,{
            (GENERIC_BINDING_ROUTINE)SVCCTL_HANDLEW_bind,
            (GENERIC_UNBIND_ROUTINE)SVCCTL_HANDLEW_unbind
         }
        ,{
            (GENERIC_BINDING_ROUTINE)SVCCTL_HANDLEA_bind,
            (GENERIC_UNBIND_ROUTINE)SVCCTL_HANDLEA_unbind
         }
        
        };


static void __RPC_USER svcctl_RGetServiceDisplayNameWExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        
        /* [in] */ SC_RPC_HANDLE hSCManager;
        
        /* [string][in] */ wchar_t __RPC_FAR *lpServiceName;
        
        /* [size_is][string][out] */ wchar_t __RPC_FAR *lpDisplayName;
        
        /* [out][in] */ LPDWORD lpcchBuffer;
        DWORD _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        
        /* [in] */ SC_RPC_HANDLE hSCManager;
        char Pad0[4];
        
        /* [string][in] */ wchar_t __RPC_FAR *lpServiceName;
        char Pad1[4];
        
        /* [size_is][string][out] */ wchar_t __RPC_FAR *lpDisplayName;
        char Pad2[4];
        
        /* [out][in] */ LPDWORD lpcchBuffer;
        char Pad3[4];
        DWORD _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT __RPC_FAR *pS	=	( struct _PARAM_STRUCT __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (*pS->lpcchBuffer + 1) * sizeof( wchar_t  );
}

static void __RPC_USER svcctl_RGetServiceKeyNameWExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        
        /* [in] */ SC_RPC_HANDLE hSCManager;
        
        /* [string][in] */ wchar_t __RPC_FAR *lpDisplayName;
        
        /* [size_is][string][out] */ wchar_t __RPC_FAR *lpServiceName;
        
        /* [out][in] */ LPDWORD lpcchBuffer;
        DWORD _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        
        /* [in] */ SC_RPC_HANDLE hSCManager;
        char Pad0[4];
        
        /* [string][in] */ wchar_t __RPC_FAR *lpDisplayName;
        char Pad1[4];
        
        /* [size_is][string][out] */ wchar_t __RPC_FAR *lpServiceName;
        char Pad2[4];
        
        /* [out][in] */ LPDWORD lpcchBuffer;
        char Pad3[4];
        DWORD _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT __RPC_FAR *pS	=	( struct _PARAM_STRUCT __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = (*pS->lpcchBuffer + 1) * sizeof( wchar_t  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    svcctl_RGetServiceDisplayNameWExprEval_0000
    ,svcctl_RGetServiceKeyNameWExprEval_0001
    };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 24 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 28 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 34 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 40 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 48 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 58 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 62 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 70 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 72 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 76 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 78 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */
/* 80 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 82 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 84 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 88 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 92 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 94 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 96 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 100 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 104 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 106 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 114 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 118 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 122 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 128 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 134 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 138 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 140 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 144 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 148 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 154 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 158 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 162 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 166 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 168 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 170 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 172 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 174 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 176 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 178 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 180 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 186 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 190 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 192 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 194 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */
/* 196 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 200 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 204 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 208 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 214 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 218 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 220 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 222 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 224 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 226 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 228 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 230 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 238 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 240 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 242 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 244 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 246 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 250 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 254 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 256 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 258 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 260 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 262 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 266 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 270 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 272 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 274 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 276 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 278 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 280 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 282 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 284 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 286 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 288 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 290 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 292 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 294 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 296 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 298 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 300 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 302 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 306 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 310 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 312 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 314 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 316 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 318 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */
/* 320 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 322 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 324 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 326 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 328 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 330 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 332 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */
/* 336 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 338 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 340 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 342 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 344 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 346 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 348 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 350 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 352 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 358 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 360 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */
/* 364 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 366 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 368 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 370 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 372 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 376 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 378 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 380 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 382 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 384 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 386 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 388 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 390 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 392 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 394 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 398 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 400 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 402 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 406 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 408 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 414 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 416 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 418 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 420 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 422 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */
/* 424 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 426 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 428 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 430 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 432 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 434 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 436 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 438 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 440 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 442 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 444 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 446 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 448 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 450 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 452 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 454 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 456 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 460 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 462 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 464 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */
/* 466 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 468 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 470 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 472 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 474 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 476 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 478 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 480 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 482 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 484 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 486 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */
/* 488 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 490 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 492 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */
/* 494 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 496 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 498 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 502 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 504 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 506 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 508 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 510 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 512 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 514 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */
/* 516 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 518 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 520 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 522 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 524 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 526 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 528 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 530 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 532 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 534 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 536 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 538 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 540 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 542 */	NdrFcShort( 0xf4 ),	/* Type Offset=244 */
/* 544 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 546 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 548 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 550 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 552 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 554 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 556 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 558 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 560 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 562 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 564 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 566 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 568 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 570 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 572 */	NdrFcShort( 0xfc ),	/* Type Offset=252 */
/* 574 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 576 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 578 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 580 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 582 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 586 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 588 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 590 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 592 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 594 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */
/* 596 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 598 */	NdrFcShort( 0x134 ),	/* Type Offset=308 */
/* 600 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 602 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 604 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 606 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 608 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 610 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 618 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 620 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 622 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 624 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */
/* 626 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 628 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */
/* 630 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 632 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 634 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 636 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 638 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 640 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 642 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 646 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 648 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 650 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 652 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 654 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 656 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 658 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 660 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 662 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 664 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 666 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 668 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 670 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 672 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 674 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 676 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 678 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 680 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 682 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 684 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 686 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 688 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 690 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 692 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 694 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 696 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 698 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 700 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 702 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 704 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 706 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 708 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 710 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 712 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 714 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 716 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 718 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 720 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 724 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 726 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 728 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 730 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 732 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 734 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 736 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */
/* 738 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 740 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 742 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 744 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 746 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 748 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 750 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 752 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */
/* 754 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 756 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 758 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 760 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 762 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 764 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */
/* 766 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 768 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 770 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 772 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 774 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 776 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 778 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 780 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */
/* 782 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 784 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 786 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 790 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 792 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 794 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 796 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 798 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 800 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 802 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 804 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 806 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 808 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 810 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 812 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 814 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 816 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 818 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 820 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 822 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 824 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 826 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 828 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 830 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 832 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 834 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 836 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 838 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 840 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */
/* 842 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 844 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 846 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 848 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 850 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 852 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 854 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 856 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 858 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 860 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 862 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 864 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 868 */	0x2,		/* 2 */
			0x5c,		/* FC_PAD */
/* 870 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 872 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 874 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 876 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */
/* 878 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 880 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 882 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */
/* 884 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 886 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 888 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 892 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 894 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 896 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 898 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 900 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 902 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 904 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */
/* 906 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 908 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 910 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */
/* 912 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 914 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 916 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 918 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 920 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 922 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 924 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 926 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 928 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 930 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 932 */	NdrFcShort( 0x194 ),	/* Type Offset=404 */
/* 934 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 936 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 938 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 940 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 942 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 944 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 946 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 948 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 950 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 952 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 954 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 956 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 958 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 960 */	NdrFcShort( 0x1b2 ),	/* Type Offset=434 */
/* 962 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 964 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 966 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 968 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 970 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 972 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 974 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 976 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 978 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 980 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 982 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 984 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 986 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 988 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 990 */	NdrFcShort( 0x1ba ),	/* Type Offset=442 */
/* 992 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 994 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 996 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 998 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1000 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1002 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1004 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1006 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1008 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1010 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1012 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */
/* 1014 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1016 */	NdrFcShort( 0x1f2 ),	/* Type Offset=498 */
/* 1018 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1020 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 1022 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1024 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1026 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1030 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1032 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1034 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1036 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1038 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1040 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1042 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */
/* 1044 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1046 */	NdrFcShort( 0x1fc ),	/* Type Offset=508 */
/* 1048 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1050 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 1052 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1054 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1056 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 1058 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1060 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1062 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1064 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1066 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1068 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1070 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1072 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 1074 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1076 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 1078 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1080 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1082 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 1084 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 1086 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1090 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1092 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1094 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1096 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1098 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1100 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1102 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */
/* 1104 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1106 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1108 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 1110 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1112 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 1114 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1116 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 1118 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1120 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 1122 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x11, 0x0,	/* FC_RP */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x1c ),	/* 28 */
/* 20 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 22 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 28 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 30 */	NdrFcShort( 0x2 ),	/* Offset= 2 (32) */
/* 32 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 34 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 36 */	
			0x11, 0x0,	/* FC_RP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 48 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 50 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 52 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 60 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 62 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 64 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 68 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x12, 0x0,	/* FC_UP */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 76 */	NdrFcShort( 0x1 ),	/* 1 */
/* 78 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 82 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 90 */	NdrFcShort( 0x1 ),	/* 1 */
/* 92 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 96 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 98 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 102 */	
			0x12, 0x0,	/* FC_UP */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 108 */	NdrFcShort( 0x1 ),	/* 1 */
/* 110 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 114 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 116 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (120) */
/* 120 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 122 */	0x0,		/* 0 */
			0xf,		/* 15 */
/* 124 */	
			0x11, 0x0,	/* FC_RP */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 136 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 138 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 144 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 146 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 154 */	NdrFcShort( 0xc ),	/* 12 */
/* 156 */	NdrFcShort( 0xc ),	/* 12 */
/* 158 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 164 */	NdrFcShort( 0x10 ),	/* 16 */
/* 166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 168 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 170 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x18 ),	/* 24 */
/* 176 */	NdrFcShort( 0x18 ),	/* 24 */
/* 178 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 180 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0x1c ),	/* 28 */
/* 186 */	NdrFcShort( 0x1c ),	/* 28 */
/* 188 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 194 */	NdrFcShort( 0x20 ),	/* 32 */
/* 196 */	NdrFcShort( 0x20 ),	/* 32 */
/* 198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 210 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 212 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 214 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 216 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 220 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (146) */
/* 222 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 224 */	NdrFcShort( 0xc ),	/* 12 */
/* 226 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 230 */	NdrFcShort( 0x4 ),	/* 4 */
/* 232 */	NdrFcShort( 0x4 ),	/* 4 */
/* 234 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 236 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 238 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 244 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 246 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 250 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (222) */
/* 252 */	
			0x12, 0x0,	/* FC_UP */
/* 254 */	NdrFcShort( 0x16 ),	/* Offset= 22 (276) */
/* 256 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 270 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 272 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 274 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 276 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 278 */	NdrFcShort( 0x4 ),	/* 4 */
/* 280 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 282 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 284 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 286 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 288 */	NdrFcShort( 0x4 ),	/* 4 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 302 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 304 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (256) */
			0x5b,		/* FC_END */
/* 308 */	
			0x11, 0x0,	/* FC_RP */
/* 310 */	NdrFcShort( 0x2 ),	/* Offset= 2 (312) */
/* 312 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 314 */	0x20,		/* 32 */
			0x59,		/* FC_CALLBACK */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	
			0x11, 0x0,	/* FC_RP */
/* 320 */	NdrFcShort( 0x2 ),	/* Offset= 2 (322) */
/* 322 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 324 */	0x20,		/* 32 */
			0x59,		/* FC_CALLBACK */
/* 326 */	NdrFcShort( 0x1 ),	/* 1 */
/* 328 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 330 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 332 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 334 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 336 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 338 */	NdrFcShort( 0x24 ),	/* 36 */
/* 340 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 342 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 344 */	NdrFcShort( 0xc ),	/* 12 */
/* 346 */	NdrFcShort( 0xc ),	/* 12 */
/* 348 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 350 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 352 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 354 */	NdrFcShort( 0x10 ),	/* 16 */
/* 356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 358 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 360 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 362 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 364 */	NdrFcShort( 0x18 ),	/* 24 */
/* 366 */	NdrFcShort( 0x18 ),	/* 24 */
/* 368 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 370 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 372 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 374 */	NdrFcShort( 0x1c ),	/* 28 */
/* 376 */	NdrFcShort( 0x1c ),	/* 28 */
/* 378 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 380 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 382 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 384 */	NdrFcShort( 0x20 ),	/* 32 */
/* 386 */	NdrFcShort( 0x20 ),	/* 32 */
/* 388 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 390 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 392 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 394 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 396 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 398 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 400 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 402 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 404 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 406 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 408 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 410 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (336) */
/* 412 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 414 */	NdrFcShort( 0xc ),	/* 12 */
/* 416 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 418 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 420 */	NdrFcShort( 0x4 ),	/* 4 */
/* 422 */	NdrFcShort( 0x4 ),	/* 4 */
/* 424 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 426 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 428 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 434 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 436 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 438 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 440 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (412) */
/* 442 */	
			0x12, 0x0,	/* FC_UP */
/* 444 */	NdrFcShort( 0x16 ),	/* Offset= 22 (466) */
/* 446 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 448 */	NdrFcShort( 0x4 ),	/* 4 */
/* 450 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 452 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 460 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 462 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 464 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 466 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 470 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 472 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 474 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 476 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 490 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 492 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 494 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (446) */
			0x5b,		/* FC_END */
/* 498 */	
			0x11, 0x0,	/* FC_RP */
/* 500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (502) */
/* 502 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 504 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 508 */	
			0x11, 0x0,	/* FC_RP */
/* 510 */	NdrFcShort( 0x2 ),	/* Offset= 2 (512) */
/* 512 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 514 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 516 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif

			0x0
        }
    };
