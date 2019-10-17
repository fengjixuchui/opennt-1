/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 17:23:37 2019
 */
/* Compiler settings for .\svcctl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "svcctl.h"

#define TYPE_FORMAT_STRING_SIZE   527                               
#define PROC_FORMAT_STRING_SIZE   643                               

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


extern RPC_DISPATCH_TABLE svcctl_DispatchTable;

static const RPC_SERVER_INTERFACE svcctl___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x367ABB81,0x9844,0x35F1,{0xAD,0x32,0x98,0xF0,0x38,0x00,0x10,0x03}},{2,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &svcctl_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE svcctl_ServerIfHandle = (RPC_IF_HANDLE)& svcctl___RpcServerInterface;

extern const MIDL_STUB_DESC svcctl_StubDesc;

void __RPC_STUB
svcctl_RCloseServiceHandle(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCObject;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    hSCObject = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            hSCObject = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RCloseServiceHandle(( LPSC_RPC_HANDLE  )NDRSContextValue(hSCObject));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )hSCObject,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RControlService(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    struct _SERVICE_STATUS _lpServiceStatusM;
    DWORD dwControl;
    NDR_SCONTEXT hService;
    LPSERVICE_STATUS lpServiceStatus;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceStatus = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwControl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceStatus = &_lpServiceStatusM;
        
        _RetVal = RControlService(
                          ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                          dwControl,
                          lpServiceStatus);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)lpServiceStatus,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[16] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)lpServiceStatus,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[16] );
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RDeleteService(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hService;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RDeleteService(( SC_RPC_HANDLE  )*NDRSContextValue(hService));
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RLockServiceDatabase(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    NDR_SCONTEXT lpLock;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpLock = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpLock = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = RLockServiceDatabase(( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),( LPSC_RPC_LOCK  )NDRSContextValue(lpLock));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpLock,
                            ( NDR_RUNDOWN  )SC_RPC_LOCK_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceObjectSecurity(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M91;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    SECURITY_INFORMATION dwSecurityInformation;
    NDR_SCONTEXT hService;
    LPBYTE lpSecurityDescriptor;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpSecurityDescriptor = 0;
    pcbBytesNeeded = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwSecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpSecurityDescriptor = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M91;
        
        _RetVal = RQueryServiceObjectSecurity(
                                      ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                      dwSecurityInformation,
                                      lpSecurityDescriptor,
                                      cbBufSize,
                                      pcbBytesNeeded);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpSecurityDescriptor,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpSecurityDescriptor,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpSecurityDescriptor )
            _StubMsg.pfnFree( lpSecurityDescriptor );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RSetServiceObjectSecurity(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    SECURITY_INFORMATION dwSecurityInformation;
    NDR_SCONTEXT hService;
    LPBYTE lpSecurityDescriptor;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpSecurityDescriptor = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwSecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                          (unsigned char __RPC_FAR * __RPC_FAR *)&lpSecurityDescriptor,
                                          (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40],
                                          (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RSetServiceObjectSecurity(
                                    ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                    dwSecurityInformation,
                                    lpSecurityDescriptor,
                                    cbBufSize);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceStatus(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    struct _SERVICE_STATUS _lpServiceStatusM;
    NDR_SCONTEXT hService;
    LPSERVICE_STATUS lpServiceStatus;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceStatus = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceStatus = &_lpServiceStatusM;
        
        _RetVal = RQueryServiceStatus(( SC_RPC_HANDLE  )*NDRSContextValue(hService),lpServiceStatus);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)lpServiceStatus,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[16] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)lpServiceStatus,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[16] );
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RSetServiceStatus(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_SERVICE_STATUS_HANDLE hServiceStatus;
    LPSERVICE_STATUS lpServiceStatus;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceStatus = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[76] );
            
            hServiceStatus = *(( RPC_SERVICE_STATUS_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceStatus,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[16],
                                       (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RSetServiceStatus(hServiceStatus,lpServiceStatus);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RUnlockServiceDatabase(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT Lock;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    Lock = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[84] );
            
            Lock = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RUnlockServiceDatabase(( LPSC_RPC_LOCK  )NDRSContextValue(Lock));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )Lock,
                            ( NDR_RUNDOWN  )SC_RPC_LOCK_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RNotifyBootConfigStatus(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD BootAcceptable;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    SVCCTL_HANDLEW lpMachineName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpMachineName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpMachineName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            BootAcceptable = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RNotifyBootConfigStatus(lpMachineName,BootAcceptable);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RI_ScSetServiceBitsW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD bSetBitsOn;
    DWORD bUpdateImmediately;
    DWORD dwServiceBits;
    RPC_SERVICE_STATUS_HANDLE hServiceStatus;
    wchar_t __RPC_FAR *pszTransportName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    pszTransportName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98] );
            
            hServiceStatus = *(( RPC_SERVICE_STATUS_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceBits = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            bSetBitsOn = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            bUpdateImmediately = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&pszTransportName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RI_ScSetServiceBitsW(
                               hServiceStatus,
                               dwServiceBits,
                               bSetBitsOn,
                               bUpdateImmediately,
                               pszTransportName);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RChangeServiceConfigW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDependSize;
    DWORD dwErrorControl;
    DWORD dwPwSize;
    DWORD dwServiceType;
    DWORD dwStartType;
    NDR_SCONTEXT hService;
    wchar_t __RPC_FAR *lpBinaryPathName;
    LPBYTE lpDependencies;
    wchar_t __RPC_FAR *lpDisplayName;
    wchar_t __RPC_FAR *lpLoadOrderGroup;
    LPBYTE lpPassword;
    wchar_t __RPC_FAR *lpServiceStartName;
    LPDWORD lpdwTagId;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpBinaryPathName = 0;
    lpLoadOrderGroup = 0;
    lpdwTagId = 0;
    lpDependencies = 0;
    lpServiceStartName = 0;
    lpPassword = 0;
    lpDisplayName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwStartType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwErrorControl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpBinaryPathName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpLoadOrderGroup,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwTagId,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDependencies,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[74],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDependSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceStartName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpPassword,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwPwSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RChangeServiceConfigW(
                                ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                dwServiceType,
                                dwStartType,
                                dwErrorControl,
                                lpBinaryPathName,
                                lpLoadOrderGroup,
                                lpdwTagId,
                                lpDependencies,
                                dwDependSize,
                                lpServiceStartName,
                                lpPassword,
                                dwPwSize,
                                lpDisplayName);
        
        _StubMsg.BufferLength = 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwTagId,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RCreateServiceW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDependSize;
    DWORD dwDesiredAccess;
    DWORD dwErrorControl;
    DWORD dwPwSize;
    DWORD dwServiceType;
    DWORD dwStartType;
    NDR_SCONTEXT hSCManager;
    wchar_t __RPC_FAR *lpBinaryPathName;
    LPBYTE lpDependencies;
    wchar_t __RPC_FAR *lpDisplayName;
    wchar_t __RPC_FAR *lpLoadOrderGroup;
    LPBYTE lpPassword;
    NDR_SCONTEXT lpServiceHandle;
    wchar_t __RPC_FAR *lpServiceName;
    wchar_t __RPC_FAR *lpServiceStartName;
    LPDWORD lpdwTagId;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpDisplayName = 0;
    lpBinaryPathName = 0;
    lpLoadOrderGroup = 0;
    lpdwTagId = 0;
    lpDependencies = 0;
    lpServiceStartName = 0;
    lpPassword = 0;
    lpServiceHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[156] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[104],
                                           (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwStartType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwErrorControl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpBinaryPathName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[104],
                                           (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpLoadOrderGroup,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwTagId,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDependencies,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDependSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceStartName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpPassword,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[106],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwPwSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = RCreateServiceW(
                          ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                          lpServiceName,
                          lpDisplayName,
                          dwDesiredAccess,
                          dwServiceType,
                          dwStartType,
                          dwErrorControl,
                          lpBinaryPathName,
                          lpLoadOrderGroup,
                          lpdwTagId,
                          lpDependencies,
                          dwDependSize,
                          lpServiceStartName,
                          lpPassword,
                          dwPwSize,
                          ( LPSC_RPC_HANDLE  )NDRSContextValue(lpServiceHandle));
        
        _StubMsg.BufferLength = 8U + 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwTagId,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpServiceHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_REnumDependentServicesW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M92;
    DWORD _M93;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    DWORD dwServiceState;
    NDR_SCONTEXT hService;
    LPBYTE lpServices;
    LPDWORD lpServicesReturned;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServices = 0;
    pcbBytesNeeded = 0;
    lpServicesReturned = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[210] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServices = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M92;
        lpServicesReturned = &_M93;
        
        _RetVal = REnumDependentServicesW(
                                  ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                  dwServiceState,
                                  lpServices,
                                  cbBufSize,
                                  pcbBytesNeeded,
                                  lpServicesReturned);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpServices,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpServices,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpServicesReturned;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpServices )
            _StubMsg.pfnFree( lpServices );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_REnumServicesStatusW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M94;
    DWORD _M95;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    DWORD dwServiceState;
    DWORD dwServiceType;
    NDR_SCONTEXT hSCManager;
    LPBYTE lpBuffer;
    LPDWORD lpResumeIndex;
    LPDWORD lpServicesReturned;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpBuffer = 0;
    pcbBytesNeeded = 0;
    lpServicesReturned = 0;
    lpResumeIndex = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpResumeIndex,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpBuffer = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M94;
        lpServicesReturned = &_M95;
        
        _RetVal = REnumServicesStatusW(
                               ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                               dwServiceType,
                               dwServiceState,
                               lpBuffer,
                               cbBufSize,
                               pcbBytesNeeded,
                               lpServicesReturned,
                               lpResumeIndex);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 14U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpBuffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpServicesReturned;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpResumeIndex,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpBuffer )
            _StubMsg.pfnFree( lpBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_ROpenSCManagerW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDesiredAccess;
    wchar_t __RPC_FAR *lpDatabaseName;
    SVCCTL_HANDLEW lpMachineName;
    NDR_SCONTEXT lpScHandle;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpMachineName = 0;
    lpDatabaseName = 0;
    lpScHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[260] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpMachineName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDatabaseName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpScHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ROpenSCManagerW(
                          lpMachineName,
                          lpDatabaseName,
                          dwDesiredAccess,
                          ( LPSC_RPC_HANDLE  )NDRSContextValue(lpScHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpScHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_ROpenServiceW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDesiredAccess;
    NDR_SCONTEXT hSCManager;
    NDR_SCONTEXT lpServiceHandle;
    wchar_t __RPC_FAR *lpServiceName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpServiceHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[276] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[104],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ROpenServiceW(
                        ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                        lpServiceName,
                        dwDesiredAccess,
                        ( LPSC_RPC_HANDLE  )NDRSContextValue(lpServiceHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpServiceHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceConfigW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M96;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    NDR_SCONTEXT hService;
    LPQUERY_SERVICE_CONFIGW lpServiceConfig;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceConfig = 0;
    pcbBytesNeeded = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[292] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceConfig = NdrAllocate(&_StubMsg,cbBufSize);
        pcbBytesNeeded = &_M96;
        
        _RetVal = RQueryServiceConfigW(
                               ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                               lpServiceConfig,
                               cbBufSize,
                               pcbBytesNeeded);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrByteCountPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpServiceConfig,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[218] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrByteCountPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpServiceConfig,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[218] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrByteCountPointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)lpServiceConfig,
                                 &__MIDL_TypeFormatString.Format[218] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceLockStatusW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M97;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    NDR_SCONTEXT hSCManager;
    LPQUERY_SERVICE_LOCK_STATUSW lpLockStatus;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpLockStatus = 0;
    pcbBytesNeeded = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[308] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpLockStatus = NdrAllocate(&_StubMsg,cbBufSize);
        pcbBytesNeeded = &_M97;
        
        _RetVal = RQueryServiceLockStatusW(
                                   ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                                   lpLockStatus,
                                   cbBufSize,
                                   pcbBytesNeeded);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrByteCountPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpLockStatus,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[248] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrByteCountPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpLockStatus,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[248] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrByteCountPointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)lpLockStatus,
                                 &__MIDL_TypeFormatString.Format[248] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RStartServiceW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD argc;
    LPSTRING_PTRSW argv;
    NDR_SCONTEXT hService;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    argv = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[324] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            argc = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&argv,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[256],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RStartServiceW(
                         ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                         argc,
                         argv);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = argc;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)argv,
                        &__MIDL_TypeFormatString.Format[256] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RGetServiceDisplayNameW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    wchar_t __RPC_FAR *lpDisplayName;
    wchar_t __RPC_FAR *lpServiceName;
    LPDWORD lpcchBuffer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpDisplayName = 0;
    lpcchBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[336] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[104],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            lpcchBuffer = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( DWORD  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpDisplayName = NdrAllocate(&_StubMsg,(*lpcchBuffer + 1) * sizeof( wchar_t  ) * 2);
        
        _RetVal = RGetServiceDisplayNameW(
                                  ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                                  lpServiceName,
                                  lpDisplayName,
                                  lpcchBuffer);
        
        _StubMsg.BufferLength = 12U + 10U + 7U;
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpDisplayName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[316] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpDisplayName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[316] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpcchBuffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpDisplayName,
                        &__MIDL_TypeFormatString.Format[312] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RGetServiceKeyNameW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    wchar_t __RPC_FAR *lpDisplayName;
    wchar_t __RPC_FAR *lpServiceName;
    LPDWORD lpcchBuffer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpDisplayName = 0;
    lpServiceName = 0;
    lpcchBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[354] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[104],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            lpcchBuffer = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( DWORD  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceName = NdrAllocate(&_StubMsg,(*lpcchBuffer + 1) * sizeof( wchar_t  ) * 2);
        
        _RetVal = RGetServiceKeyNameW(
                              ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                              lpDisplayName,
                              lpServiceName,
                              lpcchBuffer);
        
        _StubMsg.BufferLength = 12U + 10U + 7U;
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpServiceName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[330] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpServiceName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[330] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpcchBuffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = lpcchBuffer ? (*lpcchBuffer + 1) * sizeof( wchar_t  ) : 0;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpServiceName,
                        &__MIDL_TypeFormatString.Format[326] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RI_ScSetServiceBitsA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD bSetBitsOn;
    DWORD bUpdateImmediately;
    DWORD dwServiceBits;
    RPC_SERVICE_STATUS_HANDLE hServiceStatus;
    LPSTR pszTransportName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    pszTransportName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372] );
            
            hServiceStatus = *(( RPC_SERVICE_STATUS_HANDLE __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceBits = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            bSetBitsOn = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            bUpdateImmediately = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&pszTransportName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RI_ScSetServiceBitsA(
                               hServiceStatus,
                               dwServiceBits,
                               bSetBitsOn,
                               bUpdateImmediately,
                               pszTransportName);
        
        _StubMsg.BufferLength = 16U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pszTransportName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pszTransportName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RChangeServiceConfigA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDependSize;
    DWORD dwErrorControl;
    DWORD dwPwSize;
    DWORD dwServiceType;
    DWORD dwStartType;
    NDR_SCONTEXT hService;
    LPSTR lpBinaryPathName;
    LPBYTE lpDependencies;
    LPSTR lpDisplayName;
    LPSTR lpLoadOrderGroup;
    LPBYTE lpPassword;
    LPSTR lpServiceStartName;
    LPDWORD lpdwTagId;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpBinaryPathName = 0;
    lpLoadOrderGroup = 0;
    lpdwTagId = 0;
    lpDependencies = 0;
    lpServiceStartName = 0;
    lpPassword = 0;
    lpDisplayName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[386] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwStartType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwErrorControl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpBinaryPathName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpLoadOrderGroup,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwTagId,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDependencies,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[74],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDependSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceStartName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpPassword,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwPwSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RChangeServiceConfigA(
                                ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                dwServiceType,
                                dwStartType,
                                dwErrorControl,
                                lpBinaryPathName,
                                lpLoadOrderGroup,
                                lpdwTagId,
                                lpDependencies,
                                dwDependSize,
                                lpServiceStartName,
                                lpPassword,
                                dwPwSize,
                                lpDisplayName);
        
        _StubMsg.BufferLength = 8U + 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwTagId,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RCreateServiceA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDependSize;
    DWORD dwDesiredAccess;
    DWORD dwErrorControl;
    DWORD dwPwSize;
    DWORD dwServiceType;
    DWORD dwStartType;
    NDR_SCONTEXT hSCManager;
    LPSTR lpBinaryPathName;
    LPBYTE lpDependencies;
    LPSTR lpDisplayName;
    LPSTR lpLoadOrderGroup;
    LPBYTE lpPassword;
    NDR_SCONTEXT lpServiceHandle;
    LPSTR lpServiceName;
    LPSTR lpServiceStartName;
    LPDWORD lpdwTagId;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpDisplayName = 0;
    lpBinaryPathName = 0;
    lpLoadOrderGroup = 0;
    lpdwTagId = 0;
    lpDependencies = 0;
    lpServiceStartName = 0;
    lpPassword = 0;
    lpServiceHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[430] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[342],
                                           (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwStartType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwErrorControl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpBinaryPathName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[342],
                                           (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpLoadOrderGroup,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwTagId,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDependencies,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDependSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceStartName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpPassword,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[106],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwPwSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = RCreateServiceA(
                          ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                          lpServiceName,
                          lpDisplayName,
                          dwDesiredAccess,
                          dwServiceType,
                          dwStartType,
                          dwErrorControl,
                          lpBinaryPathName,
                          lpLoadOrderGroup,
                          lpdwTagId,
                          lpDependencies,
                          dwDependSize,
                          lpServiceStartName,
                          lpPassword,
                          dwPwSize,
                          ( LPSC_RPC_HANDLE  )NDRSContextValue(lpServiceHandle));
        
        _StubMsg.BufferLength = 8U + 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpdwTagId,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpServiceHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_REnumDependentServicesA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M98;
    DWORD _M99;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    DWORD dwServiceState;
    NDR_SCONTEXT hService;
    LPBYTE lpServices;
    LPDWORD lpServicesReturned;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServices = 0;
    pcbBytesNeeded = 0;
    lpServicesReturned = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[210] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServices = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M98;
        lpServicesReturned = &_M99;
        
        _RetVal = REnumDependentServicesA(
                                  ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                                  dwServiceState,
                                  lpServices,
                                  cbBufSize,
                                  pcbBytesNeeded,
                                  lpServicesReturned);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpServices,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpServices,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpServicesReturned;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpServices )
            _StubMsg.pfnFree( lpServices );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_REnumServicesStatusA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M100;
    DWORD _M101;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    DWORD dwServiceState;
    DWORD dwServiceType;
    NDR_SCONTEXT hSCManager;
    LPBYTE lpBuffer;
    LPDWORD lpResumeIndex;
    LPDWORD lpServicesReturned;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpBuffer = 0;
    pcbBytesNeeded = 0;
    lpServicesReturned = 0;
    lpResumeIndex = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpResumeIndex,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpBuffer = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M100;
        lpServicesReturned = &_M101;
        
        _RetVal = REnumServicesStatusA(
                               ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                               dwServiceType,
                               dwServiceState,
                               lpBuffer,
                               cbBufSize,
                               pcbBytesNeeded,
                               lpServicesReturned,
                               lpResumeIndex);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 14U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpBuffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpServicesReturned;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpResumeIndex,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpBuffer )
            _StubMsg.pfnFree( lpBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_ROpenSCManagerA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDesiredAccess;
    LPSTR lpDatabaseName;
    SVCCTL_HANDLEA lpMachineName;
    NDR_SCONTEXT lpScHandle;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpMachineName = 0;
    lpDatabaseName = 0;
    lpScHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[484] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpMachineName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpDatabaseName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[336],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpScHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ROpenSCManagerA(
                          lpMachineName,
                          lpDatabaseName,
                          dwDesiredAccess,
                          ( LPSC_RPC_HANDLE  )NDRSContextValue(lpScHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpScHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_ROpenServiceA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwDesiredAccess;
    NDR_SCONTEXT hSCManager;
    NDR_SCONTEXT lpServiceHandle;
    LPSTR lpServiceName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpServiceHandle = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[500] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[342],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            dwDesiredAccess = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = ROpenServiceA(
                        ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                        lpServiceName,
                        dwDesiredAccess,
                        ( LPSC_RPC_HANDLE  )NDRSContextValue(lpServiceHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )lpServiceHandle,
                            ( NDR_RUNDOWN  )SC_RPC_HANDLE_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceConfigA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M102;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    NDR_SCONTEXT hService;
    LPQUERY_SERVICE_CONFIGA lpServiceConfig;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceConfig = 0;
    pcbBytesNeeded = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpServiceConfig = NdrAllocate(&_StubMsg,cbBufSize);
        pcbBytesNeeded = &_M102;
        
        _RetVal = RQueryServiceConfigA(
                               ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                               lpServiceConfig,
                               cbBufSize,
                               pcbBytesNeeded);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrByteCountPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpServiceConfig,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[412] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrByteCountPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpServiceConfig,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[412] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrByteCountPointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)lpServiceConfig,
                                 &__MIDL_TypeFormatString.Format[412] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RQueryServiceLockStatusA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M103;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    NDR_SCONTEXT hSCManager;
    LPQUERY_SERVICE_LOCK_STATUSA lpLockStatus;
    LPDWORD pcbBytesNeeded;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpLockStatus = 0;
    pcbBytesNeeded = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[532] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpLockStatus = NdrAllocate(&_StubMsg,cbBufSize);
        pcbBytesNeeded = &_M103;
        
        _RetVal = RQueryServiceLockStatusA(
                                   ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                                   lpLockStatus,
                                   cbBufSize,
                                   pcbBytesNeeded);
        
        _StubMsg.BufferLength = 0U + 11U + 7U;
        NdrByteCountPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpLockStatus,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[442] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrByteCountPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpLockStatus,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[442] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrByteCountPointerFree( &_StubMsg,
                                 (unsigned char __RPC_FAR *)lpLockStatus,
                                 &__MIDL_TypeFormatString.Format[442] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RStartServiceA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD argc;
    LPSTRING_PTRSA argv;
    NDR_SCONTEXT hService;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    argv = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[548] );
            
            hService = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            argc = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&argv,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[450],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = RStartServiceA(
                         ( SC_RPC_HANDLE  )*NDRSContextValue(hService),
                         argc,
                         argv);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = argc;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)argv,
                        &__MIDL_TypeFormatString.Format[450] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RGetServiceDisplayNameA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    LPSTR lpDisplayName;
    LPSTR lpServiceName;
    LPDWORD lpcchBuffer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpServiceName = 0;
    lpDisplayName = 0;
    lpcchBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[560] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpServiceName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[342],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            lpcchBuffer = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( DWORD  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpDisplayName = NdrAllocate(&_StubMsg,*lpcchBuffer * 1);
        
        _RetVal = RGetServiceDisplayNameA(
                                  ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                                  lpServiceName,
                                  lpDisplayName,
                                  lpcchBuffer);
        
        _StubMsg.BufferLength = 12U + 11U + 7U;
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpDisplayName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[510] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpDisplayName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[510] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpcchBuffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpDisplayName,
                        &__MIDL_TypeFormatString.Format[506] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RGetServiceKeyNameA(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    LPSTR lpDisplayName;
    LPSTR lpKeyName;
    LPDWORD lpcchBuffer;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpDisplayName = 0;
    lpKeyName = 0;
    lpcchBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[578] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&lpDisplayName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[342],
                                           (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            lpcchBuffer = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( DWORD  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpKeyName = NdrAllocate(&_StubMsg,*lpcchBuffer * 1);
        
        _RetVal = RGetServiceKeyNameA(
                              ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                              lpDisplayName,
                              lpKeyName,
                              lpcchBuffer);
        
        _StubMsg.BufferLength = 12U + 11U + 7U;
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpKeyName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[520] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpKeyName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[520] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpcchBuffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = lpcchBuffer ? *lpcchBuffer : 0;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpKeyName,
                        &__MIDL_TypeFormatString.Format[516] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_RI_ScGetCurrentGroupStateW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M104;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT hSCManager;
    LPDWORD pdwCurrentState;
    wchar_t __RPC_FAR *pszGroupName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    pszGroupName = 0;
    pdwCurrentState = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[596] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&pszGroupName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        pdwCurrentState = &_M104;
        
        _RetVal = RI_ScGetCurrentGroupStateW(
                                     ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                                     pszGroupName,
                                     pdwCurrentState);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwCurrentState;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
svcctl_REnumServiceGroupW(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD _M105;
    DWORD _M106;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD cbBufSize;
    DWORD dwServiceState;
    DWORD dwServiceType;
    NDR_SCONTEXT hSCManager;
    LPBYTE lpBuffer;
    LPDWORD lpResumeIndex;
    LPDWORD lpServicesReturned;
    LPDWORD pcbBytesNeeded;
    LPCWSTR pszGroupName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &svcctl_StubDesc);
    
    lpBuffer = 0;
    pcbBytesNeeded = 0;
    lpServicesReturned = 0;
    lpResumeIndex = 0;
    pszGroupName = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[610] );
            
            hSCManager = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwServiceType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwServiceState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            cbBufSize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpResumeIndex,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&pszGroupName,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                  (unsigned char)0 );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        lpBuffer = NdrAllocate(&_StubMsg,cbBufSize * 1);
        pcbBytesNeeded = &_M105;
        lpServicesReturned = &_M106;
        
        _RetVal = REnumServiceGroupW(
                             ( SC_RPC_HANDLE  )*NDRSContextValue(hSCManager),
                             dwServiceType,
                             dwServiceState,
                             lpBuffer,
                             cbBufSize,
                             pcbBytesNeeded,
                             lpServicesReturned,
                             lpResumeIndex,
                             pszGroupName);
        
        _StubMsg.BufferLength = 4U + 11U + 7U + 14U + 7U;
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR *)lpBuffer,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbBufSize;
        
        NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                    (unsigned char __RPC_FAR *)lpBuffer,
                                    (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pcbBytesNeeded;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *lpServicesReturned;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpResumeIndex,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( lpBuffer )
            _StubMsg.pfnFree( lpBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC svcctl_StubDesc = 
    {
    (void __RPC_FAR *)& svcctl___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION svcctl_table[] =
    {
    svcctl_RCloseServiceHandle,
    svcctl_RControlService,
    svcctl_RDeleteService,
    svcctl_RLockServiceDatabase,
    svcctl_RQueryServiceObjectSecurity,
    svcctl_RSetServiceObjectSecurity,
    svcctl_RQueryServiceStatus,
    svcctl_RSetServiceStatus,
    svcctl_RUnlockServiceDatabase,
    svcctl_RNotifyBootConfigStatus,
    svcctl_RI_ScSetServiceBitsW,
    svcctl_RChangeServiceConfigW,
    svcctl_RCreateServiceW,
    svcctl_REnumDependentServicesW,
    svcctl_REnumServicesStatusW,
    svcctl_ROpenSCManagerW,
    svcctl_ROpenServiceW,
    svcctl_RQueryServiceConfigW,
    svcctl_RQueryServiceLockStatusW,
    svcctl_RStartServiceW,
    svcctl_RGetServiceDisplayNameW,
    svcctl_RGetServiceKeyNameW,
    svcctl_RI_ScSetServiceBitsA,
    svcctl_RChangeServiceConfigA,
    svcctl_RCreateServiceA,
    svcctl_REnumDependentServicesA,
    svcctl_REnumServicesStatusA,
    svcctl_ROpenSCManagerA,
    svcctl_ROpenServiceA,
    svcctl_RQueryServiceConfigA,
    svcctl_RQueryServiceLockStatusA,
    svcctl_RStartServiceA,
    svcctl_RGetServiceDisplayNameA,
    svcctl_RGetServiceKeyNameA,
    svcctl_RI_ScGetCurrentGroupStateW,
    svcctl_REnumServiceGroupW,
    0
    };
RPC_DISPATCH_TABLE svcctl_DispatchTable = 
    {
    36,
    svcctl_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 10 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 22 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 28 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */
