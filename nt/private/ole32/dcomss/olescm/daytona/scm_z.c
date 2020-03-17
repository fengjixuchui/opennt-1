/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:38 2020
 */
/* Compiler settings for ..\scm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "scm.h"

#define TYPE_FORMAT_STRING_SIZE   239                               
#define PROC_FORMAT_STRING_SIZE   275                               

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

/* Standard interface: ISCM, ver. 0.2,
   GUID={0x412f241e,0xc12a,0x11ce,{0xab,0xff,0x00,0x20,0xaf,0x6e,0x7a,0x17}} */

handle_t any_handle;


static const RPC_CLIENT_INTERFACE ISCM___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x412f241e,0xc12a,0x11ce,{0xab,0xff,0x00,0x20,0xaf,0x6e,0x7a,0x17}},{0,2}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE _ISCM_ClientIfHandle = (RPC_IF_HANDLE)& ISCM___RpcClientInterface;

extern const MIDL_STUB_DESC ISCM_StubDesc;

static RPC_BINDING_HANDLE ISCM__MIDL_AutoBindHandle;


HRESULT _ServerRegisterClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [unique][string][in] */ WCHAR __RPC_FAR *pWinstaDesktop,
    /* [in] */ RegInput __RPC_FAR *pregin,
    /* [out] */ RegOutput __RPC_FAR *__RPC_FAR *ppregout,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&phProcess,
                  ( unsigned char __RPC_FAR * )&pWinstaDesktop,
                  ( unsigned char __RPC_FAR * )&pregin,
                  ( unsigned char __RPC_FAR * )&ppregout,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


void _ServerRevokeClsid( 
    /* [in] */ handle_t hRpc,
    /* [in] */ PHPROCESS phProcess,
    /* [in] */ RevokeClasses __RPC_FAR *prevcls,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&phProcess,
                  ( unsigned char __RPC_FAR * )&prevcls,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[52],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    
}


void _GetThreadID( 
    /* [in] */ handle_t hRpc,
    /* [out] */ DWORD __RPC_FAR *pThreadID,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[86],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[86],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&pThreadID,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[86],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    
}


HRESULT _UpdateShrdTbls( 
    /* [in] */ handle_t hRpc,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


void _UpdateActivationSettings( 
    /* [in] */ handle_t hRpc,
    /* [out] */ error_status_t __RPC_FAR *prpcstat)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[142],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[142],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[142],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    
}


HRESULT _RegisterWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ STDOBJREF __RPC_FAR *pStd,
    /* [in] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [out] */ DWORD __RPC_FAR *pdwCookie,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&hWnd,
                  ( unsigned char __RPC_FAR * )&pStd,
                  ( unsigned char __RPC_FAR * )&pOxidInfo,
                  ( unsigned char __RPC_FAR * )&pdwCookie,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT _GetWindowPropInterface( 
    /* [in] */ handle_t hRpc,
    /* [in] */ DWORD hWnd,
    /* [in] */ DWORD dwCookie,
    /* [in] */ BOOL fRevoke,
    /* [out] */ STDOBJREF __RPC_FAR *pStd,
    /* [out] */ OXID_INFO __RPC_FAR *pOxidInfo,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,prpcstat);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&hWnd,
                  ( unsigned char __RPC_FAR * )&dwCookie,
                  ( unsigned char __RPC_FAR * )&fRevoke,
                  ( unsigned char __RPC_FAR * )&pStd,
                  ( unsigned char __RPC_FAR * )&pOxidInfo,
                  ( unsigned char __RPC_FAR * )&prpcstat);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&ISCM_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


static const COMM_FAULT_OFFSETS ISCM_CommFaultOffsets[] = 
{
#ifdef _X86_
	{ 20, 20 },	/* x86 Offsets for ServerRegisterClsid */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 20, 20 },	/* MIPS, PPC Offsets for ServerRegisterClsid */
