/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:37 2020
 */
/* Compiler settings for ..\objsrv.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "rwobjsrv.h"

#define TYPE_FORMAT_STRING_SIZE   341                               
#define PROC_FORMAT_STRING_SIZE   437                               

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

/* Standard interface: IObjServer, ver. 0.0,
   GUID={0x00000132,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

handle_t any_handle;


static const RPC_CLIENT_INTERFACE IObjServer___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x00000132,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IObjServer_ClientIfHandle = (RPC_IF_HANDLE)& IObjServer___RpcClientInterface;

extern const MIDL_STUB_DESC IObjServer_StubDesc;

static RPC_BINDING_HANDLE IObjServer__MIDL_AutoBindHandle;


HRESULT DummyQueryInterfaceIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&dummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT DummyAddRefIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&dummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT DummyReleaseIObjServer( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ DWORD dummy)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[92],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[92],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&dummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[92],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ObjectServerGetClassObject( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ IID __RPC_FAR *pIID,
    /* [in] */ BOOL fSurrogate,
    /* [out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pStatus);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&rclsid,
                  ( unsigned char __RPC_FAR * )&pIID,
                  ( unsigned char __RPC_FAR * )&fSurrogate,
                  ( unsigned char __RPC_FAR * )&ppIFD,
                  ( unsigned char __RPC_FAR * )&pStatus);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[138],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ObjectServerCreateInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pStatus);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&rclsid,
                  ( unsigned char __RPC_FAR * )&Interfaces,
                  ( unsigned char __RPC_FAR * )&pIIDs,
                  ( unsigned char __RPC_FAR * )&ppIFD,
                  ( unsigned char __RPC_FAR * )&pResults,
                  ( unsigned char __RPC_FAR * )&pStatus);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[208],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ObjectServerGetInstance( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [in] */ DWORD Mode,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pwszPath,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDStorage,
    /* [in] */ DWORD Interfaces,
    /* [size_is][in] */ IID __RPC_FAR *pIIDs,
    /* [unique][in] */ MInterfacePointer __RPC_FAR *pIFDROT,
    /* [size_is][out] */ MInterfacePointer __RPC_FAR *__RPC_FAR *ppIFD,
    /* [size_is][out] */ HRESULT __RPC_FAR *pResults,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pStatus);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[284],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[284],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&rclsid,
                  ( unsigned char __RPC_FAR * )&Mode,
                  ( unsigned char __RPC_FAR * )&pwszPath,
                  ( unsigned char __RPC_FAR * )&pIFDStorage,
                  ( unsigned char __RPC_FAR * )&Interfaces,
                  ( unsigned char __RPC_FAR * )&pIIDs,
                  ( unsigned char __RPC_FAR * )&pIFDROT,
                  ( unsigned char __RPC_FAR * )&ppIFD,
                  ( unsigned char __RPC_FAR * )&pResults,
                  ( unsigned char __RPC_FAR * )&pStatus);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[284],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ObjectServerLoadDll( 
    /* [in] */ handle_t rpc,
    /* [ref][in] */ ORPCTHIS __RPC_FAR *orpcthis,
    /* [ref][in] */ LOCALTHIS __RPC_FAR *localthis,
    /* [ref][out] */ ORPCTHAT __RPC_FAR *orpcthat,
    /* [in] */ const GUID __RPC_FAR *rclsid,
    /* [fault_status][comm_status][out] */ STATUSTYPE __RPC_FAR *pStatus)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pStatus);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                  ( unsigned char __RPC_FAR * )&rpc,
                  ( unsigned char __RPC_FAR * )&orpcthis,
                  ( unsigned char __RPC_FAR * )&localthis,
                  ( unsigned char __RPC_FAR * )&orpcthat,
                  ( unsigned char __RPC_FAR * )&rclsid,
                  ( unsigned char __RPC_FAR * )&pStatus);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IObjServer_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                  ( unsigned char __RPC_FAR * )&rpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

extern const EXPR_EVAL ExprEvalRoutines[];

