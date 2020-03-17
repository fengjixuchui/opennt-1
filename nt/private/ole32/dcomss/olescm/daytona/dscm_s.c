/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:40 2020
 */
/* Compiler settings for ..\dscm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "rawdscm.h"

#define TYPE_FORMAT_STRING_SIZE   595                               
#define PROC_FORMAT_STRING_SIZE   457                               

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

/* Standard interface: IDSCM, ver. 0.0,
   GUID={0x00000136,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_SERVER_INFO IDSCM_ServerInfo;

extern RPC_DISPATCH_TABLE IDSCM_DispatchTable;

static const RPC_SERVER_INTERFACE IDSCM___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x00000136,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IDSCM_DispatchTable,
    0,
    0,
    0,
    &IDSCM_ServerInfo,
    0
    };
RPC_IF_HANDLE IDSCM_ServerIfHandle = (RPC_IF_HANDLE)& IDSCM___RpcServerInterface;

extern const MIDL_STUB_DESC IDSCM_StubDesc;

extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC IDSCM_StubDesc = 
    {
    (void __RPC_FAR *)& IDSCM___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
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

static RPC_DISPATCH_FUNCTION IDSCM_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE IDSCM_DispatchTable = 
    {
    6,
    IDSCM_table
    };

static const SERVER_ROUTINE IDSCM_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)DummyQueryInterfaceIDSCM,
    (SERVER_ROUTINE)DummyAddRefIDSCM,
    (SERVER_ROUTINE)DummyReleaseIDSCM,
    (SERVER_ROUTINE)SCMGetClassObject,
    (SERVER_ROUTINE)SCMCreateInstance,
    (SERVER_ROUTINE)SCMGetPersistentInstance
    };

static const unsigned short IDSCM_FormatStringOffsetTable[] = 
    {
    0,
    46,
    92,
    138,
    226,
    326
    };

static const MIDL_SERVER_INFO IDSCM_ServerInfo = 
    {
    &IDSCM_StubDesc,
    IDSCM_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    IDSCM_FormatStringOffsetTable,
    0,
    0,
    0,
    0
    };

static void __RPC_USER IDSCM_ORPC_EXTENTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT __RPC_FAR *pS	=	( ORPC_EXTENT __RPC_FAR * )(pStubMsg->StackTop - 20);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 7 & ~7;
}

static void __RPC_USER IDSCM_ORPC_EXTENT_ARRAYExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT_ARRAY __RPC_FAR *pS	=	( ORPC_EXTENT_ARRAY __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 1 & ~1;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IDSCM_ORPC_EXTENTExprEval_0000
    ,IDSCM_ORPC_EXTENT_ARRAYExprEval_0001
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

	/* Procedure DummyQueryInterfaceIDSCM */

			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
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
			0x5,		/* 5 */

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

	/* Parameter dummy */

/* 40 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DummyAddRefIDSCM */


	/* Return value */

/* 46 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 52 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 56 */	NdrFcShort( 0x18 ),	/* 24 */
/* 58 */	NdrFcShort( 0x8 ),	/* 8 */
/* 60 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter rpc */

/* 62 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 66 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 68 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 72 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 74 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 78 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 80 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 84 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dummy */

/* 86 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 88 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 90 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DummyReleaseIDSCM */


	/* Return value */

/* 92 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 94 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 98 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 100 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 102 */	NdrFcShort( 0x18 ),	/* 24 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter rpc */

/* 108 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 112 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 114 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 118 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 120 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 124 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 126 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dummy */

/* 132 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SCMGetClassObject */


	/* Return value */

/* 138 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 140 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 148 */	NdrFcShort( 0x38 ),	/* 56 */
/* 150 */	NdrFcShort( 0x28 ),	/* 40 */
/* 152 */	0x7,		/* 7 */
			0xc,		/* 12 */

	/* Parameter rpc */

/* 154 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 156 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 158 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 160 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 164 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 166 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 168 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 170 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 172 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 176 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Parameter pActivationInfo */

/* 178 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 180 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 182 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pIID */

/* 184 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 186 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Apartment */

/* 190 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 192 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 194 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 196 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 200 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Parameter ppServerORBindings */

/* 202 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 204 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 206 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter pOxidInfo */

/* 208 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 210 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 212 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLocalMidOfRemote */

/* 214 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 216 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 218 */	NdrFcShort( 0x1ac ),	/* Type Offset=428 */

	/* Parameter ppIDClassFactory */

/* 220 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 222 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SCMCreateInstance */


	/* Return value */

