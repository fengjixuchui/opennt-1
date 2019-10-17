/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 06:00:51 2019
 */
/* Compiler settings for ..\..\nsimgm.idl:
    Os (OptLev=s), W1, Zp2, env=Win16, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nsimgm_h__
#define __nsimgm_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "nsicom.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __NsiM_INTERFACE_DEFINED__
#define __NsiM_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: NsiM
 * at Thu Oct 17 06:00:51 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


void nsi_group_delete( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_group_mbr_add( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_group_mbr_remove( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_group_mbr_inq_begin( 
    /* [in] */ UNSIGNED32 group_name_syntax,
    /* [in] */ STRING_T group_name,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_group_mbr_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out] */ STRING_T __RPC_FAR *member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_group_mbr_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_delete( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_elt_add( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [in] */ UNSIGNED32 priority,
    /* [in] */ STRING_T annotation,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_elt_remove( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_elt_inq_begin( 
    /* [in] */ UNSIGNED32 profile_name_syntax,
    /* [in] */ STRING_T profile_name,
    /* [in] */ UNSIGNED32 inquiry_type,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 vers_option,
    /* [in] */ UNSIGNED32 member_name_syntax,
    /* [in] */ STRING_T member_name,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_elt_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out][in] */ NSI_IF_ID_P_T if_id,
    /* [out] */ STRING_T __RPC_FAR *member_name,
    /* [out] */ UNSIGNED32 __RPC_FAR *priority,
    /* [out] */ STRING_T __RPC_FAR *annotation,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_profile_elt_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_entry_object_inq_begin( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_entry_object_inq_next( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [out][in] */ NSI_UUID_P_T uuid,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_entry_object_inq_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *inq_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_entry_expand_name( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ STRING_T __RPC_FAR *expanded_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_binding_unexport( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_IF_ID_P_T if_id,
    /* [in] */ UNSIGNED32 vers_option,
    /* [in] */ NSI_UUID_VECTOR_P_T object_uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_entry_delete( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_entry_create( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_entry_inq_if_ids( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [out] */ NSI_IF_ID_VECTOR_T __RPC_FAR *__RPC_FAR *if_id_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_inq_exp_age( 
    /* [out] */ UNSIGNED32 __RPC_FAR *expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_inq_set_age( 
    /* [in] */ UNSIGNED32 expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);


extern handle_t NsiClntBinding;


extern RPC_IF_HANDLE NsiM_ClientIfHandle;
extern RPC_IF_HANDLE NsiM_ServerIfHandle;
#endif /* __NsiM_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER NSI_NS_HANDLE_T_rundown( NSI_NS_HANDLE_T );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
