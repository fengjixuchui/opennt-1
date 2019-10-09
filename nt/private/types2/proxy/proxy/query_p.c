/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:23 2019
 */
/* Compiler settings for query.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "query.h"

#define TYPE_FORMAT_STRING_SIZE   1                                 
#define PROC_FORMAT_STRING_SIZE   1                                 

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


/* Standard interface: IQueryStructures, ver. 0.0,
   GUID={0xE3971E54,0x4D6E,0x101A,{0x97,0x1D,0x08,0x00,0x2B,0x2E,0xCD,0xA9}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISearch, ver. 0.0,
   GUID={0xed8ce7e0,0x106c,0x11ce,{0x84,0xe2,0x00,0xaa,0x00,0x4b,0x99,0x86}} */


/* Standard interface: __MIDL__intf_0077, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IOldQuery, ver. 0.0,
   GUID={0x00000200,0x0000,0x0008,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPhraseSink, ver. 0.0,
   GUID={0xCC906FF0,0xC058,0x101A,{0xB5,0x54,0x08,0x00,0x2B,0x33,0xB0,0xE6}} */


/* Object interface: IWordSink, ver. 0.0,
   GUID={0xCC907054,0xC058,0x101A,{0xB5,0x54,0x08,0x00,0x2B,0x33,0xB0,0xE6}} */


/* Object interface: IWordBreaker, ver. 0.0,
   GUID={0xD53552C8,0x77E3,0x101A,{0xB5,0x52,0x08,0x00,0x2B,0x33,0xB0,0xE6}} */


/* Object interface: IStemSink, ver. 0.0,
   GUID={0xfe77c330,0x7f42,0x11ce,{0xbe,0x57,0x00,0xaa,0x00,0x51,0xfe,0x20}} */


/* Object interface: IStemmer, ver. 0.0,
   GUID={0xefbaf140,0x7f42,0x11ce,{0xbe,0x57,0x00,0xaa,0x00,0x51,0xfe,0x20}} */


/* Object interface: IRowsetQueryStatus, ver. 0.0,
   GUID={0xa7ac77ed,0xf8d7,0x11ce,{0xa7,0x98,0x00,0x20,0xf8,0x00,0x80,0x24}} */

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

const CInterfaceProxyVtbl * _query_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * _query_StubVtblList[] = 
{
    0
};

PCInterfaceName const _query_InterfaceNamesList[] = 
{
    0
};


#define _query_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _query, pIID, n)

int __stdcall _query_IID_Lookup( const IID * pIID, int * pIndex )
{
    return 0;
}

const ExtendedProxyFileInfo query_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _query_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _query_StubVtblList,
    (const PCInterfaceName * ) & _query_InterfaceNamesList,
    0, // no delegation
    & _query_IID_Lookup, 
    0,
    2
};
