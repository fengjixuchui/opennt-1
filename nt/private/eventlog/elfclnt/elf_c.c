/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 00:11:31 2020
 */
/* Compiler settings for elf.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "elf.h"

#define TYPE_FORMAT_STRING_SIZE   277                               
#define PROC_FORMAT_STRING_SIZE   573                               

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

/* Standard interface: eventlog, ver. 0.0,
   GUID={0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}} */

handle_t eventlog_handle;


static const RPC_CLIENT_INTERFACE eventlog___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE eventlog_ClientIfHandle = (RPC_IF_HANDLE)& eventlog___RpcClientInterface;

extern const MIDL_STUB_DESC eventlog_StubDesc;

static RPC_BINDING_HANDLE eventlog__MIDL_AutoBindHandle;


NTSTATUS ElfrClearELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,BackupFileName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&BackupFileName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,BackupFileName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&BackupFileName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrCloseEL( 
    /* [out][in] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[44],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[44],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[44],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrDeregisterEventSource( 
    /* [out][in] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrNumberOfRecords( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG NumberOfRecords)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,NumberOfRecords);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&NumberOfRecords);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[80],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOldestRecord( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [out] */ PULONG OldestRecordNumber)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,OldestRecordNumber);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&OldestRecordNumber);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrChangeNotify( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ RPC_CLIENT_ID ClientId,
    /* [in] */ ULONG Event)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Event);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&ClientId,
                 ( unsigned char __RPC_FAR * )&Event);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&ModuleName,
                 ( unsigned char __RPC_FAR * )&RegModuleName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING ModuleName,
    /* [in] */ PRPC_UNICODE_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[182],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[182],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&ModuleName,
                 ( unsigned char __RPC_FAR * )&RegModuleName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[182],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELW( 
    /* [in] */ EVENTLOG_HANDLE_W UNCServerName,
    /* [in] */ PRPC_UNICODE_STRING BackupFileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&BackupFileName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MinNumberOfBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&ReadFlags,
                 ( unsigned char __RPC_FAR * )&RecordOffset,
                 ( unsigned char __RPC_FAR * )&NumberOfBytesToRead,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&NumberOfBytesRead,
                 ( unsigned char __RPC_FAR * )&MinNumberOfBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventW( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [in] */ USHORT NumStrings,
    /* [in] */ ULONG DataSize,
    /* [in] */ PRPC_UNICODE_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_UNICODE_STRING __RPC_FAR Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TimeWritten);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[282],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[282],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&Time,
                 ( unsigned char __RPC_FAR * )&EventType,
                 ( unsigned char __RPC_FAR * )&EventCategory,
                 ( unsigned char __RPC_FAR * )&EventID,
                 ( unsigned char __RPC_FAR * )&NumStrings,
                 ( unsigned char __RPC_FAR * )&DataSize,
                 ( unsigned char __RPC_FAR * )&ComputerName,
                 ( unsigned char __RPC_FAR * )&UserSID,
                 ( unsigned char __RPC_FAR * )&Strings,
                 ( unsigned char __RPC_FAR * )&Data,
                 ( unsigned char __RPC_FAR * )&Flags,
                 ( unsigned char __RPC_FAR * )&RecordNumber,
                 ( unsigned char __RPC_FAR * )&TimeWritten);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[282],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrClearELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [unique][in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,BackupFileName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&BackupFileName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrBackupELFA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ PRPC_STRING BackupFileName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,BackupFileName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&BackupFileName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[382],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[382],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&ModuleName,
                 ( unsigned char __RPC_FAR * )&RegModuleName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[382],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrRegisterEventSourceA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING ModuleName,
    /* [in] */ PRPC_STRING RegModuleName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[416],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[416],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&ModuleName,
                 ( unsigned char __RPC_FAR * )&RegModuleName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[416],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrOpenBELA( 
    /* [in] */ EVENTLOG_HANDLE_A UNCServerName,
    /* [in] */ PRPC_STRING FileName,
    /* [in] */ ULONG MajorVersion,
    /* [in] */ ULONG MinorVersion,
    /* [out] */ PIELF_HANDLE LogHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LogHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                 ( unsigned char __RPC_FAR * )&UNCServerName,
                 ( unsigned char __RPC_FAR * )&FileName,
                 ( unsigned char __RPC_FAR * )&MajorVersion,
                 ( unsigned char __RPC_FAR * )&MinorVersion,
                 ( unsigned char __RPC_FAR * )&LogHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReadELA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG ReadFlags,
    /* [in] */ ULONG RecordOffset,
    /* [in] */ ULONG NumberOfBytesToRead,
    /* [size_is][out] */ PBYTE Buffer,
    /* [out] */ PULONG NumberOfBytesRead,
    /* [out] */ PULONG MinNumberOfBytesNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MinNumberOfBytesNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[480],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[480],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&ReadFlags,
                 ( unsigned char __RPC_FAR * )&RecordOffset,
                 ( unsigned char __RPC_FAR * )&NumberOfBytesToRead,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&NumberOfBytesRead,
                 ( unsigned char __RPC_FAR * )&MinNumberOfBytesNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[480],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS ElfrReportEventA( 
    /* [in] */ IELF_HANDLE LogHandle,
    /* [in] */ ULONG Time,
    /* [in] */ USHORT EventType,
    /* [in] */ USHORT EventCategory,
    /* [in] */ ULONG EventID,
    /* [in] */ USHORT NumStrings,
    /* [in] */ ULONG DataSize,
    /* [in] */ PRPC_STRING ComputerName,
    /* [unique][in] */ PRPC_SID UserSID,
    /* [unique][size_is][in] */ PRPC_STRING __RPC_FAR Strings[  ],
    /* [unique][size_is][in] */ PBYTE Data,
    /* [in] */ USHORT Flags,
    /* [unique][out][in] */ PULONG RecordNumber,
    /* [unique][out][in] */ PULONG TimeWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TimeWritten);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 ( unsigned char __RPC_FAR * )&LogHandle,
                 ( unsigned char __RPC_FAR * )&Time,
                 ( unsigned char __RPC_FAR * )&EventType,
                 ( unsigned char __RPC_FAR * )&EventCategory,
                 ( unsigned char __RPC_FAR * )&EventID,
                 ( unsigned char __RPC_FAR * )&NumStrings,
                 ( unsigned char __RPC_FAR * )&DataSize,
                 ( unsigned char __RPC_FAR * )&ComputerName,
                 ( unsigned char __RPC_FAR * )&UserSID,
                 ( unsigned char __RPC_FAR * )&Strings,
                 ( unsigned char __RPC_FAR * )&Data,
                 ( unsigned char __RPC_FAR * )&Flags,
                 ( unsigned char __RPC_FAR * )&RecordNumber,
                 ( unsigned char __RPC_FAR * )&TimeWritten);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&eventlog_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 ( unsigned char __RPC_FAR * )&LogHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[2];

static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void __RPC_FAR *)& eventlog___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &eventlog_handle,
    0,
    BindingRoutines,
    0,
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

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[2] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)EVENTLOG_HANDLE_W_bind,
            (GENERIC_UNBIND_ROUTINE)EVENTLOG_HANDLE_W_unbind
         }
        ,{
            (GENERIC_BINDING_ROUTINE)EVENTLOG_HANDLE_A_bind,
            (GENERIC_UNBIND_ROUTINE)EVENTLOG_HANDLE_A_unbind
         }
        
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
/*  4 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 20 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 32 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 42 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 44 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 46 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 50 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 54 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 56 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 60 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 64 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 68 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 78 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 82 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 86 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 88 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 90 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 92 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 96 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 100 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 104 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 108 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 112 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 114 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 118 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 122 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 128 */	NdrFcShort( 0x14 ),	/* x86, MIPS Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x14 ),	/* MIPS Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 136 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 138 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 140 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 150 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 154 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 156 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 158 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 164 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 166 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 168 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 170 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 172 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 174 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 178 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 180 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 182 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 184 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 186 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 188 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 190 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 192 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 202 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 204 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 206 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 218 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 222 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 226 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 230 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 234 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 238 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 240 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 244 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 246 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 248 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 252 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 256 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 260 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 262 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 266 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 268 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 270 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 272 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 274 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 276 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 278 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 280 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 282 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 284 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 290 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 292 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 294 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 296 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 298 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 300 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 302 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 304 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 306 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 308 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 310 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 312 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 314 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 316 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 318 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 320 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */
/* 322 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 324 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */
/* 326 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 328 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 330 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 332 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 340 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 342 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 352 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */
/* 358 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 360 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 362 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 364 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 366 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 368 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 370 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 372 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 374 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 376 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 378 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 380 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 382 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 384 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 388 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 390 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 392 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 394 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0xee ),	/* Type Offset=238 */
/* 398 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 400 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 402 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 404 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 406 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 408 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 410 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 412 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 414 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 416 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 418 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 420 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 422 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 424 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 426 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 428 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 430 */	NdrFcShort( 0xee ),	/* Type Offset=238 */
/* 432 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 434 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 436 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 438 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 440 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 442 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 444 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 446 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 448 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 450 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 452 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 454 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 456 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 460 */	0x1,		/* 1 */
			0x5c,		/* FC_PAD */
