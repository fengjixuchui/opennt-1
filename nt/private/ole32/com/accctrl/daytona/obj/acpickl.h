/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:41 2020
 */
/* Compiler settings for ..\acpickl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#include "midles.h"

#ifndef __acpickl_h__
#define __acpickl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "unknwn.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __AccCntrlPickle_INTERFACE_DEFINED__
#define __AccCntrlPickle_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: AccCntrlPickle
 * at Sun Mar 15 01:24:41 2020
 * using MIDL 3.00.44
 ****************************************/
/* [explicit_handle][unique][version][uuid] */ 


#ifndef UNICODE
#define UNICODE
#else
#define UNICODE_IS_DEFINED
#endif
#ifndef __ACCESS_CONTROL__
#define __ACCESS_CONTROL__
typedef 
enum _TRUSTEE_TYPE
    {	TRUSTEE_IS_UNKNOWN	= 0,
	TRUSTEE_IS_USER	= TRUSTEE_IS_UNKNOWN + 1,
	TRUSTEE_IS_GROUP	= TRUSTEE_IS_USER + 1,
	TRUSTEE_IS_ALIAS	= TRUSTEE_IS_GROUP + 1,
	TRUSTEE_IS_WELL_KNOWN_GROUP	= TRUSTEE_IS_ALIAS + 1,
	TRUSTEE_IS_DELETED	= TRUSTEE_IS_WELL_KNOWN_GROUP + 1,
	TRUSTEE_IS_INVALID	= TRUSTEE_IS_DELETED + 1
    }	TRUSTEE_TYPE;

typedef 
enum _TRUSTEE_FORM
    {	TRUSTEE_IS_SID	= 0,
	TRUSTEE_IS_NAME	= TRUSTEE_IS_SID + 1,
	TRUSTEE_BAD_FORM	= TRUSTEE_IS_NAME + 1
    }	TRUSTEE_FORM;

typedef 
enum _MULTIPLE_TRUSTEE_OPERATION
    {	NO_MULTIPLE_TRUSTEE	= 0,
	TRUSTEE_IS_IMPERSONATE	= NO_MULTIPLE_TRUSTEE + 1
    }	MULTIPLE_TRUSTEE_OPERATION;

typedef struct  _TRUSTEE_A
    {
    struct _TRUSTEE_A __RPC_FAR *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    LPSTR ptstrName;
    }	TRUSTEE_A;

typedef struct _TRUSTEE_A __RPC_FAR *PTRUSTEE_A;

typedef struct _TRUSTEE_A TRUSTEEA;

typedef struct _TRUSTEE_A __RPC_FAR *PTRUSTEEA;

typedef struct  _TRUSTEE_W
    {
    struct _TRUSTEE_W __RPC_FAR *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    /* [switch_is] */ /* [switch_type] */ union 
        {
        /* [case()] */ LPWSTR ptstrName;
        /* [case()] */ SID __RPC_FAR *pSid;
        }	;
    }	TRUSTEE_W;

typedef struct _TRUSTEE_W __RPC_FAR *PTRUSTEE_W;

typedef struct _TRUSTEE_W TRUSTEEW;

typedef struct _TRUSTEE_W __RPC_FAR *PTRUSTEEW;

typedef TRUSTEE_W TRUSTEE_;

typedef PTRUSTEE_W PTRUSTEE_;

typedef TRUSTEEW TRUSTEE;

typedef PTRUSTEEW PTRUSTEE;

typedef 
enum _ACCESS_MODE
    {	NOT_USED_ACCESS	= 0,
	GRANT_ACCESS	= NOT_USED_ACCESS + 1,
	SET_ACCESS	= GRANT_ACCESS + 1,
	DENY_ACCESS	= SET_ACCESS + 1,
	REVOKE_ACCESS	= DENY_ACCESS + 1,
	SET_AUDIT_SUCCESS	= REVOKE_ACCESS + 1,
	SET_AUDIT_FAILURE	= SET_AUDIT_SUCCESS + 1
    }	ACCESS_MODE;