#endif
#ifdef _ALPHA_
	{ 40, 40 },	/* Alpha Offsets for ServerRegisterClsid */
#endif
#ifdef _X86_
	{ 12, 12 },	/* x86 Offsets for ServerRevokeClsid */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 12, 12 },	/* MIPS, PPC Offsets for ServerRevokeClsid */
#endif
#ifdef _ALPHA_
	{ 24, 24 },	/* Alpha Offsets for ServerRevokeClsid */
#endif
#ifdef _X86_
	{ 8, 8 },	/* x86 Offsets for GetThreadID */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 8, 8 },	/* MIPS, PPC Offsets for GetThreadID */
#endif
#ifdef _ALPHA_
	{ 16, 16 },	/* Alpha Offsets for GetThreadID */
#endif
#ifdef _X86_
	{ 4, 4 },	/* x86 Offsets for UpdateShrdTbls */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 4, 4 },	/* MIPS, PPC Offsets for UpdateShrdTbls */
#endif
#ifdef _ALPHA_
	{ 8, 8 },	/* Alpha Offsets for UpdateShrdTbls */
#endif
	{ -2, -2 },
#ifdef _X86_
	{ 20, 20 },	/* x86 Offsets for RegisterWindowPropInterface */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 20, 20 },	/* MIPS, PPC Offsets for RegisterWindowPropInterface */
#endif
#ifdef _ALPHA_
	{ 40, 40 },	/* Alpha Offsets for RegisterWindowPropInterface */
#endif
#ifdef _X86_
	{ 24, 24 } 	/* x86 Offsets for GetWindowPropInterface */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 24, 24 } 	/* MIPS, PPC Offsets for GetWindowPropInterface */
#endif
#ifdef _ALPHA_
	{ 48, 48 } 	/* Alpha Offsets for GetWindowPropInterface */
#endif
};