/* 462 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 464 */	NdrFcShort( 0xee ),	/* Type Offset=238 */
/* 466 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 468 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 470 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 472 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 474 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 476 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 478 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 480 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 482 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 484 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 486 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 490 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 492 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 494 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 496 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 498 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 500 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 502 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 504 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 506 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 508 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 510 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 512 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 514 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 516 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 518 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 520 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 522 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 526 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 528 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 530 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 532 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 534 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 536 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 538 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 540 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 542 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 544 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 546 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 548 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 550 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 552 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 554 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */
/* 556 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 558 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */
/* 560 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 562 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 564 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 566 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 568 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 570 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/*  2 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x10 ),	/* Offset= 16 (22) */
/*  8 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 10 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 14 */	NdrFcShort( 0x2 ),	/* 2 */
/* 16 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 30 */	NdrFcShort( 0x4 ),	/* 4 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
/* 34 */	0x12, 0x0,	/* FC_UP */
/* 36 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (8) */
/* 38 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 40 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 42 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 44 */	
			0x11, 0x0,	/* FC_RP */
/* 46 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (22) */
/* 48 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 50 */	NdrFcShort( 0x2 ),	/* Offset= 2 (52) */
/* 52 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 54 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 56 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 58 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 70 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 78 */	0x0,		/* 0 */
			0x5,		/* 5 */
