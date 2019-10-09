/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Wed Oct 09 00:00:36 2019
 */
/* Compiler settings for tapsrv.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "tapsrv.h"

#define TYPE_FORMAT_STRING_SIZE   43                                
#define PROC_FORMAT_STRING_SIZE   73                                

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

/* Standard interface: tapsrv, ver. 1.0,
   GUID={0x2F5F6520,0xCA46,0x1067,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDA}} */

handle_t hTapSrv;


static const RPC_CLIENT_INTERFACE tapsrv___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x2F5F6520,0xCA46,0x1067,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDA}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE tapsrv_ClientIfHandle = (RPC_IF_HANDLE)& tapsrv___RpcClientInterface;

extern const MIDL_STUB_DESC tapsrv_StubDesc;

static RPC_BINDING_HANDLE tapsrv__MIDL_AutoBindHandle;


long ClientAttach( 
    /* [out] */ PCONTEXT_HANDLE_TYPE __RPC_FAR *pphContext,
    /* [in] */ long lProcessID,
    /* [out] */ long __RPC_FAR *phAsyncEventsEvent,
    /* [string][in] */ wchar_t __RPC_FAR *pszDomainUser,
    /* [string][in] */ wchar_t __RPC_FAR *pszMachine)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszMachine);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pphContext,
                 ( unsigned char __RPC_FAR * )&lProcessID,
                 ( unsigned char __RPC_FAR * )&phAsyncEventsEvent,
                 ( unsigned char __RPC_FAR * )&pszDomainUser,
                 ( unsigned char __RPC_FAR * )&pszMachine);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&pphContext);
#endif
    return ( long  )_RetVal.Simple;
    
}


void ClientRequest( 
    /* [in] */ PCONTEXT_HANDLE_TYPE phContext,
    /* [size_is][length_is][out][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lNeededSize,
    /* [out][in] */ long __RPC_FAR *plUsedSize)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,plUsedSize);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26],
                 ( unsigned char __RPC_FAR * )&phContext,
                 ( unsigned char __RPC_FAR * )&pBuffer,
                 ( unsigned char __RPC_FAR * )&lNeededSize,
                 ( unsigned char __RPC_FAR * )&plUsedSize);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26],
                 ( unsigned char __RPC_FAR * )&phContext);
#endif
    
}


void ClientDetach( 
    /* [out][in] */ PCONTEXT_HANDLE_TYPE __RPC_FAR *pphContext)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pphContext);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&pphContext);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&tapsrv_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&pphContext);
#endif
    
}


static const MIDL_STUB_DESC tapsrv_StubDesc = 
    {
    (void __RPC_FAR *)& tapsrv___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hTapSrv,
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
			0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/*  6 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 10 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 12 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 16 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 24 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 28 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 32 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 36 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 42 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x14 ),	/* Type Offset=20 */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 52 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 54 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 56 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 60 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */
/* 70 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 10 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 14 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 16 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 22 */	NdrFcShort( 0x1 ),	/* 1 */
/* 24 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 28 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 32 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 34 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 40 */	0x0,		/* 0 */
			0x0,		/* 0 */

			0x0
        }
    };
