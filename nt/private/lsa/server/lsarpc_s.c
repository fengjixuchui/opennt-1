/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 16:25:12 2019
 */
/* Compiler settings for lsarpc.idl, lsasrv.acf:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "lsarpc.h"

#define TYPE_FORMAT_STRING_SIZE   1387                              
#define PROC_FORMAT_STRING_SIZE   583                               

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

/* Standard interface: lsarpc, ver. 0.0,
   GUID={0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */


extern RPC_DISPATCH_TABLE lsarpc_DispatchTable;

static const RPC_SERVER_INTERFACE lsarpc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &lsarpc_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE lsarpc_ServerIfHandle = (RPC_IF_HANDLE)& lsarpc___RpcServerInterface;

extern const MIDL_STUB_DESC lsarpc_StubDesc;

void __RPC_STUB
lsarpc_LsarClose(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    ObjectHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarClose(( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(ObjectHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ObjectHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
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
lsarpc_LsarDelete(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarDelete(( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle));
        
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
lsarpc_LsarEnumeratePrivileges(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_PRIVILEGE_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Privileges = 0;
        
        _RetVal = LsarEnumeratePrivileges(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  EnumerationContext,
                                  EnumerationBuffer,
                                  PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)EnumerationBuffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[100] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)EnumerationBuffer,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[100] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDL_TypeFormatString.Format[16] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQuerySecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PLSAPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    PLSAPR_SR_SECURITY_DESCRIPTOR _M5;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecurityDescriptor = &_M5;
        _M5 = 0;
        
        _RetVal = LsarQuerySecurityObject(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle),
                                  SecurityInformation,
                                  SecurityDescriptor);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)SecurityDescriptor,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[120] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)SecurityDescriptor,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[120] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecurityDescriptor,
                        &__MIDL_TypeFormatString.Format[120] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetSecurityObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor;
    SECURITY_INFORMATION SecurityInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SecurityDescriptor = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SecurityInformation = *(( SECURITY_INFORMATION __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&SecurityDescriptor,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[138],
                                   (unsigned char)0 );
        
        
        _RetVal = LsarSetSecurityObject(
                                ( LSAPR_HANDLE  )*NDRSContextValue(ObjectHandle),
                                SecurityInformation,
                                SecurityDescriptor);
        
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
                        (unsigned char __RPC_FAR *)SecurityDescriptor,
                        &__MIDL_TypeFormatString.Format[158] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarChangePassword(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING AccountName;
    PLSAPR_UNICODE_STRING DomainName;
    PLSAPR_UNICODE_STRING NewPassword;
    PLSAPR_UNICODE_STRING OldPassword;
    PLSAPR_UNICODE_STRING ServerName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    ServerName = 0;
    DomainName = 0;
    AccountName = 0;
    OldPassword = 0;
    NewPassword = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ServerName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&DomainName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&AccountName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&OldPassword,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&NewPassword,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        
        _RetVal = LsarChangePassword(
                             ServerName,
                             DomainName,
                             AccountName,
                             OldPassword,
                             NewPassword);
        
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
                        (unsigned char __RPC_FAR *)ServerName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)AccountName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)OldPassword,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)NewPassword,
                        &__MIDL_TypeFormatString.Format[162] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_SERVER_NAME SystemName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SystemName = 0;
    ObjectAttributes = 0;
    PolicyHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SystemName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[188],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ObjectAttributes,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[362],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        PolicyHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenPolicy(
                         SystemName,
                         ObjectAttributes,
                         DesiredAccess,
                         ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(PolicyHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )PolicyHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ObjectAttributes,
                        &__MIDL_TypeFormatString.Format[192] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQueryInformationPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    POLICY_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_POLICY_INFORMATION __RPC_FAR *PolicyInformation;
    PLSAPR_POLICY_INFORMATION _M6;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    PolicyInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        PolicyInformation = &_M6;
        _M6 = 0;
        
        _RetVal = LsarQueryInformationPolicy(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                     InformationClass,
                                     PolicyInformation);
        
        _StubMsg.BufferLength = 4U + 8U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)PolicyInformation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[424] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)PolicyInformation,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[424] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)PolicyInformation,
                        &__MIDL_TypeFormatString.Format[424] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetInformationPolicy(
    PRPC_MESSAGE _pRpcMessage )
{
    POLICY_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_POLICY_INFORMATION PolicyInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    PolicyInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[102] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        NdrNonEncapsulatedUnionUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&PolicyInformation,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[724],
                                           (unsigned char)0 );
        
        
        _RetVal = LsarSetInformationPolicy(
                                   ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                   InformationClass,
                                   PolicyInformation);
        
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
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)PolicyInformation,
                        &__MIDL_TypeFormatString.Format[720] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarClearAuditLog(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarClearAuditLog(( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle));
        
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
lsarpc_LsarCreateAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_SID AccountSid;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    AccountSid = 0;
    AccountHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AccountHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateAccount(
                            ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                            AccountSid,
                            DesiredAccess,
                            ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(AccountHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AccountHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
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
lsarpc_LsarEnumerateAccounts(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_ACCOUNT_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[130] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Information = 0;
        
        _RetVal = LsarEnumerateAccounts(
                                ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                EnumerationContext,
                                EnumerationBuffer,
                                PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)EnumerationBuffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[792] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)EnumerationBuffer,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[792] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDL_TypeFormatString.Format[736] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarCreateTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUST_INFORMATION TrustedDomainInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainInformation = 0;
    TrustedDomainHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[146] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[574],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        TrustedDomainHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateTrustedDomain(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  TrustedDomainInformation,
                                  DesiredAccess,
                                  ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(TrustedDomainHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )TrustedDomainHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDL_TypeFormatString.Format[812] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumerateTrustedDomains(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer;
    PLSA_ENUMERATION_HANDLE EnumerationContext;
    NDR_SCONTEXT PolicyHandle;
    ULONG PreferedMaximumLength;
    struct _LSAPR_TRUSTED_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    EnumerationContext = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[162] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        EnumerationContext = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        PreferedMaximumLength = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Information = 0;
        
        _RetVal = LsarEnumerateTrustedDomains(
                                      ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                      EnumerationContext,
                                      EnumerationBuffer,
                                      PreferedMaximumLength);
        
        _StubMsg.BufferLength = 4U + 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)EnumerationBuffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[860] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *EnumerationContext;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)EnumerationBuffer,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[860] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDL_TypeFormatString.Format[816] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupNames(
    PRPC_MESSAGE _pRpcMessage )
{
    ULONG Count;
    LSAP_LOOKUP_LEVEL LookupLevel;
    PULONG MappedCount;
    PLSAPR_UNICODE_STRING Names;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains;
    PLSAPR_TRANSLATED_SIDS TranslatedSids;
    PLSAPR_REFERENCED_DOMAIN_LIST _M7;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Names = 0;
    ReferencedDomains = 0;
    TranslatedSids = 0;
    MappedCount = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[178] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Count = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                      (unsigned char __RPC_FAR * __RPC_FAR *)&Names,
                                      (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[884],
                                      (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedSids,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[980],
                                   (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&LookupLevel,
                           13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MappedCount = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        ReferencedDomains = &_M7;
        _M7 = 0;
        
        _RetVal = LsarLookupNames(
                          ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                          Count,
                          Names,
                          ReferencedDomains,
                          TranslatedSids,
                          LookupLevel,
                          MappedCount);
        
        _StubMsg.BufferLength = 4U + 0U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ReferencedDomains,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[916] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)TranslatedSids,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[980] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ReferencedDomains,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[916] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)TranslatedSids,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[980] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = Count;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Names,
                        &__MIDL_TypeFormatString.Format[880] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ReferencedDomains,
                        &__MIDL_TypeFormatString.Format[916] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TranslatedSids,
                        &__MIDL_TypeFormatString.Format[946] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupSids(
    PRPC_MESSAGE _pRpcMessage )
{
    LSAP_LOOKUP_LEVEL LookupLevel;
    PULONG MappedCount;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains;
    PLSAPR_SID_ENUM_BUFFER SidEnumBuffer;
    PLSAPR_TRANSLATED_NAMES TranslatedNames;
    PLSAPR_REFERENCED_DOMAIN_LIST _M8;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SidEnumBuffer = 0;
    ReferencedDomains = 0;
    TranslatedNames = 0;
    MappedCount = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[204] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&SidEnumBuffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[792],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&TranslatedNames,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1042],
                                   (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&LookupLevel,
                           13);
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        MappedCount = ( ULONG __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( ULONG  );
        
        ReferencedDomains = &_M8;
        _M8 = 0;
        
        _RetVal = LsarLookupSids(
                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                         SidEnumBuffer,
                         ReferencedDomains,
                         TranslatedNames,
                         LookupLevel,
                         MappedCount);
        
        _StubMsg.BufferLength = 4U + 0U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ReferencedDomains,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[916] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)TranslatedNames,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1042] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ReferencedDomains,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[916] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)TranslatedNames,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1042] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *MappedCount;
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SidEnumBuffer,
                        &__MIDL_TypeFormatString.Format[1000] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ReferencedDomains,
                        &__MIDL_TypeFormatString.Format[916] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TranslatedNames,
                        &__MIDL_TypeFormatString.Format[1004] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarCreateSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT SecretHandle;
    PLSAPR_UNICODE_STRING SecretName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SecretName = 0;
    SecretHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&SecretName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecretHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarCreateSecret(
                           ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                           SecretName,
                           DesiredAccess,
                           ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(SecretHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )SecretHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecretName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_SID AccountSid;
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    AccountSid = 0;
    AccountHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        AccountHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenAccount(
                          ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                          AccountSid,
                          DesiredAccess,
                          ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(AccountHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )AccountHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
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
lsarpc_LsarEnumeratePrivilegesAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_PRIVILEGE_SET __RPC_FAR *Privileges;
    PLSAPR_PRIVILEGE_SET _M9;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Privileges = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[244] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        Privileges = &_M9;
        _M9 = 0;
        
        _RetVal = LsarEnumeratePrivilegesAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),Privileges);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Privileges,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1062] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Privileges,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1062] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Privileges,
                        &__MIDL_TypeFormatString.Format[1062] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarAddPrivilegesToAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PLSAPR_PRIVILEGE_SET Privileges;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Privileges = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[254] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&Privileges,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1094],
                                       (unsigned char)0 );
        
        
        _RetVal = LsarAddPrivilegesToAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),Privileges);
        
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
lsarpc_LsarRemovePrivilegesFromAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    BOOLEAN AllPrivileges;
    PLSAPR_PRIVILEGE_SET Privileges;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Privileges = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[264] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        AllPrivileges = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&Privileges,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1066],
                              (unsigned char)0 );
        
        
        _RetVal = LsarRemovePrivilegesFromAccount(
                                          ( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),
                                          AllPrivileges,
                                          Privileges);
        
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
lsarpc_LsarGetQuotasForAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PQUOTA_LIMITS QuotaLimits;
    QUOTA_LIMITS _QuotaLimitsM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    QuotaLimits = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[276] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        QuotaLimits = &_QuotaLimitsM;
        
        _RetVal = LsarGetQuotasForAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),QuotaLimits);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)QuotaLimits,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[668] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)QuotaLimits,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[668] );
        
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
lsarpc_LsarSetQuotasForAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PQUOTA_LIMITS QuotaLimits;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    QuotaLimits = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[286] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&QuotaLimits,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[668],
                                   (unsigned char)0 );
        
        
        _RetVal = LsarSetQuotasForAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),QuotaLimits);
        
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
lsarpc_LsarGetSystemAccessAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    PULONG SystemAccess;
    ULONG _M10;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SystemAccess = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[296] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SystemAccess = &_M10;
        
        _RetVal = LsarGetSystemAccessAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),SystemAccess);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++ = *SystemAccess;
        
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
lsarpc_LsarSetSystemAccessAccount(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT AccountHandle;
    ULONG SystemAccess;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[306] );
        
        AccountHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        SystemAccess = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = LsarSetSystemAccessAccount(( LSAPR_HANDLE  )*NDRSContextValue(AccountHandle),SystemAccess);
        
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
lsarpc_LsarOpenTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_SID TrustedDomainSid;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainSid = 0;
    TrustedDomainHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        TrustedDomainHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenTrustedDomain(
                                ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                TrustedDomainSid,
                                DesiredAccess,
                                ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(TrustedDomainHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )TrustedDomainHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
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
lsarpc_LsarQueryInfoTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation;
    PLSAPR_TRUSTED_DOMAIN_INFO _M11;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[314] );
        
        TrustedDomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        TrustedDomainInformation = &_M11;
        _M11 = 0;
        
        _RetVal = LsarQueryInfoTrustedDomain(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(TrustedDomainHandle),
                                     InformationClass,
                                     TrustedDomainInformation);
        
        _StubMsg.BufferLength = 4U + 7U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1120] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainInformation,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1120] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDL_TypeFormatString.Format[1120] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetInformationTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT TrustedDomainHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[326] );
        
        TrustedDomainHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        NdrNonEncapsulatedUnionUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1294],
                                           (unsigned char)0 );
        
        
        _RetVal = LsarSetInformationTrustedDomain(
                                          ( LSAPR_HANDLE  )*NDRSContextValue(TrustedDomainHandle),
                                          InformationClass,
                                          TrustedDomainInformation);
        
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
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDL_TypeFormatString.Format[1290] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    NDR_SCONTEXT PolicyHandle;
    NDR_SCONTEXT SecretHandle;
    PLSAPR_UNICODE_STRING SecretName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SecretName = 0;
    SecretHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&SecretName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        SecretHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenSecret(
                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                         SecretName,
                         DesiredAccess,
                         ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(SecretHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )SecretHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)SecretName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetSecret(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue;
    PLSAPR_CR_CIPHER_VALUE EncryptedOldValue;
    NDR_SCONTEXT SecretHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    EncryptedCurrentValue = 0;
    EncryptedOldValue = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338] );
        
        SecretHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1302],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1302],
                              (unsigned char)0 );
        
        
        _RetVal = LsarSetSecret(
                        ( LSAPR_HANDLE  )*NDRSContextValue(SecretHandle),
                        EncryptedCurrentValue,
                        EncryptedOldValue);
        
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
                        (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                        &__MIDL_TypeFormatString.Format[1302] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedOldValue,
                        &__MIDL_TypeFormatString.Format[1302] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQuerySecret(
    PRPC_MESSAGE _pRpcMessage )
{
    PLARGE_INTEGER CurrentValueSetTime;
    PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedCurrentValue;
    PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedOldValue;
    PLARGE_INTEGER OldValueSetTime;
    NDR_SCONTEXT SecretHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    EncryptedCurrentValue = 0;
    CurrentValueSetTime = 0;
    EncryptedOldValue = 0;
    OldValueSetTime = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[352] );
        
        SecretHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&OldValueSetTime,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310],
                              (unsigned char)0 );
        
        
        _RetVal = LsarQuerySecret(
                          ( LSAPR_HANDLE  )*NDRSContextValue(SecretHandle),
                          EncryptedCurrentValue,
                          CurrentValueSetTime,
                          EncryptedOldValue,
                          OldValueSetTime);
        
        _StubMsg.BufferLength = 8U + 11U + 18U + 11U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)CurrentValueSetTime,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedOldValue,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)OldValueSetTime,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)CurrentValueSetTime,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedOldValue,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1306] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)OldValueSetTime,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1310] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedCurrentValue,
                        &__MIDL_TypeFormatString.Format[1306] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedOldValue,
                        &__MIDL_TypeFormatString.Format[1306] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeValue(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING Name;
    NDR_SCONTEXT PolicyHandle;
    PLUID Value;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    LUID _ValueM;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Name = 0;
    Value = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[374] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        Value = &_ValueM;
        
        _RetVal = LsarLookupPrivilegeValue(
                                   ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                   Name,
                                   Value);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)Value,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)Value,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDL_TypeFormatString.Format[162] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeName(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING __RPC_FAR *Name;
    NDR_SCONTEXT PolicyHandle;
    PLUID Value;
    PLSAPR_UNICODE_STRING _M12;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Value = 0;
    Name = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[388] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&Value,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20],
                                   (unsigned char)0 );
        
        Name = &_M12;
        _M12 = 0;
        
        _RetVal = LsarLookupPrivilegeName(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  Value,
                                  Name);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)Name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1322] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)Name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1322] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDL_TypeFormatString.Format[1322] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarLookupPrivilegeDisplayName(
    PRPC_MESSAGE _pRpcMessage )
{
    SHORT ClientLanguage;
    SHORT ClientSystemDefaultLanguage;
    PLSAPR_UNICODE_STRING __RPC_FAR *DisplayName;
    PWORD LanguageReturned;
    PLSAPR_UNICODE_STRING Name;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_UNICODE_STRING _M13;
    WORD _M14;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    Name = 0;
    DisplayName = 0;
    LanguageReturned = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[402] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&Name,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        ClientLanguage = *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        ClientSystemDefaultLanguage = *(( SHORT __RPC_FAR * )_StubMsg.Buffer)++;
        
        DisplayName = &_M13;
        _M13 = 0;
        LanguageReturned = &_M14;
        
        _RetVal = LsarLookupPrivilegeDisplayName(
                                         ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                         Name,
                                         ClientLanguage,
                                         ClientSystemDefaultLanguage,
                                         DisplayName,
                                         LanguageReturned);
        
        _StubMsg.BufferLength = 4U + 5U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DisplayName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1322] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DisplayName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1322] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( WORD __RPC_FAR * )_StubMsg.Buffer)++ = *LanguageReturned;
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)Name,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DisplayName,
                        &__MIDL_TypeFormatString.Format[1322] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarDeleteObject(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT ObjectHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    ObjectHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        ObjectHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        
        _RetVal = LsarDeleteObject(( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(ObjectHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ObjectHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
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
lsarpc_LsarEnumerateAccountsWithUserRight(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_UNICODE_STRING UserRight;
    struct _LSAPR_ACCOUNT_ENUM_BUFFER _EnumerationBufferM;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    UserRight = 0;
    EnumerationBuffer = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[424] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserRight,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1326],
                              (unsigned char)0 );
        
        EnumerationBuffer = &_EnumerationBufferM;
        EnumerationBuffer -> Information = 0;
        
        _RetVal = LsarEnumerateAccountsWithUserRight(
                                             ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                             UserRight,
                                             EnumerationBuffer);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)EnumerationBuffer,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[792] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)EnumerationBuffer,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[792] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)UserRight,
                        &__MIDL_TypeFormatString.Format[1326] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EnumerationBuffer,
                        &__MIDL_TypeFormatString.Format[736] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarEnumerateAccountRights(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_SID AccountSid;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_USER_RIGHT_SET UserRights;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    struct _LSAPR_USER_RIGHT_SET _UserRightsM;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    AccountSid = 0;
    UserRights = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[438] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        UserRights = &_UserRightsM;
        UserRights -> UserRights = 0;
        
        _RetVal = LsarEnumerateAccountRights(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                     AccountSid,
                                     UserRights);
        
        _StubMsg.BufferLength = 0U + 11U;
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)UserRights,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1198] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)UserRights,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1198] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)UserRights,
                        &__MIDL_TypeFormatString.Format[1334] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarAddAccountRights(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_SID AccountSid;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_USER_RIGHT_SET UserRights;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    AccountSid = 0;
    UserRights = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[452] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&UserRights,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1198],
                                   (unsigned char)0 );
        
        
        _RetVal = LsarAddAccountRights(
                               ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                               AccountSid,
                               UserRights);
        
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
                        (unsigned char __RPC_FAR *)UserRights,
                        &__MIDL_TypeFormatString.Format[1338] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarRemoveAccountRights(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_SID AccountSid;
    BOOLEAN AllRights;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_USER_RIGHT_SET UserRights;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    AccountSid = 0;
    UserRights = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[466] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&AccountSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        AllRights = *(( BOOLEAN __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&UserRights,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1198],
                                   (unsigned char)0 );
        
        
        _RetVal = LsarRemoveAccountRights(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  AccountSid,
                                  AllRights,
                                  UserRights);
        
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
                        (unsigned char __RPC_FAR *)UserRights,
                        &__MIDL_TypeFormatString.Format[1338] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarQueryTrustedDomainInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation;
    PLSAPR_SID TrustedDomainSid;
    PLSAPR_TRUSTED_DOMAIN_INFO _M15;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainSid = 0;
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[482] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        TrustedDomainInformation = &_M15;
        _M15 = 0;
        
        _RetVal = LsarQueryTrustedDomainInfo(
                                     ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                     TrustedDomainSid,
                                     InformationClass,
                                     TrustedDomainInformation);
        
        _StubMsg.BufferLength = 4U + 7U;
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)TrustedDomainInformation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1342] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)TrustedDomainInformation,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1342] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDL_TypeFormatString.Format[1342] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarSetTrustedDomainInfo(
    PRPC_MESSAGE _pRpcMessage )
{
    TRUSTED_INFORMATION_CLASS InformationClass;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation;
    PLSAPR_SID TrustedDomainSid;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainSid = 0;
    TrustedDomainInformation = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[498] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        NdrSimpleTypeUnmarshall(
                           ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                           ( unsigned char __RPC_FAR * )&InformationClass,
                           13);
        NdrNonEncapsulatedUnionUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainInformation,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1362],
                                           (unsigned char)0 );
        
        
        _RetVal = LsarSetTrustedDomainInfo(
                                   ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                   TrustedDomainSid,
                                   InformationClass,
                                   TrustedDomainInformation);
        
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
        _StubMsg.MaxCount = InformationClass;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)TrustedDomainInformation,
                        &__MIDL_TypeFormatString.Format[1358] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarDeleteTrustedDomain(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_SID TrustedDomainSid;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    TrustedDomainSid = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[514] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&TrustedDomainSid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[258],
                                       (unsigned char)0 );
        
        
        _RetVal = LsarDeleteTrustedDomain(( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),TrustedDomainSid);
        
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
lsarpc_LsarStorePrivateData(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_CR_CIPHER_VALUE EncryptedData;
    PLSAPR_UNICODE_STRING KeyName;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    KeyName = 0;
    EncryptedData = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[524] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&KeyName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedData,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1302],
                              (unsigned char)0 );
        
        
        _RetVal = LsarStorePrivateData(
                               ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                               KeyName,
                               EncryptedData);
        
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
                        (unsigned char __RPC_FAR *)KeyName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedData,
                        &__MIDL_TypeFormatString.Format[1302] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarRetrievePrivateData(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedData;
    PLSAPR_UNICODE_STRING KeyName;
    NDR_SCONTEXT PolicyHandle;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    KeyName = 0;
    EncryptedData = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[538] );
        
        PolicyHandle = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&KeyName,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EncryptedData,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1370],
                              (unsigned char)0 );
        
        
        _RetVal = LsarRetrievePrivateData(
                                  ( LSAPR_HANDLE  )*NDRSContextValue(PolicyHandle),
                                  KeyName,
                                  EncryptedData);
        
        _StubMsg.BufferLength = 4U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)EncryptedData,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1370] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)EncryptedData,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1370] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)KeyName,
                        &__MIDL_TypeFormatString.Format[162] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)EncryptedData,
                        &__MIDL_TypeFormatString.Format[1370] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarOpenPolicy2(
    PRPC_MESSAGE _pRpcMessage )
{
    ACCESS_MASK DesiredAccess;
    PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes;
    NDR_SCONTEXT PolicyHandle;
    PLSAPR_SERVER_NAME SystemName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SystemName = 0;
    ObjectAttributes = 0;
    PolicyHandle = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[552] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SystemName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1374],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&ObjectAttributes,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[362],
                                   (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        DesiredAccess = *(( ACCESS_MASK __RPC_FAR * )_StubMsg.Buffer)++;
        
        PolicyHandle = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = LsarOpenPolicy2(
                          SystemName,
                          ObjectAttributes,
                          DesiredAccess,
                          ( LSAPR_HANDLE __RPC_FAR * )NDRSContextValue(PolicyHandle));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )PolicyHandle,
                            ( NDR_RUNDOWN  )LSAPR_HANDLE_rundown);
        
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ObjectAttributes,
                        &__MIDL_TypeFormatString.Format[192] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