/* 32 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 50 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 70 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 74 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 76 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */
/* 82 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 88 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 96 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 130 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 134 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 138 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 140 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 144 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 146 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 148 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 154 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 160 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 164 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 166 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 168 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 170 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 172 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 174 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 178 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 184 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 188 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 192 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 194 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 198 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */
/* 202 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */
/* 208 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 214 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 220 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 222 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 224 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 226 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 228 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 230 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 234 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
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
/* 242 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 244 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 246 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 248 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 250 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 252 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 254 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 256 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 258 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 260 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 262 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 264 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 266 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 268 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 270 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 272 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */
/* 274 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 276 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 278 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 280 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 282 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 284 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 286 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 288 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */
/* 290 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 292 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 294 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 296 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 298 */	NdrFcShort( 0xda ),	/* Type Offset=218 */
/* 300 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 302 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 304 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 306 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 308 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 310 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 312 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 314 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */
/* 316 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 318 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 320 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 322 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 324 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 326 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 328 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 330 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 332 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */
/* 334 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 336 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 338 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 340 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 342 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 344 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 346 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */
/* 348 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 350 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 352 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 358 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 360 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */
/* 362 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 364 */	NdrFcShort( 0x146 ),	/* Type Offset=326 */
/* 366 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 368 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 370 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 372 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 374 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 376 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 378 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 380 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 382 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 384 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 386 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 388 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 390 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 392 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 396 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 398 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 400 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 402 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 404 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 406 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 408 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 410 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 412 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 414 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 416 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 418 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 420 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 422 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 424 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 426 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 428 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 430 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 432 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 434 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 436 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 438 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 440 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 442 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 444 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 446 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 448 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 450 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 452 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 454 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 456 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 458 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 460 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 462 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 464 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */
/* 466 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 468 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 470 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 472 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 474 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */
/* 476 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 478 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 480 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */
/* 482 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 484 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 486 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 488 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 490 */	NdrFcShort( 0x150 ),	/* Type Offset=336 */
/* 492 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 494 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 496 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */
/* 498 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 500 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 502 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 504 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 506 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 508 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 510 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 512 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */
/* 514 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 516 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 518 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 520 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 522 */	NdrFcShort( 0x19c ),	/* Type Offset=412 */
/* 524 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 526 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 528 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 530 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 532 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 534 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 536 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 538 */	NdrFcShort( 0x1ba ),	/* Type Offset=442 */
/* 540 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 542 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 544 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 546 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 548 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 550 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 552 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 554 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 556 */	NdrFcShort( 0x1c2 ),	/* Type Offset=450 */
/* 558 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 560 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 562 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 564 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 566 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 568 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 570 */	NdrFcShort( 0x1fa ),	/* Type Offset=506 */
/* 572 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 574 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 576 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 578 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 580 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 582 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 584 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */
/* 586 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 588 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */
/* 590 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 592 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */
/* 594 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 596 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 598 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 600 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 602 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 604 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 606 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 608 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 610 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 612 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 614 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 616 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 618 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 620 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 622 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 624 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 626 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 628 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 630 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */
/* 632 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 634 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 636 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 638 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 640 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
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
			0x11, 0x0,	/* FC_RP */
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
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 52 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 54 */	
			0x11, 0x0,	/* FC_RP */
