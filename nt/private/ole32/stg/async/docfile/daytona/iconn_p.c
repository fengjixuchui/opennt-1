/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:20 2019
 */
/* Compiler settings for iconn.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "iconn.h"

#define TYPE_FORMAT_STRING_SIZE   45                                
#define PROC_FORMAT_STRING_SIZE   175                               

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


/* Object interface: IDocfileAsyncConnectionPoint, ver. 0.0,
   GUID={0x4a8df970,0x8d9a,0x11cf,{0x88,0x27,0x00,0xaa,0x00,0xb5,0x69,0xf5}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDocfileAsyncConnectionPoint_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDocfileAsyncConnectionPoint_FormatStringOffsetTable[] = 
    {
    0,
    30,
    54,
    96
    };

static const MIDL_SERVER_INFO IDocfileAsyncConnectionPoint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDocfileAsyncConnectionPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDocfileAsyncConnectionPoint_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDocfileAsyncConnectionPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IDocfileAsyncConnectionPointProxyVtbl = 
{
    &IDocfileAsyncConnectionPoint_ProxyInfo,
    &IID_IDocfileAsyncConnectionPoint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDocfileAsyncConnectionPoint::AddConnection */ ,
    (void *)-1 /* IDocfileAsyncConnectionPoint::RemoveConnection */ ,
    (void *)-1 /* IDocfileAsyncConnectionPoint::NotifySinks */ ,
    (void *)-1 /* IDocfileAsyncConnectionPoint::GetParent */
};

const CInterfaceStubVtbl _IDocfileAsyncConnectionPointStubVtbl =
{
    &IID_IDocfileAsyncConnectionPoint,
    &IDocfileAsyncConnectionPoint_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IFillInfo, ver. 0.0,
   GUID={0xde2eacd0,0x9c9d,0x11cf,{0x88,0x2a,0x00,0xaa,0x00,0xb5,0x69,0xf5}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFillInfo_ServerInfo;

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

static const unsigned short IFillInfo_FormatStringOffsetTable[] = 
    {
    120,
    150
    };

static const MIDL_SERVER_INFO IFillInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFillInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFillInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFillInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IFillInfoProxyVtbl = 
{
    &IFillInfo_ProxyInfo,
    &IID_IFillInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IFillInfo::GetFailureInfo */ ,
    (void *)-1 /* IFillInfo::GetTerminationStatus */
};

const CInterfaceStubVtbl _IFillInfoStubVtbl =
{
    &IID_IFillInfo,
    &IFillInfo_ServerInfo,
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

	/* Procedure AddConnection */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pSink */

/* 12 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pdwCookie */

/* 18 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveConnection */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 36 */	NdrFcShort( 0x8 ),	/* 8 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwCookie */

/* 42 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NotifySinks */

/* 54 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 56 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 60 */	NdrFcShort( 0x20 ),	/* 32 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter ulProgressCurrent */

/* 66 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulProgressMaximum */

/* 72 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAccurate */

/* 78 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sc */

/* 84 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 98 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 100 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppParent */

/* 108 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 112 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFailureInfo */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 122 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x18 ),	/* 24 */
/* 130 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter pulWaterMark */

/* 132 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pulFailurePoint */

/* 138 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTerminationStatus */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x10 ),	/* 16 */
/* 160 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwFlags */

/* 162 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  2 */	NdrFcLong( 0xa9d758a0 ),	/* -1445504864 */
/*  6 */	NdrFcShort( 0x4617 ),	/* 17943 */
/*  8 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 10 */	0x95,		/* 149 */
			0xfc,		/* 252 */
/* 12 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 14 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 16 */	0xd,		/* 13 */
			0xb4,		/* 180 */
/* 18 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0x10,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 28 */	NdrFcLong( 0x4a8df970 ),	/* 1250818416 */
/* 32 */	NdrFcShort( 0xffff8d9a ),	/* -29286 */
/* 34 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 36 */	0x88,		/* 136 */
			0x27,		/* 39 */
/* 38 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 40 */	0x0,		/* 0 */
			0xb5,		/* 181 */
/* 42 */	0x69,		/* 105 */
			0xf5,		/* 245 */

			0x0
        }
    };

const CInterfaceProxyVtbl * _iconn_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDocfileAsyncConnectionPointProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFillInfoProxyVtbl,
    0
};

const CInterfaceStubVtbl * _iconn_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDocfileAsyncConnectionPointStubVtbl,
    ( CInterfaceStubVtbl *) &_IFillInfoStubVtbl,
    0
};

PCInterfaceName const _iconn_InterfaceNamesList[] = 
{
    "IDocfileAsyncConnectionPoint",
    "IFillInfo",
    0
};


#define _iconn_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _iconn, pIID, n)

int __stdcall _iconn_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _iconn, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _iconn, 2, *pIndex )
    
}

const ExtendedProxyFileInfo iconn_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _iconn_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _iconn_StubVtblList,
    (const PCInterfaceName * ) & _iconn_InterfaceNamesList,
    0, // no delegation
    & _iconn_IID_Lookup, 
    2,
    2
};
