/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 03:38:40 2019
 */
/* Compiler settings for nsisvr.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nsisvr_h__
#define __nsisvr_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "common.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __NsiS_INTERFACE_DEFINED__
#define __NsiS_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: NsiS
 * at Sun Oct 13 03:38:40 2019
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][unique][version][uuid] */ 


void nsi_binding_export( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_INTERFACE_ID_T __RPC_FAR *interface_object,
    /* [in] */ NSI_SERVER_BINDING_VECTOR_P_T binding,
    /* [in] */ NSI_UUID_VECTOR_P_T object_uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);

void nsi_binding_unexport( 
    /* [in] */ UNSIGNED32 entry_name_syntax,
    /* [in] */ STRING_T entry_name,
    /* [in] */ NSI_INTERFACE_ID_T __RPC_FAR *interface_object,
    /* [in] */ NSI_UUID_VECTOR_P_T object_uuid_vec,
    /* [out] */ UNSIGNED16 __RPC_FAR *status);



extern RPC_IF_HANDLE NsiS_ClientIfHandle;
extern RPC_IF_HANDLE NsiS_ServerIfHandle;
#endif /* __NsiS_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
