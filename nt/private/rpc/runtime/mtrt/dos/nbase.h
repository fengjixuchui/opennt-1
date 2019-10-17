/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 05:58:54 2019
 */
/* Compiler settings for ..\nbase.idl:
    Os (OptLev=s), W1, Zp2, env=Dos, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nbase_h__
#define __nbase_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __nbase_INTERFACE_DEFINED__
#define __nbase_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: nbase
 * at Thu Oct 17 05:58:54 2019
 * using MIDL 3.00.44
 ****************************************/
/* [full][local] */ 


typedef unsigned long unsigned32;

typedef unsigned long boolean32;

#ifndef GUID_DEFINED
#define GUID_DEFINED
typedef struct  _GUID
    {
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[ 8 ];
    }	GUID;

#endif
#ifndef UUID_DEFINED
#define UUID_DEFINED
typedef GUID UUID;

#endif
#ifndef IFID_DEFINED
#define IFID_DEFINED
typedef struct  _RPC_IF_ID
    {
    UUID Uuid;
    unsigned short VersMajor;
    unsigned short VersMinor;
    }	RPC_IF_ID;

#endif


extern RPC_IF_HANDLE nbase_ClientIfHandle;
extern RPC_IF_HANDLE nbase_ServerIfHandle;
#endif /* __nbase_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
