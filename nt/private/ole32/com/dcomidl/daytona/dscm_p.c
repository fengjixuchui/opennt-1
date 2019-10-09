/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:42 2019
 */
/* Compiler settings for ..\dscm.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "dscm.h"

#define TYPE_FORMAT_STRING_SIZE   447                               
#define PROC_FORMAT_STRING_SIZE   253                               

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


/* Object interface: IDSCM, ver. 0.0,
   GUID={0x00000136,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDSCM_ServerInfo;

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

static const unsigned short IDSCM_FormatStringOffsetTable[] = 
    {
    0,
    66,
    144
    };

static const MIDL_SERVER_INFO IDSCM_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDSCM_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDSCM_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDSCM_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IDSCMProxyVtbl = 
{
    &IDSCM_ProxyInfo,
    &IID_IDSCM,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDSCM::SCMGetClassObject */ ,
    (void *)-1 /* IDSCM::SCMCreateInstance */ ,
    (void *)-1 /* IDSCM::SCMGetPersistentInstance */
};

const CInterfaceStubVtbl _IDSCMStubVtbl =
{
    &IID_IDSCM,
    &IDSCM_ServerInfo,
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

	/* Procedure SCMGetClassObject */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/*  6 */	NdrFcShort( 0x28 ),	/* 40 */
/*  8 */	NdrFcShort( 0x28 ),	/* 40 */
/* 10 */	0x7,		/* 7 */
			0x9,		/* 9 */

	/* Parameter pActivationInfo */

/* 12 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pIID */

/* 18 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter Apartment */

/* 24 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 30 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppServerORBindings */

/* 36 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 40 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Parameter pOxidInfo */

/* 42 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 46 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter pLocalMidOfRemote */

/* 48 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 52 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppIDClassFactory */

/* 54 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 58 */	NdrFcShort( 0x114 ),	/* Type Offset=276 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SCMCreateInstance */

/* 66 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 68 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 72 */	NdrFcShort( 0x10 ),	/* 16 */
/* 74 */	NdrFcShort( 0x28 ),	/* 40 */
/* 76 */	0x7,		/* 7 */
			0xb,		/* 11 */

	/* Parameter pActivationInfo */

/* 78 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 82 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter Interfaces */

/* 84 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIIDs */

/* 90 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 94 */	NdrFcShort( 0x132 ),	/* Type Offset=306 */

	/* Parameter Apartment */

/* 96 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 102 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppServerORBindings */

/* 108 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 112 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Parameter pOxidInfo */

/* 114 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 118 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter pLocalMidOfRemote */

/* 120 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 124 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppInterfaceData */

/* 126 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 130 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Parameter pResults */

/* 132 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 136 */	NdrFcShort( 0x166 ),	/* Type Offset=358 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SCMGetPersistentInstance */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 146 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x44 ),	/* x86, MIPS, PPC Stack size/offset = 68 */
#else
			NdrFcShort( 0x88 ),	/* Alpha Stack size/offset = 136 */
#endif
/* 150 */	NdrFcShort( 0x20 ),	/* 32 */
/* 152 */	NdrFcShort( 0x30 ),	/* 48 */
/* 154 */	0x7,		/* 7 */
			0x10,		/* 16 */

	/* Parameter pActivationInfo */

/* 156 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 160 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pwszPath */

/* 162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 166 */	NdrFcShort( 0x170 ),	/* Type Offset=368 */

	/* Parameter pIFDStorage */

/* 168 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 172 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Parameter FileMode */

/* 174 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter FileWasOpened */

/* 180 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Interfaces */

/* 186 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pIIDs */

/* 192 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 196 */	NdrFcShort( 0x17c ),	/* Type Offset=380 */

	/* Parameter Apartment */

/* 198 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOxidServer */

/* 204 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 208 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppServerORBindings */

/* 210 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 214 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Parameter pOxidInfo */

