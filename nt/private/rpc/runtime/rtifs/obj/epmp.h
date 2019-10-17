/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 16:17:36 2019
 */
/* Compiler settings for epmp.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __epmp_h__
#define __epmp_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "nbase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __epmp_INTERFACE_DEFINED__
#define __epmp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: epmp
 * at Thu Oct 17 16:17:36 2019
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][full][version][uuid] */ 


#define	ep_max_annotation_size	( 64 )

#define	EP_S_SUCCESS	( 0 )

#define	EP_S_CANT_PERFORM_OP	( 0x16c9a0cd )

#define	EP_S_DATABASE_INVALID	( 0x16c9a0cf )

#define	EP_S_CANT_CREATE	( 0x16c9a0d0 )

#define	EP_S_CANT_ACCESS	( 0x16c9a0d1 )

#define	EP_S_BAD_ENTRY	( 0x16c9a0d3 )

#define	EP_S_UPDATA_FAILED	( 0x16c9a0d4 )

#define	EP_S_NOT_REGISTERED	( 0x16c9a0d6 )

#define	EP_S_SERVER_UNAVAILABLE	( 0x16c9a0d7 )

typedef unsigned long ulong;

typedef unsigned32 error_status;

typedef /* [context_handle] */ void __RPC_FAR *ept_lookup_handle_t;

typedef struct  _twr_t
    {
    unsigned32 tower_length;
    /* [size_is] */ byte tower_octet_string[ 1 ];
    }	twr_t;

typedef struct _twr_t __RPC_FAR *twr_p_t;

typedef /* [public][public][public][public][public] */ struct  __MIDL_epmp_0001
    {
    UUID object;
    twr_p_t tower;
    /* [string] */ unsigned char annotation[ 64 ];
    }	ept_entry_t;

typedef /* [full] */ ept_entry_t __RPC_FAR *ept_entry_p_t;

typedef struct  _I_Tower
    {
    twr_p_t Tower;
    }	I_Tower;

void ept_insert( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [in] */ unsigned long replace,
    /* [out] */ error_status __RPC_FAR *status);

void ept_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 num_ents,
    /* [size_is][in] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);

void ept_lookup( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ unsigned32 inquiry_type,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ RPC_IF_ID __RPC_FAR *Ifid,
    /* [in] */ unsigned32 vers_option,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_ents,
    /* [out] */ unsigned32 __RPC_FAR *num_ents,
    /* [size_is][length_is][out] */ ept_entry_t __RPC_FAR entries[  ],
    /* [out] */ error_status __RPC_FAR *status);

/* [optimize] */ void ept_map( 
    /* [in] */ handle_t hEpMapper,
    /* [full][in] */ UUID __RPC_FAR *obj,
    /* [full][in] */ twr_p_t map_tower,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [in] */ unsigned32 max_towers,
    /* [out] */ unsigned32 __RPC_FAR *num_towers,
    /* [length_is][size_is][out] */ twr_p_t __RPC_FAR *ITowers,
    /* [out] */ error_status __RPC_FAR *status);

void ept_lookup_handle_free( 
    /* [in] */ handle_t h,
    /* [out][in] */ ept_lookup_handle_t __RPC_FAR *entry_handle,
    /* [out] */ error_status __RPC_FAR *status);

void ept_inq_object( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ UUID __RPC_FAR *ept_object,
    /* [out] */ error_status __RPC_FAR *status);

void ept_mgmt_delete( 
    /* [in] */ handle_t hEpMapper,
    /* [in] */ boolean32 object_speced,
    /* [full][in] */ UUID __RPC_FAR *object,
    /* [full][in] */ twr_p_t tower,
    /* [out] */ error_status __RPC_FAR *status);



extern RPC_IF_HANDLE epmp_ClientIfHandle;
extern RPC_IF_HANDLE epmp_ServerIfHandle;
#endif /* __epmp_INTERFACE_DEFINED__ */

#ifndef __localepmp_INTERFACE_DEFINED__
#define __localepmp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: localepmp
 * at Thu Oct 17 16:17:36 2019
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][version][uuid] */ 


typedef /* [context_handle] */ void __RPC_FAR *HPROCESS;

/* [fault_status][comm_status] */ error_status_t OpenEndpointMapper( 
    /* [in] */ handle_t hServer,
    /* [out] */ HPROCESS __RPC_FAR *pProcessHandle);

typedef /* [public][public][v1_enum] */ 
enum __MIDL_localepmp_0001
    {	PORT_INTERNET	= 1,
	PORT_INTRANET	= PORT_INTERNET + 1,
	PORT_DEFAULT	= PORT_INTRANET + 1
    }	PORT_TYPE;

/* [fault_status][comm_status] */ error_status_t AllocateReservedIPPort( 
    /* [in] */ HPROCESS hProcess,
    /* [in] */ PORT_TYPE DesiredPort,
    /* [out] */ long __RPC_FAR *pAllocationStatus,
    /* [out] */ unsigned short __RPC_FAR *pPort);



extern RPC_IF_HANDLE localepmp_ClientIfHandle;
extern RPC_IF_HANDLE localepmp_ServerIfHandle;
#endif /* __localepmp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER ept_lookup_handle_t_rundown( ept_lookup_handle_t );
void __RPC_USER HPROCESS_rundown( HPROCESS );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
