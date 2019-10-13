/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 02:55:39 2019
 */
/* Compiler settings for odeth.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "rawodeth.h"

#define TYPE_FORMAT_STRING_SIZE   27                                
#define PROC_FORMAT_STRING_SIZE   37                                

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


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IRemUnknown, ver. 0.0,
   GUID={0x00000131,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IRemUnknown2, ver. 0.0,
   GUID={0x0000013C,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRemUnknown2_ServerInfo;

#pragma code_seg(".orpc")
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
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

static const unsigned short IRemUnknown2_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_SERVER_INFO IRemUnknown2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IRemUnknown2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IRemUnknown2ProxyVtbl = 
{
    &IRemUnknown2_ProxyInfo,
    &IID_IRemUnknown2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IRemUnknown::RemQueryInterface */ ,
    0 /* (void *)-1 /* IRemUnknown::RemAddRef */ ,
    0 /* (void *)-1 /* IRemUnknown::RemRelease */ ,
    (void *)-1 /* IRemUnknown2::RemChangeRef */
};


static const PRPC_STUB_FUNCTION IRemUnknown2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IRemUnknown2StubVtbl =
{
    &IID_IRemUnknown2,
    &IRemUnknown2_ServerInfo,
    7,
    &IRemUnknown2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: IRundown, ver. 0.0,
   GUID={0x00000134,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */

#pragma data_seg(".rdata")

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

	/* Procedure RemChangeRef */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	NdrFcShort( 0xe ),	/* 14 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter flags */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cInterfaceRefs */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 24 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	NdrFcShort( 0xc ),	/* Type Offset=12 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/*  2 */	NdrFcShort( 0x18 ),	/* 24 */
/*  4 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0xc ),	/* Offset= 12 (18) */
/*  8 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 10 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 12 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 14 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 20 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 22 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (0) */
/* 24 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _odeth_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IRemUnknown2ProxyVtbl,
    0
};

const CInterfaceStubVtbl * _odeth_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IRemUnknown2StubVtbl,
    0
};

PCInterfaceName const _odeth_InterfaceNamesList[] = 
{
    "IRemUnknown2",
    0
};

const IID *  _odeth_BaseIIDList[] = 
{
    &IID_IRemUnknown,
    0
};


#define _odeth_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _odeth, pIID, n)

int __stdcall _odeth_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_odeth_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo odeth_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _odeth_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _odeth_StubVtblList,
    (const PCInterfaceName * ) & _odeth_InterfaceNamesList,
    (const IID ** ) & _odeth_BaseIIDList,
    & _odeth_IID_Lookup, 
    1,
    2
};
