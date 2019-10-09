/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:37 2019
 */
/* Compiler settings for ..\objsrv.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "objsrv.h"

#define TYPE_FORMAT_STRING_SIZE   193                               
#define PROC_FORMAT_STRING_SIZE   211                               

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


/* Object interface: IObjServer, ver. 0.0,
   GUID={0x00000132,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IObjServer_ServerInfo;

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

static const unsigned short IObjServer_FormatStringOffsetTable[] = 
    {
    0,
    48,
    102,
    180
    };

static const MIDL_SERVER_INFO IObjServer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IObjServer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IObjServer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IObjServer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IObjServerProxyVtbl = 
{
    &IObjServer_ProxyInfo,
    &IID_IObjServer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IObjServer::ObjectServerGetClassObject */ ,
    (void *)-1 /* IObjServer::ObjectServerCreateInstance */ ,
    (void *)-1 /* IObjServer::ObjectServerGetInstance */ ,
    (void *)-1 /* IObjServer::ObjectServerLoadDll */
};

const CInterfaceStubVtbl _IObjServerStubVtbl =
{
    &IID_IObjServer,
    &IObjServer_ServerInfo,
    7,
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

	/* Procedure ObjectServerGetClassObject */

			0x32,		/* FC_BIND_PRIMITIVE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/*  6 */	NdrFcShort( 0x48 ),	/* 72 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter rclsid */

/* 12 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pIID */

/* 18 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter fSurrogate */

/* 24 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppIFD */

/* 30 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pStatus */

/* 36 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 42 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerCreateInstance */

/* 48 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x64,		/* 100 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 52 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 54 */	NdrFcShort( 0x28 ),	/* 40 */
/* 56 */	NdrFcShort( 0x10 ),	/* 16 */
/* 58 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter rclsid */

/* 60 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 64 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Interfaces */

/* 66 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIIDs */

/* 72 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 76 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter ppIFD */

/* 78 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 82 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */

	/* Parameter pResults */

/* 84 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 88 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Parameter pStatus */

/* 90 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerGetInstance */

/* 102 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x64,		/* 100 */
/* 104 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 108 */	NdrFcShort( 0x30 ),	/* 48 */
/* 110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 112 */	0x7,		/* 7 */
			0xb,		/* 11 */

	/* Parameter rclsid */

/* 114 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 118 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Mode */

/* 120 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pwszPath */

/* 126 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 130 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Parameter pIFDStorage */

/* 132 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 136 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter Interfaces */

/* 138 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIIDs */

/* 144 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 148 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter pIFDROT */

/* 150 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 154 */	NdrFcShort( 0x7a ),	/* Type Offset=122 */

	/* Parameter ppIFD */

/* 156 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 160 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */

	/* Parameter pResults */

/* 162 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 166 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Parameter pStatus */

/* 168 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObjectServerLoadDll */

/* 180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x64,		/* 100 */
/* 182 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 186 */	NdrFcShort( 0x20 ),	/* 32 */
/* 188 */	NdrFcShort( 0x10 ),	/* 16 */
/* 190 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter rclsid */

/* 192 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 196 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pStatus */

/* 198 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 208 */	0x8,		/* FC_LONG */
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
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x13, 0x0,	/* FC_OP */
/* 28 */	NdrFcShort( 0xc ),	/* Offset= 12 (40) */
/* 30 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0x1 ),	/* 1 */
/* 34 */	0x8,		/* 8 */
			0x0,		/*  */
/* 36 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 38 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 40 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (30) */
/* 46 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 48 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 50 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 52 */	
			0x11, 0x0,	/* FC_RP */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 58 */	NdrFcShort( 0x10 ),	/* 16 */
/* 60 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 64 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 66 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (10) */
/* 68 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0x0,	/* FC_RP */
/* 72 */	NdrFcShort( 0x2 ),	/* Offset= 2 (74) */
/* 74 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x1 ),	/* 1 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	0x13, 0x0,	/* FC_OP */
/* 98 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (40) */
/* 100 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 102 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 104 */	
			0x11, 0x0,	/* FC_RP */
/* 106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (108) */
/* 108 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 116 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 118 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 120 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 122 */	
			0x12, 0x0,	/* FC_UP */
/* 124 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (40) */
/* 126 */	
			0x11, 0x0,	/* FC_RP */
/* 128 */	NdrFcShort( 0x2 ),	/* Offset= 2 (130) */
/* 130 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x10 ),	/* 16 */
/* 134 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 136 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 138 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 140 */	NdrFcShort( 0xffffff7e ),	/* Offset= -130 (10) */
/* 142 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 144 */	
			0x11, 0x0,	/* FC_RP */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 152 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 156 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 160 */	NdrFcShort( 0x4 ),	/* 4 */
/* 162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x1 ),	/* 1 */
/* 166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	0x13, 0x0,	/* FC_OP */
/* 172 */	NdrFcShort( 0xffffff7c ),	/* Offset= -132 (40) */
/* 174 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 176 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 178 */	
			0x11, 0x0,	/* FC_RP */
/* 180 */	NdrFcShort( 0x2 ),	/* Offset= 2 (182) */
/* 182 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 190 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _objsrv_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IObjServerProxyVtbl,
    0
};

const CInterfaceStubVtbl * _objsrv_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IObjServerStubVtbl,
    0
};

PCInterfaceName const _objsrv_InterfaceNamesList[] = 
{
    "IObjServer",
    0
};


#define _objsrv_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _objsrv, pIID, n)

int __stdcall _objsrv_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_objsrv_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo objsrv_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _objsrv_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _objsrv_StubVtblList,
    (const PCInterfaceName * ) & _objsrv_InterfaceNamesList,
    0, // no delegation
    & _objsrv_IID_Lookup, 
    1,
    2
};