lsarpc_LsarGetUserName(
    PRPC_MESSAGE _pRpcMessage )
{
    PLSAPR_UNICODE_STRING __RPC_FAR *DomainName;
    PLSAPR_SERVER_NAME SystemName;
    PLSAPR_UNICODE_STRING __RPC_FAR *UserName;
    NTSTATUS _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &lsarpc_StubDesc);
    
    SystemName = 0;
    UserName = 0;
    DomainName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[568] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&SystemName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1374],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1378],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&DomainName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1382],
                              (unsigned char)0 );
        
        
        _RetVal = LsarGetUserName(
                          SystemName,
                          UserName,
                          DomainName);
        
        _StubMsg.BufferLength = 4U + 18U + 11U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)UserName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1378] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)DomainName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1382] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)UserName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1378] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)DomainName,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1382] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( NTSTATUS __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)UserName,
                        &__MIDL_TypeFormatString.Format[1378] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)DomainName,
                        &__MIDL_TypeFormatString.Format[1382] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void __RPC_FAR *)& lsarpc___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
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

static RPC_DISPATCH_FUNCTION lsarpc_table[] =
    {
    lsarpc_LsarClose,
    lsarpc_LsarDelete,
    lsarpc_LsarEnumeratePrivileges,
    lsarpc_LsarQuerySecurityObject,
    lsarpc_LsarSetSecurityObject,
    lsarpc_LsarChangePassword,
    lsarpc_LsarOpenPolicy,
    lsarpc_LsarQueryInformationPolicy,
    lsarpc_LsarSetInformationPolicy,
    lsarpc_LsarClearAuditLog,
    lsarpc_LsarCreateAccount,
    lsarpc_LsarEnumerateAccounts,
    lsarpc_LsarCreateTrustedDomain,
    lsarpc_LsarEnumerateTrustedDomains,
    lsarpc_LsarLookupNames,
    lsarpc_LsarLookupSids,
    lsarpc_LsarCreateSecret,
    lsarpc_LsarOpenAccount,
    lsarpc_LsarEnumeratePrivilegesAccount,
    lsarpc_LsarAddPrivilegesToAccount,
    lsarpc_LsarRemovePrivilegesFromAccount,
    lsarpc_LsarGetQuotasForAccount,
    lsarpc_LsarSetQuotasForAccount,
    lsarpc_LsarGetSystemAccessAccount,
    lsarpc_LsarSetSystemAccessAccount,
    lsarpc_LsarOpenTrustedDomain,
    lsarpc_LsarQueryInfoTrustedDomain,
    lsarpc_LsarSetInformationTrustedDomain,
    lsarpc_LsarOpenSecret,
    lsarpc_LsarSetSecret,
    lsarpc_LsarQuerySecret,
    lsarpc_LsarLookupPrivilegeValue,
    lsarpc_LsarLookupPrivilegeName,
    lsarpc_LsarLookupPrivilegeDisplayName,
    lsarpc_LsarDeleteObject,
    lsarpc_LsarEnumerateAccountsWithUserRight,
    lsarpc_LsarEnumerateAccountRights,
    lsarpc_LsarAddAccountRights,
    lsarpc_LsarRemoveAccountRights,
    lsarpc_LsarQueryTrustedDomainInfo,
    lsarpc_LsarSetTrustedDomainInfo,
    lsarpc_LsarDeleteTrustedDomain,
    lsarpc_LsarStorePrivateData,
    lsarpc_LsarRetrievePrivateData,
    lsarpc_LsarOpenPolicy2,
    lsarpc_LsarGetUserName,
    0
    };