typedef 
enum _SE_OBJECT_TYPE
    {	SE_UNKNOWN_OBJECT_TYPE	= 0,
	SE_FILE_OBJECT	= SE_UNKNOWN_OBJECT_TYPE + 1,
	SE_SERVICE	= SE_FILE_OBJECT + 1,
	SE_PRINTER	= SE_SERVICE + 1,
	SE_REGISTRY_KEY	= SE_PRINTER + 1,
	SE_LMSHARE	= SE_REGISTRY_KEY + 1,
	SE_KERNEL_OBJECT	= SE_LMSHARE + 1,
	SE_WINDOW_OBJECT	= SE_KERNEL_OBJECT + 1,
	SE_DS_OBJECT	= SE_WINDOW_OBJECT + 1,
	SE_DS_OBJECT_ALL	= SE_DS_OBJECT + 1,
	SE_PROVIDER_DEFINED_OBJECT	= SE_DS_OBJECT_ALL + 1
    }	SE_OBJECT_TYPE;

typedef struct  _EXPLICIT_ACCESS_A
    {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_A Trustee;
    }	EXPLICIT_ACCESS_A;

typedef struct _EXPLICIT_ACCESS_A __RPC_FAR *PEXPLICIT_ACCESS_A;

typedef struct _EXPLICIT_ACCESS_A EXPLICIT_ACCESSA;

typedef struct _EXPLICIT_ACCESS_A __RPC_FAR *PEXPLICIT_ACCESSA;

typedef struct  _EXPLICIT_ACCESS_W
    {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_W Trustee;
    }	EXPLICIT_ACCESS_W;

typedef struct _EXPLICIT_ACCESS_W __RPC_FAR *PEXPLICIT_ACCESS_W;

typedef struct _EXPLICIT_ACCESS_W EXPLICIT_ACCESSW;

typedef struct _EXPLICIT_ACCESS_W __RPC_FAR *PEXPLICIT_ACCESSW;

typedef EXPLICIT_ACCESS_W EXPLICIT_ACCESS_;

typedef PEXPLICIT_ACCESS_W PEXPLICIT_ACCESS_;

typedef EXPLICIT_ACCESSW EXPLICIT_ACCESS;

typedef PEXPLICIT_ACCESSW PEXPLICIT_ACCESS;

typedef struct  _ACCESS_REQUEST_W
    {
    DWORD grfAccessPermissions;
    TRUSTEE_W Trustee;
    }	ACCESS_REQUEST_W;

typedef struct _ACCESS_REQUEST_W __RPC_FAR *PACCESS_REQUEST_W;

typedef struct  _ACCESS_REQUEST_A
    {
    DWORD grfAccessPermissions;
    TRUSTEE_A Trustee;
    }	ACCESS_REQUEST_A;

typedef struct _ACCESS_REQUEST_A __RPC_FAR *PACCESS_REQUEST_A;

typedef struct  _AUDIT_REQUEST_W
    {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAuditMode;
    TRUSTEE_W Trustee;
    }	AUDIT_REQUEST_W;

typedef struct _AUDIT_REQUEST_W __RPC_FAR *PAUDIT_REQUEST_W;

typedef struct  _AUDIT_REQUEST_A
    {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAuditMode;
    TRUSTEE_A Trustee;
    }	AUDIT_REQUEST_A;

typedef struct _AUDIT_REQUEST_A __RPC_FAR *PAUDIT_REQUEST_A;

typedef ULONG ACCESS_RIGHTS;

typedef ULONG __RPC_FAR *PACCESS_RIGHTS;

typedef ULONG INHERIT_FLAGS;

typedef ULONG __RPC_FAR *PINHERIT_FLAGS;

typedef struct  _ACTRL_ACCESS_ENTRYA
    {
    TRUSTEE_A Trustee;
    ULONG fAccessFlags;
    ACCESS_RIGHTS Access;
    ACCESS_RIGHTS ProvSpecificAccess;
    INHERIT_FLAGS Inheritance;
    LPSTR lpInheritProperty;
    }	ACTRL_ACCESS_ENTRYA;

typedef struct _ACTRL_ACCESS_ENTRYA __RPC_FAR *PACTRL_ACCESS_ENTRYA;

typedef struct  _ACTRL_ACCESS_ENTRYW
    {
    TRUSTEE_W Trustee;
    ULONG fAccessFlags;
    ACCESS_RIGHTS Access;
    ACCESS_RIGHTS ProvSpecificAccess;
    INHERIT_FLAGS Inheritance;
    LPWSTR lpInheritProperty;
    }	ACTRL_ACCESS_ENTRYW;

