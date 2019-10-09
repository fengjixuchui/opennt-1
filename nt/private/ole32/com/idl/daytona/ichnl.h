/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:35 2019
 */
/* Compiler settings for ..\ichnl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __ichnl_h__
#define __ichnl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IChannelService_INTERFACE_DEFINED__
#define __IChannelService_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IChannelService
 * at Tue Oct 08 23:37:35 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


typedef 
enum tagCHOP
    {	CHOP_ADD_MARSHALCONNECTION	= 1,
	CHOP_REMOVE_MARSHALCONNECTION	= 2,
	CHOP_TRANSFER_MARSHALCONNECTION	= 3,
	CHOP_LOCK_CONNECTION	= 4,
	CHOP_UNLOCK_CONNECTION	= 5,
	CHOP_DOESSUPPORTIID	= 6,
	CHOP_OPERATION	= 0xff,
	CHOPFLAG_CHECK_OID_ENDPOINT_APT	= 0x100,
	CHOPFLAG_LASTUNLOCKCLOSES	= 0x200
    }	CHOP;

/* client prototype */
/* [input_sync] */ HRESULT _ICS_GetContextHdl( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ SEndPoint __RPC_FAR *caller_bindings,
    /* [out] */ PPOBJCTX ppObjCtx,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
/* [input_sync] */ HRESULT ICS_GetContextHdl( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ SEndPoint __RPC_FAR *caller_bindings,
    /* [out] */ PPOBJCTX ppObjCtx,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
/* [input_sync] */ HRESULT _ICS_ReleaseContextHdl( 
    /* [out][in] */ PPOBJCTX ppObjCtx,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
/* [input_sync] */ HRESULT ICS_ReleaseContextHdl( 
    /* [out][in] */ PPOBJCTX ppObjCtx,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
/* [input_sync] */ HRESULT _ICS_GetChannelId( 
    /* [out][in] */ PPOBJCTX context,
    /* [in] */ SEndPoint __RPC_FAR *caller_bindings,
    /* [in] */ OID ObjectId,
    /* [in] */ DWORD dwFlags,
    /* [in] */ HAPT server,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD dwClientTID,
    /* [out] */ DWORD __RPC_FAR *dwChannelId,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
/* [input_sync] */ HRESULT ICS_GetChannelId( 
    /* [out][in] */ PPOBJCTX context,
    /* [in] */ SEndPoint __RPC_FAR *caller_bindings,
    /* [in] */ OID ObjectId,
    /* [in] */ DWORD dwFlags,
    /* [in] */ HAPT server,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD dwClientTID,
    /* [out] */ DWORD __RPC_FAR *dwChannelId,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _ICS_ReleaseChannel( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ ULONG ulMarshalCnt,
    /* [in] */ BOOL fAsync,
    /* [in] */ GUID logical_thread,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT ICS_ReleaseChannel( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ ULONG ulMarshalCnt,
    /* [in] */ BOOL fAsync,
    /* [in] */ GUID logical_thread,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _ICS_SyncChannelOp( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD chop,
    /* [in] */ HAPT hapt,
    /* [unique][in] */ const GUID __RPC_FAR *pguid,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT ICS_SyncChannelOp( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD chop,
    /* [in] */ HAPT hapt,
    /* [unique][in] */ const GUID __RPC_FAR *pguid,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
/* [input_sync] */ HRESULT _ICS_InputSyncChannelOp( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD chop,
    /* [in] */ HAPT hapt,
    /* [unique][in] */ const GUID __RPC_FAR *pguid,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
/* [input_sync] */ HRESULT ICS_InputSyncChannelOp( 
    /* [in] */ handle_t hRpcBind,
    /* [in] */ DWORD ChannelID,
    /* [in] */ GUID logical_thread,
    /* [in] */ DWORD chop,
    /* [in] */ HAPT hapt,
    /* [unique][in] */ const GUID __RPC_FAR *pguid,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);

/* client prototype */
HRESULT _ICS_RegisterProtseq( 
    /* [in] */ handle_t hRpcBind,
    /* [string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [out] */ SEndPoint __RPC_FAR *__RPC_FAR *ppSEndPoint,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);
/* server prototype */
HRESULT ICS_RegisterProtseq( 
    /* [in] */ handle_t hRpcBind,
    /* [string][in] */ WCHAR __RPC_FAR *pwszProtseq,
    /* [out] */ SEndPoint __RPC_FAR *__RPC_FAR *ppSEndPoint,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat);


extern handle_t any_handle;


extern RPC_IF_HANDLE _IChannelService_ClientIfHandle;
extern RPC_IF_HANDLE IChannelService_ClientIfHandle;
extern RPC_IF_HANDLE IChannelService_ServerIfHandle;
#endif /* __IChannelService_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER POBJCTX_rundown( POBJCTX );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
