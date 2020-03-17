/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 00:31:38 2020
 */
/* Compiler settings for .\regrpc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "regrpc.h"

#define TYPE_FORMAT_STRING_SIZE   285                               
#define PROC_FORMAT_STRING_SIZE   375                               

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

/* Standard interface: winreg, ver. 1.0,
   GUID={0x338CD001,0x2244,0x31F1,{0xAA,0xAA,0x90,0x00,0x38,0x00,0x10,0x03}} */

handle_t winreg_bhandle;


static const RPC_CLIENT_INTERFACE winreg___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x338CD001,0x2244,0x31F1,{0xAA,0xAA,0x90,0x00,0x38,0x00,0x10,0x03}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE winreg_ClientIfHandle = (RPC_IF_HANDLE)& winreg___RpcClientInterface;

extern const MIDL_STUB_DESC winreg_StubDesc;

static RPC_BINDING_HANDLE winreg__MIDL_AutoBindHandle;


/* [fault_status][comm_status] */ error_status_t OpenClassesRoot( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          0);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenCurrentUser( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          1);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenLocalMachine( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          2);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenPerformanceData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          3);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenUsers( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          4);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegCloseKey( 
    /* [out][in] */ PRPC_HKEY hKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!hKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          5);
            
            
            if(*hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*hKey);;
                
                }
            
            _StubMsg.BufferLength = 20U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*hKey,
                            0);
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
            
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )hKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegCreateKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpClass,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES lpSecurityAttributes,
    /* [out] */ PRPC_HKEY phkResult,
    /* [unique][out][in] */ LPDWORD lpdwDisposition)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpClass)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!phkResult)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          6);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 0U + 11U + 7U + 7U + 18U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpClass,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpSecurityAttributes,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpClass,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwOptions;
            
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpSecurityAttributes,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpdwDisposition,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
            
            *phkResult = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phkResult,
                              _Handle);
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpdwDisposition,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegDeleteKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          7);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegDeleteValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpValueName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          8);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpValueName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpValueName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegEnumKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpName,
    /* [unique][out][in] */ PUNICODE_STRING lpClass,
    /* [unique][out][in] */ PFILETIME lpftLastWriteTime)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          9);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 4U + 0U + 11U + 11U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpClass,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpftLastWriteTime,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[136] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwIndex;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpClass,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpftLastWriteTime,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[136] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[58] );
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42],
                                       (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpClass,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpftLastWriteTime,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[136],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegEnumValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ DWORD dwIndex,
    /* [out][in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpValueName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          10);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 4U + 0U + 18U + 20U + 18U + 14U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpValueName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.MaxCount = lpcbData ? *lpcbData : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = lpcbLen ? *lpcbLen : 0;
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwIndex;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpValueName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpType,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            _StubMsg.MaxCount = lpcbData ? *lpcbData : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = lpcbLen ? *lpcbLen : 0;
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpData,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpcbData,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpcbLen,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78] );
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpValueName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42],
                                       (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpType,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpcbData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpcbLen,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegFlushKey( 
    /* [in] */ RPC_HKEY hKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          11);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[106] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegGetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out][in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!pRpcSecurityDescriptor)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          12);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 4U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)pRpcSecurityDescriptor,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[82] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++ = SecurityInformation;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)pRpcSecurityDescriptor,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[82] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112] );
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pRpcSecurityDescriptor,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[82],
                                       (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpFile)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpFile)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          13);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpFile,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpFile,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegNotifyChangeKeyValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ BOOLEAN bWatchSubtree,
    /* [in] */ DWORD dwNotifyFilter,
    /* [in] */ DWORD hEvent,
    /* [in] */ PUNICODE_STRING MachineName,
    /* [in] */ PUNICODE_STRING PipeName,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pRpcSecurityAttributes)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!MachineName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!PipeName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          14);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 1U + 7U + 4U + 0U + 0U + 11U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)MachineName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)PipeName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)pRpcSecurityAttributes,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++ = bWatchSubtree;
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwNotifyFilter;
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = hEvent;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)MachineName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)PipeName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)pRpcSecurityAttributes,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegOpenKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ DWORD dwOptions,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phkResult)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!phkResult)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          15);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 11U + 7U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwOptions;
            
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[162] );
            
            *phkResult = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phkResult,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


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
    /* [out] */ PFILETIME lpftLastWriteTime)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpClass)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcSubKeys)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcbMaxSubKeyLen)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcbMaxClassLen)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcValues)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcbMaxValueNameLen)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcbMaxValueLen)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpcbSecurityDescriptor)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpftLastWriteTime)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          16);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpClass,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpClass,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180] );
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpClass,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42],
                                       (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *lpcSubKeys = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcbMaxSubKeyLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcbMaxClassLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcValues = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcbMaxValueNameLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcbMaxValueLen = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *lpcbSecurityDescriptor = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpftLastWriteTime,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[140],
                                       (unsigned char)0 );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegQueryValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [unique][out][in] */ LPDWORD lpType,
    /* [length_is][size_is][unique][out][in] */ LPBYTE lpData,
    /* [unique][out][in] */ LPDWORD lpcbData,
    /* [unique][out][in] */ LPDWORD lpcbLen)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpValueName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          17);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 18U + 20U + 18U + 14U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpValueName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.MaxCount = lpcbData ? *lpcbData : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = lpcbLen ? *lpcbLen : 0;
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpValueName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpType,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            _StubMsg.MaxCount = lpcbData ? *lpcbData : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = lpcbLen ? *lpcbLen : 0;
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpData,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpcbData,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpcbLen,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[222] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpType,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[148],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpcbData,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpcbLen,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[128],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegReplaceKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey,
    /* [in] */ PUNICODE_STRING lpNewFile,
    /* [in] */ PUNICODE_STRING lpOldFile)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpNewFile)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpOldFile)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          18);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 0U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpNewFile,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpOldFile,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpNewFile,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpOldFile,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[248] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegRestoreKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [in] */ DWORD Flags)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpFile)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          19);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 11U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpFile,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpFile,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = Flags;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[266] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegSaveKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpFile,
    /* [unique][in] */ PRPC_SECURITY_ATTRIBUTES pSecurityAttributes)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpFile)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          20);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 11U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpFile,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)pSecurityAttributes,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpFile,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)pSecurityAttributes,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[278] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegSetKeySecurity( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PRPC_SECURITY_DESCRIPTOR pRpcSecurityDescriptor)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!pRpcSecurityDescriptor)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          21);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 4U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)pRpcSecurityDescriptor,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[82] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++ = SecurityInformation;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)pRpcSecurityDescriptor,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[82] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[292] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegSetValue( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpValueName,
    /* [in] */ DWORD dwType,
    /* [size_is][in] */ LPBYTE lpData,
    /* [in] */ DWORD cbData)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpValueName)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!lpData)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          22);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U + 11U + 5U + 11U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpValueName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.MaxCount = cbData;
            
            NdrConformantArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                          (unsigned char __RPC_FAR *)lpData,
                                          (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[190] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpValueName,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwType;
            
            _StubMsg.MaxCount = cbData;
            
            NdrConformantArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                        (unsigned char __RPC_FAR *)lpData,
                                        (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[190] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = cbData;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[304] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegUnLoadKey( 
    /* [in] */ RPC_HKEY hKey,
    /* [in] */ PUNICODE_STRING lpSubKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpSubKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          23);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 0U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)lpSubKey,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)lpSubKey,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[42] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


