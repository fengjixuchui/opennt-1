/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 15:45:28 2019
 */
/* Compiler settings for remunk.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "remunk.h"

#define TYPE_FORMAT_STRING_SIZE   127                               
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


/* Object interface: IRemUnknown, ver. 0.0,
   GUID={0x00000131,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRemUnknown_ServerInfo;

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

static const unsigned short IRemUnknown_FormatStringOffsetTable[] = 
    {
    0,
    48,
    84
    };

static const MIDL_SERVER_INFO IRemUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRemUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IRemUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IRemUnknownProxyVtbl = 
{
    &IRemUnknown_ProxyInfo,
    &IID_IRemUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IRemUnknown::RemQueryInterface */ ,
    (void *)-1 /* IRemUnknown::RemAddRef */ ,
    (void *)-1 /* IRemUnknown::RemRelease */
};

const CInterfaceStubVtbl _IRemUnknownStubVtbl =
{
    &IID_IRemUnknown,
    &IRemUnknown_ServerInfo,
    6,
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

	/* Procedure RemQueryInterface */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/*  6 */	NdrFcShort( 0x2e ),	/* 46 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter ripid */

/* 12 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter cRefs */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cIids */

/* 24 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter iids */

/* 30 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter ppQIResults */

/* 36 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 40 */	NdrFcShort( 0x28 ),	/* Type Offset=40 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemAddRef */

/* 48 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 54 */	NdrFcShort( 0x6 ),	/* 6 */
/* 56 */	NdrFcShort( 0x8 ),	/* 8 */
/* 58 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter cInterfaceRefs */

/* 60 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 64 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 66 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 70 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Parameter pResults */

/* 72 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 76 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemRelease */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 86 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 88 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 90 */	NdrFcShort( 0x6 ),	/* 6 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter cInterfaceRefs */

/* 96 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 100 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter InterfaceRefs */

/* 102 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 106 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
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
			0x11, 0x0,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 28 */	NdrFcShort( 0x10 ),	/* 16 */
/* 30 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 34 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (10) */
/* 38 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 40 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 42 */	NdrFcShort( 0x2 ),	/* Offset= 2 (44) */
/* 44 */	
			0x13, 0x0,	/* FC_OP */
/* 46 */	NdrFcShort( 0x1a ),	/* Offset= 26 (72) */
/* 48 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 50 */	NdrFcShort( 0x28 ),	/* 40 */
/* 52 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 54 */	0x39,		/* FC_ALIGNM8 */
			0xb,		/* FC_HYPER */
/* 56 */	0xb,		/* FC_HYPER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (10) */
			0x5b,		/* FC_END */
/* 62 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 64 */	NdrFcShort( 0x30 ),	/* 48 */
/* 66 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 68 */	0x4,		/* 4 */
			NdrFcShort( 0xffffffeb ),	/* Offset= -21 (48) */
			0x5b,		/* FC_END */
/* 72 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 74 */	NdrFcShort( 0x30 ),	/* 48 */
/* 76 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 80 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 82 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (62) */
/* 84 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 86 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x18 ),	/* 24 */
/* 90 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 92 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (10) */
/* 94 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 96 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x18 ),	/* 24 */
/* 102 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 106 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 108 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (86) */
/* 110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 112 */	
			0x11, 0x0,	/* FC_RP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	0x27,		/* 39 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _remunk_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IRemUnknownProxyVtbl,
    0
};

const CInterfaceStubVtbl * _remunk_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IRemUnknownStubVtbl,
    0
};

PCInterfaceName const _remunk_InterfaceNamesList[] = 
{
    "IRemUnknown",
    0
};


#define _remunk_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _remunk, pIID, n)

int __stdcall _remunk_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_remunk_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo remunk_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _remunk_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _remunk_StubVtblList,
    (const PCInterfaceName * ) & _remunk_InterfaceNamesList,
    0, // no delegation
    & _remunk_IID_Lookup, 
    1,
    2
};
