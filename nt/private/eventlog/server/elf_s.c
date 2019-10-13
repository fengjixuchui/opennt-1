/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 04:05:08 2019
 */
/* Compiler settings for elf.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "elf.h"

#define TYPE_FORMAT_STRING_SIZE   277                               
#define PROC_FORMAT_STRING_SIZE   261                               

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


extern RPC_DISPATCH_TABLE eventlog_DispatchTable;

static const RPC_SERVER_INTERFACE eventlog___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x82273FDC,0xE32A,0x18C3,{0x3F,0x78,0x82,0x79,0x29,0xDC,0x23,0xEA}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &eventlog_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE eventlog_ServerIfHandle = (RPC_IF_HANDLE)& eventlog___RpcServerInterface;

extern const MIDL_STUB_DESC eventlog_StubDesc;

void __RPC_STUB
eventlog_ElfrClearELFW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    BackupFileName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrClearELFW(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDL_TypeFormatString.Format[4] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrBackupELFW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    BackupFileName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[10] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        
        _RetVal = ElfrBackupELFW(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrCloseEL(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[20] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = ElfrCloseEL(( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrDeregisterEventSource(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[20] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = ElfrDeregisterEventSource(( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrNumberOfRecords(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    PULONG NumberOfRecords;
    ULONG _M6;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    NumberOfRecords = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NumberOfRecords = &_M6;
        
        _RetVal = ElfrNumberOfRecords(( IELF_HANDLE  )*NDRSContextValue(LogHandle),NumberOfRecords);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfRecords;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOldestRecord(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    PULONG OldestRecordNumber;
    ULONG _M7;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    OldestRecordNumber = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        OldestRecordNumber = &_M7;
        
        _RetVal = ElfrOldestRecord(( IELF_HANDLE  )*NDRSContextValue(LogHandle),OldestRecordNumber);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *OldestRecordNumber;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrChangeNotify(
    PRPC_MESSAGE _pRpcMessage )
{
    RPC_CLIENT_ID ClientId;
    ULONG Event;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_ClientId;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    _p_ClientId = &ClientId;
    MIDL_memset(
               _p_ClientId,
               0,
               sizeof( RPC_CLIENT_ID  ));
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_ClientId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[60],
                                   (unsigned char)0 );
        
        Event = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = ElfrChangeNotify(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           ClientId,
                           Event);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenELW(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_UNICODE_STRING ModuleName;
    PRPC_UNICODE_STRING RegModuleName;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenELW(
                      UNCServerName,
                      ModuleName,
                      RegModuleName,
                      MajorVersion,
                      MinorVersion,
                      ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrRegisterEventSourceW(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_UNICODE_STRING ModuleName;
    PRPC_UNICODE_STRING RegModuleName;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrRegisterEventSourceW(
                                   UNCServerName,
                                   ModuleName,
                                   RegModuleName,
                                   MajorVersion,
                                   MinorVersion,
                                   ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenBELW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    EVENTLOG_HANDLE_W UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    BackupFileName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[70] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[68],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenBELW(
                       UNCServerName,
                       BackupFileName,
                       MajorVersion,
                       MinorVersion,
                       ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReadELW(
    PRPC_MESSAGE _pRpcMessage )
{
    PBYTE Buffer;
    NDR_SCONTEXT LogHandle;
    PULONG MinNumberOfBytesNeeded;
    PULONG NumberOfBytesRead;
    ULONG NumberOfBytesToRead;
    ULONG ReadFlags;
    ULONG RecordOffset;
    ULONG _M8;
    ULONG _M9;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    Buffer = 0;
    NumberOfBytesRead = 0;
    MinNumberOfBytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        ReadFlags = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        RecordOffset = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumberOfBytesToRead = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = NdrAllocate(&_StubMsg,NumberOfBytesToRead * 1);
        NumberOfBytesRead = &_M8;
        MinNumberOfBytesNeeded = &_M9;
        
        _RetVal = ElfrReadELW(
                      ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                      ReadFlags,
                      RecordOffset,
                      NumberOfBytesToRead,
                      Buffer,
                      NumberOfBytesRead,
                      MinNumberOfBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)Buffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfBytesRead;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MinNumberOfBytesNeeded;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReportEventW(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_UNICODE_STRING ComputerName;
    PBYTE Data;
    ULONG DataSize;
    USHORT EventCategory;
    ULONG EventID;
    USHORT EventType;
    USHORT Flags;
    NDR_SCONTEXT LogHandle;
    USHORT NumStrings;
    PULONG RecordNumber;
    PRPC_UNICODE_STRING ( __RPC_FAR *Strings )[  ];
    ULONG Time;
    PULONG TimeWritten;
    PRPC_SID UserSID;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    ComputerName = 0;
    UserSID = 0;
    Strings = 0;
    Data = 0;
    RecordNumber = 0;
    TimeWritten = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Time = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventType = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventCategory = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventID = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumStrings = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        _StubMsg.Buffer += 2;
        DataSize = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ComputerName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserSID,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[102],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Strings,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[146],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Data,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[180],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        Flags = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RecordNumber,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TimeWritten,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrReportEventW(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           Time,
                           EventType,
                           EventCategory,
                           EventID,
                           NumStrings,
                           DataSize,
                           ComputerName,
                           UserSID,
                           *Strings,
                           Data,
                           Flags,
                           RecordNumber,
                           TimeWritten);
        
        _StubMsg.BufferLength = 8U + 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RecordNumber,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TimeWritten,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ComputerName,
                        &__MIDL_TypeFormatString.Format[44] );
        
        _StubMsg.MaxCount = NumStrings;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Strings,
                        &__MIDL_TypeFormatString.Format[146] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrClearELFA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    BackupFileName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[156] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[198],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrClearELFA(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDL_TypeFormatString.Format[198] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrBackupELFA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING BackupFileName;
    NDR_SCONTEXT LogHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    BackupFileName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[166] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&BackupFileName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        
        _RetVal = ElfrBackupELFA(( IELF_HANDLE  )*NDRSContextValue(LogHandle),BackupFileName);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)BackupFileName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenELA(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_STRING ModuleName;
    PRPC_STRING RegModuleName;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[176] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[238],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenELA(
                      UNCServerName,
                      ModuleName,
                      RegModuleName,
                      MajorVersion,
                      MinorVersion,
                      ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrRegisterEventSourceA(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    PRPC_STRING ModuleName;
    PRPC_STRING RegModuleName;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    ModuleName = 0;
    RegModuleName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[176] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[238],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&RegModuleName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrRegisterEventSourceA(
                                   UNCServerName,
                                   ModuleName,
                                   RegModuleName,
                                   MajorVersion,
                                   MinorVersion,
                                   ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ModuleName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)RegModuleName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrOpenBELA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING FileName;
    NDR_SCONTEXT LogHandle;
    ULONG MajorVersion;
    ULONG MinorVersion;
    EVENTLOG_HANDLE_A UNCServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    UNCServerName = 0;
    FileName = 0;
    LogHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UNCServerName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[238],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&FileName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MajorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        MinorVersion = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        LogHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ElfrOpenBELA(
                       UNCServerName,
                       FileName,
                       MajorVersion,
                       MinorVersion,
                       ( PIELF_HANDLE  )NDRSContextValue(LogHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )LogHandle,
                            ( NDR_RUNDOWN  )IELF_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)FileName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReadELA(
    PRPC_MESSAGE _pRpcMessage )
{
    PBYTE Buffer;
    NDR_SCONTEXT LogHandle;
    PULONG MinNumberOfBytesNeeded;
    PULONG NumberOfBytesRead;
    ULONG NumberOfBytesToRead;
    ULONG ReadFlags;
    ULONG RecordOffset;
    ULONG _M12;
    ULONG _M13;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    Buffer = 0;
    NumberOfBytesRead = 0;
    MinNumberOfBytesNeeded = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        ReadFlags = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        RecordOffset = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumberOfBytesToRead = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        Buffer = NdrAllocate(&_StubMsg,NumberOfBytesToRead * 1);
        NumberOfBytesRead = &_M12;
        MinNumberOfBytesNeeded = &_M13;
        
        _RetVal = ElfrReadELA(
                      ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                      ReadFlags,
                      RecordOffset,
                      NumberOfBytesToRead,
                      Buffer,
                      NumberOfBytesRead,
                      MinNumberOfBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)Buffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = NumberOfBytesToRead;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)Buffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *NumberOfBytesRead;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MinNumberOfBytesNeeded;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( Buffer )
            _StubMsg.pfnFree( Buffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
eventlog_ElfrReportEventA(
    PRPC_MESSAGE _pRpcMessage )
{
    PRPC_STRING ComputerName;
    PBYTE Data;
    ULONG DataSize;
    USHORT EventCategory;
    ULONG EventID;
    USHORT EventType;
    USHORT Flags;
    NDR_SCONTEXT LogHandle;
    USHORT NumStrings;
    PULONG RecordNumber;
    PRPC_STRING ( __RPC_FAR *Strings )[  ];
    ULONG Time;
    PULONG TimeWritten;
    PRPC_SID UserSID;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &eventlog_StubDesc);
    
    ComputerName = 0;
    UserSID = 0;
    Strings = 0;
    Data = 0;
    RecordNumber = 0;
    TimeWritten = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216] );
        
        LogHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Time = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventType = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventCategory = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        EventID = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NumStrings = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        _StubMsg.Buffer += 2;
        DataSize = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ComputerName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[212],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserSID,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[102],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Strings,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[242],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Data,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[180],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        Flags = *(( USHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&RecordNumber,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&TimeWritten,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194],
                              (unsigned char)0 );
        
        
        _RetVal = ElfrReportEventA(
                           ( IELF_HANDLE  )*NDRSContextValue(LogHandle),
                           Time,
                           EventType,
                           EventCategory,
                           EventID,
                           NumStrings,
                           DataSize,
                           ComputerName,
                           UserSID,
                           *Strings,
                           Data,
                           Flags,
                           RecordNumber,
                           TimeWritten);
        
        _StubMsg.BufferLength = 8U + 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)RecordNumber,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TimeWritten,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[194] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ComputerName,
                        &__MIDL_TypeFormatString.Format[234] );
        
        _StubMsg.MaxCount = NumStrings;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Strings,
                        &__MIDL_TypeFormatString.Format[242] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC eventlog_StubDesc = 
    {
    (void __RPC_FAR *)& eventlog___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
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

static RPC_DISPATCH_FUNCTION eventlog_table[] =
    {
    eventlog_ElfrClearELFW,
    eventlog_ElfrBackupELFW,
    eventlog_ElfrCloseEL,
    eventlog_ElfrDeregisterEventSource,
    eventlog_ElfrNumberOfRecords,
    eventlog_ElfrOldestRecord,
    eventlog_ElfrChangeNotify,
    eventlog_ElfrOpenELW,
    eventlog_ElfrRegisterEventSourceW,
    eventlog_ElfrOpenBELW,
    eventlog_ElfrReadELW,
    eventlog_ElfrReportEventW,
    eventlog_ElfrClearELFA,
    eventlog_ElfrBackupELFA,
    eventlog_ElfrOpenELA,
    eventlog_ElfrRegisterEventSourceA,
    eventlog_ElfrOpenBELA,
    eventlog_ElfrReadELA,
    eventlog_ElfrReportEventA,
    0
    };
RPC_DISPATCH_TABLE eventlog_DispatchTable = 
    {
    19,
    eventlog_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  6 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/*  8 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 18 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 24 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 68 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 70 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 82 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 84 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 86 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 92 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 100 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 102 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 106 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 120 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 126 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 128 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */
/* 132 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 134 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 136 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 138 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */
/* 140 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 146 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 150 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 154 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 160 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */
/* 164 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 170 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 174 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 178 */	NdrFcShort( 0xee ),	/* Type Offset=238 */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 188 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 190 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 192 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 194 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 196 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0xee ),	/* Type Offset=238 */
/* 202 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 204 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
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
/* 212 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 220 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 222 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 226 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 228 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 230 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 234 */	NdrFcShort( 0xea ),	/* Type Offset=234 */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 240 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 246 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */
/* 248 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 250 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 252 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 254 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 256 */	NdrFcShort( 0xc2 ),	/* Type Offset=194 */
/* 258 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x0,	/* FC_RP */
/* 50 */	NdrFcShort( 0x2 ),	/* Offset= 2 (52) */
/* 52 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 54 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 56 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
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
			0x11, 0x0,	/* FC_RP */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 78 */	0x0,		/* 0 */
			0x5,		/* 5 */
/* 80 */	
			0x11, 0x0,	/* FC_RP */
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