ULONG BaseInitiateSystemShutdown( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [unique][in] */ PUNICODE_STRING lpMessage,
    /* [in] */ DWORD dwTimeout,
    /* [in] */ BOOLEAN bForceAppsClosed,
    /* [in] */ BOOLEAN bRebootAfterShutdown)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    ULONG _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          24);
        
        
        _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 6U + 6U + 11U + 2U + 2U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpMessage,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpMessage,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwTimeout;
        
        *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++ = bForceAppsClosed;
        
        *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++ = bRebootAfterShutdown;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[322] );
        
        _RetVal = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


ULONG BaseAbortSystemShutdown( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    ULONG _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          25);
        
        
        _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
        
        if(_Handle == 0)
            {
            RpcRaiseException(RPC_S_INVALID_BINDING);
            }
        
        _StubMsg.BufferLength = 6U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ServerName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338] );
        
        _RetVal = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        
        if(_Handle)
            {
            PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
            }
        }
    RpcEndFinally
    
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegGetVersion( 
    /* [in] */ RPC_HKEY hKey,
    /* [out] */ LPDWORD lpdwVersion)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!lpdwVersion)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          26);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[344] );
            
            *lpdwVersion = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenCurrentConfig( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          27);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t OpenDynData( 
    /* [unique][in] */ PREGISTRY_SERVER_NAME ServerName,
    /* [in] */ REGSAM samDesired,
    /* [out] */ PRPC_HKEY phKey)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!phKey)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          28);
            
            
            _Handle = PREGISTRY_SERVER_NAME_bind(ServerName);;
            
            if(_Handle == 0)
                {
                RpcRaiseException(RPC_S_INVALID_BINDING);
                }
            
            _StubMsg.BufferLength = 6U + 6U;
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)ServerName,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( REGSAM __RPC_FAR * )_StubMsg.Buffer)++ = samDesired;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            *phKey = (void *)0;
            NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )phKey,
                              _Handle);
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            
            if(_Handle)
                {
                PREGISTRY_SERVER_NAME_unbind(ServerName,_Handle);
                }
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