static const MIDL_STUB_DESC ISCM_StubDesc = 
    {
    (void __RPC_FAR *)& ISCM___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &any_handle,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    ISCM_CommFaultOffsets,
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

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure ServerRegisterClsid */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter hRpc */

/* 16 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 22 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pWinstaDesktop */

/* 28 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter pregin */

/* 34 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter ppregout */

/* 40 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 44 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 46 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 48 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 50 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ServerRevokeClsid */


	/* Return value */

/* 52 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 58 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 60 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 62 */	NdrFcShort( 0x18 ),	/* 24 */
/* 64 */	NdrFcShort( 0x8 ),	/* 8 */
/* 66 */	0x2,		/* 2 */
			0x3,		/* 3 */

	/* Parameter hRpc */

/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 72 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter phProcess */

/* 74 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 78 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter prevcls */

/* 80 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 84 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure GetThreadID */


	/* Parameter prpcstat */

/* 86 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 88 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 92 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 96 */	NdrFcShort( 0x0 ),	/* 0 */
/* 98 */	NdrFcShort( 0x10 ),	/* 16 */
/* 100 */	0x0,		/* 0 */
			0x2,		/* 2 */

	/* Parameter hRpc */

/* 102 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pThreadID */

/* 108 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 112 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure UpdateShrdTbls */


	/* Parameter prpcstat */

/* 114 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 116 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 120 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x10 ),	/* 16 */
/* 128 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hRpc */

/* 130 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 134 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 136 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 138 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateActivationSettings */


	/* Return value */

/* 142 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 144 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 148 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 150 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x0,		/* 0 */
			0x1,		/* 1 */

	/* Parameter hRpc */

/* 158 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 160 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 162 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure RegisterWindowPropInterface */


	/* Parameter prpcstat */

/* 164 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 166 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 168 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 170 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 174 */	NdrFcShort( 0x48 ),	/* 72 */
/* 176 */	NdrFcShort( 0x18 ),	/* 24 */
/* 178 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter hRpc */

/* 180 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hWnd */

/* 186 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 190 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pStd */

/* 192 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 196 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter pOxidInfo */

/* 198 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCookie */

/* 204 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 208 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 210 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowPropInterface */


	/* Return value */

/* 216 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 218 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 222 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 226 */	NdrFcShort( 0x18 ),	/* 24 */
/* 228 */	NdrFcShort( 0x50 ),	/* 80 */
/* 230 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter hRpc */

/* 232 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 234 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hWnd */

/* 238 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 240 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCookie */

/* 244 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 246 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fRevoke */

/* 250 */	NdrFcShort( 0xffffa112 ),	/* -24302 */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 254 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pStd */

/* 256 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 258 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 260 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter pOxidInfo */

/* 262 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 266 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter prpcstat */

/* 268 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/*  2 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  4 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  6 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x11, 0x0,	/* FC_RP */
/* 10 */	NdrFcShort( 0x3a ),	/* Offset= 58 (68) */
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
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 32 */	NdrFcShort( 0x30 ),	/* 48 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x0 ),	/* Offset= 0 (36) */
/* 38 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (18) */
/* 42 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 44 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe5 ),	/* Offset= -27 (18) */
			0x8,		/* FC_LONG */
/* 48 */	0x40,		/* FC_STRUCTPAD4 */
			0x5b,		/* FC_END */
/* 50 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	0x8,		/* 8 */
			0x0,		/*  */
/* 56 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 58 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 62 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 64 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (30) */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (50) */
/* 74 */	NdrFcShort( 0x0 ),	/* Offset= 0 (74) */
/* 76 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 78 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 80 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x18 ),	/* Offset= 24 (110) */
/* 88 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 94 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 96 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 98 */	NdrFcShort( 0x8 ),	/* 8 */
/* 100 */	0x8,		/* 8 */
			0x0,		/*  */
/* 102 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 104 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 106 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (88) */
/* 108 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 110 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 112 */	NdrFcShort( 0x4 ),	/* 4 */
/* 114 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (96) */
/* 116 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 118 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 120 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 122 */	
			0x11, 0x0,	/* FC_RP */
/* 124 */	NdrFcShort( 0x1a ),	/* Offset= 26 (150) */
/* 126 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 128 */	NdrFcShort( 0x14 ),	/* 20 */
/* 130 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0xffffff8e ),	/* Offset= -114 (18) */
/* 134 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 136 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0x14 ),	/* 20 */
/* 140 */	0x8,		/* 8 */
			0x0,		/*  */
/* 142 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (126) */
/* 148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 150 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 154 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (136) */
/* 156 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 158 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 160 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 168 */	NdrFcShort( 0x28 ),	/* 40 */
/* 170 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 172 */	0x39,		/* FC_ALIGNM8 */
			0xb,		/* FC_HYPER */
/* 174 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 176 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff61 ),	/* Offset= -159 (18) */
			0x5b,		/* FC_END */
/* 180 */	
			0x11, 0x0,	/* FC_RP */
/* 182 */	NdrFcShort( 0x16 ),	/* Offset= 22 (204) */
/* 184 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 186 */	NdrFcShort( 0x2 ),	/* 2 */
/* 188 */	0x7,		/* 7 */
			0x0,		/*  */
/* 190 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 192 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 194 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 198 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (184) */
/* 200 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 202 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 204 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 206 */	NdrFcShort( 0x20 ),	/* 32 */
/* 208 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 210 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 212 */	NdrFcShort( 0x1c ),	/* 28 */
/* 214 */	NdrFcShort( 0x1c ),	/* 28 */
/* 216 */	0x12, 0x0,	/* FC_UP */
/* 218 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (194) */
/* 220 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 222 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 224 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff31 ),	/* Offset= -207 (18) */
			0x8,		/* FC_LONG */
/* 228 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 230 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 232 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (166) */
/* 234 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 236 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (204) */

			0x0
        }
    };