RPC_DISPATCH_TABLE lsarpc_DispatchTable = 
    {
    46,
    lsarpc_table
    };

static void __RPC_USER lsarpc__LSAPR_ACLExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _LSAPR_ACL __RPC_FAR *pS	=	( struct _LSAPR_ACL __RPC_FAR * )(pStubMsg->StackTop - 4);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->AclSize - 4;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    lsarpc__LSAPR_ACLExprEval_0000
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
/* 10 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 16 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 20 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 32 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */
/* 38 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 50 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 68 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 72 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 88 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 94 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 96 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 98 */	NdrFcShort( 0x1a8 ),	/* Type Offset=424 */
/* 100 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 106 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 108 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */
/* 112 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 118 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 128 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 134 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 138 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */
/* 142 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 144 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x32c ),	/* Type Offset=812 */
/* 154 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 156 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 160 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 162 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 166 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 170 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0x330 ),	/* Type Offset=816 */
/* 174 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 178 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 182 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x370 ),	/* Type Offset=880 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x394 ),	/* Type Offset=916 */
/* 192 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 194 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */
/* 196 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 202 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 208 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 210 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 212 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 214 */	NdrFcShort( 0x394 ),	/* Type Offset=916 */
/* 216 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0x3ec ),	/* Type Offset=1004 */
/* 220 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 222 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 224 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 226 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 228 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 230 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 234 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 236 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 238 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 240 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 242 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 246 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 248 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 250 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */
/* 252 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 254 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 256 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 258 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 260 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */
/* 262 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 264 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 266 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 268 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 270 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 272 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */
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
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 282 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */
/* 284 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 286 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 288 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 292 */	NdrFcShort( 0x458 ),	/* Type Offset=1112 */
/* 294 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 298 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 300 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 302 */	NdrFcShort( 0x45c ),	/* Type Offset=1116 */
/* 304 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 306 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 308 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 310 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 312 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 314 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 316 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 318 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 320 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 322 */	NdrFcShort( 0x460 ),	/* Type Offset=1120 */
/* 324 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 326 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 328 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 330 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 332 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 340 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 342 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 344 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */
/* 346 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 348 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */
/* 350 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 352 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 354 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 356 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 358 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */
/* 360 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0x51e ),	/* Type Offset=1310 */
/* 364 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 366 */	NdrFcShort( 0x51a ),	/* Type Offset=1306 */
/* 368 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 370 */	NdrFcShort( 0x51e ),	/* Type Offset=1310 */
/* 372 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 374 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 376 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 378 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 380 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 382 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 384 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */
/* 386 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 388 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 390 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 392 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 394 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */
/* 396 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 398 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */
/* 400 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 402 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 404 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 406 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 408 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 410 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 412 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 414 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 416 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */
/* 418 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 420 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */
/* 422 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 424 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 426 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 428 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 430 */	NdrFcShort( 0x52e ),	/* Type Offset=1326 */
/* 432 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 434 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */
/* 436 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 438 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 440 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 442 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 444 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 446 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 448 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */
/* 450 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 452 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 454 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 456 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 460 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 462 */	NdrFcShort( 0x53a ),	/* Type Offset=1338 */
/* 464 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 466 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 468 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 470 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 472 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 474 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 476 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 478 */	NdrFcShort( 0x53a ),	/* Type Offset=1338 */
/* 480 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 482 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 484 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 486 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 488 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 490 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 492 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 494 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */
/* 496 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 498 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 500 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 502 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 504 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 506 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 508 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 510 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */
/* 512 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 514 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 516 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 518 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 520 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 522 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 524 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 526 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 528 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 530 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 532 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 534 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */
/* 536 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 538 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 540 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 542 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 544 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 546 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 548 */	NdrFcShort( 0x55a ),	/* Type Offset=1370 */
/* 550 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 552 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 554 */	NdrFcShort( 0x55e ),	/* Type Offset=1374 */
/* 556 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 558 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */
/* 560 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 562 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 564 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 566 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 568 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 570 */	NdrFcShort( 0x55e ),	/* Type Offset=1374 */
/* 572 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 574 */	NdrFcShort( 0x562 ),	/* Type Offset=1378 */
/* 576 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 578 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */
/* 580 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 14 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 16 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 18 */	NdrFcShort( 0x52 ),	/* Offset= 82 (100) */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
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
/* 40 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 42 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 44 */	NdrFcShort( 0x10 ),	/* 16 */
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
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 64 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd3 ),	/* Offset= -45 (20) */
			0x5b,		/* FC_END */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 70 */	NdrFcShort( 0x10 ),	/* 16 */