/* 80 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 86 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 88 */	
			0x11, 0x0,	/* FC_RP */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 100 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 102 */	
			0x12, 0x0,	/* FC_UP */
/* 104 */	NdrFcShort( 0x1c ),	/* Offset= 28 (132) */
/* 106 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 108 */	NdrFcShort( 0x6 ),	/* 6 */
/* 110 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 112 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 114 */	NdrFcShort( 0x6 ),	/* 6 */
/* 116 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (106) */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 122 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 126 */	0x3,		/* 3 */
			0x0,		/*  */
/* 128 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 130 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 132 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (122) */
/* 138 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 140 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 142 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (112) */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 154 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 156 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 158 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 160 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 162 */	NdrFcShort( 0x4 ),	/* 4 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x1 ),	/* 1 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	0x12, 0x0,	/* FC_UP */
/* 174 */	NdrFcShort( 0xffffff68 ),	/* Offset= -152 (22) */
/* 176 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 178 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 180 */	
			0x12, 0x0,	/* FC_UP */
/* 182 */	NdrFcShort( 0x2 ),	/* Offset= 2 (184) */
/* 184 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 188 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 190 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 192 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 196 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x12, 0x0,	/* FC_UP */
/* 200 */	NdrFcShort( 0xc ),	/* Offset= 12 (212) */
/* 202 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 204 */	NdrFcShort( 0x1 ),	/* 1 */
/* 206 */	0x16,		/* 22 */
			0x0,		/*  */
/* 208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 210 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 212 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 216 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 224 */	0x12, 0x0,	/* FC_UP */
/* 226 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (202) */
/* 228 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 230 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 232 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 234 */	
			0x11, 0x0,	/* FC_RP */
/* 236 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (212) */
/* 238 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 240 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x12,		/* FC_UP */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (246) */
/* 246 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 250 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x1 ),	/* 1 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	0x12, 0x0,	/* FC_UP */
/* 270 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (212) */
/* 272 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 274 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
