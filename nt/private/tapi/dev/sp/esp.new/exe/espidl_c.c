/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:46:08 2020
 */
/* Compiler settings for espidl.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "espidl.h"

#define TYPE_FORMAT_STRING_SIZE   33                                
#define PROC_FORMAT_STRING_SIZE   123                               

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

/* Standard interface: esp, ver. 1.0,
   GUID={0x2F5F6521,0xCA47,0x1068,{0xB3,0x1A,0x00,0xDD,0x01,0x06,0x62,0xDB}} */

handle_t hEsp;


static const RPC_CLIENT_INTERFACE esp___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x2F5F6521,0xCA47,0x1068,{0xB3,0x1A,0x00,0xDD,0x01,0x06,0x62,0xDB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE esp_ClientIfHandle = (RPC_IF_HANDLE)& esp___RpcClientInterface;

extern const MIDL_STUB_DESC esp_StubDesc;

static RPC_BINDING_HANDLE esp__MIDL_AutoBindHandle;


long ESPAttach( 
    /* [in] */ long lProcessID,
    /* [out] */ long __RPC_FAR *phShutdownEvent,
    /* [out] */ long __RPC_FAR *phDebugOutputEvent,
    /* [out] */ long __RPC_FAR *phWidgetEventsEvent)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,phWidgetEventsEvent);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&lProcessID,
                 ( unsigned char __RPC_FAR * )&phShutdownEvent,
                 ( unsigned char __RPC_FAR * )&phDebugOutputEvent,
                 ( unsigned char __RPC_FAR * )&phWidgetEventsEvent);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&lProcessID);
#endif
    return ( long  )_RetVal.Simple;
    
}


void ESPSetOptions( 
    /* [in] */ long lDebugOptions,
    /* [in] */ long lCompletionMode)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lCompletionMode);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&lDebugOptions,
                 ( unsigned char __RPC_FAR * )&lCompletionMode);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22],
                 ( unsigned char __RPC_FAR * )&lDebugOptions);
#endif
    
}


void ESPCompleteRequest( 
    /* [in] */ long lAsyncReqInfo,
    /* [in] */ long lResult)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lResult);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34],
                 ( unsigned char __RPC_FAR * )&lAsyncReqInfo,
                 ( unsigned char __RPC_FAR * )&lResult);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34],
                 ( unsigned char __RPC_FAR * )&lAsyncReqInfo);
#endif
    
}


long ESPEvent( 
    /* [in] */ long htDevice,
    /* [in] */ long htCall,
    /* [in] */ long dwMsg,
    /* [in] */ long dwParam1,
    /* [in] */ long dwParam2,
    /* [in] */ long dwParam3)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwParam3);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                 ( unsigned char __RPC_FAR * )&htDevice,
                 ( unsigned char __RPC_FAR * )&htCall,
                 ( unsigned char __RPC_FAR * )&dwMsg,
                 ( unsigned char __RPC_FAR * )&dwParam1,
                 ( unsigned char __RPC_FAR * )&dwParam2,
                 ( unsigned char __RPC_FAR * )&dwParam3);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46],
                 ( unsigned char __RPC_FAR * )&htDevice);
#endif
    return ( long  )_RetVal.Simple;
    
}


void ESPGetDebugOutput( 
    /* [size_is][length_is][out] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [out][in] */ long __RPC_FAR *plSize)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,plSize);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 ( unsigned char __RPC_FAR * )&pBuffer,
                 ( unsigned char __RPC_FAR * )&plSize);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[66],
                 ( unsigned char __RPC_FAR * )&pBuffer);
#endif
    
}


void ESPGetWidgetEvents( 
    /* [size_is][length_is][out] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [out][in] */ long __RPC_FAR *plSize)
{

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,plSize);
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 ( unsigned char __RPC_FAR * )&pBuffer,
                 ( unsigned char __RPC_FAR * )&plSize);
#else
    NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[82],
                 ( unsigned char __RPC_FAR * )&pBuffer);
#endif
    
}


long ESPStartPBXThread( 
    /* [size_is][length_is][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lSize)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lSize);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 ( unsigned char __RPC_FAR * )&pBuffer,
                 ( unsigned char __RPC_FAR * )&lSize);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 ( unsigned char __RPC_FAR * )&pBuffer);
#endif
    return ( long  )_RetVal.Simple;
    
}


long ESPStopPBXThread( 
    /* [in] */ long dummy)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dummy);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&dummy);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&esp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&dummy);
#endif
    return ( long  )_RetVal.Simple;
    
}


static const MIDL_STUB_DESC esp_StubDesc = 
    {
    (void __RPC_FAR *)& esp___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hEsp,
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
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  8 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 12 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 20 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 34 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 36 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 44 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 46 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 48 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 52 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 72 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 76 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 78 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 80 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 82 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 84 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 88 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 92 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 96 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 98 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 100 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 108 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 114 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  2 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x1 ),	/* 1 */
/*  8 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 10 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 12 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
/* 22 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 26 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 30 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
