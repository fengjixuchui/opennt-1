/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 09:52:45 2019
 */
/* Compiler settings for ..\..\nsiclt.idl:
    Os (OptLev=s), W1, Zp2, env=Win16, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nsiclt_h__
#define __nsiclt_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "nsicom.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __NsiC_INTERFACE_DEFINED__
#define __NsiC_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: NsiC
 * at Sun Oct 13 09:52:45 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][version][uuid] */ 


void nsi_binding_lookup_begin( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_INTERFACE_ID_T __RPC_FAR *if_spec,
    /* [in] */ NSI_UUID_P_T obj_uuid,
    /* [in] */ UNSIGNED32 binding_max_count,
    /* [in] */ UNSIGNED32 ignore,
    /* [out] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_binding_lookup_done( 
    /* [out][in] */ NSI_NS_HANDLE_T __RPC_FAR *import_context,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_binding_lookup_next( 
    /* [in] */ NSI_NS_HANDLE_T import_context,
    /* [out][in] */ NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_mgmt_handle_set_exp_age( 
    /* [in] */ NSI_NS_HANDLE_T inq_context,
    /* [in] */ UNSIGNED32 expiration_age,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);


extern handle_t NsiClntBinding;


extern RPC_IF_HANDLE NsiC_ClientIfHandle;
extern RPC_IF_HANDLE NsiC_ServerIfHandle;
#endif /* __NsiC_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER NSI_NS_HANDLE_T_rundown( NSI_NS_HANDLE_T );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
