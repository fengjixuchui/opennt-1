/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 00:16:05 2019
 */
/* Compiler settings for ..\..\nsimgm.idl:
    Os (OptLev=s), W1, Zp2, env=Win16, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

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

handle_t NsiClntBinding;


static const RPC_CLIENT_INTERFACE NsiM___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xd6d70ef0,0x0e3b,0x11cb,{0xac,0xc3,0x08,0x00,0x2b,0x1d,0x29,0xc4}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE NsiM_ClientIfHandle = (RPC_IF_HANDLE)& NsiM___RpcClientInterface;

extern const MIDL_STUB_DESC NsiM_StubDesc;

static RPC_BINDING_HANDLE NsiM__MIDL_AutoBindHandle;


void nsi_group_delete( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          0);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = group_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)group_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_group_mbr_add( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          1);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = group_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)group_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_group_mbr_remove( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          2);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = group_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)group_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[12] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_group_mbr_inq_begin( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          3);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)group_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = group_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)group_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[30] );
        
        *inq_context = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_group_mbr_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out] */ STRING_T __RPC_FAR *member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          4);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )inq_context);;
        
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )inq_context,
                            1);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[48] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_group_mbr_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          5);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*inq_context);;
        
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*inq_context,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_delete( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          6);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = profile_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)profile_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_elt_add( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [in] */ UNSIGNED32 priority,
    /* [in] */ STRING_T annotation,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          7);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 11U + 21U + 10U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)annotation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = profile_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)profile_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = priority;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)annotation,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[72] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_elt_remove( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          8);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 11U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = profile_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)profile_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[100] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_elt_inq_begin( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ UNSIGNED32 inquiry_type,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 vers_option,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          9);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 7U + 11U + 7U + 21U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)profile_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = profile_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)profile_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = inquiry_type;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = vers_option;
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = member_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)member_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[122] );
        
        *inq_context = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_elt_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out][in] */ NSI_IF_ID_P_T if_id,
    /* [out] */ STRING_T __RPC_FAR *member_name,
    /* [out] */ UNSIGNED32 __RPC_FAR *priority,
    /* [out] */ STRING_T __RPC_FAR *annotation,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          10);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )inq_context);;
        
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )inq_context,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[152] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&member_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *priority = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&annotation,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_profile_elt_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          11);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*inq_context);;
        
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*inq_context,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_entry_object_inq_begin( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          12);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[178] );
        
        *inq_context = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_entry_object_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out][in] */ NSI_UUID_P_T uuid,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          13);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )inq_context);;
        
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )inq_context,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)uuid,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[194] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[86],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_entry_object_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          14);
        
        
        _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*inq_context);;
        
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*inq_context,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )inq_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_entry_expand_name( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ STRING_T __RPC_FAR *expanded_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          15);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&expanded_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[20],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_binding_unexport( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 vers_option,
    /* [in] */ NSI_UUID_VECTOR_P_T object_uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          16);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 10U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)if_id,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)object_uuid_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[90] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)if_id,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[32] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = vers_option;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)object_uuid_vec,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[90] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_entry_delete( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          17);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_entry_create( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          18);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_entry_inq_if_ids( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ NSI_IF_ID_VECTOR_T __RPC_FAR *__RPC_FAR *if_id_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          19);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[246] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&if_id_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[132],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_inq_exp_age( 
    /* [out] */ UNSIGNED32 __RPC_FAR *expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          20);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 0U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[262] );
        
        *expiration_age = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_mgmt_inq_set_age( 
    /* [in] */ UNSIGNED32 expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiM_StubDesc,
                          21);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = expiration_age;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[272] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


static const MIDL_STUB_DESC NsiM_StubDesc = 
    {
    (void __RPC_FAR *)& NsiM___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &NsiClntBinding,
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

#if !defined(__RPC_WIN16__) 
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
			0x2,		/* Stack size = 2 */

/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/*  8 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 10 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 22 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 24 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 26 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 28 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 34 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 40 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 42 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 44 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 46 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 50 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 54 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 56 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 58 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 60 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 64 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */
/* 66 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 68 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 70 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 72 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 76 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 78 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 80 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 82 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 84 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 86 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 88 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 90 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 92 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 94 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 96 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 98 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 104 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 108 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 110 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 114 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 116 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 118 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 120 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 126 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 128 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 132 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 134 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 136 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 138 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 140 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 142 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 144 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 146 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 148 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 150 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 154 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 156 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 158 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 160 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 162 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 164 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 166 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 168 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 170 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 172 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 174 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 176 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 178 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 182 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 184 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 186 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */
/* 188 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 190 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 192 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 194 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 196 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 198 */	
			0x50,		/* FC_IN_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 200 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 202 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 204 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 206 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 212 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 214 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 216 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 218 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 220 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 222 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 224 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 226 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 228 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 230 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 232 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 238 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 240 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 242 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 244 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 246 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 248 */	
			0x4d,		/* FC_IN_PARAM */
			0x2,		/* Stack size = 2 */

/* 250 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 252 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 254 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */
/* 256 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 258 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 260 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 264 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 266 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

/* 268 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 270 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 272 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 274 */	
			0x51,		/* FC_OUT_PARAM */
			0x2,		/* Stack size = 2 */

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
