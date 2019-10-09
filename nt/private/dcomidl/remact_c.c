/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:34 2019
 */
/* Compiler settings for remact.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "remact.h"

#define TYPE_FORMAT_STRING_SIZE   309                               
#define PROC_FORMAT_STRING_SIZE   137                               

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

/* Standard interface: IActivation, ver. 0.0,
   GUID={0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}} */

handle_t any_handle;


static const RPC_CLIENT_INTERFACE IActivation___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x4d9f4ab8,0x7d1c,0x11cf,{0x86,0x1e,0x00,0x20,0xaf,0x6e,0x7c,0x57}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IActivation_ClientIfHandle = (RPC_IF_HANDLE)& IActivation___RpcClientInterface;

extern const MIDL_STUB_DESC IActivation_StubDesc;

static RPC_BINDING_HANDLE IActivation__MIDL_AutoBindHandle;


/* [fault_status][comm_status] */ error_status_t RemoteActivation( 
    /* [in] */ handle_t hRpc,
    /* [in] */ ORPCTHIS __RPC_FAR *ORPCthis,
    /* [out] */ ORPCTHAT __RPC_FAR *ORPCthat,
    /* [in] */ const GUID __RPC_FAR *Clsid,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszObjectName,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pObjectStorage,
    /* [in] */ DWORD ClientImpLevel,
    /* [in] */ DWORD Mode,
    /* [in] */ DWORD Interfaces,
    /* [size_is][unique][in] */ IID __RPC_FAR *pIIDs,
    /* [in] */ unsigned short cRequestedProtseqs,
    /* [size_is][in] */ unsigned short __RPC_FAR aRequestedProtseqs[  ],
    /* [out] */ OXID __RPC_FAR *pOxid,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppdsaOxidBindings,
    /* [out] */ IPID __RPC_FAR *pipidRemUnknown,
    /* [out] */ DWORD __RPC_FAR *pAuthnHint,
    /* [out] */ COMVERSION __RPC_FAR *pServerVersion,
    /* [out] */ HRESULT __RPC_FAR *phr,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppInterfaceData,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pResults);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IActivation_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IActivation_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&ORPCthis,
                  ( unsigned char __RPC_FAR * )&ORPCthat,
                  ( unsigned char __RPC_FAR * )&Clsid,
                  ( unsigned char __RPC_FAR * )&pwszObjectName,
                  ( unsigned char __RPC_FAR * )&pObjectStorage,
                  ( unsigned char __RPC_FAR * )&ClientImpLevel,
                  ( unsigned char __RPC_FAR * )&Mode,
                  ( unsigned char __RPC_FAR * )&Interfaces,
                  ( unsigned char __RPC_FAR * )&pIIDs,
                  ( unsigned char __RPC_FAR * )&cRequestedProtseqs,
                  ( unsigned char __RPC_FAR * )&aRequestedProtseqs,
                  ( unsigned char __RPC_FAR * )&pOxid,
                  ( unsigned char __RPC_FAR * )&ppdsaOxidBindings,
                  ( unsigned char __RPC_FAR * )&pipidRemUnknown,
                  ( unsigned char __RPC_FAR * )&pAuthnHint,
                  ( unsigned char __RPC_FAR * )&pServerVersion,
                  ( unsigned char __RPC_FAR * )&phr,
                  ( unsigned char __RPC_FAR * )&ppInterfaceData,
                  ( unsigned char __RPC_FAR * )&pResults);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IActivation_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( error_status_t  )_RetVal.Simple;
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const COMM_FAULT_OFFSETS IActivation_CommFaultOffsets[] = 
{
#ifdef _X86_
	{ -1, -1 } 	/* x86 Offsets for RemoteActivation */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ -1, -1 } 	/* MIPS, PPC Offsets for RemoteActivation */
#endif
#ifdef _ALPHA_
	{ -1, -1 } 	/* Alpha Offsets for RemoteActivation */
#endif
};


static const MIDL_STUB_DESC IActivation_StubDesc = 
    {
    (void __RPC_FAR *)& IActivation___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &any_handle,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    IActivation_CommFaultOffsets,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static void __RPC_USER IActivation_ORPC_EXTENTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT __RPC_FAR *pS	=	( ORPC_EXTENT __RPC_FAR * )(pStubMsg->StackTop - 20);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 7 & ~7;
}

static void __RPC_USER IActivation_ORPC_EXTENT_ARRAYExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT_ARRAY __RPC_FAR *pS	=	( ORPC_EXTENT_ARRAY __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 1 & ~1;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IActivation_ORPC_EXTENTExprEval_0000
    ,IActivation_ORPC_EXTENT_ARRAYExprEval_0001
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

	/* Procedure RemoteActivation */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x54 ),	/* x86, MIPS, PPC Stack size/offset = 84 */