static const COMM_FAULT_OFFSETS IObjServer_CommFaultOffsets[] = 
{
	{ -2, -2 },
	{ -2, -2 },
	{ -2, -2 },
#ifdef _X86_
	{ 32, 32 },	/* x86 Offsets for ObjectServerGetClassObject */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 32, 32 },	/* MIPS, PPC Offsets for ObjectServerGetClassObject */
#endif
#ifdef _ALPHA_
	{ 64, 64 },	/* Alpha Offsets for ObjectServerGetClassObject */
#endif
#ifdef _X86_
	{ 36, 36 },	/* x86 Offsets for ObjectServerCreateInstance */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 36, 36 },	/* MIPS, PPC Offsets for ObjectServerCreateInstance */
#endif
#ifdef _ALPHA_
	{ 72, 72 },	/* Alpha Offsets for ObjectServerCreateInstance */
#endif
#ifdef _X86_
	{ 52, 52 },	/* x86 Offsets for ObjectServerGetInstance */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 52, 52 },	/* MIPS, PPC Offsets for ObjectServerGetInstance */
#endif
#ifdef _ALPHA_
	{ 104, 104 },	/* Alpha Offsets for ObjectServerGetInstance */
#endif
#ifdef _X86_
	{ 20, 20 } 	/* x86 Offsets for ObjectServerLoadDll */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 20, 20 } 	/* MIPS, PPC Offsets for ObjectServerLoadDll */
#endif
#ifdef _ALPHA_
	{ 40, 40 } 	/* Alpha Offsets for ObjectServerLoadDll */
#endif
};


static const MIDL_STUB_DESC IObjServer_StubDesc = 
    {
    (void __RPC_FAR *)& IObjServer___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &any_handle,
    0,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    IObjServer_CommFaultOffsets,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static void __RPC_USER IObjServer_ORPC_EXTENTExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT __RPC_FAR *pS	=	( ORPC_EXTENT __RPC_FAR * )(pStubMsg->StackTop - 20);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 7 & ~7;
}

static void __RPC_USER IObjServer_ORPC_EXTENT_ARRAYExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    ORPC_EXTENT_ARRAY __RPC_FAR *pS	=	( ORPC_EXTENT_ARRAY __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->size + 1 & ~1;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IObjServer_ORPC_EXTENTExprEval_0000
    ,IObjServer_ORPC_EXTENT_ARRAYExprEval_0001
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

	/* Procedure DummyQueryInterfaceIObjServer */

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

	/* Procedure DummyAddRefIObjServer */


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

	/* Procedure DummyReleaseIObjServer */


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

	/* Procedure ObjectServerGetClassObject */


	/* Return value */

/* 138 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 140 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 144 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 148 */	NdrFcShort( 0x58 ),	/* 88 */
/* 150 */	NdrFcShort( 0x10 ),	/* 16 */
/* 152 */	0x7,		/* 7 */
			0x9,		/* 9 */

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

/* 172 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 174 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 176 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter rclsid */

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

	/* Parameter fSurrogate */

/* 190 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 192 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 194 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Parameter ppIFD */

/* 196 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 198 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 200 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter pStatus */

/* 202 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 204 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerCreateInstance */


	/* Return value */

/* 208 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 210 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 214 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 216 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 218 */	NdrFcShort( 0x38 ),	/* 56 */
/* 220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 222 */	0x7,		/* 7 */
			0xa,		/* 10 */

	/* Parameter rpc */

/* 224 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 226 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 228 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 230 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 236 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 238 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 240 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 242 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 244 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 246 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter rclsid */

/* 248 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 254 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 256 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 258 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Parameter pIIDs */

/* 260 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 262 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 264 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ppIFD */

/* 266 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 270 */	NdrFcShort( 0x104 ),	/* Type Offset=260 */

	/* Parameter pResults */

/* 272 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 274 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 276 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter pStatus */

/* 278 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 280 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerGetInstance */


	/* Return value */

/* 284 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 286 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 288 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 290 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 294 */	NdrFcShort( 0x40 ),	/* 64 */
/* 296 */	NdrFcShort( 0x10 ),	/* 16 */
/* 298 */	0x7,		/* 7 */
			0xe,		/* 14 */

	/* Parameter rpc */

/* 300 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 306 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 310 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 312 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 316 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 318 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 322 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter rclsid */

/* 324 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Mode */

/* 330 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 334 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Parameter pwszPath */

/* 336 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 340 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pIFDStorage */

/* 342 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 348 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 352 */	NdrFcShort( 0x116 ),	/* Type Offset=278 */

	/* Parameter pIIDs */

/* 354 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 358 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pIFDROT */

/* 360 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 364 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter ppIFD */

/* 366 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 368 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 370 */	NdrFcShort( 0x14a ),	/* Type Offset=330 */

	/* Parameter pResults */

/* 372 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 376 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter pStatus */

/* 378 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerLoadDll */


	/* Return value */

/* 384 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 386 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 388 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 390 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 394 */	NdrFcShort( 0x30 ),	/* 48 */
/* 396 */	NdrFcShort( 0x10 ),	/* 16 */
/* 398 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter rpc */

/* 400 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 402 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 404 */	NdrFcShort( 0x68 ),	/* Type Offset=104 */

	/* Parameter orpcthis */

/* 406 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 408 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 410 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Parameter localthis */

/* 412 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 414 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 416 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter orpcthat */

/* 418 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 420 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 422 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */

	/* Parameter rclsid */

/* 424 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 426 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 428 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter pStatus */

/* 430 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 432 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 434 */	0x8,		/* FC_LONG */
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
/* 172 */	NdrFcShort( 0xffffff66 ),	/* Offset= -154 (18) */
/* 174 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (178) */
/* 178 */	
			0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0xc ),	/* Offset= 12 (192) */
