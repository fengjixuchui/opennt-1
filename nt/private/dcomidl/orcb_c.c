/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 15:45:27 2019
 */
/* Compiler settings for orcb.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "orcb.h"

#define TYPE_FORMAT_STRING_SIZE   33                                
#define PROC_FORMAT_STRING_SIZE   41                                

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

/* Standard interface: IOrCallback, ver. 0.0,
   GUID={0x18f70770,0x8e64,0x11cf,{0x9a,0xf1,0x00,0x20,0xaf,0x6e,0x72,0xf4}} */

handle_t any_handle;


static const RPC_CLIENT_INTERFACE IOrCallback___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x18f70770,0x8e64,0x11cf,{0x9a,0xf1,0x00,0x20,0xaf,0x6e,0x72,0xf4}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IOrCallback_ClientIfHandle = (RPC_IF_HANDLE)& IOrCallback___RpcClientInterface;

extern const MIDL_STUB_DESC IOrCallback_StubDesc;

static RPC_BINDING_HANDLE IOrCallback__MIDL_AutoBindHandle;


/* [fault_status][comm_status] */ error_status_t UseProtseq( 
    /* [in] */ handle_t hRpc,
    /* [string][in] */ wchar_t __RPC_FAR *pwstrProtseq,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppdsaNewBindings,
    /* [out] */ DUALSTRINGARRAY __RPC_FAR *__RPC_FAR *ppdsaNewSecurity)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppdsaNewSecurity);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IOrCallback_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IOrCallback_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc,
                  ( unsigned char __RPC_FAR * )&pwstrProtseq,
                  ( unsigned char __RPC_FAR * )&ppdsaNewBindings,
                  ( unsigned char __RPC_FAR * )&ppdsaNewSecurity);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&IOrCallback_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&hRpc);
#endif
    return ( error_status_t  )_RetVal.Simple;
    
}


static const COMM_FAULT_OFFSETS IOrCallback_CommFaultOffsets[] = 
{
#ifdef _X86_
	{ -1, -1 } 	/* x86 Offsets for UseProtseq */
#endif
#if defined(_MIPS_) || defined(_PPC_)
	{ -1, -1 } 	/* MIPS, PPC Offsets for UseProtseq */
#endif
#ifdef _ALPHA_
	{ -1, -1 } 	/* Alpha Offsets for UseProtseq */
#endif
};


static const MIDL_STUB_DESC IOrCallback_StubDesc = 
    {
    (void __RPC_FAR *)& IOrCallback___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &any_handle,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    IOrCallback_CommFaultOffsets,
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

	/* Procedure UseProtseq */

			0x0,		/* 0 */
			0x60,		/* 96 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
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
/* 14 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter hRpc */

/* 16 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 20 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pwstrProtseq */

/* 22 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppdsaNewBindings */

/* 28 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter ppdsaNewSecurity */

/* 34 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 36 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 38 */	0x10,		/* FC_ERROR_STATUS_T */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	
			0x12, 0x0,	/* FC_UP */
/* 10 */	NdrFcShort( 0xc ),	/* Offset= 12 (22) */
/* 12 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 14 */	NdrFcShort( 0x2 ),	/* 2 */
/* 16 */	0x7,		/* 7 */
			0x0,		/*  */
/* 18 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 20 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 22 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x4 ),	/* 4 */
/* 26 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (12) */
/* 28 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 30 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };
