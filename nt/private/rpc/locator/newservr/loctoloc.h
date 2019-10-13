/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 03:38:42 2019
 */
/* Compiler settings for loctoloc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __loctoloc_h__
#define __loctoloc_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "common.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __LocToLoc_INTERFACE_DEFINED__
#define __LocToLoc_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: LocToLoc
 * at Sun Oct 13 03:38:42 2019
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][unique][version][uuid] */ 


/* client prototype */
void CLIENT_I_nsi_lookup_begin( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [unique][in] */ NSI_SYNTAX_ID_T __RPC_FAR *interfaceid,
    /* [unique][in] */ NSI_SYNTAX_ID_T __RPC_FAR *xfersyntax,
    /* [in] */ NSI_UUID_P_T obj_uuid,
    /* [in] */ UNSIGNED32 binding_max_count,
    /* [in] */ UNSIGNED32 ignore,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_lookup_begin( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [unique][in] */ NSI_SYNTAX_ID_T __RPC_FAR *interfaceid,
    /* [unique][in] */ NSI_SYNTAX_ID_T __RPC_FAR *xfersyntax,
    /* [in] */ NSI_UUID_P_T obj_uuid,
    /* [in] */ UNSIGNED32 binding_max_count,
    /* [in] */ UNSIGNED32 ignore,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_lookup_done( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_lookup_done( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_lookup_next( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ NSI_NS_HANDLE_T import_context,
    /* [out] */ NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_lookup_next( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ NSI_NS_HANDLE_T import_context,
    /* [out] */ NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_entry_object_inq_next( 
    /* [in] */ handle_t hrpcPrimaryLoctorHndl,
    /* [in] */ NSI_NS_HANDLE_T InqContext,
    /* [out] */ NSI_UUID_VECTOR_P_T __RPC_FAR *uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_entry_object_inq_next( 
    /* [in] */ handle_t hrpcPrimaryLoctorHndl,
    /* [in] */ NSI_NS_HANDLE_T InqContext,
    /* [out] */ NSI_UUID_VECTOR_P_T __RPC_FAR *uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_ping_locator( 
    /* [in] */ handle_t hLocatortoPing,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);
/* server prototype */
void I_nsi_ping_locator( 
    /* [in] */ handle_t hLocatortoPing,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_entry_object_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *InqContext,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_entry_object_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *InqContext,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

/* client prototype */
void CLIENT_I_nsi_entry_object_inq_begin( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ UNSIGNED32 EntryNameSyntax,
    /* [in] */ STRING_T EntryName,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *InqContext,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);
/* server prototype */
void I_nsi_entry_object_inq_begin( 
    /* [in] */ handle_t hrpcPrimaryLocatorHndl,
    /* [in] */ UNSIGNED32 EntryNameSyntax,
    /* [in] */ STRING_T EntryName,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *InqContext,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);



extern RPC_IF_HANDLE CLIENT_LocToLoc_ClientIfHandle;
extern RPC_IF_HANDLE LocToLoc_ClientIfHandle;
extern RPC_IF_HANDLE LocToLoc_ServerIfHandle;
#endif /* __LocToLoc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER NSI_NS_HANDLE_T_rundown( NSI_NS_HANDLE_T );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
