/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:29:18 2019
 */
/* Compiler settings for nsiclt.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "nsiclt.h"

#define TYPE_FORMAT_STRING_SIZE   171                               
#define PROC_FORMAT_STRING_SIZE   65                                

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

/* Standard interface: NsiC, ver. 1.0,
   GUID={0xd3fbb514,0x0e3b,0x11cb,{0x8f,0xad,0x08,0x00,0x2b,0x1d,0x29,0xc3}} */


extern RPC_DISPATCH_TABLE NsiC_DispatchTable;

static const RPC_SERVER_INTERFACE NsiC___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xd3fbb514,0x0e3b,0x11cb,{0x8f,0xad,0x08,0x00,0x2b,0x1d,0x29,0xc3}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &NsiC_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE NsiC_ServerIfHandle = (RPC_IF_HANDLE)& NsiC___RpcServerInterface;

extern const MIDL_STUB_DESC NsiC_StubDesc;

void __RPC_STUB
NsiC_nsi_binding_lookup_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M2;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED32 binding_max_count;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NSI_INTERFACE_ID_T __RPC_FAR *if_spec;
    UNSIGNED32 ignore;
    NDR_SCONTEXT import_context;
    NSI_UUID_P_T obj_uuid;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiC_StubDesc);
    
    entry_name = 0;
    if_spec = 0;
    obj_uuid = 0;
    import_context = 0;
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
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&if_spec,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&obj_uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[52],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        binding_max_count = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        ignore = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        import_context = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M2;
        
        nsi_binding_lookup_begin(
                            entry_name_syntax,
                            entry_name,
                            if_spec,
                            obj_uuid,
                            binding_max_count,
                            ignore,
                            ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(import_context),
                            status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )import_context,
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
NsiC_nsi_binding_lookup_done(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M3;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT import_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiC_StubDesc);
    
    import_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        import_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M3;
        
        nsi_binding_lookup_done(( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(import_context),status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )import_context,
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
NsiC_nsi_binding_lookup_next(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M4;
    MIDL_STUB_MESSAGE _StubMsg;
    NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector;
    NDR_SCONTEXT import_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiC_StubDesc);
    
    binding_vector = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[38] );
        
        import_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&binding_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80],
                              (unsigned char)0 );
        
        status = &_M4;
        
        nsi_binding_lookup_next(
                           ( NSI_NS_HANDLE_T  )*NDRSContextValue(import_context),
                           binding_vector,
                           status);
        
        _StubMsg.BufferLength = 4U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)binding_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)binding_vector,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)binding_vector,
                        &__MIDL_TypeFormatString.Format[80] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiC_nsi_mgmt_handle_set_exp_age(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M5;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED32 expiration_age;
    NDR_SCONTEXT inq_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiC_StubDesc);
    
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52] );
        
        inq_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        expiration_age = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        status = &_M5;
        
        nsi_mgmt_handle_set_exp_age(
                               ( NSI_NS_HANDLE_T  )*NDRSContextValue(inq_context),
                               expiration_age,
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


static const MIDL_STUB_DESC NsiC_StubDesc = 
    {
    (void __RPC_FAR *)& NsiC___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION NsiC_table[] =
    {
    NsiC_nsi_binding_lookup_begin,
    NsiC_nsi_binding_lookup_done,
    NsiC_nsi_binding_lookup_next,
    NsiC_nsi_mgmt_handle_set_exp_age,
    0
    };
RPC_DISPATCH_TABLE NsiC_DispatchTable = 
    {
    4,
    NsiC_table
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
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */
/* 14 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */
/* 22 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 26 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 28 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 32 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 36 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 42 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */
/* 46 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 50 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 62 */	0x5b,		/* FC_END */
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
			0x11, 0x0,	/* FC_RP */
/*  6 */	NdrFcShort( 0x20 ),	/* Offset= 32 (38) */
/*  8 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 10 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 20 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 22 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 24 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffef ),	/* Offset= -17 (8) */
			0x5b,		/* FC_END */
/* 28 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x14 ),	/* 20 */
/* 32 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 34 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (14) */
/* 36 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 38 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 40 */	NdrFcShort( 0x28 ),	/* 40 */
/* 42 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0xfffffff0 ),	/* Offset= -16 (28) */
/* 46 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (28) */
/* 50 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 52 */	
			0x12, 0x0,	/* FC_UP */
/* 54 */	NdrFcShort( 0xffffffd8 ),	/* Offset= -40 (14) */
/* 56 */	
			0x11, 0x0,	/* FC_RP */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 62 */	0x0,		/* 0 */
			0x6,		/* 6 */
/* 64 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 66 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 78 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 80 */	
			0x11, 0x10,	/* FC_RP */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x30 ),	/* Offset= 48 (134) */
/* 88 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0xc ),	/* 12 */
/* 92 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 102 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 116 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 118 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 120 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 122 */	NdrFcShort( 0xc ),	/* 12 */
/* 124 */	0x8,		/* 8 */
			0x0,		/*  */
/* 126 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 128 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (88) */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 138 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (120) */
/* 140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 142 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 144 */	NdrFcShort( 0xc ),	/* 12 */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x2 ),	/* 2 */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 154 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 158 */	NdrFcShort( 0xc ),	/* 12 */
/* 160 */	NdrFcShort( 0xc ),	/* 12 */
/* 162 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 164 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 166 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 168 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