/* 216 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 220 */	NdrFcShort( 0xfa ),	/* Type Offset=250 */

	/* Parameter pLocalMidOfRemote */

/* 222 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 226 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pFoundInROT */

/* 228 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 230 */	NdrFcShort( 0x34 ),	/* x86, MIPS, PPC Stack size/offset = 52 */
#else
			NdrFcShort( 0x68 ),	/* Alpha Stack size/offset = 104 */
#endif
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppInterfaceData */

/* 234 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x38 ),	/* x86, MIPS, PPC Stack size/offset = 56 */
#else
			NdrFcShort( 0x70 ),	/* Alpha Stack size/offset = 112 */
#endif
/* 238 */	NdrFcShort( 0x192 ),	/* Type Offset=402 */

	/* Parameter pResults */

/* 240 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x3c ),	/* x86, MIPS, PPC Stack size/offset = 60 */
#else
			NdrFcShort( 0x78 ),	/* Alpha Stack size/offset = 120 */
#endif
/* 244 */	NdrFcShort( 0x1b4 ),	/* Type Offset=436 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x40 ),	/* x86, MIPS, PPC Stack size/offset = 64 */
#else
			NdrFcShort( 0x80 ),	/* Alpha Stack size/offset = 128 */
#endif
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0xa4 ),	/* Offset= 164 (166) */
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
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 24 */	NdrFcShort( 0x2 ),	/* 2 */
/* 26 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 28 */	NdrFcShort( 0x4 ),	/* 4 */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 34 */	NdrFcShort( 0x2 ),	/* 2 */
/* 36 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 38 */	NdrFcShort( 0xc ),	/* 12 */
/* 40 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 44 */	NdrFcShort( 0x2 ),	/* 2 */
/* 46 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 48 */	NdrFcShort( 0x14 ),	/* 20 */
/* 50 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 52 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x1c ),	/* 28 */
/* 56 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	0x12, 0x0,	/* FC_UP */
/* 66 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (22) */
/* 68 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 70 */	NdrFcShort( 0x8 ),	/* 8 */
/* 72 */	NdrFcShort( 0x8 ),	/* 8 */
/* 74 */	0x12, 0x0,	/* FC_UP */
/* 76 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (32) */
/* 78 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 80 */	NdrFcShort( 0x10 ),	/* 16 */
/* 82 */	NdrFcShort( 0x10 ),	/* 16 */
/* 84 */	0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (42) */
/* 88 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 90 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 92 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 94 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 96 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 98 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 100 */	NdrFcShort( 0x1c ),	/* 28 */
/* 102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 104 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 110 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 112 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 114 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 116 */	NdrFcShort( 0x14 ),	/* 20 */
/* 118 */	NdrFcShort( 0x14 ),	/* 20 */
/* 120 */	0x12, 0x0,	/* FC_UP */
/* 122 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (52) */
/* 124 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 126 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 128 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 130 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 132 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 134 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 136 */	NdrFcShort( 0x10 ),	/* 16 */
/* 138 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	NdrFcShort( 0x4 ),	/* 4 */
/* 146 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 148 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 150 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x12, 0x0,	/* FC_UP */
/* 158 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (98) */
/* 160 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 162 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 164 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 166 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x18 ),	/* 24 */
/* 170 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0xffffff56 ),	/* Offset= -170 (10) */
/* 182 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 184 */	NdrFcShort( 0x4 ),	/* 4 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	0x12, 0x0,	/* FC_UP */
/* 190 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (134) */
/* 192 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 198 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 200 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 202 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 210 */	
			0x11, 0x0,	/* FC_RP */
/* 212 */	NdrFcShort( 0xffffff36 ),	/* Offset= -202 (10) */
/* 214 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 216 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 218 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 220 */	NdrFcShort( 0x2 ),	/* Offset= 2 (222) */
/* 222 */	
			0x13, 0x0,	/* FC_OP */
