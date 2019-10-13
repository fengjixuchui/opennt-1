/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 04:21:23 2019
 */
/* Compiler settings for pnp.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "pnp.h"

#define TYPE_FORMAT_STRING_SIZE   205                               
#define PROC_FORMAT_STRING_SIZE   1101                              

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

/* Standard interface: pnp, ver. 0.0,
   GUID={0x8D9F4E40,0xA03D,0x11CE,{0x8F,0x69,0x08,0x00,0x3E,0x30,0x05,0x1B}} */

handle_t pnp_handle;


static const RPC_CLIENT_INTERFACE pnp___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x8D9F4E40,0xA03D,0x11CE,{0x8F,0x69,0x08,0x00,0x3E,0x30,0x05,0x1B}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE pnp_ClientIfHandle = (RPC_IF_HANDLE)& pnp___RpcClientInterface;

extern const MIDL_STUB_DESC pnp_StubDesc;

static RPC_BINDING_HANDLE pnp__MIDL_AutoBindHandle;


CONFIGRET PNP_Connect( 
    /* [unique][string][in] */ PNP_HANDLE UNCServerName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UNCServerName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_Disconnect( 
    /* [unique][string][in] */ PNP_HANDLE UNCServerName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UNCServerName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&UNCServerName);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetVersion( 
    /* [in] */ handle_t hBinding,
    /* [out] */ WORD __RPC_FAR *pVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pVersion);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pVersion);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetGlobalState( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulState,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pulState,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_InitDetection( 
    /* [in] */ handle_t hBinding)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hBinding);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74],
                 ( unsigned char __RPC_FAR * )&hBinding);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_ReportLogOn( 
    /* [in] */ handle_t hBinding,
    /* [in] */ BOOL bAdmin)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,bAdmin);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&bAdmin);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_ValidateDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[104],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[104],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[104],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetRootDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [size_is][string][out] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLength)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulLength);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLength);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[124],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetRelatedDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulRelationship,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [size_is][string][out] */ LPWSTR pRelatedDeviceID,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulRelationship,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&pRelatedDeviceID,
                 ( unsigned char __RPC_FAR * )&pulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_EnumerateSubKeys( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulBranch,
    /* [in] */ ULONG ulIndex,
    /* [size_is][string][out] */ PWSTR Buffer,
    /* [in] */ ULONG ulLength,
    /* [out] */ PULONG pulRequiredLen,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulBranch,
                 ( unsigned char __RPC_FAR * )&ulIndex,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&ulLength,
                 ( unsigned char __RPC_FAR * )&pulRequiredLen,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetDeviceList( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszFilter,
    /* [length_is][size_is][out] */ LPWSTR Buffer,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[204],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[204],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszFilter,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&pulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[204],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetDeviceListSize( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszFilter,
    /* [out] */ PULONG pulLen,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszFilter,
                 ( unsigned char __RPC_FAR * )&pulLen,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[232],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetDepth( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [out] */ PULONG pulDepth,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[256],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[256],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&pulDepth,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[256],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetDeviceRegProp( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulProperty,
    /* [out][in] */ PULONG pulRegDataType,
    /* [length_is][size_is][out] */ LPBYTE Buffer,
    /* [out][in] */ PULONG pulTransferLen,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[280],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[280],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulProperty,
                 ( unsigned char __RPC_FAR * )&pulRegDataType,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&pulTransferLen,
                 ( unsigned char __RPC_FAR * )&pulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[280],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_SetDeviceRegProp( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulProperty,
    /* [in] */ ULONG ulDataType,
    /* [size_is][in] */ LPBYTE Buffer,
    /* [in] */ ULONG ulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulProperty,
                 ( unsigned char __RPC_FAR * )&ulDataType,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&ulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetClassInstance( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [size_is][string][out] */ LPWSTR pszClassInstance,
    /* [in] */ ULONG ulLength)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulLength);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[348],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[348],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&pszClassInstance,
                 ( unsigned char __RPC_FAR * )&ulLength);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[348],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_CreateKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszSubKey,
    /* [in] */ REGSAM samDesired,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszSubKey,
                 ( unsigned char __RPC_FAR * )&samDesired,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_DeleteRegistryKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [ref][string][in] */ LPCWSTR pszParentKey,
    /* [ref][string][in] */ LPCWSTR pszChildKey,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[394],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[394],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&pszParentKey,
                 ( unsigned char __RPC_FAR * )&pszChildKey,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[394],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetClassCount( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulClassCount,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[422],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[422],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pulClassCount,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[422],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetClassName( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ PCWSTR pszClassGuid,
    /* [size_is][string][out] */ PWSTR Buffer,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszClassGuid,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&pulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_DeleteClassKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ PCWSTR pszClassGuid,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[470],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[470],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszClassGuid,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[470],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_CreateDevInst( 
    /* [in] */ handle_t hBinding,
    /* [size_is][string][out][in] */ LPWSTR pszDeviceID,
    /* [ref][string][in] */ LPWSTR pszParentDeviceID,
    /* [in] */ ULONG ulLength,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[490],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[490],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&pszParentDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLength,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[490],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_DeviceInstanceAction( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulMajorAction,
    /* [in] */ ULONG ulMinorAction,
    /* [unique][string][in] */ PCWSTR pszDeviceInstance1,
    /* [unique][string][in] */ PCWSTR pszDeviceInstance2)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pszDeviceInstance2);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulMajorAction,
                 ( unsigned char __RPC_FAR * )&ulMinorAction,
                 ( unsigned char __RPC_FAR * )&pszDeviceInstance1,
                 ( unsigned char __RPC_FAR * )&pszDeviceInstance2);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[516],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetDeviceStatus( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pDeviceID,
    /* [out] */ PULONG pulStatus,
    /* [out] */ PULONG pulProblem,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[542],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[542],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&pulStatus,
                 ( unsigned char __RPC_FAR * )&pulProblem,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[542],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_UninstallDevInst( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[570],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[570],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[570],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_AddID( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszDeviceID,
    /* [ref][string][in] */ LPCWSTR pszID,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[590],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[590],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&pszID,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[590],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_HwProfFlags( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulAction,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulConfig,
    /* [out][in] */ PULONG pulValue,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[614],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[614],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulAction,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulConfig,
                 ( unsigned char __RPC_FAR * )&pulValue,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[614],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetHwProfInfo( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulIndex,
    /* [ref][out][in] */ HWPROFILEINFO __RPC_FAR *pHWProfileInfo,
    /* [in] */ ULONG ulProfileInfoSize,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulIndex,
                 ( unsigned char __RPC_FAR * )&pHWProfileInfo,
                 ( unsigned char __RPC_FAR * )&ulProfileInfoSize,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_AddEmptyLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulPriority,
    /* [out] */ PULONG pulLogConfTag,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[666],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[666],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulPriority,
                 ( unsigned char __RPC_FAR * )&pulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[666],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_FreeLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[692],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[692],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[692],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetFirstLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [out] */ PULONG pulLogConfTag,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[716],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[716],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&pulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[716],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetNextLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ ULONG ulCurrentTag,
    /* [out] */ PULONG pulNextTag,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[742],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[742],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ulCurrentTag,
                 ( unsigned char __RPC_FAR * )&pulNextTag,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[742],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_AddResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [out] */ PULONG pulResourceTag,
    /* [size_is][in] */ LPBYTE ResourceData,
    /* [in] */ ULONG ResourceLen,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[770],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[770],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&pulResourceTag,
                 ( unsigned char __RPC_FAR * )&ResourceData,
                 ( unsigned char __RPC_FAR * )&ResourceLen,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[770],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_FreeResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulPreviousResType,
    /* [out] */ PULONG pulPreviousResTag,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[806],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[806],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulResourceTag,
                 ( unsigned char __RPC_FAR * )&pulPreviousResType,
                 ( unsigned char __RPC_FAR * )&pulPreviousResTag,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[806],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetNextResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulNextResDesTag,
    /* [out] */ PULONG pulNextResDesType,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[842],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[842],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulResourceTag,
                 ( unsigned char __RPC_FAR * )&pulNextResDesTag,
                 ( unsigned char __RPC_FAR * )&pulNextResDesType,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[842],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetResDesData( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ ULONG BufferLen,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[878],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[878],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulResourceTag,
                 ( unsigned char __RPC_FAR * )&Buffer,
                 ( unsigned char __RPC_FAR * )&BufferLen,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[878],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_GetResDesDataSize( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulSize,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[912],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[912],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulResourceTag,
                 ( unsigned char __RPC_FAR * )&pulSize,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[912],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_ModifyResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID CurrentResourceID,
    /* [in] */ RESOURCEID NewResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [size_is][in] */ LPBYTE ResourceData,
    /* [in] */ ULONG ResourceLen,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[944],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[944],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ulLogConfTag,
                 ( unsigned char __RPC_FAR * )&ulLogConfType,
                 ( unsigned char __RPC_FAR * )&CurrentResourceID,
                 ( unsigned char __RPC_FAR * )&NewResourceID,
                 ( unsigned char __RPC_FAR * )&ulResourceTag,
                 ( unsigned char __RPC_FAR * )&ResourceData,
                 ( unsigned char __RPC_FAR * )&ResourceLen,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[944],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_DetectResourceConflict( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [size_is][in] */ LPBYTE ResourceData,
    /* [in] */ ULONG ResourceLen,
    /* [out] */ PBOOL pbConflictDetected,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[980],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[980],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pDeviceID,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ResourceData,
                 ( unsigned char __RPC_FAR * )&ResourceLen,
                 ( unsigned char __RPC_FAR * )&pbConflictDetected,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[980],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_SetHwProf( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulHardwareProfile,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1012],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1012],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulHardwareProfile,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1012],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_QueryArbitratorFreeData( 
    /* [in] */ handle_t hBinding,
    /* [size_is][out] */ LPBYTE pData,
    /* [in] */ ULONG ulDataLen,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1030],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1030],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pData,
                 ( unsigned char __RPC_FAR * )&ulDataLen,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1030],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_QueryArbitratorFreeSize( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulSize,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1058],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1058],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&pulSize,
                 ( unsigned char __RPC_FAR * )&pszDeviceID,
                 ( unsigned char __RPC_FAR * )&ResourceID,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1058],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}


CONFIGRET PNP_RunDetection( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ulFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1084],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1084],
                 ( unsigned char __RPC_FAR * )&hBinding,
                 ( unsigned char __RPC_FAR * )&ulFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&pnp_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1084],
                 ( unsigned char __RPC_FAR * )&hBinding);
#endif
    return ( CONFIGRET  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1];

static const MIDL_STUB_DESC pnp_StubDesc = 
    {
    (void __RPC_FAR *)& pnp___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &pnp_handle,
    0,
    BindingRoutines,
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

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)PNP_HANDLE_bind,
            (GENERIC_UNBIND_ROUTINE)PNP_HANDLE_unbind
         }
        
        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 24 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 28 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 38 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 42 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 48 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 52 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 56 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 60 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 66 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 70 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 72 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 80 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 86 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 90 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 94 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 100 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 102 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 106 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 108 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 110 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 114 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 116 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 118 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 120 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 122 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 126 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 130 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 134 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 136 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 138 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 140 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 142 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 144 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 150 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 154 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 156 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 158 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 160 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 162 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 166 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 170 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 172 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 174 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 176 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 178 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 180 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 184 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 186 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 188 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 190 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 192 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 194 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 196 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 198 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 200 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 202 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 206 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 210 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 214 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 216 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 218 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 220 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 222 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */
/* 224 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 226 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 228 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 230 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 232 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 234 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 238 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 240 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 242 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 244 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 246 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 248 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 250 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 252 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 254 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 256 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 258 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 262 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 264 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 266 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 268 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 270 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 272 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 274 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 276 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 278 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 280 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 282 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 286 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 288 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 290 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 292 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 294 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 296 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 298 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 300 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 302 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 304 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 306 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 308 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 310 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 312 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 314 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 316 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 318 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 320 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 328 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 330 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 332 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 334 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 336 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 340 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */
/* 342 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 344 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 346 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 348 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 350 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 352 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 354 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 358 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 360 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 364 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 366 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */
/* 368 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 370 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 372 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 374 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 376 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 378 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 382 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 384 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 386 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 388 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 390 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 392 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 396 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 398 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 400 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 402 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 404 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 406 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 408 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 410 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 412 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 414 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 416 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 418 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 420 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 422 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 424 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 426 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 428 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 430 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 432 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 434 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 436 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 438 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 440 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 442 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 444 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 448 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 450 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 452 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 454 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 456 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 458 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 460 */	NdrFcShort( 0x6a ),	/* Type Offset=106 */
/* 462 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 464 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 466 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 468 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 470 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 472 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 474 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 476 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 478 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 480 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 482 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 484 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 486 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 488 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 490 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 492 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 494 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 496 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 498 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 500 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 502 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 504 */	NdrFcShort( 0x74 ),	/* Type Offset=116 */
/* 506 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 508 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 510 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 512 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 514 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 516 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 518 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 520 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 522 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 526 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 528 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 530 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 532 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 534 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 536 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 538 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 540 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 542 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 544 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 546 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 548 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 550 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 552 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 554 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 556 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 558 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 560 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 562 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 564 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 566 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 568 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 570 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 572 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 574 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 576 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 580 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 582 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 584 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 586 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 588 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 590 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 592 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 594 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 596 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 598 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 600 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 602 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 604 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 606 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 608 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 610 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 612 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 614 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 616 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 620 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 622 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 624 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 626 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 628 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 630 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 632 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 634 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 636 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 638 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 640 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 642 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 644 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 646 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 648 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 652 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 654 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 656 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 658 */	NdrFcShort( 0x7e ),	/* Type Offset=126 */
/* 660 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 662 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 664 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 666 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 668 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 670 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 672 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 676 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 678 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 680 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 682 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 684 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 686 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 688 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 690 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 692 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 694 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 696 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 698 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 700 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 702 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 704 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 706 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 708 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 710 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 712 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 714 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 716 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 718 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 720 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 722 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 724 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 726 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 728 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 730 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 732 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 734 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 736 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 738 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 740 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 742 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 744 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 748 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 750 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 752 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 754 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 756 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 758 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 760 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 762 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 764 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 766 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 768 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 770 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 772 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 774 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 776 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 778 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 780 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 782 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 784 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 786 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 788 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 790 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 792 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 794 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 796 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 798 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 800 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 802 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 804 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 806 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 808 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 810 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 812 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 814 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 816 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 818 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 820 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 822 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 824 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 826 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 828 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 830 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 832 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 834 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 836 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 838 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 840 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 842 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 844 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 846 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 848 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 852 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 854 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 856 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 858 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 860 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 862 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 864 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 866 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 868 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 870 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 872 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 874 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 876 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 878 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 880 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 882 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 884 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 886 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 888 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 890 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 892 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 894 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 896 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 898 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 900 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 902 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 904 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 906 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 908 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 910 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 912 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 914 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 916 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 918 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 922 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 924 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 926 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 928 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 930 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 932 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 934 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 936 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 938 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 940 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 942 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 944 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 946 */	NdrFcShort( 0x25 ),	/* 37 */
#ifndef _ALPHA_
/* 948 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 950 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 952 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 954 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 956 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 958 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 960 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 962 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 964 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 966 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 968 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 970 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 972 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 974 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 976 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 978 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 980 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 982 */	NdrFcShort( 0x26 ),	/* 38 */
#ifndef _ALPHA_
/* 984 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 986 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 988 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 990 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 992 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 994 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 996 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 998 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1000 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */
/* 1002 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1004 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1006 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1008 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1010 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1012 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1014 */	NdrFcShort( 0x27 ),	/* 39 */
#ifndef _ALPHA_
/* 1016 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1018 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1020 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1022 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1024 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1026 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1028 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1030 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1032 */	NdrFcShort( 0x28 ),	/* 40 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1036 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1038 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1040 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1042 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1044 */	NdrFcShort( 0xbe ),	/* Type Offset=190 */
/* 1046 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1048 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1050 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 1052 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1054 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1056 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1058 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1060 */	NdrFcShort( 0x29 ),	/* 41 */
#ifndef _ALPHA_
/* 1062 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1064 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1066 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1068 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1070 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1072 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1074 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1076 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 1078 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1080 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1082 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1084 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1086 */	NdrFcShort( 0x2a ),	/* 42 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1090 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x0,		/* 0 */
#ifndef _ALPHA_
/* 1092 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1094 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 1096 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1098 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/*  6 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/*  8 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 10 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 12 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 14 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 16 */	
			0x11, 0x0,	/* FC_RP */
/* 18 */	NdrFcShort( 0x2 ),	/* Offset= 2 (20) */
/* 20 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 22 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 24 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 26 */	
			0x11, 0x0,	/* FC_RP */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 32 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 36 */	
			0x11, 0x0,	/* FC_RP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 42 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 46 */	
			0x11, 0x0,	/* FC_RP */
/* 48 */	NdrFcShort( 0x2 ),	/* Offset= 2 (50) */
/* 50 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 52 */	NdrFcShort( 0x2 ),	/* 2 */
/* 54 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 58 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 60 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 62 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 64 */	
			0x11, 0x0,	/* FC_RP */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 70 */	NdrFcShort( 0x1 ),	/* 1 */
/* 72 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 76 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 80 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 82 */	
			0x11, 0x0,	/* FC_RP */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 88 */	NdrFcShort( 0x1 ),	/* 1 */
/* 90 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 94 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 96 */	
			0x11, 0x0,	/* FC_RP */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 102 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	
			0x11, 0x0,	/* FC_RP */
/* 108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (110) */
/* 110 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 112 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 114 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 116 */	
			0x11, 0x0,	/* FC_RP */
/* 118 */	NdrFcShort( 0x2 ),	/* Offset= 2 (120) */
/* 120 */	
			0x25,		/* FC_C_WSTRING */
			0x44,		/* FC_STRING_SIZED */
/* 122 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 126 */	
			0x11, 0x0,	/* FC_RP */
/* 128 */	NdrFcShort( 0x8 ),	/* Offset= 8 (136) */
/* 130 */	
			0x1d,		/* FC_SMFARRAY */
			0x1,		/* 1 */
/* 132 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 134 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 136 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 138 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 140 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 142 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff3 ),	/* Offset= -13 (130) */
			0x8,		/* FC_LONG */
/* 146 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 148 */	
			0x11, 0x0,	/* FC_RP */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 160 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 174 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 176 */	
			0x11, 0x0,	/* FC_RP */
/* 178 */	NdrFcShort( 0x2 ),	/* Offset= 2 (180) */
/* 180 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 184 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 186 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 188 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 190 */	
			0x11, 0x0,	/* FC_RP */
/* 192 */	NdrFcShort( 0x2 ),	/* Offset= 2 (194) */
/* 194 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 196 */	NdrFcShort( 0x1 ),	/* 1 */
/* 198 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 202 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
