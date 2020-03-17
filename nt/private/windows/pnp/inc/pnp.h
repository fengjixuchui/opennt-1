/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 00:31:55 2020
 */
/* Compiler settings for pnp.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __pnp_h__
#define __pnp_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "imports.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __pnp_INTERFACE_DEFINED__
#define __pnp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: pnp
 * at Sun Mar 15 00:31:55 2020
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


typedef /* [unique][handle] */ LPWSTR PNP_HANDLE;

CONFIGRET PNP_Connect( 
    /* [unique][string][in] */ PNP_HANDLE UNCServerName);

CONFIGRET PNP_Disconnect( 
    /* [unique][string][in] */ PNP_HANDLE UNCServerName);

CONFIGRET PNP_GetVersion( 
    /* [in] */ handle_t hBinding,
    /* [out] */ WORD __RPC_FAR *pVersion);

CONFIGRET PNP_GetGlobalState( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulState,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_InitDetection( 
    /* [in] */ handle_t hBinding);

CONFIGRET PNP_ReportLogOn( 
    /* [in] */ handle_t hBinding,
    /* [in] */ BOOL bAdmin);

CONFIGRET PNP_ValidateDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetRootDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [size_is][string][out] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLength);

CONFIGRET PNP_GetRelatedDeviceInstance( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulRelationship,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [size_is][string][out] */ LPWSTR pRelatedDeviceID,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_EnumerateSubKeys( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulBranch,
    /* [in] */ ULONG ulIndex,
    /* [size_is][string][out] */ PWSTR Buffer,
    /* [in] */ ULONG ulLength,
    /* [out] */ PULONG pulRequiredLen,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetDeviceList( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszFilter,
    /* [length_is][size_is][out] */ LPWSTR Buffer,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetDeviceListSize( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszFilter,
    /* [out] */ PULONG pulLen,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetDepth( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [out] */ PULONG pulDepth,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetDeviceRegProp( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulProperty,
    /* [out][in] */ PULONG pulRegDataType,
    /* [length_is][size_is][out] */ LPBYTE Buffer,
    /* [out][in] */ PULONG pulTransferLen,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_SetDeviceRegProp( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulProperty,
    /* [in] */ ULONG ulDataType,
    /* [size_is][in] */ LPBYTE Buffer,
    /* [in] */ ULONG ulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetClassInstance( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [size_is][string][out] */ LPWSTR pszClassInstance,
    /* [in] */ ULONG ulLength);

CONFIGRET PNP_CreateKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszSubKey,
    /* [in] */ REGSAM samDesired,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_DeleteRegistryKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [ref][string][in] */ LPCWSTR pszParentKey,
    /* [ref][string][in] */ LPCWSTR pszChildKey,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetClassCount( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulClassCount,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetClassName( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ PCWSTR pszClassGuid,
    /* [size_is][string][out] */ PWSTR Buffer,
    /* [out][in] */ PULONG pulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_DeleteClassKey( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ PCWSTR pszClassGuid,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_CreateDevInst( 
    /* [in] */ handle_t hBinding,
    /* [size_is][string][out][in] */ LPWSTR pszDeviceID,
    /* [ref][string][in] */ LPWSTR pszParentDeviceID,
    /* [in] */ ULONG ulLength,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_DeviceInstanceAction( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulMajorAction,
    /* [in] */ ULONG ulMinorAction,
    /* [unique][string][in] */ PCWSTR pszDeviceInstance1,
    /* [unique][string][in] */ PCWSTR pszDeviceInstance2);

CONFIGRET PNP_GetDeviceStatus( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pDeviceID,
    /* [out] */ PULONG pulStatus,
    /* [out] */ PULONG pulProblem,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_UninstallDevInst( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_AddID( 
    /* [in] */ handle_t hBinding,
    /* [unique][string][in] */ LPCWSTR pszDeviceID,
    /* [ref][string][in] */ LPCWSTR pszID,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_HwProfFlags( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulAction,
    /* [ref][string][in] */ LPCWSTR pDeviceID,
    /* [in] */ ULONG ulConfig,
    /* [out][in] */ PULONG pulValue,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetHwProfInfo( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulIndex,
    /* [ref][out][in] */ HWPROFILEINFO __RPC_FAR *pHWProfileInfo,
    /* [in] */ ULONG ulProfileInfoSize,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_AddEmptyLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulPriority,
    /* [out] */ PULONG pulLogConfTag,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_FreeLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetFirstLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [out] */ PULONG pulLogConfTag,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetNextLogConf( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ ULONG ulCurrentTag,
    /* [out] */ PULONG pulNextTag,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_AddResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [out] */ PULONG pulResourceTag,
    /* [size_is][in] */ LPBYTE ResourceData,
    /* [in] */ ULONG ResourceLen,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_FreeResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulPreviousResType,
    /* [out] */ PULONG pulPreviousResTag,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetNextResDes( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulNextResDesTag,
    /* [out] */ PULONG pulNextResDesType,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetResDesData( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [size_is][out] */ LPBYTE Buffer,
    /* [in] */ ULONG BufferLen,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_GetResDesDataSize( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ ULONG ulLogConfTag,
    /* [in] */ ULONG ulLogConfType,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulResourceTag,
    /* [out] */ PULONG pulSize,
    /* [in] */ ULONG ulFlags);

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
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_DetectResourceConflict( 
    /* [in] */ handle_t hBinding,
    /* [ref][string][in] */ LPWSTR pDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [size_is][in] */ LPBYTE ResourceData,
    /* [in] */ ULONG ResourceLen,
    /* [out] */ PBOOL pbConflictDetected,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_SetHwProf( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulHardwareProfile,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_QueryArbitratorFreeData( 
    /* [in] */ handle_t hBinding,
    /* [size_is][out] */ LPBYTE pData,
    /* [in] */ ULONG ulDataLen,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_QueryArbitratorFreeSize( 
    /* [in] */ handle_t hBinding,
    /* [out] */ PULONG pulSize,
    /* [ref][string][in] */ LPCWSTR pszDeviceID,
    /* [in] */ RESOURCEID ResourceID,
    /* [in] */ ULONG ulFlags);

CONFIGRET PNP_RunDetection( 
    /* [in] */ handle_t hBinding,
    /* [in] */ ULONG ulFlags);


extern handle_t pnp_handle;


extern RPC_IF_HANDLE pnp_ClientIfHandle;
extern RPC_IF_HANDLE pnp_ServerIfHandle;
#endif /* __pnp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

handle_t __RPC_USER PNP_HANDLE_bind  ( PNP_HANDLE );
void     __RPC_USER PNP_HANDLE_unbind( PNP_HANDLE, handle_t );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
