/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 22:42:21 2019
 */
/* Compiler settings for ndeapi.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "ndeapi.h"

#define TYPE_FORMAT_STRING_SIZE   181                               
#define PROC_FORMAT_STRING_SIZE   467                               

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

/* Standard interface: nddeapi, ver. 1.2,
   GUID={0x2F5F3220,0xC126,0x1076,{0xB5,0x49,0x07,0x4D,0x07,0x86,0x19,0xDA}} */

handle_t hNDdeApi;


static const RPC_CLIENT_INTERFACE nddeapi___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x2F5F3220,0xC126,0x1076,{0xB5,0x49,0x07,0x4D,0x07,0x86,0x19,0xDA}},{1,2}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE nddeapi_ClientIfHandle = (RPC_IF_HANDLE)& nddeapi___RpcClientInterface;

extern const MIDL_STUB_DESC nddeapi_StubDesc;

static RPC_BINDING_HANDLE nddeapi__MIDL_AutoBindHandle;


unsigned long wwNDdeShareAddW( 
    /* [in] */ unsigned long nLevel,
    /* [length_is][size_is][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psn,
    /* [in] */ unsigned long snl,
    /* [length_is][size_is][in] */ byte __RPC_FAR *pat,
    /* [in] */ unsigned long atl,
    /* [size_is][unique][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long sdl,
    /* [length_is][size_is][in] */ byte __RPC_FAR *pit,
    /* [in] */ unsigned long itl)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,itl);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&psn,
                 ( unsigned char __RPC_FAR * )&snl,
                 ( unsigned char __RPC_FAR * )&pat,
                 ( unsigned char __RPC_FAR * )&atl,
                 ( unsigned char __RPC_FAR * )&psd,
                 ( unsigned char __RPC_FAR * )&sdl,
                 ( unsigned char __RPC_FAR * )&pit,
                 ( unsigned char __RPC_FAR * )&itl);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&nLevel);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareDelA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long wReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,wReserved);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&wReserved);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[40],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareDelW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long wReserved)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,wReserved);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&wReserved);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeGetShareSecurityA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long cbsd,
    /* [in] */ unsigned long bRemoteCall,
    /* [out] */ unsigned long __RPC_FAR *lpcbsdRequired,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&si,
                 ( unsigned char __RPC_FAR * )&psd,
                 ( unsigned char __RPC_FAR * )&cbsd,
                 ( unsigned char __RPC_FAR * )&bRemoteCall,
                 ( unsigned char __RPC_FAR * )&lpcbsdRequired,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeGetShareSecurityW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long cbsd,
    /* [in] */ unsigned long bRemoteCall,
    /* [out] */ unsigned long __RPC_FAR *lpcbsdRequired,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&si,
                 ( unsigned char __RPC_FAR * )&psd,
                 ( unsigned char __RPC_FAR * )&cbsd,
                 ( unsigned char __RPC_FAR * )&bRemoteCall,
                 ( unsigned char __RPC_FAR * )&lpcbsdRequired,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeSetShareSecurityA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long sdl)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,sdl);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[128],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[128],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&si,
                 ( unsigned char __RPC_FAR * )&psd,
                 ( unsigned char __RPC_FAR * )&sdl);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[128],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeSetShareSecurityW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long sdl)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,sdl);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&si,
                 ( unsigned char __RPC_FAR * )&psd,
                 ( unsigned char __RPC_FAR * )&sdl);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareEnumA( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&lpnEntriesRead,
                 ( unsigned char __RPC_FAR * )&lpcbTotalAvailable,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 ( unsigned char __RPC_FAR * )&nLevel);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareEnumW( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[196],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[196],
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&lpnEntriesRead,
                 ( unsigned char __RPC_FAR * )&lpcbTotalAvailable,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[196],
                 ( unsigned char __RPC_FAR * )&nLevel);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareGetInfoW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnTotalAvailable,
    /* [out] */ unsigned short __RPC_FAR *lpnItems,
    /* [in] */ unsigned long bRemoteCall,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn,
    /* [out] */ unsigned long __RPC_FAR *lpnSnOffset,
    /* [out] */ unsigned long __RPC_FAR *lpnAtOffset,
    /* [out] */ unsigned long __RPC_FAR *lpnItOffset)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnItOffset);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&lpnTotalAvailable,
                 ( unsigned char __RPC_FAR * )&lpnItems,
                 ( unsigned char __RPC_FAR * )&bRemoteCall,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn,
                 ( unsigned char __RPC_FAR * )&lpnSnOffset,
                 ( unsigned char __RPC_FAR * )&lpnAtOffset,
                 ( unsigned char __RPC_FAR * )&lpnItOffset);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[224],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeShareSetInfoW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long nLevel,
    /* [length_is][size_is][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [in] */ unsigned short sParmNum,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psn,
    /* [in] */ unsigned long snl,
    /* [length_is][size_is][in] */ byte __RPC_FAR *pat,
    /* [in] */ unsigned long atl,
    /* [length_is][size_is][in] */ byte __RPC_FAR *pit,
    /* [in] */ unsigned long itl)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,itl);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[270],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[270],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&sParmNum,
                 ( unsigned char __RPC_FAR * )&psn,
                 ( unsigned char __RPC_FAR * )&snl,
                 ( unsigned char __RPC_FAR * )&pat,
                 ( unsigned char __RPC_FAR * )&atl,
                 ( unsigned char __RPC_FAR * )&pit,
                 ( unsigned char __RPC_FAR * )&itl);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[270],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeSetTrustedShareA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long dwOptions)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwOptions);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[310],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[310],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&dwOptions);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[310],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeSetTrustedShareW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long dwOptions)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwOptions);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[324],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[324],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&dwOptions);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[324],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeGetTrustedShareA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [out] */ unsigned long __RPC_FAR *lpdwOptions,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId0,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId1)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpdwShareModId1);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&lpdwOptions,
                 ( unsigned char __RPC_FAR * )&lpdwShareModId0,
                 ( unsigned char __RPC_FAR * )&lpdwShareModId1);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeGetTrustedShareW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [out] */ unsigned long __RPC_FAR *lpdwOptions,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId0,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId1)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpdwShareModId1);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[362],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[362],
                 ( unsigned char __RPC_FAR * )&lpszShareName,
                 ( unsigned char __RPC_FAR * )&lpdwOptions,
                 ( unsigned char __RPC_FAR * )&lpdwShareModId0,
                 ( unsigned char __RPC_FAR * )&lpdwShareModId1);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[362],
                 ( unsigned char __RPC_FAR * )&lpszShareName);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeTrustedShareEnumA( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[386],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[386],
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&lpnEntriesRead,
                 ( unsigned char __RPC_FAR * )&lpcbTotalAvailable,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[386],
                 ( unsigned char __RPC_FAR * )&nLevel);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeTrustedShareEnumW( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpnSizeToReturn);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[414],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[414],
                 ( unsigned char __RPC_FAR * )&nLevel,
                 ( unsigned char __RPC_FAR * )&lpBuffer,
                 ( unsigned char __RPC_FAR * )&cBufSize,
                 ( unsigned char __RPC_FAR * )&lpnEntriesRead,
                 ( unsigned char __RPC_FAR * )&lpcbTotalAvailable,
                 ( unsigned char __RPC_FAR * )&lpnSizeToReturn);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[414],
                 ( unsigned char __RPC_FAR * )&nLevel);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


