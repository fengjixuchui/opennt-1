/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 16:17:35 2019
 */
/* Compiler settings for mgmt.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "mgmt.h"

#define TYPE_FORMAT_STRING_SIZE   101                               
#define PROC_FORMAT_STRING_SIZE   153                               

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

/* Standard interface: mgmt, ver. 1.0,
   GUID={0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4,0x08,0x00,0x2b,0x10,0x29,0x89}} */



static const RPC_CLIENT_INTERFACE mgmt___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xafa8bd80,0x7d8a,0x11c9,{0xbe,0xf4,0x08,0x00,0x2b,0x10,0x29,0x89}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE _mgmt_ClientIfHandle = (RPC_IF_HANDLE)& mgmt___RpcClientInterface;

extern const MIDL_STUB_DESC mgmt_StubDesc;

static RPC_BINDING_HANDLE mgmt__MIDL_AutoBindHandle;


void _rpc_mgmt_inq_if_ids( 
    /* [in] */ handle_t binding_handle,
    /* [out] */ rpc_if_id_vector_p_t __RPC_FAR *if_id_vector,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,status);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&binding_handle,
                  ( unsigned char __RPC_FAR * )&if_id_vector,
                  ( unsigned char __RPC_FAR * )&status);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&binding_handle);
#endif
    
}


void _rpc_mgmt_inq_stats( 
    /* [in] */ handle_t binding_handle,
    /* [out][in] */ unsigned32 __RPC_FAR *count,
    /* [size_is][out] */ unsigned32 __RPC_FAR statistics[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,status);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28],
                  ( unsigned char __RPC_FAR * )&binding_handle,
                  ( unsigned char __RPC_FAR * )&count,
                  ( unsigned char __RPC_FAR * )&statistics,
                  ( unsigned char __RPC_FAR * )&status);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28],
                  ( unsigned char __RPC_FAR * )&binding_handle);
#endif
    
}


boolean32 _rpc_mgmt_is_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,status);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                  ( unsigned char __RPC_FAR * )&binding_handle,
                  ( unsigned char __RPC_FAR * )&status);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62],
                  ( unsigned char __RPC_FAR * )&binding_handle);
#endif
    return ( boolean32  )_RetVal.Simple;
    
}


void _rpc_mgmt_stop_server_listening( 
    /* [in] */ handle_t binding_handle,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,status);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                  ( unsigned char __RPC_FAR * )&binding_handle,
                  ( unsigned char __RPC_FAR * )&status);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[90],
                  ( unsigned char __RPC_FAR * )&binding_handle);
#endif
    
}


void _rpc_mgmt_inq_princ_name( 
    /* [in] */ handle_t binding_handle,
    /* [in] */ unsigned32 authn_proto,
    /* [in] */ unsigned32 princ_name_size,
    /* [size_is][string][out] */ unsigned char __RPC_FAR princ_name[  ],
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,status);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                  ( unsigned char __RPC_FAR * )&binding_handle,
                  ( unsigned char __RPC_FAR * )&authn_proto,
                  ( unsigned char __RPC_FAR * )&princ_name_size,
                  ( unsigned char __RPC_FAR * )&princ_name,
                  ( unsigned char __RPC_FAR * )&status);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&mgmt_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                  ( unsigned char __RPC_FAR * )&binding_handle);
#endif
    
}


static const COMM_FAULT_OFFSETS mgmt_CommFaultOffsets[] = 
{
#ifdef _X86_
	{ 8, 8 },	/* x86 Offsets for rpc_mgmt_inq_if_ids */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 8, 8 },	/* MIPS, PPC Offsets for rpc_mgmt_inq_if_ids */
#endif
#ifdef _ALPHA_
	{ 16, 16 },	/* Alpha Offsets for rpc_mgmt_inq_if_ids */
#endif
#ifdef _X86_
	{ 12, 12 },	/* x86 Offsets for rpc_mgmt_inq_stats */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 12, 12 },	/* MIPS, PPC Offsets for rpc_mgmt_inq_stats */