/* 72 */	0x18,		/* 24 */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 80 */	NdrFcShort( 0x10 ),	/* 16 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
/* 90 */	0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (28) */
/* 94 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 96 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (42) */
			0x5b,		/* FC_END */
/* 100 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	0x12, 0x0,	/* FC_UP */
/* 114 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (68) */
/* 116 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 118 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */	
			0x12, 0x0,	/* FC_UP */
/* 126 */	NdrFcShort( 0xc ),	/* Offset= 12 (138) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x18,		/* 24 */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 138 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (128) */
/* 154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 158 */	
			0x11, 0x0,	/* FC_RP */
/* 160 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (138) */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0xffffff68 ),	/* Offset= -152 (28) */
/* 182 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 184 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 186 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 188 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x11, 0x0,	/* FC_RP */
/* 194 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (362) */
/* 196 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 200 */	0x16,		/* 22 */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0x2 ),	/* 2 */
/* 204 */	0x16,		/* 22 */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 210 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	0x12, 0x0,	/* FC_UP */
/* 224 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (196) */
/* 226 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 228 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 230 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 232 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0x6 ),	/* 6 */
/* 236 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 238 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 242 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (232) */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 252 */	0x3,		/* 3 */
			0x0,		/*  */
/* 254 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 256 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 258 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (248) */
/* 264 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 266 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (238) */
/* 270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 272 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 276 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 282 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 286 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (272) */
/* 288 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 290 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 292 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x14 ),	/* 20 */
/* 296 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 298 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 304 */	0x12, 0x0,	/* FC_UP */
/* 306 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (258) */
/* 308 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (258) */
/* 318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 320 */	NdrFcShort( 0xc ),	/* 12 */
/* 322 */	NdrFcShort( 0xc ),	/* 12 */
/* 324 */	0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (282) */
/* 328 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x10 ),	/* 16 */
/* 334 */	0x12, 0x0,	/* FC_UP */
/* 336 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (282) */
/* 338 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 340 */	0x2,		/* FC_CHAR */
			0x6,		/* FC_SHORT */