unsigned long wwNDdeSpecialCommand( 
    /* [in] */ unsigned long command,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpDataIn,
    /* [in] */ unsigned long nBytesDataIn,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpDataOut,
    /* [out][in] */ unsigned long __RPC_FAR *nOutBufSize)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,nOutBufSize);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 ( unsigned char __RPC_FAR * )&command,
                 ( unsigned char __RPC_FAR * )&lpDataIn,
                 ( unsigned char __RPC_FAR * )&nBytesDataIn,
                 ( unsigned char __RPC_FAR * )&lpDataOut,
                 ( unsigned char __RPC_FAR * )&nOutBufSize);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&nddeapi_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[442],
                 ( unsigned char __RPC_FAR * )&command);
#endif
    return ( unsigned long  )_RetVal.Simple;
    
}


static const MIDL_STUB_DESC nddeapi_StubDesc = 
    {
    (void __RPC_FAR *)& nddeapi___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &hNDdeApi,
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

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  8 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 50 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 56 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 68 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 70 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 92 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 96 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 100 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 108 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 112 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 114 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 122 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 126 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 128 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 130 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 132 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 134 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 138 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 140 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 150 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 154 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 158 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 164 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 166 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 168 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 170 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 174 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 176 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 178 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 180 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 182 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 184 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 186 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 188 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 190 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 192 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 194 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 196 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 198 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 202 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 204 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 210 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 214 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 216 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 218 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 220 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 222 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 224 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 226 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 228 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 230 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 232 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 234 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 236 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 240 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 242 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 244 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 246 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 248 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */
/* 250 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 252 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 254 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 256 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 258 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 260 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 262 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 264 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 266 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 268 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 270 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 272 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 274 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 276 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 278 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 280 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 282 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 284 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 286 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 288 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 292 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 294 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 296 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 298 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 300 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 302 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 304 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 306 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 308 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 310 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 312 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 316 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 318 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 320 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 322 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 324 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 326 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 328 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 330 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 332 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 334 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 340 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 342 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 344 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 346 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 348 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 350 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 352 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 354 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 356 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 358 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 360 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 362 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 364 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 366 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 368 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 370 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 372 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 374 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 376 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 378 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 380 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 382 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 384 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 386 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 388 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 390 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 392 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 398 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 400 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 402 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 404 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 406 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 408 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 410 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 412 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 414 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 416 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 418 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 420 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 422 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 424 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 426 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 428 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 430 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 432 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 434 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 436 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 438 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 440 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 442 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 444 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 448 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 450 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 452 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 454 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 456 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */
/* 460 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 462 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 464 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x1 ),	/* 1 */
/*  8 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 10 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 12 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 16 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0x0,	/* FC_RP */
/* 20 */	NdrFcShort( 0x2 ),	/* Offset= 2 (22) */
/* 22 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 30 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 36 */	
			0x11, 0x0,	/* FC_RP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 48 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 52 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 54 */	
			0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 66 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 80 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 84 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 86 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 88 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 102 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 108 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 110 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 112 */	
			0x11, 0x0,	/* FC_RP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 120 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 124 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 126 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 128 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 130 */	
			0x12, 0x0,	/* FC_UP */
/* 132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (134) */
/* 134 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 138 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 142 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 144 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 146 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x11, 0x0,	/* FC_RP */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 160 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 164 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 166 */	
			0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (170) */
/* 170 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	0x29,		/* 41 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 178 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */

			0x0
        }
    };
