/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:34 2020
 */
/* Compiler settings for ..\host.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "host.h"

#define TYPE_FORMAT_STRING_SIZE   33                                
#define PROC_FORMAT_STRING_SIZE   43                                

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


/* Object interface: IDLLHost, ver. 0.0,
   GUID={0x00000141,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDLLHost_ServerInfo;

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

static const unsigned short IDLLHost_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IDLLHost_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDLLHost_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDLLHost_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDLLHost_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IDLLHostProxyVtbl = 
{
    &IDLLHost_ProxyInfo,
    &IID_IDLLHost,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDLLHost::DllGetClassObject */
};

const CInterfaceStubVtbl _IDLLHostStubVtbl =
{
    &IID_IDLLHost,
    &IDLLHost_ServerInfo,
    4,
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

	/* Procedure DllGetClassObject */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/*  6 */	NdrFcShort( 0x48 ),	/* 72 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter pfnGetClassObject */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rclsid */

/* 18 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter riid */

/* 24 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppunk */

/* 30 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 36 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 40 */	0x8,		/* FC_LONG */
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
/* 30 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif

			0x0
        }
    };

const CInterfaceProxyVtbl * _host_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDLLHostProxyVtbl,
    0
};

const CInterfaceStubVtbl * _host_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDLLHostStubVtbl,
    0
};

PCInterfaceName const _host_InterfaceNamesList[] = 
{
    "IDLLHost",
    0
};


#define _host_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _host, pIID, n)

int __stdcall _host_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_host_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo host_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _host_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _host_StubVtblList,
    (const PCInterfaceName * ) & _host_InterfaceNamesList,
    0, // no delegation
    & _host_IID_Lookup, 
    1,
    2
};