typedef struct _ACTRL_ACCESS_ENTRYW __RPC_FAR *PACTRL_ACCESS_ENTRYW;

typedef ACTRL_ACCESS_ENTRYW ACTRL_ACCESS_ENTRY;

typedef PACTRL_ACCESS_ENTRYW PACTRL_ACCESS_ENTRY;

typedef struct  _ACTRL_ACCESS_ENTRY_LISTA
    {
    ULONG cEntries;
    /* [size_is] */ ACTRL_ACCESS_ENTRYA __RPC_FAR *pAccessList;
    }	ACTRL_ACCESS_ENTRY_LISTA;

typedef struct _ACTRL_ACCESS_ENTRY_LISTA __RPC_FAR *PACTRL_ACCESS_ENTRY_LISTA;

typedef struct  _ACTRL_ACCESS_ENTRY_LISTW
    {
    ULONG cEntries;
    /* [size_is] */ PACTRL_ACCESS_ENTRYW pAccessList;
    }	ACTRL_ACCESS_ENTRY_LISTW;

typedef struct _ACTRL_ACCESS_ENTRY_LISTW __RPC_FAR *PACTRL_ACCESS_ENTRY_LISTW;

typedef ACTRL_ACCESS_ENTRY_LISTW ACTRL_ACCESS_ENTRY_LIST;

typedef PACTRL_ACCESS_ENTRY_LISTW PACTRL_ACCESS_ENTRY_LIST;

typedef struct  _ACTRL_PROPERTY_ENTRYA
    {
    LPSTR lpProperty;
    PACTRL_ACCESS_ENTRY_LISTA pAccessEntryList;
    ULONG fListFlags;
    }	ACTRL_PROPERTY_ENTRYA;

typedef struct _ACTRL_PROPERTY_ENTRYA __RPC_FAR *PACTRL_PROPERTY_ENTRYA;

typedef struct  _ACTRL_PROPERTY_ENTRYW
    {
    LPWSTR lpProperty;
    PACTRL_ACCESS_ENTRY_LISTW pAccessEntryList;
    ULONG fListFlags;
    }	ACTRL_PROPERTY_ENTRYW;

typedef struct _ACTRL_PROPERTY_ENTRYW __RPC_FAR *PACTRL_PROPERTY_ENTRYW;

typedef ACTRL_PROPERTY_ENTRYW ACTRL_PROPERTY_ENTRY;

typedef PACTRL_PROPERTY_ENTRYW PACTRL_PROPERTY_ENTRY;

typedef struct  _ACTRL_ALISTA
    {
    ULONG cEntries;
    /* [size_is] */ PACTRL_PROPERTY_ENTRYA pPropertyAccessList;
    }	ACTRL_ACCESSA;

typedef struct _ACTRL_ALISTA __RPC_FAR *PACTRL_ACCESSA;

typedef struct _ACTRL_ALISTA ACTRL_AUDITA;

typedef struct _ACTRL_ALISTA __RPC_FAR *PACTRL_AUDITA;

typedef struct  _ACTRL_ALISTW
    {
    ULONG cEntries;
    /* [size_is] */ PACTRL_PROPERTY_ENTRYW pPropertyAccessList;
    }	ACTRL_ACCESSW;

typedef struct _ACTRL_ALISTW __RPC_FAR *PACTRL_ACCESSW;

typedef struct _ACTRL_ALISTW ACTRL_AUDITW;

typedef struct _ACTRL_ALISTW __RPC_FAR *PACTRL_AUDITW;

typedef ACTRL_ACCESSW ACTRL_ACCESS;

typedef PACTRL_ACCESSW PACTRL_ACCESS;

typedef ACTRL_AUDITW ACTRL_AUDIT;

typedef PACTRL_AUDITW PACTRL_AUDIT;

typedef struct  _TRUSTEE_ACCESSA
    {
    LPSTR lpProperty;
    ACCESS_RIGHTS Access;
    ULONG fAccessFlags;
    ULONG fReturnedAccess;
    }	TRUSTEE_ACCESSA;