#else
			NdrFcShort( 0xa8 ),	/* Alpha Stack size/offset = 168 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x3e ),	/* 62 */
/* 12 */	NdrFcShort( 0x54 ),	/* 84 */
/* 14 */	0x7,		/* 7 */
			0x14,		/* 20 */

	/* Parameter hRpc */

/* 16 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter ORPCthis */

/* 22 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter ORPCthat */

/* 28 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter Clsid */

/* 34 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */

	/* Parameter pwszObjectName */

/* 40 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pObjectStorage */

/* 46 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ClientImpLevel */

/* 52 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 54 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mode */

/* 58 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 60 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 62 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 64 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 68 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */

	/* Parameter pIIDs */

/* 70 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 74 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter cRequestedProtseqs */

/* 76 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 80 */	NdrFcShort( 0xce ),	/* Type Offset=206 */

	/* Parameter aRequestedProtseqs */

/* 82 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 84 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 86 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pOxid */

/* 88 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 92 */	NdrFcShort( 0xdc ),	/* Type Offset=220 */

	/* Parameter ppdsaOxidBindings */

/* 94 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 98 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter pipidRemUnknown */

/* 100 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAuthnHint */

/* 106 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x40 ),	/* x86, MIPS, PPC Stack size/offset = 64 */
#else
			NdrFcShort( 0x80 ),	/* Alpha Stack size/offset = 128 */
#endif
/* 110 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pServerVersion */

/* 112 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter phr */

/* 118 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x48 ),	/* x86, MIPS, PPC Stack size/offset = 72 */
#else
			NdrFcShort( 0x90 ),	/* Alpha Stack size/offset = 144 */
#endif
/* 122 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter ppInterfaceData */

/* 124 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 126 */	NdrFcShort( 0x4c ),	/* x86, MIPS, PPC Stack size/offset = 76 */
#else
			NdrFcShort( 0x98 ),	/* Alpha Stack size/offset = 152 */
#endif
/* 128 */	NdrFcShort( 0x12a ),	/* Type Offset=298 */

	/* Parameter pResults */

/* 130 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x50 ),	/* x86, MIPS, PPC Stack size/offset = 80 */
#else
			NdrFcShort( 0xa0 ),	/* Alpha Stack size/offset = 160 */
#endif
/* 134 */	0x10,		/* FC_ERROR_STATUS_T */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 136 */	NdrFcShort( 0x2 ),	/* Offset= 2 (138) */
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
/* 152 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (82) */
/* 154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 158 */	
			0x11, 0x0,	/* FC_RP */
/* 160 */	NdrFcShort( 0xffffff72 ),	/* Offset= -142 (18) */
/* 162 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 164 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 166 */	
			0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0xc ),	/* Offset= 12 (180) */
/* 170 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	0x8,		/* 8 */
			0x0,		/*  */
/* 176 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 178 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 180 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 182 */	NdrFcShort( 0x4 ),	/* 4 */
/* 184 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (170) */
/* 186 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 188 */	
			0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0x2 ),	/* Offset= 2 (192) */
/* 192 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x10 ),	/* 16 */
/* 196 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 202 */	NdrFcShort( 0xffffff48 ),	/* Offset= -184 (18) */
/* 204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 206 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 210 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 214 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 216 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 218 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 220 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 222 */	NdrFcShort( 0x2 ),	/* Offset= 2 (224) */
/* 224 */	
			0x12, 0x0,	/* FC_UP */
/* 226 */	NdrFcShort( 0xc ),	/* Offset= 12 (238) */
/* 228 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 230 */	NdrFcShort( 0x2 ),	/* 2 */
/* 232 */	0x7,		/* 7 */
			0x0,		/*  */
/* 234 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 236 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 238 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 240 */	NdrFcShort( 0x4 ),	/* 4 */
/* 242 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (228) */
/* 244 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 250 */	NdrFcShort( 0xffffff18 ),	/* Offset= -232 (18) */
/* 252 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 254 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 258 */	NdrFcShort( 0xffffff02 ),	/* Offset= -254 (4) */
/* 260 */	
			0x11, 0x0,	/* FC_RP */
/* 262 */	NdrFcShort( 0x2 ),	/* Offset= 2 (264) */
/* 264 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x4 ),	/* 4 */
/* 268 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 272 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 276 */	NdrFcShort( 0x4 ),	/* 4 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x1 ),	/* 1 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	0x12, 0x0,	/* FC_UP */
/* 288 */	NdrFcShort( 0xffffff94 ),	/* Offset= -108 (180) */
/* 290 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 292 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 294 */	
			0x11, 0x0,	/* FC_RP */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 306 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
