/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:21 2019
 */
/* Compiler settings for ..\getif.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "getif.h"

#define TYPE_FORMAT_STRING_SIZE   99                                
#define PROC_FORMAT_STRING_SIZE   115                               

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


/* Object interface: IInterfaceFromWindowProp, ver. 0.0,
   GUID={0x00000135,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IInterfaceFromWindowProp_ServerInfo;

#pragma code_seg(".orpc")

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
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

static const unsigned short IInterfaceFromWindowProp_FormatStringOffsetTable[] = 
    {
    0,
    42
    };

static const MIDL_SERVER_INFO IInterfaceFromWindowProp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IInterfaceFromWindowProp_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IInterfaceFromWindowProp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IInterfaceFromWindowProp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IInterfaceFromWindowPropProxyVtbl = 
{
    &IInterfaceFromWindowProp_ProxyInfo,
    &IID_IInterfaceFromWindowProp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IInterfaceFromWindowProp::GetInterfaceFromWindowProp */ ,
    (void *)-1 /* IInterfaceFromWindowProp::PrivDragDrop */
};

const CInterfaceStubVtbl _IInterfaceFromWindowPropStubVtbl =
{
    &IID_IInterfaceFromWindowProp,
    &IInterfaceFromWindowProp_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

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

	/* Procedure GetInterfaceFromWindowProp */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/*  6 */	NdrFcShort( 0x28 ),	/* 40 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter hWnd */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 18 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppunk */

/* 24 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pwszPropertyName */

/* 30 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrivDragDrop */

/* 42 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 44 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 46 */	NdrFcShort( 0x30 ),	/* x86, MIPS Stack size/offset = 48 */
#else
			NdrFcShort( 0x34 ),	/* PPC Stack size/offset = 52 */
#endif
#else
			NdrFcShort( 0x30 ),	/* MIPS Stack size/offset = 48 */
#endif
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 48 */	NdrFcShort( 0x48 ),	/* 72 */
/* 50 */	NdrFcShort( 0x18 ),	/* 24 */
/* 52 */	0x6,		/* 6 */
			0xa,		/* 10 */

	/* Parameter hWnd */

/* 54 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIFDDataObject */

/* 60 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 64 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter dop */

/* 66 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfKeyState */

/* 72 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pt */

/* 78 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 80 */	NdrFcShort( 0x14 ),	/* x86, MIPS Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x14 ),	/* MIPS Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 82 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter pdwEffect */

/* 84 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 86 */	NdrFcShort( 0x1c ),	/* x86, MIPS Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x1c ),	/* MIPS Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 88 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */

	/* Parameter dwSmId */

/* 90 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 92 */	NdrFcShort( 0x20 ),	/* x86, MIPS Stack size/offset = 32 */
#else
			NdrFcShort( 0x24 ),	/* PPC Stack size/offset = 36 */
#endif
#else
			NdrFcShort( 0x20 ),	/* MIPS Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRealDataObject */

/* 96 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 98 */	NdrFcShort( 0x24 ),	/* x86, MIPS Stack size/offset = 36 */
#else
			NdrFcShort( 0x28 ),	/* PPC Stack size/offset = 40 */
#endif
#else
			NdrFcShort( 0x24 ),	/* MIPS Stack size/offset = 36 */
#endif
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 100 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Parameter hwndSource */

/* 102 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 104 */	NdrFcShort( 0x28 ),	/* x86, MIPS Stack size/offset = 40 */
#else
			NdrFcShort( 0x2c ),	/* PPC Stack size/offset = 44 */
#endif
#else
			NdrFcShort( 0x28 ),	/* MIPS Stack size/offset = 40 */
#endif
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 110 */	NdrFcShort( 0x2c ),	/* x86, MIPS Stack size/offset = 44 */
#else
			NdrFcShort( 0x30 ),	/* PPC Stack size/offset = 48 */
#endif
#else
			NdrFcShort( 0x2c ),	/* MIPS Stack size/offset = 44 */
#endif
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x8 ),	/* Offset= 8 (10) */
/*  4 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x8 ),	/* 8 */
/*  8 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 16 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 18 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (4) */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0x10,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 28 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 32 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 34 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 36 */	
			0x12, 0x0,	/* FC_UP */
/* 38 */	NdrFcShort( 0x10 ),	/* Offset= 16 (54) */
/* 40 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 44 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 46 */	NdrFcShort( 0x1 ),	/* 1 */
/* 48 */	0x8,		/* 8 */
			0x0,		/*  */
/* 50 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 52 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 54 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 56 */	NdrFcShort( 0x404 ),	/* 1028 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* Offset= 0 (60) */
/* 62 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 64 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe7 ),	/* Offset= -25 (40) */
			0x5b,		/* FC_END */
/* 68 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 74 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 76 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 78 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 80 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 82 */	NdrFcLong( 0x10e ),	/* 270 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 92 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 94 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 96 */	0x0,		/* 0 */
			0x46,		/* 70 */

			0x0
        }
    };

const CInterfaceProxyVtbl * _getif_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IInterfaceFromWindowPropProxyVtbl,
    0
};

const CInterfaceStubVtbl * _getif_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IInterfaceFromWindowPropStubVtbl,
    0
};

PCInterfaceName const _getif_InterfaceNamesList[] = 
{
    "IInterfaceFromWindowProp",
    0
};


#define _getif_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _getif, pIID, n)

int __stdcall _getif_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_getif_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo getif_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _getif_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _getif_StubVtblList,
    (const PCInterfaceName * ) & _getif_InterfaceNamesList,
    0, // no delegation
    & _getif_IID_Lookup, 
    1,
    2
};
