/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 15:44:39 2019
 */
/* Compiler settings for catstg.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "catstg.h"

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


/* Standard interface: DBStructureDefinitions, ver. 0.0,
   GUID={0x0c733a80,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


/* Standard interface: __MIDL__intf_0072, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ISummaryCatalogStorage, ver. 0.0,
   GUID={0xa3cf4d70,0x702d,0x11ce,{0x8b,0x2c,0x00,0xaa,0x00,0x3c,0x9b,0x74}} */


/* Standard interface: __MIDL__intf_0073, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ISummaryCatalogStorageView, ver. 0.0,
   GUID={0x8d2bea60,0xbb95,0x11ce,{0xa3,0x28,0x00,0xaa,0x00,0x4b,0xa9,0x35}} */

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

const CInterfaceProxyVtbl * _catstg_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * _catstg_StubVtblList[] = 
{
    0
};

PCInterfaceName const _catstg_InterfaceNamesList[] = 
{
    0
};


#define _catstg_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _catstg, pIID, n)

int __stdcall _catstg_IID_Lookup( const IID * pIID, int * pIndex )
{
    return 0;
}

const ExtendedProxyFileInfo catstg_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _catstg_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _catstg_StubVtblList,
    (const PCInterfaceName * ) & _catstg_InterfaceNamesList,
    0, // no delegation
    & _catstg_IID_Lookup, 
    0,
    2
};
