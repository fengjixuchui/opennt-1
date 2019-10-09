/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Wed Oct 09 01:20:10 2019
 */
/* Compiler settings for ..\..\nsicom.idl:
    Os (OptLev=s), W1, Zp2, env=Dos, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __nsicom_h__
#define __nsicom_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __NSiTypes_INTERFACE_DEFINED__
#define __NSiTypes_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: NSiTypes
 * at Wed Oct 09 01:20:10 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][uuid] */ 


#pragma warning(disable:4200)
typedef wchar_t UNSIGNED_CHAR_T;

typedef unsigned long UNSIGNED32;

typedef unsigned short UNSIGNED16;

typedef unsigned char UNSIGNED8;

typedef /* [unique][string] */ UNSIGNED_CHAR_T __RPC_FAR *STRING_T;

typedef /* [string] */ UNSIGNED_CHAR_T __RPC_FAR *NSI_STRING_BINDING_T;

typedef /* [context_handle] */ void __RPC_FAR *NSI_NS_HANDLE_T;

typedef struct  _NSI_UUID_T
    {
    UNSIGNED32 time_low;
    UNSIGNED16 time_mid;
    UNSIGNED16 time_hi_and_version;
    UNSIGNED8 clock_seq_hi_and_reserved;
    UNSIGNED8 clock_seq_low;
    UNSIGNED8 node[ 6 ];
    }	NSI_UUID_T;

typedef /* [unique] */ NSI_UUID_T __RPC_FAR *NSI_UUID_P_T;

typedef struct  _NSI_BINDING_T
    {
    NSI_STRING_BINDING_T string;
    UNSIGNED32 entry_name_syntax;
    STRING_T entry_name;
    }	NSI_BINDING_T;

typedef struct  _NSI_BINDING_VECTOR_T
    {
    UNSIGNED32 count;
    /* [size_is] */ NSI_BINDING_T binding[ 1 ];
    }	NSI_BINDING_VECTOR_T;

typedef /* [unique] */ NSI_BINDING_VECTOR_T __RPC_FAR *NSI_BINDING_VECTOR_P_T;

typedef struct  _NSI_SERVER_BINDING_VECTOR_T
    {
    UNSIGNED32 count;
    /* [size_is] */ NSI_STRING_BINDING_T string[ 1 ];
    }	NSI_SERVER_BINDING_VECTOR_T;

typedef /* [unique] */ NSI_SERVER_BINDING_VECTOR_T __RPC_FAR *NSI_SERVER_BINDING_VECTOR_P_T;

typedef struct  _NSI_UUID_VECTOR_T
    {
    UNSIGNED32 count;
    /* [size_is] */ NSI_UUID_P_T uuid[ 1 ];
    }	NSI_UUID_VECTOR_T;

typedef /* [unique] */ NSI_UUID_VECTOR_T __RPC_FAR *NSI_UUID_VECTOR_P_T;

typedef struct  _NSI_SYNTAX_ID_T
    {
    NSI_UUID_T id;
    UNSIGNED32 version;
    }	NSI_SYNTAX_ID_T;

typedef /* [unique] */ NSI_SYNTAX_ID_T __RPC_FAR *NSI_IF_ID_P_T;

typedef struct  _NSI_INTERFACE_ID_T
    {
    NSI_SYNTAX_ID_T Interface;
    NSI_SYNTAX_ID_T TransferSyntax;
    }	NSI_INTERFACE_ID_T;

typedef /* [unique] */ NSI_INTERFACE_ID_T __RPC_FAR *NSI_INTERFACE_ID_P_T;

typedef struct  _NSI_IF_VECTOR_T
    {
    UNSIGNED32 count;
    /* [size_is] */ NSI_IF_ID_P_T if_id[ 1 ];
    }	NSI_IF_ID_VECTOR_T;


enum __MIDL_NSiTypes_0001
    {	NSI_S_OK	= 0,
	NSI_S_NO_MORE_BINDINGS	= NSI_S_OK + 1,
	NSI_S_INTERFACE_NOT_FOUND	= NSI_S_NO_MORE_BINDINGS + 1,
	NSI_S_ENTRY_NOT_FOUND	= NSI_S_INTERFACE_NOT_FOUND + 1,
	NSI_S_NAME_SERVICE_UNAVAILABLE	= NSI_S_ENTRY_NOT_FOUND + 1,
	NSI_S_NO_NS_PRIVILEGE	= NSI_S_NAME_SERVICE_UNAVAILABLE + 1,
	NSI_S_UNSUPPORTED_NAME_SYNTAX	= NSI_S_NO_NS_PRIVILEGE + 1,
	NSI_S_NOTHING_TO_UNEXPORT	= NSI_S_UNSUPPORTED_NAME_SYNTAX + 1,
	NSI_S_INVALID_NAME_SYNTAX	= NSI_S_NOTHING_TO_UNEXPORT + 1,
	NSI_S_INVALID_NS_HANDLE	= NSI_S_INVALID_NAME_SYNTAX + 1,
	NSI_S_INVALID_OBJECT	= NSI_S_INVALID_NS_HANDLE + 1,
	NSI_S_NOT_ALL_OBJS_UNEXPORTED	= NSI_S_INVALID_OBJECT + 1,
	NSI_S_INVALID_STRING_BINDING	= NSI_S_NOT_ALL_OBJS_UNEXPORTED + 1,
	NSI_S_SOME_OTHER_ERROR	= NSI_S_INVALID_STRING_BINDING + 1,
	NSI_S_NOTHING_TO_EXPORT	= NSI_S_SOME_OTHER_ERROR + 1,
	NSI_S_UNIMPLEMENTED_API	= NSI_S_NOTHING_TO_EXPORT + 1,
	NSI_S_NO_INTERFACES_EXPORTED	= NSI_S_UNIMPLEMENTED_API + 1,
	NSI_S_INCOMPLETE_NAME	= NSI_S_NO_INTERFACES_EXPORTED + 1,
	NSI_S_INVALID_VERS_OPTION	= NSI_S_INCOMPLETE_NAME + 1,
	NSI_S_NO_MORE_MEMBERS	= NSI_S_INVALID_VERS_OPTION + 1,
	NSI_S_ENTRY_ALREADY_EXISTS	= NSI_S_NO_MORE_MEMBERS + 1,
	NSI_S_OUT_OF_MEMORY	= NSI_S_ENTRY_ALREADY_EXISTS + 1,
	NSI_S_GROUP_MEMBER_NOT_FOUND	= NSI_S_OUT_OF_MEMORY + 1,
	NSI_S_NO_MASTER_LOCATOR	= NSI_S_GROUP_MEMBER_NOT_FOUND + 1,
	NSI_S_STATUS_MAX	= NSI_S_NO_MASTER_LOCATOR + 1
    };
#pragma warning(default:4200)

extern handle_t NsiSvrBinding;


extern RPC_IF_HANDLE NSiTypes_ClientIfHandle;
extern RPC_IF_HANDLE NSiTypes_ServerIfHandle;
#endif /* __NSiTypes_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