/* 226 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 230 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 232 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 234 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 236 */	NdrFcShort( 0x20 ),	/* 32 */
/* 238 */	NdrFcShort( 0x28 ),	/* 40 */
/* 240 */	0x7,		/* 7 */
			0xe,		/* 14 */

	/* Parameter rpc */

/* 242 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 244 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 246 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 248 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 252 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 254 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 256 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 258 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 260 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 262 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 264 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Parameter pActivationInfo */

/* 266 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 272 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 274 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 276 */	NdrFcShort( 0x1ca ),	/* Type Offset=458 */

	/* Parameter pIIDs */

/* 278 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 280 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Apartment */

/* 284 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 288 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 290 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 294 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Parameter ppServerORBindings */

/* 296 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 298 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 300 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter pOxidInfo */

/* 302 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 306 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLocalMidOfRemote */

/* 308 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 312 */	NdrFcShort( 0x1dc ),	/* Type Offset=476 */

	/* Parameter ppInterfaceData */

/* 314 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 316 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 318 */	NdrFcShort( 0x1fe ),	/* Type Offset=510 */

	/* Parameter pResults */

/* 320 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SCMGetPersistentInstance */


	/* Return value */

/* 326 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 328 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 330 */	NdrFcShort( 0x50 ),	/* x86, MIPS, PPC Stack size/offset = 80 */
#else
			NdrFcShort( 0xa0 ),	/* Alpha Stack size/offset = 160 */
#endif
/* 332 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 334 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 336 */	NdrFcShort( 0x30 ),	/* 48 */
/* 338 */	NdrFcShort( 0x30 ),	/* 48 */
/* 340 */	0x7,		/* 7 */
			0x13,		/* 19 */

	/* Parameter rpc */

/* 342 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 346 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 348 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 352 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 354 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 358 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 360 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 364 */	NdrFcShort( 0x13e ),	/* Type Offset=318 */

	/* Parameter pActivationInfo */

/* 366 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 368 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 370 */	NdrFcShort( 0x208 ),	/* Type Offset=520 */

	/* Parameter pwszPath */

/* 372 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 376 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter pIFDStorage */

/* 378 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FileMode */

/* 384 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FileWasOpened */

/* 390 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 396 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 398 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 400 */	NdrFcShort( 0x210 ),	/* Type Offset=528 */

	/* Parameter pIIDs */

/* 402 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Apartment */

/* 408 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 412 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 414 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 418 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Parameter ppServerORBindings */

/* 420 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 424 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter pOxidInfo */

/* 426 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 428 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 430 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pLocalMidOfRemote */

/* 432 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0x40 ),	/* x86, MIPS, PPC Stack size/offset = 64 */
#else
			NdrFcShort( 0x80 ),	/* Alpha Stack size/offset = 128 */
#endif
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFoundInROT */

/* 438 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 442 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Parameter ppInterfaceData */

/* 444 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x48 ),	/* x86, MIPS, PPC Stack size/offset = 72 */
#else
			NdrFcShort( 0x90 ),	/* Alpha Stack size/offset = 144 */
#endif
/* 448 */	NdrFcShort( 0x248 ),	/* Type Offset=584 */

	/* Parameter pResults */

/* 450 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0x4c ),	/* x86, MIPS, PPC Stack size/offset = 76 */
#else
			NdrFcShort( 0x98 ),	/* Alpha Stack size/offset = 152 */
#endif
/* 454 */	0x8,		/* FC_LONG */
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
			0x11, 0x0,	/* FC_RP */
