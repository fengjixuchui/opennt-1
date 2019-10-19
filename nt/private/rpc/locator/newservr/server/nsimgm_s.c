/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:29:18 2019
 */
/* Compiler settings for nsimgm.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "nsimgm.h"

#define TYPE_FORMAT_STRING_SIZE   169                               
#define PROC_FORMAT_STRING_SIZE   281                               

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

/* Standard interface: NsiM, ver. 1.0,
   GUID={0xd6d70ef0,0x0e3b,0x11cb,{0xac,0xc3,0x08,0x00,0x2b,0x1d,0x29,0xc4}} */


extern RPC_DISPATCH_TABLE NsiM_DispatchTable;

static const RPC_SERVER_INTERFACE NsiM___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xd6d70ef0,0x0e3b,0x11cb,{0xac,0xc3,0x08,0x00,0x2b,0x1d,0x29,0xc4}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &NsiM_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE NsiM_ServerIfHandle = (RPC_IF_HANDLE)& NsiM___RpcServerInterface;

extern const MIDL_STUB_DESC NsiM_StubDesc;

void __RPC_STUB
NsiM_nsi_group_delete(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M48;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T group_name;
    UNSIGNED32 group_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    group_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        group_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M48;
        
        nsi_group_delete(
                    group_name_syntax,
                    group_name,
                    status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_group_mbr_add(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M49;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T group_name;
    UNSIGNED32 group_name_syntax;
    STRING_T member_name;
    UNSIGNED32 member_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    group_name = 0;
    member_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        group_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M49;
        
        nsi_group_mbr_add(
                     group_name_syntax,
                     group_name,
                     member_name_syntax,
                     member_name,
                     status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_group_mbr_remove(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M50;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T group_name;
    UNSIGNED32 group_name_syntax;
    STRING_T member_name;
    UNSIGNED32 member_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    group_name = 0;
    member_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        group_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M50;
        
        nsi_group_mbr_remove(
                        group_name_syntax,
                        group_name,
                        member_name_syntax,
                        member_name,
                        status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_group_mbr_inq_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M51;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T group_name;
    UNSIGNED32 group_name_syntax;
    NDR_SCONTEXT inq_context;
    UNSIGNED32 member_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    group_name = 0;
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[30] );
        
        group_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        inq_context = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M51;
        
        nsi_group_mbr_inq_begin(
                           group_name_syntax,
                           group_name,
                           member_name_syntax,
                           ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),
                           status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_group_mbr_inq_next(
    PRPC_MESSAGE _pRpcMessage )
{
    STRING_T _M52;
    UNSIGNED16 _M53;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT inq_context;
    STRING_T __RPC_FAR *member_name;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    member_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        member_name = &_M52;
        _M52 = 0;
        status = &_M53;
        
        nsi_group_mbr_inq_next(
                          ( NSI_NS_HANDLE_T  )*NDRSContextValue(inq_context),
                          member_name,
                          status);
        
        _StubMsg.BufferLength = 16U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)member_name,
                        &__MIDL_TypeFormatString.Format[20] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_group_mbr_inq_done(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M54;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M54;
        
        nsi_group_mbr_inq_done(( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_delete(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M55;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T profile_name;
    UNSIGNED32 profile_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    profile_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        profile_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M55;
        
        nsi_profile_delete(
                      profile_name_syntax,
                      profile_name,
                      status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_elt_add(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M56;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T annotation;
    NSI_IF_ID_P_T if_id;
    STRING_T member_name;
    UNSIGNED32 member_name_syntax;
    UNSIGNED32 priority;
    STRING_T profile_name;
    UNSIGNED32 profile_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    profile_name = 0;
    if_id = 0;
    member_name = 0;
    annotation = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[72] );
        
        profile_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        priority = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&annotation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M56;
        
        nsi_profile_elt_add(
                       profile_name_syntax,
                       profile_name,
                       if_id,
                       member_name_syntax,
                       member_name,
                       priority,
                       annotation,
                       status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_elt_remove(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M57;
    MIDL_STUB_MESSAGE _StubMsg;
    NSI_IF_ID_P_T if_id;
    STRING_T member_name;
    UNSIGNED32 member_name_syntax;
    STRING_T profile_name;
    UNSIGNED32 profile_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    profile_name = 0;
    if_id = 0;
    member_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[100] );
        
        profile_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M57;
        
        nsi_profile_elt_remove(
                          profile_name_syntax,
                          profile_name,
                          if_id,
                          member_name_syntax,
                          member_name,
                          status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_elt_inq_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M58;
    MIDL_STUB_MESSAGE _StubMsg;
    NSI_IF_ID_P_T if_id;
    NDR_SCONTEXT inq_context;
    UNSIGNED32 inquiry_type;
    STRING_T member_name;
    UNSIGNED32 member_name_syntax;
    STRING_T profile_name;
    UNSIGNED32 profile_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    UNSIGNED32 vers_option;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    profile_name = 0;
    if_id = 0;
    member_name = 0;
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
        
        profile_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        inquiry_type = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        vers_option = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        member_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        inq_context = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M58;
        
        nsi_profile_elt_inq_begin(
                             profile_name_syntax,
                             profile_name,
                             inquiry_type,
                             if_id,
                             vers_option,
                             member_name_syntax,
                             member_name,
                             ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),
                             status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_elt_inq_next(
    PRPC_MESSAGE _pRpcMessage )
{
    STRING_T _M59;
    UNSIGNED32 _M60;
    STRING_T _M61;
    UNSIGNED16 _M62;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T __RPC_FAR *annotation;
    NSI_IF_ID_P_T if_id;
    NDR_SCONTEXT inq_context;
    STRING_T __RPC_FAR *member_name;
    UNSIGNED32 __RPC_FAR *priority;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    if_id = 0;
    member_name = 0;
    priority = 0;
    annotation = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[152] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        member_name = &_M59;
        _M59 = 0;
        priority = &_M60;
        annotation = &_M61;
        _M61 = 0;
        status = &_M62;
        
        nsi_profile_elt_inq_next(
                            ( NSI_NS_HANDLE_T  )*NDRSContextValue(inq_context),
                            if_id,
                            member_name,
                            priority,
                            annotation,
                            status);
        
        _StubMsg.BufferLength = 4U + 25U + 10U + 21U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)annotation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = *priority;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)annotation,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)member_name,
                        &__MIDL_TypeFormatString.Format[20] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)annotation,
                        &__MIDL_TypeFormatString.Format[20] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_profile_elt_inq_done(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M63;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M63;
        
        nsi_profile_elt_inq_done(( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_entry_object_inq_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M64;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[178] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        inq_context = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M64;
        
        nsi_entry_object_inq_begin(
                              entry_name_syntax,
                              entry_name,
                              ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),
                              status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_entry_object_inq_next(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M65;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    NSI_UUID_P_T uuid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    uuid = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[194] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86],
                              (unsigned char)0 );
        
        status = &_M65;
        
        nsi_entry_object_inq_next(
                             ( NSI_NS_HANDLE_T  )*NDRSContextValue(inq_context),
                             uuid,
                             status);
        
        _StubMsg.BufferLength = 4U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)uuid,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_entry_object_inq_done(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M66;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    inq_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M66;
        
        nsi_entry_object_inq_done(( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(inq_context),status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )inq_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_entry_expand_name(
    PRPC_MESSAGE _pRpcMessage )
{
    STRING_T _M67;
    UNSIGNED16 _M68;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    STRING_T __RPC_FAR *expanded_name;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    expanded_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        expanded_name = &_M67;
        _M67 = 0;
        status = &_M68;
        
        nsi_entry_expand_name(
                         entry_name_syntax,
                         entry_name,
                         expanded_name,
                         status);
        
        _StubMsg.BufferLength = 16U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)expanded_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)expanded_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)expanded_name,
                        &__MIDL_TypeFormatString.Format[20] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_binding_unexport(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M69;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NSI_IF_ID_P_T if_id;
    NSI_UUID_VECTOR_P_T object_uuid_vec;
    UNSIGNED16 __RPC_FAR *status;
    UNSIGNED32 vers_option;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    if_id = 0;
    object_uuid_vec = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        vers_option = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&object_uuid_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[90],
                              (unsigned char)0 );
        
        status = &_M69;
        
        nsi_mgmt_binding_unexport(
                             entry_name_syntax,
                             entry_name,
                             if_id,
                             vers_option,
                             object_uuid_vec,
                             status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)object_uuid_vec,
                        &__MIDL_TypeFormatString.Format[90] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_entry_delete(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M70;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M70;
        
        nsi_mgmt_entry_delete(
                         entry_name_syntax,
                         entry_name,
                         status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_entry_create(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M71;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        status = &_M71;
        
        nsi_mgmt_entry_create(
                         entry_name_syntax,
                         entry_name,
                         status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_entry_inq_if_ids(
    PRPC_MESSAGE _pRpcMessage )
{
    NSI_IF_ID_VECTOR_T __RPC_FAR *_M72;
    UNSIGNED16 _M73;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NSI_IF_ID_VECTOR_T __RPC_FAR *__RPC_FAR *if_id_vec;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    entry_name = 0;
    if_id_vec = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        if_id_vec = &_M72;
        _M72 = 0;
        status = &_M73;
        
        nsi_mgmt_entry_inq_if_ids(
                             entry_name_syntax,
                             entry_name,
                             if_id_vec,
                             status);
        
        _StubMsg.BufferLength = 4U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id_vec,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)if_id_vec,
                        &__MIDL_TypeFormatString.Format[132] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_inq_exp_age(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED32 _M74;
    UNSIGNED16 _M75;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED32 __RPC_FAR *expiration_age;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    expiration_age = 0;
    status = 0;
    RpcTryFinally
        {
        expiration_age = &_M74;
        status = &_M75;
        
        nsi_mgmt_inq_exp_age(expiration_age,status);
        
        _StubMsg.BufferLength = 4U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = *expiration_age;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiM_nsi_mgmt_inq_set_age(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M76;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED32 expiration_age;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiM_StubDesc);
    
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[272] );
        
        expiration_age = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        status = &_M76;
        
        nsi_mgmt_inq_set_age(expiration_age,status);
        
        _StubMsg.BufferLength = 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC NsiM_StubDesc = 
    {
    (void __RPC_FAR *)& NsiM___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION NsiM_table[] =
    {
    NsiM_nsi_group_delete,
    NsiM_nsi_group_mbr_add,
    NsiM_nsi_group_mbr_remove,
    NsiM_nsi_group_mbr_inq_begin,
    NsiM_nsi_group_mbr_inq_next,
    NsiM_nsi_group_mbr_inq_done,
    NsiM_nsi_profile_delete,
    NsiM_nsi_profile_elt_add,
    NsiM_nsi_profile_elt_remove,
    NsiM_nsi_profile_elt_inq_begin,
    NsiM_nsi_profile_elt_inq_next,
    NsiM_nsi_profile_elt_inq_done,
    NsiM_nsi_entry_object_inq_begin,
    NsiM_nsi_entry_object_inq_next,
    NsiM_nsi_entry_object_inq_done,
    NsiM_nsi_entry_expand_name,
    NsiM_nsi_mgmt_binding_unexport,
    NsiM_nsi_mgmt_entry_delete,
    NsiM_nsi_mgmt_entry_create,
    NsiM_nsi_mgmt_entry_inq_if_ids,
    NsiM_nsi_mgmt_inq_exp_age,
    NsiM_nsi_mgmt_inq_set_age,
    0
    };
RPC_DISPATCH_TABLE NsiM_DispatchTable = 
    {
    22,
    NsiM_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  2 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 10 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 24 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 28 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 42 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 46 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 56 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 60 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 64 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 66 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 70 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 72 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 88 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 94 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 96 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 98 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 110 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 116 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 118 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 120 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 128 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 134 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 138 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 142 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 144 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 146 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 148 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 150 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 154 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 156 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 160 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 164 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 166 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 168 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 170 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 172 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 174 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 176 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 178 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 184 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 192 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 200 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 202 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 204 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 206 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 214 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 216 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 218 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 220 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 222 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 226 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 228 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 230 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 232 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 240 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 244 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 246 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 248 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 250 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 252 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 254 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */
/* 256 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 258 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 260 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 264 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 266 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 270 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 272 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 274 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 276 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 278 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  6 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x11, 0x0,	/* FC_RP */
/* 10 */	NdrFcShort( 0x2 ),	/* Offset= 2 (12) */
/* 12 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 14 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 16 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 22 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (0) */
/* 24 */	
			0x11, 0x0,	/* FC_RP */
/* 26 */	NdrFcShort( 0x2 ),	/* Offset= 2 (28) */
/* 28 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 30 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 32 */	
			0x12, 0x0,	/* FC_UP */
/* 34 */	NdrFcShort( 0x16 ),	/* Offset= 22 (56) */
/* 36 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 38 */	NdrFcShort( 0x6 ),	/* 6 */
/* 40 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 42 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 44 */	NdrFcShort( 0x10 ),	/* 16 */
/* 46 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 48 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 50 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 52 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffef ),	/* Offset= -17 (36) */
			0x5b,		/* FC_END */
/* 56 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x14 ),	/* 20 */
/* 60 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (42) */
/* 64 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 66 */	
			0x11, 0x0,	/* FC_RP */
/* 68 */	NdrFcShort( 0x2 ),	/* Offset= 2 (70) */
/* 70 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 72 */	0x0,		/* 0 */
			0x7,		/* 7 */
/* 74 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 76 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x11, 0x0,	/* FC_RP */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 84 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 86 */	
			0x12, 0x0,	/* FC_UP */
/* 88 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (42) */
/* 90 */	
			0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0xc ),	/* Offset= 12 (104) */
/* 94 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 96 */	NdrFcShort( 0x4 ),	/* 4 */
/* 98 */	0x8,		/* 8 */
			0x0,		/*  */
/* 100 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 102 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 104 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 108 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (94) */
/* 110 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 112 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 124 */	0x12, 0x0,	/* FC_UP */
/* 126 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (42) */
/* 128 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 130 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 132 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (136) */
/* 136 */	
			0x12, 0x0,	/* FC_UP */
/* 138 */	NdrFcShort( 0x2 ),	/* Offset= 2 (140) */
/* 140 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	NdrFcShort( 0xffffffce ),	/* Offset= -50 (94) */
/* 146 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 158 */	NdrFcShort( 0x4 ),	/* 4 */
/* 160 */	0x12, 0x0,	/* FC_UP */
/* 162 */	NdrFcShort( 0xffffff96 ),	/* Offset= -106 (56) */
/* 164 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