/* 182 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 186 */	0x8,		/* 8 */
			0x0,		/*  */
/* 188 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 190 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 192 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 196 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (182) */
/* 198 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 200 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 202 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 204 */	
			0x11, 0x0,	/* FC_RP */
/* 206 */	NdrFcShort( 0x2 ),	/* Offset= 2 (208) */
/* 208 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 210 */	NdrFcShort( 0x10 ),	/* 16 */
/* 212 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 214 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 216 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 218 */	NdrFcShort( 0xffffff38 ),	/* Offset= -200 (18) */
/* 220 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 222 */	
			0x11, 0x0,	/* FC_RP */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0x4 ),	/* 4 */
/* 230 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 234 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 236 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	0x12, 0x0,	/* FC_UP */
/* 250 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (192) */
/* 252 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 254 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 256 */	
			0x11, 0x0,	/* FC_RP */
/* 258 */	NdrFcShort( 0x2 ),	/* Offset= 2 (260) */
/* 260 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 262 */	NdrFcShort( 0x4 ),	/* 4 */
/* 264 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 268 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 270 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 272 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 274 */	
			0x11, 0x0,	/* FC_RP */
/* 276 */	NdrFcShort( 0x2 ),	/* Offset= 2 (278) */
/* 278 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 280 */	NdrFcShort( 0x10 ),	/* 16 */
/* 282 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 288 */	NdrFcShort( 0xfffffef2 ),	/* Offset= -270 (18) */
/* 290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 292 */	
			0x11, 0x0,	/* FC_RP */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 298 */	NdrFcShort( 0x4 ),	/* 4 */
/* 300 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 304 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 306 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 312 */	NdrFcShort( 0x1 ),	/* 1 */
/* 314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	0x12, 0x0,	/* FC_UP */
/* 320 */	NdrFcShort( 0xffffff80 ),	/* Offset= -128 (192) */
/* 322 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 324 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 326 */	
			0x11, 0x0,	/* FC_RP */
/* 328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (330) */
/* 330 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 332 */	NdrFcShort( 0x4 ),	/* 4 */
/* 334 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 336 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 338 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
