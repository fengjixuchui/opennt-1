/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Mar 14 23:37:54 2020
 */
/* Compiler settings for nsiclt.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

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

handle_t NsiClntBinding;


static const RPC_CLIENT_INTERFACE NsiC___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xd3fbb514,0x0e3b,0x11cb,{0x8f,0xad,0x08,0x00,0x2b,0x1d,0x29,0xc3}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE NsiC_ClientIfHandle = (RPC_IF_HANDLE)& NsiC___RpcClientInterface;

extern const MIDL_STUB_DESC NsiC_StubDesc;

static RPC_BINDING_HANDLE NsiC__MIDL_AutoBindHandle;


void nsi_binding_lookup_begin( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_INTERFACE_ID_T __RPC_FAR *if_spec,
    /* [in] */ NSI_UUID_P_T obj_uuid,
    /* [in] */ UNSIGNED32 binding_max_count,
    /* [in] */ UNSIGNED32 ignore,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!if_spec)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!import_context)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!status)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiC_StubDesc,
                          0);
        
        
        _Handle = NsiClntBinding;
        
        
        _StubMsg.BufferLength = 4U + 16U + 0U + 11U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR *)if_spec,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)obj_uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[52] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = entry_name_syntax;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)entry_name,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0] );
        
        NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                 (unsigned char __RPC_FAR *)if_spec,
                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[38] );
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)obj_uuid,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[52] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = binding_max_count;
        
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = ignore;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        *import_context = (void *)0;
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )import_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_binding_lookup_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!import_context)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!status)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiC_StubDesc,
                          1);
        
        
        if(*import_context != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )*import_context);;
            
            }
        
        _StubMsg.BufferLength = 20U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )*import_context,
                            0);
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        NdrClientContextUnmarshall(
                              ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                              ( NDR_CCONTEXT __RPC_FAR * )import_context,
                              _Handle);
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


void nsi_binding_lookup_next( 
    /* [in] */ NSI_NS_HANDLE_T import_context,
    /* [out][in] */ NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!binding_vector)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    if(!status)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiC_StubDesc,
                          2);
        
        
        if(import_context != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )import_context);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)binding_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )import_context,
                            1);
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)binding_vector,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[38] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&binding_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[80],
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


void nsi_mgmt_handle_set_exp_age( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [in] */ UNSIGNED32 expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!status)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&NsiC_StubDesc,
                          3);
        
        
        if(inq_context != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )inq_context);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U;
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )inq_context,
                            1);
        *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++ = expiration_age;
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52] );
        
        *status = *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
}


static const MIDL_STUB_DESC NsiC_StubDesc = 
    {
    (void __RPC_FAR *)& NsiC___RpcClientInterface,
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