/* 56 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (16) */
/* 58 */	
			0x11, 0x0,	/* FC_RP */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 64 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 66 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 68 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 70 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 72 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x12, 0x0,	/* FC_UP */
/* 76 */	NdrFcShort( 0x2 ),	/* Offset= 2 (78) */
/* 78 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 80 */	NdrFcShort( 0x1 ),	/* 1 */
/* 82 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 86 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 88 */	
			0x12, 0x0,	/* FC_UP */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 94 */	NdrFcShort( 0x1 ),	/* 1 */
/* 96 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 100 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 102 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 104 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x12, 0x0,	/* FC_UP */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 114 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 118 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x0,	/* FC_RP */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 126 */	0x0,		/* 0 */
			0xf,		/* 15 */
/* 128 */	
			0x11, 0x0,	/* FC_RP */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 140 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 142 */	
			0x11, 0x0,	/* FC_RP */
/* 144 */	NdrFcShort( 0x2 ),	/* Offset= 2 (146) */
/* 146 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 148 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 150 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 154 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 156 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 158 */	NdrFcShort( 0xc ),	/* 12 */
/* 160 */	NdrFcShort( 0xc ),	/* 12 */
/* 162 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 164 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 166 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 170 */	NdrFcShort( 0x10 ),	/* 16 */
/* 172 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 174 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 178 */	NdrFcShort( 0x18 ),	/* 24 */
/* 180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 182 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 184 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 186 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 188 */	NdrFcShort( 0x1c ),	/* 28 */
/* 190 */	NdrFcShort( 0x1c ),	/* 28 */
/* 192 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 194 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 196 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 198 */	NdrFcShort( 0x20 ),	/* 32 */
/* 200 */	NdrFcShort( 0x20 ),	/* 32 */
/* 202 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 204 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 206 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 210 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 214 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 216 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 218 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 220 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 222 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 224 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (150) */
/* 226 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0xc ),	/* 12 */
/* 230 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	NdrFcShort( 0x4 ),	/* 4 */
/* 238 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 240 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 242 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 250 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 254 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (226) */
/* 256 */	
			0x12, 0x0,	/* FC_UP */