/* [fault_status][comm_status] */ error_status_t BaseRegQueryMultipleValues( 
    /* [in] */ RPC_HKEY hKey,
    /* [length_is][size_is][out][in] */ PRVALENT val_list,
    /* [in] */ DWORD num_vals,
    /* [length_is][size_is][unique][out][in] */ LPSTR lpvalueBuf,
    /* [ref][out][in] */ LPDWORD ldwTotsize)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    error_status_t _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        if(!val_list)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        if(!ldwTotsize)
            {
            RpcRaiseException(RPC_X_NULL_REF_POINTER);
            }
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winreg_StubDesc,
                          29);
            
            
            if(hKey != 0)
                {
                _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hKey);;
                
                }
            else
                {
                RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
                }
            
            _StubMsg.BufferLength = 20U + 12U + 7U + 20U + 11U;
            _StubMsg.MaxCount = num_vals;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = num_vals;
            
            NdrConformantVaryingArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                                 (unsigned char __RPC_FAR *)val_list,
                                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[226] );
            
            _StubMsg.MaxCount = ldwTotsize ? *ldwTotsize : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = ldwTotsize ? *ldwTotsize : 0;
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)lpvalueBuf,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[262] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hKey,
                            1);
            _StubMsg.MaxCount = num_vals;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = num_vals;
            
            NdrConformantVaryingArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                               (unsigned char __RPC_FAR *)val_list,
                                               (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[226] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = num_vals;
            
            _StubMsg.MaxCount = ldwTotsize ? *ldwTotsize : 0;
            _StubMsg.Offset = 0;
            _StubMsg.ActualCount = ldwTotsize ? *ldwTotsize : 0;
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)lpvalueBuf,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[262] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *ldwTotsize;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[354] );
            
            NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                                 (unsigned char __RPC_FAR * __RPC_FAR *)&val_list,
                                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[226],
                                                 (unsigned char)0 );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&lpvalueBuf,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[262],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *ldwTotsize = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            _RetVal = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )&_RetVal,( unsigned long __RPC_FAR * )&_RetVal,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


