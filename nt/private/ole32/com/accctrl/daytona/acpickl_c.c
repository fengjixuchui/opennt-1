/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:45 2019
 */
/* Compiler settings for ..\acpickl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "acpickl.h"

#define TYPE_FORMAT_STRING_SIZE   113                               
#define PROC_FORMAT_STRING_SIZE   1                                 

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

/* Pickling interface: AccCntrlPickle, ver. 1.0,
   GUID={0x52c0e9e2,0xc0c0,0x11cf,{0xae,0xec,0x00,0xaa,0x00,0x44,0xfb,0x89}} */



static const RPC_CLIENT_INTERFACE AccCntrlPickle___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x52c0e9e2,0xc0c0,0x11cf,{0xae,0xec,0x00,0xaa,0x00,0x44,0xfb,0x89}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE AccCntrlPickle_v1_0_c_ifspec = (RPC_IF_HANDLE)& AccCntrlPickle___RpcClientInterface;

extern const MIDL_STUB_DESC AccCntrlPickle_StubDesc;

static RPC_BINDING_HANDLE AccCntrlPickle__MIDL_AutoBindHandle;

size_t
STREAM_ACE_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType)
{
    return NdrMesTypeAlignSize(
                       _MidlEsHandle,
                       ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                       ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[40],
                       _pType);
}

void
STREAM_ACE_Encode(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType)
{
    NdrMesTypeEncode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[40],
                    _pType);
}

void
STREAM_ACE_Decode(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType)
{
    NdrMesTypeDecode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[40],
                    _pType);
}

size_t
STREAM_ACL_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType)
{
    return NdrMesTypeAlignSize(
                       _MidlEsHandle,
                       ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                       ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[82],
                       _pType);
}

void
STREAM_ACL_Encode(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType)
{
    NdrMesTypeEncode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[82],
                    _pType);
}

void
STREAM_ACL_Decode(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType)
{
    NdrMesTypeDecode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[82],
                    _pType);
}

size_t
STREAM_HEADER_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType)
{
    return NdrMesTypeAlignSize(
                       _MidlEsHandle,
                       ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                       ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[104],
                       _pType);
}

void
STREAM_HEADER_Encode(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType)
{
    NdrMesTypeEncode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[104],
                    _pType);
}

void
STREAM_HEADER_Decode(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType)
{
    NdrMesTypeDecode(
                    _MidlEsHandle,
                    ( PMIDL_STUB_DESC  )&AccCntrlPickle_StubDesc,
                    ( PFORMAT_STRING  )&__MIDL_TypeFormatString.Format[104],
                    _pType);
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC AccCntrlPickle_StubDesc = 
    {
    (void __RPC_FAR *)& AccCntrlPickle___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &AccCntrlPickle__MIDL_AutoBindHandle,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
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

static void __RPC_USER AccCntrlPickle_STREAM_ACLExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    STREAM_ACL __RPC_FAR *pS	=	( STREAM_ACL __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->ulNumOfDenyEntries + pS->ulNumOfGrantEntries;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    AccCntrlPickle_STREAM_ACLExprEval_0000
    };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  2 */	NdrFcShort( 0x6 ),	/* 6 */
/*  4 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/*  6 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/*  8 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (0) */
/* 14 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 16 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 18 */	NdrFcShort( 0x4 ),	/* 4 */
/* 20 */	0x3,		/* 3 */
			0x0,		/*  */
/* 22 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 24 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 26 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 28 */	NdrFcShort( 0x8 ),	/* 8 */
/* 30 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (16) */
/* 32 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 34 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (6) */
/* 38 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 40 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x18 ),	/* 24 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0xa ),	/* Offset= 10 (56) */
/* 48 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 50 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 52 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 54 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 56 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 58 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x12, 0x0,	/* FC_UP */
/* 62 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (26) */
/* 64 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 76 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 78 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (40) */
/* 80 */	0x5c,		/* FC_PAD */
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
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (64) */
/* 98 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
