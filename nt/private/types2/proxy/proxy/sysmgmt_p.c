/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:03:46 2019
 */
/* Compiler settings for sysmgmt.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "sysmgmt.h"

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


/* Standard interface: AlertDefs, ver. 0.0,
   GUID={0x0F061498,0x8D59,0x101B,{0xA4,0xBE,0x00,0x00,0x0B,0x65,0xC3,0x1D}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAlertReport, ver. 0.0,
   GUID={0x4E81DFE8,0x4CA0,0x101A,{0x82,0x06,0x08,0x00,0x2B,0x2F,0xC0,0x9B}} */


/* Object interface: IAlertTarget, ver. 0.0,
   GUID={0x589b61C0,0x54E6,0x11CE,{0x94,0xDD,0x00,0xAA,0x00,0x51,0xE4,0x0F}} */

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

const CInterfaceProxyVtbl * _sysmgmt_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * _sysmgmt_StubVtblList[] = 
{
    0
};

PCInterfaceName const _sysmgmt_InterfaceNamesList[] = 
{
    0
};


#define _sysmgmt_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _sysmgmt, pIID, n)

int __stdcall _sysmgmt_IID_Lookup( const IID * pIID, int * pIndex )
{
    return 0;
}

const ExtendedProxyFileInfo sysmgmt_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _sysmgmt_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _sysmgmt_StubVtblList,
    (const PCInterfaceName * ) & _sysmgmt_InterfaceNamesList,
    0, // no delegation
    & _sysmgmt_IID_Lookup, 
    0,
    2
};