/* 342 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 346 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 348 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 350 */	NdrFcShort( 0xc ),	/* 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 358 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 360 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 362 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 364 */	NdrFcShort( 0x18 ),	/* 24 */
/* 366 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 368 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 374 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 376 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 378 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (210) */
/* 388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 390 */	NdrFcShort( 0x10 ),	/* 16 */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	0x12, 0x0,	/* FC_UP */
/* 396 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (292) */
/* 398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 400 */	NdrFcShort( 0x14 ),	/* 20 */
/* 402 */	NdrFcShort( 0x14 ),	/* 20 */
/* 404 */	0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (348) */
/* 408 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 416 */	
			0x11, 0x0,	/* FC_RP */
/* 418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (420) */
/* 420 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 422 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 424 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */	
			0x12, 0x0,	/* FC_UP */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 434 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 436 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 438 */	NdrFcShort( 0x2 ),	/* Offset= 2 (440) */
/* 440 */	NdrFcShort( 0x28 ),	/* 40 */
/* 442 */	NdrFcShort( 0x700b ),	/* 28683 */
/* 444 */	NdrFcLong( 0x1 ),	/* 1 */
/* 448 */	NdrFcShort( 0x46 ),	/* Offset= 70 (518) */
/* 450 */	NdrFcLong( 0x2 ),	/* 2 */
/* 454 */	NdrFcShort( 0x62 ),	/* Offset= 98 (552) */
/* 456 */	NdrFcLong( 0x3 ),	/* 3 */
/* 460 */	NdrFcShort( 0x72 ),	/* Offset= 114 (574) */
/* 462 */	NdrFcLong( 0x5 ),	/* 5 */
/* 466 */	NdrFcShort( 0x6c ),	/* Offset= 108 (574) */
/* 468 */	NdrFcLong( 0x4 ),	/* 4 */
/* 472 */	NdrFcShort( 0xfffffece ),	/* Offset= -306 (166) */
/* 474 */	NdrFcLong( 0x6 ),	/* 6 */
/* 478 */	NdrFcShort( 0x82 ),	/* Offset= 130 (608) */
/* 480 */	NdrFcLong( 0x7 ),	/* 7 */
/* 484 */	NdrFcShort( 0x94 ),	/* Offset= 148 (632) */
/* 486 */	NdrFcLong( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (682) */
/* 492 */	NdrFcLong( 0x9 ),	/* 9 */
/* 496 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (692) */
/* 498 */	NdrFcLong( 0xa ),	/* 10 */
/* 502 */	NdrFcShort( 0xcc ),	/* Offset= 204 (706) */
/* 504 */	NdrFcLong( 0xb ),	/* 11 */
/* 508 */	NdrFcShort( 0xcc ),	/* Offset= 204 (712) */
/* 510 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (509) */
/* 512 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 518 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 520 */	NdrFcShort( 0x28 ),	/* 40 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* Offset= 0 (524) */
/* 526 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 528 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 530 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (512) */
/* 532 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 534 */	0x7,		/* 7 */
			NdrFcShort( 0xffffffe9 ),	/* Offset= -23 (512) */
			0x38,		/* FC_ALIGNM4 */
/* 538 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 542 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 544 */	NdrFcShort( 0x4 ),	/* 4 */
/* 546 */	0x18,		/* 24 */
			0x0,		/*  */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 552 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0xc ),	/* 12 */
