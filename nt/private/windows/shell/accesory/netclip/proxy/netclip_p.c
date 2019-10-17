/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 17:23:43 2019
 */
/* Compiler settings for netclip.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "netclip.h"

#define TYPE_FORMAT_STRING_SIZE   69                                
#define PROC_FORMAT_STRING_SIZE   139                               

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


/* Standard interface: __MIDL__intf_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IClipboard, ver. 0.0,
   GUID={0x7502CA01,0x4ACA,0x11cf,{0xB6,0x3C,0x00,0x80,0xC7,0x92,0xB7,0x82}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClipboard_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IClipboard_FormatStringOffsetTable[] = 
    {
    0,
    30,
    54,
    78,
    102
    };

static const MIDL_SERVER_INFO IClipboard_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IClipboard_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IClipboard_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IClipboard_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IClipboardProxyVtbl = 
{
    &IClipboard_ProxyInfo,
    &IID_IClipboard,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IClipboard::GetClipboardFormatName */ ,
    (void *)-1 /* IClipboard::GetClipboard */ ,
    (void *)-1 /* IClipboard::SetClipboard */ ,
    (void *)-1 /* IClipboard::IsCurrentClipboard */ ,
    (void *)-1 /* IClipboard::FlushClipboard */
};

const CInterfaceStubVtbl _IClipboardStubVtbl =
{
    &IID_IClipboard,
    &IClipboard_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0056, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IClipboardNotify, ver. 0.0,
   GUID={0x7502CA02,0x4ACA,0x11cf,{0xB6,0x3C,0x00,0x80,0xC7,0x92,0xB7,0x82}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClipboardNotify_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1];

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
    UserMarshalRoutines,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IClipboardNotify_FormatStringOffsetTable[] = 
    {
    120
    };

static const MIDL_SERVER_INFO IClipboardNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IClipboardNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IClipboardNotify_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IClipboardNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IClipboardNotifyProxyVtbl = 
{
    &IClipboardNotify_ProxyInfo,
    &IID_IClipboardNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IClipboardNotify::OnClipboardChanged */
};

const CInterfaceStubVtbl _IClipboardNotifyStubVtbl =
{
    &IID_IClipboardNotify,
    &IClipboardNotify_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0057, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1] = 
        {
            
            {
            CLIPFORMAT_UserSize
            ,CLIPFORMAT_UserMarshal
            ,CLIPFORMAT_UserUnmarshal
            ,CLIPFORMAT_UserFree
            }

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

	/* Procedure GetClipboardFormatName */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter cf */

/* 12 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Parameter ppsz */

/* 18 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClipboard */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppDataObject */

/* 42 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 46 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 48 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClipboard */

/* 54 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 56 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pDataObject */

/* 66 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 70 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsCurrentClipboard */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 80 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pDataObject */

/* 90 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 94 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FlushClipboard */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 104 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClipboardChanged */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 122 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 130 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 132 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x0,	/* FC_UP */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/*  6 */	NdrFcShort( 0x4 ),	/* 4 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 14 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32746) */
/* 16 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 20 */	NdrFcShort( 0x4 ),	/* Offset= 4 (24) */
/* 22 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (21) */
/* 24 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 26 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 28 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	NdrFcShort( 0x2 ),	/* 2 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (0) */
/* 38 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 40 */	NdrFcShort( 0x2 ),	/* Offset= 2 (42) */
/* 42 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 44 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x11, 0x10,	/* FC_RP */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 52 */	NdrFcLong( 0x10e ),	/* 270 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x46,		/* 70 */

			0x0
        }
    };

const CInterfaceProxyVtbl * _netclip_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IClipboardProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IClipboardNotifyProxyVtbl,
    0
};

const CInterfaceStubVtbl * _netclip_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IClipboardStubVtbl,
    ( CInterfaceStubVtbl *) &_IClipboardNotifyStubVtbl,
    0
};

PCInterfaceName const _netclip_InterfaceNamesList[] = 
{
    "IClipboard",
    "IClipboardNotify",
    0
};


#define _netclip_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _netclip, pIID, n)

int __stdcall _netclip_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _netclip, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _netclip, 2, *pIndex )
    
}

const ExtendedProxyFileInfo netclip_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _netclip_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _netclip_StubVtblList,
    (const PCInterfaceName * ) & _netclip_InterfaceNamesList,
    0, // no delegation
    & _netclip_IID_Lookup, 
    2,
    2
};
