/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Mar 14 22:50:22 2020
 */
/* Compiler settings for filter.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "filter.h"

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


/* Standard interface: __MIDL__intf_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFilter, ver. 0.0,
   GUID={0x89BCB740,0x6119,0x101A,{0xBC,0xB7,0x00,0xDD,0x01,0x06,0x55,0xAF}} */

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

const CInterfaceProxyVtbl * _filter_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * _filter_StubVtblList[] = 
{
    0
};

PCInterfaceName const _filter_InterfaceNamesList[] = 
{
    0
};


#define _filter_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _filter, pIID, n)

int __stdcall _filter_IID_Lookup( const IID * pIID, int * pIndex )
{
    return 0;
}

const ExtendedProxyFileInfo filter_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _filter_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _filter_StubVtblList,
    (const PCInterfaceName * ) & _filter_InterfaceNamesList,
    0, // no delegation
    & _filter_IID_Lookup, 
    0,
    2
};