/* 556 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 558 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	0x12, 0x0,	/* FC_UP */
/* 566 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (542) */
/* 568 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 570 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 572 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 574 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0xc ),	/* 12 */
/* 578 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 580 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 582 */	NdrFcShort( 0x4 ),	/* 4 */
/* 584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 586 */	0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0xfffffdd0 ),	/* Offset= -560 (28) */
/* 590 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x12, 0x0,	/* FC_UP */
/* 598 */	NdrFcShort( 0xfffffeac ),	/* Offset= -340 (258) */
/* 600 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 602 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 604 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* Offset= 0 (614) */
/* 616 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 618 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 620 */	NdrFcShort( 0x2 ),	/* 2 */
/* 622 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 624 */	NdrFcShort( 0xa ),	/* 10 */
/* 626 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 632 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 636 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 638 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	NdrFcShort( 0x4 ),	/* 4 */
/* 644 */	0x12, 0x0,	/* FC_UP */
/* 646 */	NdrFcShort( 0xfffffd96 ),	/* Offset= -618 (28) */
/* 648 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 650 */	NdrFcShort( 0xc ),	/* 12 */
/* 652 */	NdrFcShort( 0xc ),	/* 12 */
/* 654 */	0x12, 0x0,	/* FC_UP */
/* 656 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (618) */
/* 658 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 660 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 662 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 664 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 666 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 668 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 670 */	NdrFcShort( 0x20 ),	/* 32 */
/* 672 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 674 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 676 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 678 */	0x4,		/* 4 */
			NdrFcShort( 0xffffff59 ),	/* Offset= -167 (512) */
			0x5b,		/* FC_END */