typedef struct _TRUSTEE_ACCESSA __RPC_FAR *PTRUSTEE_ACCESSA;

typedef struct  _TRUSTEE_ACCESSW
    {
    LPWSTR lpProperty;
    ACCESS_RIGHTS Access;
    ULONG fAccessFlags;
    ULONG fReturnedAccess;
    }	TRUSTEE_ACCESSW;

typedef struct _TRUSTEE_ACCESSW __RPC_FAR *PTRUSTEE_ACCESSW;

typedef TRUSTEE_ACCESSW TRUSTEE_ACCESS;

typedef PTRUSTEE_ACCESSW PTRUSTEE_ACCESS;

typedef struct  _ACTRL_OVERLAPPED
    {
    ULONG Reserved1;
    ULONG Reserved2;
    HANDLE hEvent;
    }	ACTRL_OVERLAPPED;

typedef struct _ACTRL_OVERLAPPED __RPC_FAR *PACTRL_OVERLAPPED;

typedef struct  _ACTRL_ACCESS_INFOA
    {
    ULONG fAccessPermission;
    LPSTR lpAccessPermissionName;
    }	ACTRL_ACCESS_INFOA;

typedef struct _ACTRL_ACCESS_INFOA __RPC_FAR *PACTRL_ACCESS_INFOA;

typedef struct  _ACTRL_ACCESS_INFOW
    {
    ULONG fAccessPermission;
    LPWSTR lpAccessPermissionName;
    }	ACTRL_ACCESS_INFOW;

typedef struct _ACTRL_ACCESS_INFOW __RPC_FAR *PACTRL_ACCESS_INFOW;

typedef ACTRL_ACCESS_INFOW ACTRL_ACCESS_INFO;

typedef PACTRL_ACCESS_INFOW PACTRL_ACCESS_INFO;

#endif
#ifndef UNICODE_IS_DEFINED
#undef UNICODE
#endif
typedef struct  tagSSID_IDENTIFIER_AUTHORITY
    {
    UCHAR Value[ 6 ];
    }	SSID_IDENTIFIER_AUTHORITY;

typedef struct  tagSTREAM_SID
    {
    UCHAR Revision;
    UCHAR SubAuthorityCount;
    SSID_IDENTIFIER_AUTHORITY IdentifierAuthority;
    /* [size_is] */ ULONG SubAuthority[ 1 ];
    }	STREAM_SID;

typedef struct tagSTREAM_SID __RPC_FAR *PSTREAM_SID;

typedef /* [decode][encode] */ struct  tagSTREAM_ACE
    {
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    TRUSTEE_TYPE TrusteeType;
    TRUSTEE_FORM TrusteeForm;
    LPWSTR pTrusteeName;
    PSTREAM_SID pSID;
    }	STREAM_ACE;

typedef /* [decode][encode] */ struct  tagSTREAM_ACL
    {
    ULONG ulNumOfDenyEntries;
    ULONG ulNumOfGrantEntries;
    /* [size_is] */ STREAM_ACE __RPC_FAR *pACL;
    }	STREAM_ACL;

typedef /* [decode][encode] */ struct  tagSTREAM_HEADER
    {
    ULONG ulStreamVersion;
    ULONG ulPickledSize;
    }	STREAM_HEADER;



extern RPC_IF_HANDLE AccCntrlPickle_v1_0_c_ifspec;
extern RPC_IF_HANDLE AccCntrlPickle_v1_0_s_ifspec;
#endif /* __AccCntrlPickle_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */


size_t
STREAM_ACE_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType);

size_t
STREAM_ACL_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType);

size_t
STREAM_HEADER_AlignSize(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType);


void
STREAM_ACE_Encode(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType);

void
STREAM_ACL_Encode(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType);

void
STREAM_HEADER_Encode(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType);


void
STREAM_ACE_Decode(
    handle_t _MidlEsHandle,
    STREAM_ACE __RPC_FAR * _pType);

void
STREAM_ACL_Decode(
    handle_t _MidlEsHandle,
    STREAM_ACL __RPC_FAR * _pType);

void
STREAM_HEADER_Decode(
    handle_t _MidlEsHandle,
    STREAM_HEADER __RPC_FAR * _pType);

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