#endif
#ifdef _ALPHA_
	{ 24, 24 },	/* Alpha Offsets for rpc_mgmt_inq_stats */
#endif
#ifdef _X86_
	{ 4, 4 },	/* x86 Offsets for rpc_mgmt_is_server_listening */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 4, 4 },	/* MIPS, PPC Offsets for rpc_mgmt_is_server_listening */
#endif
#ifdef _ALPHA_
	{ 8, 8 },	/* Alpha Offsets for rpc_mgmt_is_server_listening */
#endif
#ifdef _X86_
	{ 4, 4 },	/* x86 Offsets for rpc_mgmt_stop_server_listening */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 4, 4 },	/* MIPS, PPC Offsets for rpc_mgmt_stop_server_listening */
#endif
#ifdef _ALPHA_
	{ 8, 8 },	/* Alpha Offsets for rpc_mgmt_stop_server_listening */
#endif
#ifdef _X86_
	{ 16, 16 } 	/* x86 Offsets for rpc_mgmt_inq_princ_name */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ 16, 16 } 	/* MIPS, PPC Offsets for rpc_mgmt_inq_princ_name */
#endif
#ifdef _ALPHA_
	{ 32, 32 } 	/* Alpha Offsets for rpc_mgmt_inq_princ_name */
#endif
};


static const MIDL_STUB_DESC mgmt_StubDesc = 
    {
    (void __RPC_FAR *)& mgmt___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &mgmt__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    mgmt_CommFaultOffsets,
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

	/* Procedure rpc_mgmt_inq_if_ids */

			0x0,		/* 0 */
			0x61,		/* 97 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/*  6 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x1,		/* 1 */
			0x2,		/* 2 */

	/* Parameter binding_handle */

/* 16 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter if_id_vector */

/* 22 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure rpc_mgmt_inq_stats */


	/* Parameter status */

/* 28 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 30 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x10 ),	/* 16 */
/* 42 */	0x1,		/* 1 */
			0x3,		/* 3 */

	/* Parameter binding_handle */

/* 44 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter count */

/* 50 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 54 */	NdrFcShort( 0x54 ),	/* Type Offset=84 */

	/* Parameter statistics */

/* 56 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 60 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure rpc_mgmt_is_server_listening */


	/* Parameter status */

/* 62 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 64 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 68 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x10 ),	/* 16 */
/* 76 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter binding_handle */

/* 78 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 82 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Parameter status */

/* 84 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rpc_mgmt_stop_server_listening */


	/* Return value */

/* 90 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 92 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 96 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x0,		/* 0 */
			0x1,		/* 1 */

	/* Parameter binding_handle */

/* 106 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 110 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

	/* Procedure rpc_mgmt_inq_princ_name */


	/* Parameter status */

/* 112 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 118 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 120 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 124 */	NdrFcShort( 0x8 ),	/* 8 */
/* 126 */	0x1,		/* 1 */
			0x4,		/* 4 */

	/* Parameter binding_handle */

/* 128 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter authn_proto */

/* 134 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 136 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter princ_name_size */

/* 140 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 142 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 144 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter princ_name */

/* 146 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 150 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x2a ),	/* Offset= 42 (48) */
/*  8 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 20 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 22 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (8) */
			0x5b,		/* FC_END */
/* 26 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 28 */	NdrFcShort( 0x14 ),	/* 20 */
/* 30 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (14) */
/* 34 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
/* 42 */	0x9,		/* 9 */
			0x0,		/*  */
/* 44 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 46 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 48 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (38) */
/* 54 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 58 */	NdrFcShort( 0x4 ),	/* 4 */
/* 60 */	NdrFcShort( 0x4 ),	/* 4 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x4 ),	/* 4 */
/* 68 */	0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (26) */
/* 72 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 74 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 76 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 78 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 82 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 90 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 92 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 94 */	
			0x22,		/* FC_C_CSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 96 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif

			0x0
        }
    };