/* 682 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 684 */	NdrFcShort( 0x20 ),	/* 32 */
/* 686 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (668) */
/* 690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 692 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 694 */	NdrFcShort( 0x10 ),	/* 16 */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xffffff46 ),	/* Offset= -186 (512) */
/* 700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0xffffff42 ),	/* Offset= -190 (512) */
/* 704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 710 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 712 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x2 ),	/* 2 */
/* 716 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x11, 0x0,	/* FC_RP */
/* 722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (724) */
/* 724 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 726 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 730 */	NdrFcShort( 0xfffffede ),	/* Offset= -290 (440) */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xfffffe24 ),	/* Offset= -476 (258) */
/* 736 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 738 */	NdrFcShort( 0x36 ),	/* Offset= 54 (792) */
/* 740 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 746 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	0x12, 0x0,	/* FC_UP */
/* 754 */	NdrFcShort( 0xfffffe10 ),	/* Offset= -496 (258) */
/* 756 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 760 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	0x18,		/* 24 */
			0x0,		/*  */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 770 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 772 */	NdrFcShort( 0x4 ),	/* 4 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	0x12, 0x0,	/* FC_UP */
/* 784 */	NdrFcShort( 0xfffffdf2 ),	/* Offset= -526 (258) */
/* 786 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 788 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (740) */
			0x5b,		/* FC_END */
/* 792 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 796 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 798 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	0x12, 0x0,	/* FC_UP */
/* 806 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (760) */
/* 808 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 810 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 812 */	
			0x11, 0x0,	/* FC_RP */
/* 814 */	NdrFcShort( 0xffffff10 ),	/* Offset= -240 (574) */
/* 816 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 818 */	NdrFcShort( 0x2a ),	/* Offset= 42 (860) */
/* 820 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0xc ),	/* 12 */
/* 824 */	0x18,		/* 24 */
			0x0,		/*  */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 832 */	NdrFcShort( 0xc ),	/* 12 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x2 ),	/* 2 */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 842 */	0x12, 0x0,	/* FC_UP */
/* 844 */	NdrFcShort( 0xfffffcd0 ),	/* Offset= -816 (28) */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	0x12, 0x0,	/* FC_UP */
/* 852 */	NdrFcShort( 0xfffffdae ),	/* Offset= -594 (258) */
/* 854 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 856 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffee5 ),	/* Offset= -283 (574) */
			0x5b,		/* FC_END */
/* 860 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 866 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 870 */	NdrFcShort( 0x4 ),	/* 4 */
/* 872 */	0x12, 0x0,	/* FC_UP */
/* 874 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (820) */
/* 876 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 878 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 880 */	
			0x11, 0x0,	/* FC_RP */
/* 882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (884) */
/* 884 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 892 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 894 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 902 */	NdrFcShort( 0x4 ),	/* 4 */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	0x12, 0x0,	/* FC_UP */
/* 908 */	NdrFcShort( 0xfffffc90 ),	/* Offset= -880 (28) */
/* 910 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 912 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffd15 ),	/* Offset= -747 (166) */
			0x5b,		/* FC_END */
/* 916 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 918 */	NdrFcShort( 0x2 ),	/* Offset= 2 (920) */
/* 920 */	
			0x12, 0x0,	/* FC_UP */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0xc ),	/* 12 */
