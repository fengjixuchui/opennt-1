/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:51:19 2019
 */
/* Compiler settings for nsisvr.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "nsisvr.h"

#define TYPE_FORMAT_STRING_SIZE   131                               
#define PROC_FORMAT_STRING_SIZE   45                                

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

/* Standard interface: NsiS, ver. 1.0,
   GUID={0xd6d70ef0,0x0e3b,0x11cb,{0xac,0xc3,0x08,0x00,0x2b,0x1d,0x29,0xc3}} */


extern RPC_DISPATCH_TABLE NsiS_DispatchTable;

static const RPC_SERVER_INTERFACE NsiS___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xd6d70ef0,0x0e3b,0x11cb,{0xac,0xc3,0x08,0x00,0x2b,0x1d,0x29,0xc3}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &NsiS_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE NsiS_ServerIfHandle = (RPC_IF_HANDLE)& NsiS___RpcServerInterface;

extern const MIDL_STUB_DESC NsiS_StubDesc;

void __RPC_STUB
NsiS_nsi_binding_export(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M4;
    MIDL_STUB_MESSAGE _StubMsg;
    NSI_SERVER_BINDING_VECTOR_P_T binding;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NSI_INTERFACE_ID_T __RPC_FAR *interface_object;
    NSI_UUID_VECTOR_P_T object_uuid_vec;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiS_StubDesc);
    
    entry_name = 0;
    interface_object = 0;
    binding = 0;
    object_uuid_vec = 0;
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
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&interface_object,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&binding,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[52],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&object_uuid_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94],
                              (unsigned char)0 );
        
        status = &_M4;
        
        nsi_binding_export(
                      entry_name_syntax,
                      entry_name,
                      interface_object,
                      binding,
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
                        (unsigned char __RPC_FAR *)binding,
                        &__MIDL_TypeFormatString.Format[52] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)object_uuid_vec,
                        &__MIDL_TypeFormatString.Format[94] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
NsiS_nsi_binding_unexport(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M5;
    MIDL_STUB_MESSAGE _StubMsg;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    NSI_INTERFACE_ID_T __RPC_FAR *interface_object;
    NSI_UUID_VECTOR_P_T object_uuid_vec;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &NsiS_StubDesc);
    
    entry_name = 0;
    interface_object = 0;
    object_uuid_vec = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[24] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&interface_object,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38],
                                   (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&object_uuid_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94],
                              (unsigned char)0 );
        
        status = &_M5;
        
        nsi_binding_unexport(
                        entry_name_syntax,
                        entry_name,
                        interface_object,
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
                        &__MIDL_TypeFormatString.Format[94] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC NsiS_StubDesc = 
    {
    (void __RPC_FAR *)& NsiS___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION NsiS_table[] =
    {
    NsiS_nsi_binding_export,
    NsiS_nsi_binding_unexport,
    0
    };
RPC_DISPATCH_TABLE NsiS_DispatchTable = 
    {
    2,
    NsiS_table
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
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 18 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 22 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
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
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 38 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 42 */	0x5b,		/* FC_END */
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
/* 54 */	NdrFcShort( 0xc ),	/* Offset= 12 (66) */
/* 56 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	0x8,		/* 8 */
			0x0,		/*  */
/* 62 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 64 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 66 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
/* 70 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (56) */
/* 72 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	NdrFcShort( 0x4 ),	/* 4 */
/* 80 */	NdrFcShort( 0x1 ),	/* 1 */
/* 82 */	NdrFcShort( 0x4 ),	/* 4 */
/* 84 */	NdrFcShort( 0x4 ),	/* 4 */
/* 86 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 88 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 92 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 102 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (56) */
/* 104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	NdrFcShort( 0x1 ),	/* 1 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x4 ),	/* 4 */
/* 118 */	0x12, 0x0,	/* FC_UP */
/* 120 */	NdrFcShort( 0xffffff96 ),	/* Offset= -106 (14) */
/* 122 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 124 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 126 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 128 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
