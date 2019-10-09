/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 22:42:21 2019
 */
/* Compiler settings for ndeapi.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __ndeapi_h__
#define __ndeapi_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __nddeapi_INTERFACE_DEFINED__
#define __nddeapi_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: nddeapi
 * at Tue Oct 08 22:42:21 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


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
    /* [in] */ unsigned long itl);

unsigned long wwNDdeShareDelA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long wReserved);

unsigned long wwNDdeShareDelW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long wReserved);

unsigned long wwNDdeGetShareSecurityA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long cbsd,
    /* [in] */ unsigned long bRemoteCall,
    /* [out] */ unsigned long __RPC_FAR *lpcbsdRequired,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

unsigned long wwNDdeGetShareSecurityW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long cbsd,
    /* [in] */ unsigned long bRemoteCall,
    /* [out] */ unsigned long __RPC_FAR *lpcbsdRequired,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

unsigned long wwNDdeSetShareSecurityA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long sdl);

unsigned long wwNDdeSetShareSecurityW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long si,
    /* [length_is][size_is][in] */ byte __RPC_FAR *psd,
    /* [in] */ unsigned long sdl);

unsigned long wwNDdeShareEnumA( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

unsigned long wwNDdeShareEnumW( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

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
    /* [out] */ unsigned long __RPC_FAR *lpnItOffset);

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
    /* [in] */ unsigned long itl);

unsigned long wwNDdeSetTrustedShareA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long dwOptions);

unsigned long wwNDdeSetTrustedShareW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [in] */ unsigned long dwOptions);

unsigned long wwNDdeGetTrustedShareA( 
    /* [ref][string][in] */ unsigned char __RPC_FAR *lpszShareName,
    /* [out] */ unsigned long __RPC_FAR *lpdwOptions,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId0,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId1);

unsigned long wwNDdeGetTrustedShareW( 
    /* [ref][string][in] */ wchar_t __RPC_FAR *lpszShareName,
    /* [out] */ unsigned long __RPC_FAR *lpdwOptions,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId0,
    /* [out] */ unsigned long __RPC_FAR *lpdwShareModId1);

unsigned long wwNDdeTrustedShareEnumA( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

unsigned long wwNDdeTrustedShareEnumW( 
    /* [in] */ unsigned long nLevel,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpBuffer,
    /* [in] */ unsigned long cBufSize,
    /* [out] */ unsigned long __RPC_FAR *lpnEntriesRead,
    /* [out] */ unsigned long __RPC_FAR *lpcbTotalAvailable,
    /* [out] */ unsigned long __RPC_FAR *lpnSizeToReturn);

unsigned long wwNDdeSpecialCommand( 
    /* [in] */ unsigned long command,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpDataIn,
    /* [in] */ unsigned long nBytesDataIn,
    /* [size_is][unique][out][in] */ byte __RPC_FAR *lpDataOut,
    /* [out][in] */ unsigned long __RPC_FAR *nOutBufSize);


extern handle_t hNDdeApi;


extern RPC_IF_HANDLE nddeapi_ClientIfHandle;
extern RPC_IF_HANDLE nddeapi_ServerIfHandle;
#endif /* __nddeapi_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