/* 172 */	NdrFcShort( 0x92 ),	/* Offset= 146 (318) */
/* 174 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 176 */	NdrFcShort( 0x2 ),	/* 2 */
/* 178 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 182 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 184 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 186 */	NdrFcShort( 0x2 ),	/* 2 */
/* 188 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 190 */	NdrFcShort( 0xc ),	/* 12 */
/* 192 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 194 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 196 */	NdrFcShort( 0x2 ),	/* 2 */
/* 198 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 200 */	NdrFcShort( 0x14 ),	/* 20 */
/* 202 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 204 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x1c ),	/* 28 */
/* 208 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 216 */	0x12, 0x0,	/* FC_UP */
/* 218 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (174) */
/* 220 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 226 */	0x12, 0x0,	/* FC_UP */
/* 228 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (184) */
/* 230 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 232 */	NdrFcShort( 0x10 ),	/* 16 */
/* 234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 236 */	0x12, 0x0,	/* FC_UP */
/* 238 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (194) */
/* 240 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 244 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 246 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 248 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x1c ),	/* 28 */
/* 254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 264 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 268 */	NdrFcShort( 0x14 ),	/* 20 */
/* 270 */	NdrFcShort( 0x14 ),	/* 20 */
/* 272 */	0x12, 0x0,	/* FC_UP */
/* 274 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (204) */
/* 276 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 278 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 280 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 284 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 286 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 288 */	NdrFcShort( 0x10 ),	/* 16 */
/* 290 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 292 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 298 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 300 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 302 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 308 */	0x12, 0x0,	/* FC_UP */
/* 310 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (250) */
/* 312 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 314 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 316 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 318 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 320 */	NdrFcShort( 0x18 ),	/* 24 */
/* 322 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 324 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 330 */	0x12, 0x0,	/* FC_UP */
/* 332 */	NdrFcShort( 0xfffffec6 ),	/* Offset= -314 (18) */
/* 334 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 338 */	NdrFcShort( 0x4 ),	/* 4 */
/* 340 */	0x12, 0x0,	/* FC_UP */
/* 342 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (286) */
/* 344 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 352 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 354 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 356 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 360 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 362 */	
			0x11, 0x0,	/* FC_RP */
/* 364 */	NdrFcShort( 0xfffffea6 ),	/* Offset= -346 (18) */
/* 366 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 368 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 370 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (374) */
/* 374 */	
			0x12, 0x0,	/* FC_UP */
/* 376 */	NdrFcShort( 0xc ),	/* Offset= 12 (388) */
/* 378 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 380 */	NdrFcShort( 0x2 ),	/* 2 */
/* 382 */	0x7,		/* 7 */
			0x0,		/*  */
/* 384 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 386 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 388 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 390 */	NdrFcShort( 0x4 ),	/* 4 */
/* 392 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (378) */
/* 394 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 396 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 398 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 406 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 408 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 410 */	NdrFcShort( 0x1c ),	/* 28 */
/* 412 */	NdrFcShort( 0x1c ),	/* 28 */
/* 414 */	0x12, 0x0,	/* FC_UP */
/* 416 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (388) */
/* 418 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 420 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 422 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe6b ),	/* Offset= -405 (18) */
			0x8,		/* FC_LONG */
/* 426 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 428 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x12, 0x0,	/* FC_UP */
/* 434 */	NdrFcShort( 0xc ),	/* Offset= 12 (446) */
/* 436 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 440 */	0x8,		/* 8 */
			0x0,		/*  */
/* 442 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 444 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 446 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 448 */	NdrFcShort( 0x4 ),	/* 4 */
/* 450 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (436) */
/* 452 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 454 */	
			0x11, 0x0,	/* FC_RP */
/* 456 */	NdrFcShort( 0x2 ),	/* Offset= 2 (458) */
/* 458 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 462 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 466 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 468 */	NdrFcShort( 0xfffffe3e ),	/* Offset= -450 (18) */
/* 470 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 472 */	
			0x11, 0x0,	/* FC_RP */
/* 474 */	NdrFcShort( 0x2 ),	/* Offset= 2 (476) */
/* 476 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 480 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 482 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 484 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 486 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	0x12, 0x0,	/* FC_UP */
/* 500 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (446) */
/* 502 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 504 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 506 */	
			0x11, 0x0,	/* FC_RP */
/* 508 */	NdrFcShort( 0x2 ),	/* Offset= 2 (510) */
/* 510 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 512 */	NdrFcShort( 0x4 ),	/* 4 */
/* 514 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 516 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 518 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 520 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 522 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 524 */	
			0x11, 0x0,	/* FC_RP */
/* 526 */	NdrFcShort( 0x2 ),	/* Offset= 2 (528) */
/* 528 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 532 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 534 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 536 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 538 */	NdrFcShort( 0xfffffdf8 ),	/* Offset= -520 (18) */
/* 540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 542 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 544 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 546 */	
			0x11, 0x0,	/* FC_RP */
/* 548 */	NdrFcShort( 0x2 ),	/* Offset= 2 (550) */
/* 550 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 554 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 556 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 558 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 560 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	0x12, 0x0,	/* FC_UP */
/* 574 */	NdrFcShort( 0xffffff80 ),	/* Offset= -128 (446) */
/* 576 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 578 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 580 */	
			0x11, 0x0,	/* FC_RP */
/* 582 */	NdrFcShort( 0x2 ),	/* Offset= 2 (584) */
/* 584 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 586 */	NdrFcShort( 0x4 ),	/* 4 */
/* 588 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 592 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