/* 258 */	NdrFcShort( 0x16 ),	/* Offset= 22 (280) */
/* 260 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 264 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 274 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 276 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 280 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 282 */	NdrFcShort( 0x4 ),	/* 4 */
/* 284 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 288 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 304 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 306 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 308 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (260) */
			0x5b,		/* FC_END */
/* 312 */	
			0x11, 0x0,	/* FC_RP */
/* 314 */	NdrFcShort( 0x2 ),	/* Offset= 2 (316) */
/* 316 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 318 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 322 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 324 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 326 */	
			0x11, 0x0,	/* FC_RP */
/* 328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (330) */
/* 330 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 332 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 338 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 340 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 342 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 344 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 346 */	NdrFcShort( 0x24 ),	/* 36 */
/* 348 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 350 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 352 */	NdrFcShort( 0xc ),	/* 12 */
/* 354 */	NdrFcShort( 0xc ),	/* 12 */
/* 356 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 358 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 360 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 362 */	NdrFcShort( 0x10 ),	/* 16 */
/* 364 */	NdrFcShort( 0x10 ),	/* 16 */
/* 366 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 368 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 370 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 372 */	NdrFcShort( 0x18 ),	/* 24 */
/* 374 */	NdrFcShort( 0x18 ),	/* 24 */
/* 376 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 378 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 380 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 382 */	NdrFcShort( 0x1c ),	/* 28 */
/* 384 */	NdrFcShort( 0x1c ),	/* 28 */
/* 386 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 388 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 390 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 392 */	NdrFcShort( 0x20 ),	/* 32 */
/* 394 */	NdrFcShort( 0x20 ),	/* 32 */
/* 396 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 398 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 400 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 404 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 406 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 408 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 410 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 412 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 414 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (344) */
/* 420 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 422 */	NdrFcShort( 0xc ),	/* 12 */
/* 424 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 426 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 428 */	NdrFcShort( 0x4 ),	/* 4 */
/* 430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 432 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 434 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 436 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 438 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 440 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 442 */	0x2c,		/* FC_BYTE_COUNT_POINTER */
			0x5c,		/* FC_PAD */
/* 444 */	0x28,		/* 40 */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 448 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (420) */
/* 450 */	
			0x12, 0x0,	/* FC_UP */
/* 452 */	NdrFcShort( 0x16 ),	/* Offset= 22 (474) */
/* 454 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 456 */	NdrFcShort( 0x4 ),	/* 4 */
/* 458 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 460 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 468 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 470 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 474 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 476 */	NdrFcShort( 0x4 ),	/* 4 */
/* 478 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 480 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 482 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 484 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 486 */	NdrFcShort( 0x4 ),	/* 4 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x1 ),	/* 1 */
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 498 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 502 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (454) */
			0x5b,		/* FC_END */
/* 506 */	
			0x11, 0x0,	/* FC_RP */
/* 508 */	NdrFcShort( 0x2 ),	/* Offset= 2 (510) */
/* 510 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 512 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 514 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 516 */	
			0x11, 0x0,	/* FC_RP */
/* 518 */	NdrFcShort( 0x2 ),	/* Offset= 2 (520) */
/* 520 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 522 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif

			0x0
        }
    };
