/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:32:48 2020
 */
/* Compiler settings for goober.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#include "rpcproxy.h"
#include "goober.h"

#define TYPE_FORMAT_STRING_SIZE   1                                 
#define PROC_FORMAT_STRING_SIZE   9                                 

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


/* Object interface: IGoober, ver. 0.0,
   GUID={0xffffffff,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGoober_ServerInfo;

#pragma code_seg(".orpc")
HRESULT STDMETHODCALLTYPE IGoober_Ping_Proxy( 
    IGoober __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&Object_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&Object_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&Object_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}


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

static const unsigned short IGoober_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IGoober_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IGoober_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

const CINTERFACE_PROXY_VTABLE(4) _IGooberProxyVtbl = 
{
    &IID_IGoober,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IGoober_Ping_Proxy
};

const CInterfaceStubVtbl _IGooberStubVtbl =
{
    &IID_IGoober,
    &IGoober_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x33,		/* FC_AUTO_HANDLE */
			0x44,		/* 68 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {

			0x0
        }
    };

const CInterfaceProxyVtbl * _goober_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IGooberProxyVtbl,
    0
};

const CInterfaceStubVtbl * _goober_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IGooberStubVtbl,
    0
};

PCInterfaceName const _goober_InterfaceNamesList[] = 
{
    "IGoober",
    0
};


#define _goober_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _goober, pIID, n)

int __stdcall _goober_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_goober_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo goober_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _goober_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _goober_StubVtblList,
    (const PCInterfaceName * ) & _goober_InterfaceNamesList,
    0, // no delegation
    & _goober_IID_Lookup, 
    1,
    1
};
