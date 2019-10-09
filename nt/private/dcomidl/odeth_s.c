/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:36 2019
 */
/* Compiler settings for odeth.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "rawodeth.h"

#define TYPE_FORMAT_STRING_SIZE   191                               
#define PROC_FORMAT_STRING_SIZE   59                                

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

/* Standard interface: IRundown, ver. 0.0,
   GUID={0x00000134,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_SERVER_INFO IRundown_ServerInfo;

extern RPC_DISPATCH_TABLE IRundown_DispatchTable;

static const RPC_SERVER_INTERFACE IRundown___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x00000134,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IRundown_DispatchTable,
    0,
    0,
    0,
    &IRundown_ServerInfo,
    RPC_INTERFACE_HAS_PIPES
    };
RPC_IF_HANDLE _IRundown_ServerIfHandle = (RPC_IF_HANDLE)& IRundown___RpcServerInterface;

extern const MIDL_STUB_DESC IRundown_StubDesc;

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC IRundown_StubDesc = 
    {
    (void __RPC_FAR *)& IRundown___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
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

static RPC_DISPATCH_FUNCTION IRundown_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE IRundown_DispatchTable = 
    {
    8,
    IRundown_table
    };

static const SERVER_ROUTINE IRundown_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)_DummyQueryInterfaceIOSCM,
    (SERVER_ROUTINE)_DummyAddRefIOSCM,
    (SERVER_ROUTINE)_DummyReleaseIOSCM,
    (SERVER_ROUTINE)_DummyRemQuery,
    (SERVER_ROUTINE)_DummyRemAddRef,
    (SERVER_ROUTINE)_DummyRemRelease,
    (SERVER_ROUTINE)_DummyRemChangeRef,
    (SERVER_ROUTINE)_RawRundownOid
    };

static const unsigned short IRundown_FormatStringOffsetTable[] = 
    {
    0,
    46,
    92,
    138,
    160,
    182,
    204,
    0
    };

static const MIDL_SERVER_INFO IRundown_ServerInfo = 
    {
    &IRundown_StubDesc,
    IRundown_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    IRundown_FormatStringOffsetTable,
    0,
    0,
    0,
    0
    };

static void __RPC_USER IRundown_ORPC_EXTENTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT __RPC_FAR *pS	=	( ORPC_EXTENT __RPC_FAR * )(pStubMsg->StackTop - 20);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 7 & ~7;
}

static void __RPC_USER IRundown_ORPC_EXTENT_ARRAYExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT_ARRAY __RPC_FAR *pS	=	( ORPC_EXTENT_ARRAY __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 1 & ~1;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IRundown_ORPC_EXTENTExprEval_0000
    ,IRundown_ORPC_EXTENT_ARRAYExprEval_0001
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

	/* Procedure RawRundownOid */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter rpc */

/* 16 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 22 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 28 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 34 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cOid */

/* 40 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	NdrFcShort( 0xaa ),	/* Type Offset=170 */

	/* Parameter aOid */

/* 46 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 50 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */

	/* Parameter afOkToRundown */

/* 52 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 56 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x66 ),	/* Offset= 102 (104) */
/*  4 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/*  6 */	NdrFcShort( 0x4 ),	/* 4 */
/*  8 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 10 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 12 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 14 */	NdrFcShort( 0x8 ),	/* 8 */
/* 16 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 20 */	NdrFcShort( 0x10 ),	/* 16 */
/* 22 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 24 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 26 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (12) */
			0x5b,		/* FC_END */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0x1 ),	/* 1 */
/* 34 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 40 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x14 ),	/* 20 */
/* 44 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (30) */
/* 46 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (18) */
/* 50 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 52 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 58 */	NdrFcShort( 0x1 ),	/* 1 */
/* 60 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0x12, 0x0,	/* FC_UP */
/* 76 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (40) */
/* 78 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
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
/* 96 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (52) */
/* 98 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 106 */	NdrFcShort( 0x20 ),	/* 32 */
/* 108 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 112 */	NdrFcShort( 0x1c ),	/* 28 */
/* 114 */	NdrFcShort( 0x1c ),	/* 28 */
/* 116 */	0x12, 0x0,	/* FC_UP */
/* 118 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (82) */
/* 120 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 122 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff89 ),	/* Offset= -119 (4) */
			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 128 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff91 ),	/* Offset= -111 (18) */
			0x8,		/* FC_LONG */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x11, 0x0,	/* FC_RP */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
/* 138 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 148 */	NdrFcShort( 0x2 ),	/* Offset= 2 (150) */
/* 150 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 156 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 158 */	NdrFcShort( 0x4 ),	/* 4 */
/* 160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 162 */	0x12, 0x0,	/* FC_UP */
/* 164 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (82) */
/* 166 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 168 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 170 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 178 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 180 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 184 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 186 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 188 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