/* 224 */	NdrFcShort( 0xc ),	/* Offset= 12 (236) */
/* 226 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 228 */	NdrFcShort( 0x2 ),	/* 2 */
/* 230 */	0x7,		/* 7 */
			0x0,		/*  */
/* 232 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 234 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 236 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 240 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (226) */
/* 242 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 246 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x20 ),	/* 32 */
/* 254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 258 */	NdrFcShort( 0x1c ),	/* 28 */
/* 260 */	NdrFcShort( 0x1c ),	/* 28 */
/* 262 */	0x13, 0x0,	/* FC_OP */
/* 264 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (236) */
/* 266 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 268 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 270 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffefb ),	/* Offset= -261 (10) */
			0x8,		/* FC_LONG */
/* 274 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 276 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 278 */	NdrFcShort( 0x2 ),	/* Offset= 2 (280) */
/* 280 */	
			0x13, 0x0,	/* FC_OP */
/* 282 */	NdrFcShort( 0xc ),	/* Offset= 12 (294) */
/* 284 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 288 */	0x8,		/* 8 */
			0x0,		/*  */
/* 290 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 292 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 294 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 296 */	NdrFcShort( 0x4 ),	/* 4 */
/* 298 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (284) */
/* 300 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 302 */	
			0x11, 0x0,	/* FC_RP */
/* 304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (306) */
/* 306 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 308 */	NdrFcShort( 0x10 ),	/* 16 */
/* 310 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 312 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 314 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 316 */	NdrFcShort( 0xfffffece ),	/* Offset= -306 (10) */
/* 318 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 320 */	
			0x11, 0x0,	/* FC_RP */
/* 322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (324) */
/* 324 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 326 */	NdrFcShort( 0x4 ),	/* 4 */
/* 328 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 330 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 332 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 334 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	0x13, 0x0,	/* FC_OP */
/* 348 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (294) */
/* 350 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 352 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 354 */	
			0x11, 0x0,	/* FC_RP */
/* 356 */	NdrFcShort( 0x2 ),	/* Offset= 2 (358) */
/* 358 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 362 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 364 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 366 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 368 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 370 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 372 */	
			0x12, 0x0,	/* FC_UP */
/* 374 */	NdrFcShort( 0xffffffb0 ),	/* Offset= -80 (294) */
/* 376 */	
			0x11, 0x0,	/* FC_RP */
/* 378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (380) */
/* 380 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 382 */	NdrFcShort( 0x10 ),	/* 16 */
/* 384 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 388 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0xfffffe84 ),	/* Offset= -380 (10) */
/* 392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 394 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 396 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 398 */	
			0x11, 0x0,	/* FC_RP */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 404 */	NdrFcShort( 0x4 ),	/* 4 */
/* 406 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 408 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 410 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 412 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 414 */	NdrFcShort( 0x4 ),	/* 4 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x1 ),	/* 1 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 424 */	0x13, 0x0,	/* FC_OP */
/* 426 */	NdrFcShort( 0xffffff7c ),	/* Offset= -132 (294) */
/* 428 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 432 */	
			0x11, 0x0,	/* FC_RP */
/* 434 */	NdrFcShort( 0x2 ),	/* Offset= 2 (436) */
/* 436 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 438 */	NdrFcShort( 0x4 ),	/* 4 */
/* 440 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 442 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 444 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _dscm_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDSCMProxyVtbl,
    0
};

const CInterfaceStubVtbl * _dscm_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDSCMStubVtbl,
    0
};

PCInterfaceName const _dscm_InterfaceNamesList[] = 
{
    "IDSCM",
    0
};


#define _dscm_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _dscm, pIID, n)

int __stdcall _dscm_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_dscm_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo dscm_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _dscm_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _dscm_StubVtblList,
    (const PCInterfaceName * ) & _dscm_InterfaceNamesList,
    0, // no delegation
    & _dscm_IID_Lookup, 
    1,
    2
};