static const MIDL_STUB_DESC winreg_StubDesc = 
    {
    (void __RPC_FAR *)& winreg___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winreg_bhandle,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
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
/*  4 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 22 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */
/* 42 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 46 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 56 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 58 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 68 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */
/* 72 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */
/* 76 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 88 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 92 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 96 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 100 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 104 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */
/* 122 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 128 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 132 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 134 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 136 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 138 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 142 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 150 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 152 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 154 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 160 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 162 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 170 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 172 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 174 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 176 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */
/* 178 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 184 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 192 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 194 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 196 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 198 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 200 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 202 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 204 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 208 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 210 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 212 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 214 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 216 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */
/* 220 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 222 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 224 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 226 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 228 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 230 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 232 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 234 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 236 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 238 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 240 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 242 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 244 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */
/* 246 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 248 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 250 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 252 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 254 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 256 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 258 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 260 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 262 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 264 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 266 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 270 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 272 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 274 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 276 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 278 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 280 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 282 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 284 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 286 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 288 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 290 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 292 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 294 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 296 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 298 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 300 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */
/* 302 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 304 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 306 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 308 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 310 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 312 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 314 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 316 */	NdrFcShort( 0xba ),	/* Type Offset=186 */
/* 318 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 320 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 322 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 324 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 326 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 328 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */
/* 330 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 332 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 334 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 340 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 342 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 344 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 346 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 348 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 350 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */
/* 352 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */
/* 354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 358 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 360 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */
/* 362 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 364 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 366 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */
/* 368 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 370 */	NdrFcShort( 0x118 ),	/* Type Offset=280 */
/* 372 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x10,		/* FC_ERROR_STATUS_T */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x0,	/* FC_RP */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 10 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 12 */	
			0x11, 0x0,	/* FC_RP */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x10 ),	/* Offset= 16 (42) */
/* 28 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 30 */	NdrFcShort( 0x2 ),	/* 2 */
/* 32 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 34 */	NdrFcShort( 0x2 ),	/* 2 */
/* 36 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 42 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (28) */
/* 58 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 60 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 62 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 64 */	
			0x12, 0x0,	/* FC_UP */
/* 66 */	NdrFcShort( 0x26 ),	/* Offset= 38 (104) */
/* 68 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x1 ),	/* 1 */
/* 72 */	0x18,		/* 24 */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0x4 ),	/* 4 */
/* 76 */	0x18,		/* 24 */
			0x0,		/*  */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 82 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 84 */	NdrFcShort( 0xc ),	/* 12 */
/* 86 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 88 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (68) */
/* 98 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x14 ),	/* 20 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* Offset= 0 (110) */
/* 112 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 114 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdf ),	/* Offset= -33 (82) */
			0x2,		/* FC_CHAR */
/* 118 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x0,	/* FC_RP */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 126 */	0x0,		/* 0 */
			0x6,		/* 6 */
/* 128 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 130 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 132 */	
			0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0xffffffa4 ),	/* Offset= -92 (42) */
/* 136 */	
			0x12, 0x0,	/* FC_UP */
/* 138 */	NdrFcShort( 0x2 ),	/* Offset= 2 (140) */
/* 140 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 146 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 148 */	
			0x12, 0x0,	/* FC_UP */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	0x20,		/* 32 */
			0x0,		/* 0 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 166 */	
			0x11, 0x0,	/* FC_RP */
/* 168 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (82) */
/* 170 */	
			0x11, 0x0,	/* FC_RP */
/* 172 */	NdrFcShort( 0x2 ),	/* Offset= 2 (174) */
/* 174 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 176 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 178 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 180 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 182 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 184 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (140) */
/* 186 */	
			0x11, 0x0,	/* FC_RP */
/* 188 */	NdrFcShort( 0x2 ),	/* Offset= 2 (190) */
/* 190 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 194 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 196 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 198 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 200 */	
			0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0x18 ),	/* Offset= 24 (226) */
/* 204 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x10 ),	/* 16 */
/* 208 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	0x12, 0x0,	/* FC_UP */
/* 218 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (42) */
/* 220 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 222 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 224 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 226 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 230 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 238 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 240 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	0x12, 0x0,	/* FC_UP */
/* 254 */	NdrFcShort( 0xffffff2c ),	/* Offset= -212 (42) */
/* 256 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 258 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (204) */
			0x5b,		/* FC_END */
/* 262 */	
			0x12, 0x0,	/* FC_UP */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 270 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 272 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 274 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 276 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 278 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 280 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 282 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