/* 928 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 936 */	0x12, 0x0,	/* FC_UP */
/* 938 */	NdrFcShort( 0xffffff8a ),	/* Offset= -118 (820) */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 944 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 946 */	
			0x11, 0x0,	/* FC_RP */
/* 948 */	NdrFcShort( 0x20 ),	/* Offset= 32 (980) */
/* 950 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0xc ),	/* 12 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* Offset= 0 (956) */
/* 958 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 960 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 962 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	0x18,		/* 24 */
			0x0,		/*  */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 974 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (950) */
/* 978 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 980 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 988 */	NdrFcShort( 0x4 ),	/* 4 */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	0x12, 0x0,	/* FC_UP */
/* 994 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (962) */
/* 996 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 998 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1000 */	
			0x11, 0x0,	/* FC_RP */
/* 1002 */	NdrFcShort( 0xffffff2e ),	/* Offset= -210 (792) */
/* 1004 */	
			0x11, 0x0,	/* FC_RP */
/* 1006 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1042) */
/* 1008 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1010 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1014) */
/* 1016 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1018 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffcab ),	/* Offset= -853 (166) */
			0x8,		/* FC_LONG */
/* 1022 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1024 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1028 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1036 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1038 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (1008) */
/* 1040 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1042 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1046 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	0x12, 0x0,	/* FC_UP */
/* 1056 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1024) */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1064 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1066) */
/* 1066 */	
			0x12, 0x0,	/* FC_UP */
/* 1068 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1094) */
/* 1070 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1072 */	NdrFcShort( 0xc ),	/* 12 */
/* 1074 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1076 */	NdrFcShort( 0xfffffbe0 ),	/* Offset= -1056 (20) */
/* 1078 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1080 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1082 */	NdrFcShort( 0xc ),	/* 12 */
/* 1084 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1086 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 1088 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1090 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (1070) */
/* 1092 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1094 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (1080) */
/* 1100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1104 */	
			0x11, 0x0,	/* FC_RP */
/* 1106 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1094) */
/* 1108 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1110 */	NdrFcShort( 0xfffffe46 ),	/* Offset= -442 (668) */
/* 1112 */	
			0x11, 0x0,	/* FC_RP */
/* 1114 */	NdrFcShort( 0xfffffe42 ),	/* Offset= -446 (668) */
/* 1116 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1118 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1124) */
/* 1124 */	
			0x12, 0x0,	/* FC_UP */
/* 1126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1128) */
/* 1128 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1130 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1132 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1136) */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 1140 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1144 */	NdrFcShort( 0xfffffc2e ),	/* Offset= -978 (166) */
/* 1146 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1150 */	NdrFcShort( 0x30 ),	/* Offset= 48 (1198) */
/* 1152 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1156 */	NdrFcShort( 0x3e ),	/* Offset= 62 (1218) */
/* 1158 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1162 */	NdrFcShort( 0x62 ),	/* Offset= 98 (1260) */
/* 1164 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1163) */
/* 1166 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1174 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1176 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1188 */	0x12, 0x0,	/* FC_UP */
/* 1190 */	NdrFcShort( 0xfffffb76 ),	/* Offset= -1162 (28) */
/* 1192 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1194 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffbfb ),	/* Offset= -1029 (166) */
			0x5b,		/* FC_END */
/* 1198 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1202 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1204 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1206 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1210 */	0x12, 0x0,	/* FC_UP */
/* 1212 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1166) */
/* 1214 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1216 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1218 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1222 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1224 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1226 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1228 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1230 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1232 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1238 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1240 */	NdrFcShort( 0xc ),	/* 12 */
/* 1242 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1244 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1250 */	0x12, 0x0,	/* FC_UP */
/* 1252 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1224) */
/* 1254 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1256 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1258 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1260 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1264 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1274 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (1238) */
/* 1276 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1278 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1280 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1282 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1284 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1238) */
/* 1286 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1288 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1290 */	
			0x11, 0x0,	/* FC_RP */
/* 1292 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1294) */
/* 1294 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1296 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1300 */	NdrFcShort( 0xffffff5c ),	/* Offset= -164 (1136) */
/* 1302 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1304 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (1238) */
/* 1306 */	
			0x12, 0x10,	/* FC_UP */
/* 1308 */	NdrFcShort( 0xfffffffa ),	/* Offset= -6 (1302) */
/* 1310 */	
			0x12, 0x0,	/* FC_UP */
/* 1312 */	NdrFcShort( 0xfffffce0 ),	/* Offset= -800 (512) */
/* 1314 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1316 */	NdrFcShort( 0xfffffaf0 ),	/* Offset= -1296 (20) */
/* 1318 */	
			0x11, 0x0,	/* FC_RP */
/* 1320 */	NdrFcShort( 0xfffffaec ),	/* Offset= -1300 (20) */
/* 1322 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1324 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1326) */
/* 1326 */	
			0x12, 0x0,	/* FC_UP */
/* 1328 */	NdrFcShort( 0xfffffb76 ),	/* Offset= -1162 (166) */
/* 1330 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1332 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1334 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1336 */	NdrFcShort( 0xffffff76 ),	/* Offset= -138 (1198) */
/* 1338 */	
			0x11, 0x0,	/* FC_RP */
/* 1340 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (1198) */
/* 1342 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1346) */
/* 1346 */	
			0x12, 0x0,	/* FC_UP */
/* 1348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1350) */
/* 1350 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1352 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1354 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1356 */	NdrFcShort( 0xffffff24 ),	/* Offset= -220 (1136) */
/* 1358 */	
			0x11, 0x0,	/* FC_RP */
/* 1360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1362) */
/* 1362 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1364 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1366 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1368 */	NdrFcShort( 0xffffff18 ),	/* Offset= -232 (1136) */
/* 1370 */	
			0x11, 0x10,	/* FC_RP */
/* 1372 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (1302) */
/* 1374 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1376 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1378 */	
			0x11, 0x10,	/* FC_RP */
/* 1380 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (1326) */
/* 1382 */	
			0x12, 0x10,	/* FC_UP */
/* 1384 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (1326) */

			0x0
        }
    };
