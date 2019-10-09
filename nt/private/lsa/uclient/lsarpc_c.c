/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:57:51 2019
 */
/* Compiler settings for lsarpc.idl, lsacli.acf:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "lsarpc_c.h"

#define TYPE_FORMAT_STRING_SIZE   1407                              
#define PROC_FORMAT_STRING_SIZE   1189                              

typedef struct _MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } MIDL_TYPE_FORMAT_STRING;

typedef struct _MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } MIDL_PROC_FORMAT_STRING;


extern const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString;
extern const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString;

/* Standard interface: lsarpc, ver. 0.0,
   GUID={0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */

handle_t IgnoreThisHandle;


static const RPC_CLIENT_INTERFACE lsarpc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345778,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{0,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE lsarpc_ClientIfHandle = (RPC_IF_HANDLE)& lsarpc___RpcClientInterface;

extern const MIDL_STUB_DESC lsarpc_StubDesc;

static RPC_BINDING_HANDLE lsarpc__MIDL_AutoBindHandle;


NTSTATUS LsarClose( 
    /* [out][in] */ LSAPR_HANDLE __RPC_FAR *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ObjectHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDelete( 
    /* [in] */ LSAPR_HANDLE ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ObjectHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumeratePrivileges( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_PRIVILEGE_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PreferedMaximumLength);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&EnumerationBuffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQuerySecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [out] */ PLSAPR_SR_SECURITY_DESCRIPTOR __RPC_FAR *SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecurityDescriptor);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64],
                 ( unsigned char __RPC_FAR * )&ObjectHandle,
                 ( unsigned char __RPC_FAR * )&SecurityInformation,
                 ( unsigned char __RPC_FAR * )&SecurityDescriptor);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecurityObject( 
    /* [in] */ LSAPR_HANDLE ObjectHandle,
    /* [in] */ SECURITY_INFORMATION SecurityInformation,
    /* [in] */ PLSAPR_SR_SECURITY_DESCRIPTOR SecurityDescriptor)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecurityDescriptor);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 ( unsigned char __RPC_FAR * )&ObjectHandle,
                 ( unsigned char __RPC_FAR * )&SecurityInformation,
                 ( unsigned char __RPC_FAR * )&SecurityDescriptor);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[88],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarChangePassword( 
    /* [in] */ PLSAPR_UNICODE_STRING ServerName,
    /* [in] */ PLSAPR_UNICODE_STRING DomainName,
    /* [in] */ PLSAPR_UNICODE_STRING AccountName,
    /* [in] */ PLSAPR_UNICODE_STRING OldPassword,
    /* [in] */ PLSAPR_UNICODE_STRING NewPassword)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,NewPassword);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&ServerName,
                 ( unsigned char __RPC_FAR * )&DomainName,
                 ( unsigned char __RPC_FAR * )&AccountName,
                 ( unsigned char __RPC_FAR * )&OldPassword,
                 ( unsigned char __RPC_FAR * )&NewPassword);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112],
                 ( unsigned char __RPC_FAR * )&ServerName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenPolicy( 
    /* [unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PolicyHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[140],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[140],
                 ( unsigned char __RPC_FAR * )&SystemName,
                 ( unsigned char __RPC_FAR * )&ObjectAttributes,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[140],
                 ( unsigned char __RPC_FAR * )&SystemName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_POLICY_INFORMATION __RPC_FAR *PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PolicyInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&PolicyInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[168],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationPolicy( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ POLICY_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_POLICY_INFORMATION PolicyInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PolicyInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[192],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[192],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&PolicyInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[192],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarClearAuditLog( 
    /* [in] */ LSAPR_HANDLE PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PolicyHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *AccountHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,AccountHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[234],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[234],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&AccountSid,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[234],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccounts( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PreferedMaximumLength);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[262],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[262],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&EnumerationBuffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[262],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_TRUST_INFORMATION TrustedDomainInformation,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[290],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[290],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&TrustedDomainInformation,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[290],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateTrustedDomains( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [out][in] */ PLSA_ENUMERATION_HANDLE EnumerationContext,
    /* [out] */ PLSAPR_TRUSTED_ENUM_BUFFER EnumerationBuffer,
    /* [in] */ ULONG PreferedMaximumLength)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PreferedMaximumLength);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&EnumerationContext,
                 ( unsigned char __RPC_FAR * )&EnumerationBuffer,
                 ( unsigned char __RPC_FAR * )&PreferedMaximumLength);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[318],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupNames( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ ULONG Count,
    /* [size_is][in] */ PLSAPR_UNICODE_STRING Names,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_SIDS TranslatedSids,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ PULONG MappedCount)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MappedCount);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[346],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[346],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&Count,
                 ( unsigned char __RPC_FAR * )&Names,
                 ( unsigned char __RPC_FAR * )&ReferencedDomains,
                 ( unsigned char __RPC_FAR * )&TranslatedSids,
                 ( unsigned char __RPC_FAR * )&LookupLevel,
                 ( unsigned char __RPC_FAR * )&MappedCount);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[346],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupSids( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID_ENUM_BUFFER SidEnumBuffer,
    /* [out] */ PLSAPR_REFERENCED_DOMAIN_LIST __RPC_FAR *ReferencedDomains,
    /* [out][in] */ PLSAPR_TRANSLATED_NAMES TranslatedNames,
    /* [in] */ LSAP_LOOKUP_LEVEL LookupLevel,
    /* [out][in] */ PULONG MappedCount)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,MappedCount);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&SidEnumBuffer,
                 ( unsigned char __RPC_FAR * )&ReferencedDomains,
                 ( unsigned char __RPC_FAR * )&TranslatedNames,
                 ( unsigned char __RPC_FAR * )&LookupLevel,
                 ( unsigned char __RPC_FAR * )&MappedCount);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[384],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarCreateSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *SecretHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecretHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[420],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[420],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&SecretName,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&SecretHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[420],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenAccount( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *AccountHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,AccountHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[448],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[448],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&AccountSid,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[448],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumeratePrivilegesAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PLSAPR_PRIVILEGE_SET __RPC_FAR *Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Privileges);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[476],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[476],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&Privileges);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[476],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddPrivilegesToAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Privileges);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[498],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[498],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&Privileges);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[498],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRemovePrivilegesFromAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ BOOLEAN AllPrivileges,
    /* [unique][in] */ PLSAPR_PRIVILEGE_SET Privileges)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Privileges);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[520],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[520],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&AllPrivileges,
                 ( unsigned char __RPC_FAR * )&Privileges);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[520],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarGetQuotasForAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PQUOTA_LIMITS QuotaLimits)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,QuotaLimits);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[544],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[544],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&QuotaLimits);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[544],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetQuotasForAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ PQUOTA_LIMITS QuotaLimits)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,QuotaLimits);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[566],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[566],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&QuotaLimits);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[566],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarGetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [out] */ PULONG SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SystemAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[588],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[588],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&SystemAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[588],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSystemAccessAccount( 
    /* [in] */ LSAPR_HANDLE AccountHandle,
    /* [in] */ ULONG SystemAccess)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SystemAccess);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[610],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[610],
                 ( unsigned char __RPC_FAR * )&AccountHandle,
                 ( unsigned char __RPC_FAR * )&SystemAccess);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[610],
                 ( unsigned char __RPC_FAR * )&AccountHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID TrustedDomainSid,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *TrustedDomainHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[630],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[630],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&TrustedDomainSid,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[630],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryInfoTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[658],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[658],
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&TrustedDomainInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[658],
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetInformationTrustedDomain( 
    /* [in] */ LSAPR_HANDLE TrustedDomainHandle,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&TrustedDomainInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[682],
                 ( unsigned char __RPC_FAR * )&TrustedDomainHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenSecret( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING SecretName,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *SecretHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,SecretHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[706],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[706],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&SecretName,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&SecretHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[706],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetSecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedCurrentValue,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedOldValue)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,EncryptedOldValue);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[734],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[734],
                 ( unsigned char __RPC_FAR * )&SecretHandle,
                 ( unsigned char __RPC_FAR * )&EncryptedCurrentValue,
                 ( unsigned char __RPC_FAR * )&EncryptedOldValue);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[734],
                 ( unsigned char __RPC_FAR * )&SecretHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQuerySecret( 
    /* [in] */ LSAPR_HANDLE SecretHandle,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedCurrentValue,
    /* [unique][out][in] */ PLARGE_INTEGER CurrentValueSetTime,
    /* [unique][out][in] */ PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedOldValue,
    /* [unique][out][in] */ PLARGE_INTEGER OldValueSetTime)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,OldValueSetTime);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[760],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[760],
                 ( unsigned char __RPC_FAR * )&SecretHandle,
                 ( unsigned char __RPC_FAR * )&EncryptedCurrentValue,
                 ( unsigned char __RPC_FAR * )&CurrentValueSetTime,
                 ( unsigned char __RPC_FAR * )&EncryptedOldValue,
                 ( unsigned char __RPC_FAR * )&OldValueSetTime);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[760],
                 ( unsigned char __RPC_FAR * )&SecretHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeValue( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING Name,
    /* [out] */ PLUID Value)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Value);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[794],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[794],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&Value);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[794],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLUID Value,
    /* [out] */ PLSAPR_UNICODE_STRING __RPC_FAR *Name)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Name);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[820],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[820],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&Value,
                 ( unsigned char __RPC_FAR * )&Name);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[820],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarLookupPrivilegeDisplayName( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING Name,
    /* [in] */ SHORT ClientLanguage,
    /* [in] */ SHORT ClientSystemDefaultLanguage,
    /* [out] */ PLSAPR_UNICODE_STRING __RPC_FAR *DisplayName,
    /* [out] */ PWORD LanguageReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,LanguageReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&ClientLanguage,
                 ( unsigned char __RPC_FAR * )&ClientSystemDefaultLanguage,
                 ( unsigned char __RPC_FAR * )&DisplayName,
                 ( unsigned char __RPC_FAR * )&LanguageReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteObject( 
    /* [out][in] */ LSAPR_HANDLE __RPC_FAR *ObjectHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ObjectHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[880],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[880],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[880],
                 ( unsigned char __RPC_FAR * )&ObjectHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountsWithUserRight( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [unique][in] */ PLSAPR_UNICODE_STRING UserRight,
    /* [out] */ PLSAPR_ACCOUNT_ENUM_BUFFER EnumerationBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,EnumerationBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[898],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[898],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&UserRight,
                 ( unsigned char __RPC_FAR * )&EnumerationBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[898],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarEnumerateAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [out] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserRights);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&AccountSid,
                 ( unsigned char __RPC_FAR * )&UserRights);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarAddAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserRights);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&AccountSid,
                 ( unsigned char __RPC_FAR * )&UserRights);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRemoveAccountRights( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID AccountSid,
    /* [in] */ BOOLEAN AllRights,
    /* [in] */ PLSAPR_USER_RIGHT_SET UserRights)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,UserRights);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[976],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[976],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&AccountSid,
                 ( unsigned char __RPC_FAR * )&AllRights,
                 ( unsigned char __RPC_FAR * )&UserRights);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[976],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarQueryTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][out] */ PLSAPR_TRUSTED_DOMAIN_INFO __RPC_FAR *TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&TrustedDomainSid,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&TrustedDomainInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1004],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarSetTrustedDomainInfo( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID TrustedDomainSid,
    /* [in] */ TRUSTED_INFORMATION_CLASS InformationClass,
    /* [switch_is][in] */ PLSAPR_TRUSTED_DOMAIN_INFO TrustedDomainInformation)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainInformation);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1032],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1032],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&TrustedDomainSid,
                 ( unsigned char __RPC_FAR * )&InformationClass,
                 ( unsigned char __RPC_FAR * )&TrustedDomainInformation);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1032],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarDeleteTrustedDomain( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_SID TrustedDomainSid)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,TrustedDomainSid);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1060],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1060],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&TrustedDomainSid);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1060],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarStorePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING KeyName,
    /* [unique][in] */ PLSAPR_CR_CIPHER_VALUE EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,EncryptedData);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1082],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1082],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&KeyName,
                 ( unsigned char __RPC_FAR * )&EncryptedData);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1082],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarRetrievePrivateData( 
    /* [in] */ LSAPR_HANDLE PolicyHandle,
    /* [in] */ PLSAPR_UNICODE_STRING KeyName,
    /* [out][in] */ PLSAPR_CR_CIPHER_VALUE __RPC_FAR *EncryptedData)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,EncryptedData);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1108],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1108],
                 ( unsigned char __RPC_FAR * )&PolicyHandle,
                 ( unsigned char __RPC_FAR * )&KeyName,
                 ( unsigned char __RPC_FAR * )&EncryptedData);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1108],
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarOpenPolicy2( 
    /* [string][unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [in] */ PLSAPR_OBJECT_ATTRIBUTES ObjectAttributes,
    /* [in] */ ACCESS_MASK DesiredAccess,
    /* [out] */ LSAPR_HANDLE __RPC_FAR *PolicyHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,PolicyHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1134],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1134],
                 ( unsigned char __RPC_FAR * )&SystemName,
                 ( unsigned char __RPC_FAR * )&ObjectAttributes,
                 ( unsigned char __RPC_FAR * )&DesiredAccess,
                 ( unsigned char __RPC_FAR * )&PolicyHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1134],
                 ( unsigned char __RPC_FAR * )&SystemName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}


NTSTATUS LsarGetUserName( 
    /* [string][unique][in] */ PLSAPR_SERVER_NAME SystemName,
    /* [out][in] */ PLSAPR_UNICODE_STRING __RPC_FAR *UserName,
    /* [unique][out][in] */ PLSAPR_UNICODE_STRING __RPC_FAR *DomainName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,DomainName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1162],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1162],
                 ( unsigned char __RPC_FAR * )&SystemName,
                 ( unsigned char __RPC_FAR * )&UserName,
                 ( unsigned char __RPC_FAR * )&DomainName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&lsarpc_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1162],
                 ( unsigned char __RPC_FAR * )&SystemName);
#endif
    return ( NTSTATUS  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1];
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC lsarpc_StubDesc = 
    {
    (void __RPC_FAR *)& lsarpc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IgnoreThisHandle,
    0,
    BindingRoutines,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x10001, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)PLSAPR_SERVER_NAME_bind,
            (GENERIC_UNBIND_ROUTINE)PLSAPR_SERVER_NAME_unbind
         }
        
        };


static void __RPC_USER lsarpc__LSAPR_ACLExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    struct _LSAPR_ACL __RPC_FAR *pS	=	( struct _LSAPR_ACL __RPC_FAR * )(pStubMsg->StackTop - 4);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->AclSize - 4;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    lsarpc__LSAPR_ACLExprEval_0000
    };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/*  6 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 16 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 20 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 24 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 28 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 38 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 42 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 46 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 52 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 56 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x10 ),	/* Type Offset=16 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 66 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 70 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 78 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 80 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 82 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 84 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */
/* 86 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 94 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 96 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 98 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 100 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 104 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x9e ),	/* Type Offset=158 */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	0x32,		/* FC_BIND_PRIMITIVE */
			0x40,		/* 64 */
/* 114 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 118 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 122 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 124 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 126 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 128 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 130 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 132 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 134 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 138 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 140 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 142 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 144 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 146 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 150 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 154 */	NdrFcShort( 0xbc ),	/* Type Offset=188 */
/* 156 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 158 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */
/* 160 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 162 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 166 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 168 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 170 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 174 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 178 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 184 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 186 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 188 */	NdrFcShort( 0x1a8 ),	/* Type Offset=424 */
/* 190 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 192 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 196 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 198 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 202 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 204 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 208 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 218 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 222 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 228 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 230 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 232 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 234 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 236 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 238 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 240 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 244 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 246 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 248 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 250 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 252 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 254 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 256 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 258 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 260 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 262 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 264 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 268 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 270 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 272 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 274 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 276 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 278 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 280 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 282 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 284 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */
/* 286 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 288 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 290 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 292 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 294 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 296 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 298 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 300 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 302 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 304 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 306 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 308 */	NdrFcShort( 0x32c ),	/* Type Offset=812 */
/* 310 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 312 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 314 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 316 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 318 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 320 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 324 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 328 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 330 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 332 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 334 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 336 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 338 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 340 */	NdrFcShort( 0x330 ),	/* Type Offset=816 */
/* 342 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 344 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 346 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 348 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 352 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 354 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 356 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 358 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 360 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 362 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 364 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 366 */	NdrFcShort( 0x370 ),	/* Type Offset=880 */
/* 368 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 370 */	NdrFcShort( 0x394 ),	/* Type Offset=916 */
/* 372 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 374 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */
/* 376 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 378 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 380 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 382 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 384 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 386 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 388 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 390 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 396 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 398 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 400 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 402 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */
/* 404 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 406 */	NdrFcShort( 0x394 ),	/* Type Offset=916 */
/* 408 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 410 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */
/* 412 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 414 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 416 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 418 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 420 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 422 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 424 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 426 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 428 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 430 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 432 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 434 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 436 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 438 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 440 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 442 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 444 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 446 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 448 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 450 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 454 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 456 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 458 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 460 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 462 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 464 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 466 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 468 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 470 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 472 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 474 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 476 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 478 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 480 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 482 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 484 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 486 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 488 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 490 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 492 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 494 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */
/* 496 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 498 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 500 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 502 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 504 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 508 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 510 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 512 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 514 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 516 */	NdrFcShort( 0x464 ),	/* Type Offset=1124 */
/* 518 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 520 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 522 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 526 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 528 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 530 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 532 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 534 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 536 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 538 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 540 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 542 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 544 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 546 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 550 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 552 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 554 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 556 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 558 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 560 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 562 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */
/* 564 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 566 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 568 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 570 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 572 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 574 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 576 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 578 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 580 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 582 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 584 */	NdrFcShort( 0x468 ),	/* Type Offset=1128 */
/* 586 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 588 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 590 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 592 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 594 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 598 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 600 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 602 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 604 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 606 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 608 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 610 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 612 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 616 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 620 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 622 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 624 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 626 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 628 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 630 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 632 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 634 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 636 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 640 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 642 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 644 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 646 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 648 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 650 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 652 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 654 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 656 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 658 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 660 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 664 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 666 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 668 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 670 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 672 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 674 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 676 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 678 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */
/* 680 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 682 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 684 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 688 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 690 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 696 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 698 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 700 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 702 */	NdrFcShort( 0x516 ),	/* Type Offset=1302 */
/* 704 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 706 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 708 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 712 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 714 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 716 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 718 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 720 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 722 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 724 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 726 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 728 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 730 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 732 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 734 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 736 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 738 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 740 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 742 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 744 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 746 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 748 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 750 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 752 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */
/* 754 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 756 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */
/* 758 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 760 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 762 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 766 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 768 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 770 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 772 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 774 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 776 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 778 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */
/* 780 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 782 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */
/* 784 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 786 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */
/* 788 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 790 */	NdrFcShort( 0x52a ),	/* Type Offset=1322 */
/* 792 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 794 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 796 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 798 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 800 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 802 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 804 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 806 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 808 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 810 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 812 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 814 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 816 */	NdrFcShort( 0x52e ),	/* Type Offset=1326 */
/* 818 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 820 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 822 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 826 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 828 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 830 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 832 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 834 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 836 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 838 */	NdrFcShort( 0x52e ),	/* Type Offset=1326 */
/* 840 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 842 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */
/* 844 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 846 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 848 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 852 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 854 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 856 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 858 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 860 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 862 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 864 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 866 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 868 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 870 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 872 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */
/* 874 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 876 */	NdrFcShort( 0x53a ),	/* Type Offset=1338 */
/* 878 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 880 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 882 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 884 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 886 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 888 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 890 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 892 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 894 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 896 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 898 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 900 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 904 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 906 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 908 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 910 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 912 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 914 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 916 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */
/* 918 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 920 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */
/* 922 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 924 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 926 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 928 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 930 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 936 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 938 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 940 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 942 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 944 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 946 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */
/* 948 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 950 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 952 */	NdrFcShort( 0x25 ),	/* 37 */
#ifndef _ALPHA_
/* 954 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 956 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 960 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 962 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 964 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 966 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 968 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 970 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 972 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */
/* 974 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 976 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 978 */	NdrFcShort( 0x26 ),	/* 38 */
#ifndef _ALPHA_
/* 980 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 982 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 984 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 986 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 988 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 990 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 992 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 994 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 996 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x2,		/* FC_CHAR */
/* 998 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1000 */	NdrFcShort( 0x53e ),	/* Type Offset=1342 */
/* 1002 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1004 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1006 */	NdrFcShort( 0x27 ),	/* 39 */
#ifndef _ALPHA_
/* 1008 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1010 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1012 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1014 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1016 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1018 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1020 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1022 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 1024 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1026 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1028 */	NdrFcShort( 0x556 ),	/* Type Offset=1366 */
/* 1030 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1032 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1034 */	NdrFcShort( 0x28 ),	/* 40 */
#ifndef _ALPHA_
/* 1036 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1038 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1042 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1044 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1046 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1048 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1050 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 1052 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xd,		/* FC_ENUM16 */
/* 1054 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1056 */	NdrFcShort( 0x566 ),	/* Type Offset=1382 */
/* 1058 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1060 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1062 */	NdrFcShort( 0x29 ),	/* 41 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1066 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1068 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1070 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1072 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1074 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1076 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1078 */	NdrFcShort( 0x2dc ),	/* Type Offset=732 */
/* 1080 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1082 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1084 */	NdrFcShort( 0x2a ),	/* 42 */
#ifndef _ALPHA_
/* 1086 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1088 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1090 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1092 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1094 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1096 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1098 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1100 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 1102 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1104 */	NdrFcShort( 0x522 ),	/* Type Offset=1314 */
/* 1106 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1108 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1110 */	NdrFcShort( 0x2b ),	/* 43 */
#ifndef _ALPHA_
/* 1112 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1114 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1116 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1118 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1122 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 1124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1126 */	NdrFcShort( 0xa2 ),	/* Type Offset=162 */
/* 1128 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1130 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */
/* 1132 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1134 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1136 */	NdrFcShort( 0x2c ),	/* 44 */
#ifndef _ALPHA_
/* 1138 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1140 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1142 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1144 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1148 */	NdrFcShort( 0x576 ),	/* Type Offset=1398 */
/* 1150 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1152 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */
/* 1154 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1156 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1158 */	NdrFcShort( 0x1a0 ),	/* Type Offset=416 */
/* 1160 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1162 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1164 */	NdrFcShort( 0x2d ),	/* 45 */
#ifndef _ALPHA_
/* 1166 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1168 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1170 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1172 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1174 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1176 */	NdrFcShort( 0x576 ),	/* Type Offset=1398 */
/* 1178 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1180 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */
/* 1182 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1184 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */
/* 1186 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 14 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 16 */	
			0x11, 0x0,	/* FC_RP */
/* 18 */	NdrFcShort( 0x52 ),	/* Offset= 82 (100) */
/* 20 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 22 */	NdrFcShort( 0x8 ),	/* 8 */
/* 24 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 26 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 28 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 30 */	NdrFcShort( 0x2 ),	/* 2 */
/* 32 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 34 */	NdrFcShort( 0x2 ),	/* 2 */
/* 36 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 42 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 44 */	NdrFcShort( 0x10 ),	/* 16 */
/* 46 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (28) */
/* 58 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 60 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 62 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 64 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd3 ),	/* Offset= -45 (20) */
			0x5b,		/* FC_END */
/* 68 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 70 */	NdrFcShort( 0x10 ),	/* 16 */
/* 72 */	0x18,		/* 24 */
			0x0,		/*  */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 80 */	NdrFcShort( 0x10 ),	/* 16 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x1 ),	/* 1 */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
/* 90 */	0x12, 0x0,	/* FC_UP */
/* 92 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (28) */
/* 94 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 96 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (42) */
			0x5b,		/* FC_END */
/* 100 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 108 */	NdrFcShort( 0x4 ),	/* 4 */
/* 110 */	NdrFcShort( 0x4 ),	/* 4 */
/* 112 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 114 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (68) */
/* 116 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 118 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 120 */	
			0x11, 0x10,	/* FC_RP */
/* 122 */	NdrFcShort( 0x2 ),	/* Offset= 2 (124) */
/* 124 */	
			0x12, 0x0,	/* FC_UP */
/* 126 */	NdrFcShort( 0xc ),	/* Offset= 12 (138) */
/* 128 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	0x18,		/* 24 */
			0x0,		/*  */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 138 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	0x12, 0x0,	/* FC_UP */
/* 152 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (128) */
/* 154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 158 */	
			0x11, 0x0,	/* FC_RP */
/* 160 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (138) */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 174 */	NdrFcShort( 0x4 ),	/* 4 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	0x12, 0x0,	/* FC_UP */
/* 180 */	NdrFcShort( 0xffffff68 ),	/* Offset= -152 (28) */
/* 182 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 184 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 186 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 188 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 190 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x11, 0x0,	/* FC_RP */
/* 194 */	NdrFcShort( 0xa8 ),	/* Offset= 168 (362) */
/* 196 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 200 */	0x16,		/* 22 */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0x2 ),	/* 2 */
/* 204 */	0x16,		/* 22 */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 210 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	0x12, 0x0,	/* FC_UP */
/* 224 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (196) */
/* 226 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 228 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 230 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 232 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 234 */	NdrFcShort( 0x6 ),	/* 6 */
/* 236 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 238 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 242 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 244 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (232) */
/* 246 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 248 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 252 */	0x3,		/* 3 */
			0x0,		/*  */
/* 254 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 256 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 258 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (248) */
/* 264 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 266 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (238) */
/* 270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 272 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 274 */	NdrFcShort( 0x1 ),	/* 1 */
/* 276 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 282 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 286 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (272) */
/* 288 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 290 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 292 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 294 */	NdrFcShort( 0x14 ),	/* 20 */
/* 296 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 298 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 304 */	0x12, 0x0,	/* FC_UP */
/* 306 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (258) */
/* 308 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 314 */	0x12, 0x0,	/* FC_UP */
/* 316 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (258) */
/* 318 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 320 */	NdrFcShort( 0xc ),	/* 12 */
/* 322 */	NdrFcShort( 0xc ),	/* 12 */
/* 324 */	0x12, 0x0,	/* FC_UP */
/* 326 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (282) */
/* 328 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x10 ),	/* 16 */
/* 334 */	0x12, 0x0,	/* FC_UP */
/* 336 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (282) */
/* 338 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 340 */	0x2,		/* FC_CHAR */
			0x6,		/* FC_SHORT */
/* 342 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 344 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 346 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 348 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 350 */	NdrFcShort( 0xc ),	/* 12 */
/* 352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 358 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 360 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 362 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 364 */	NdrFcShort( 0x18 ),	/* 24 */
/* 366 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 368 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 372 */	NdrFcShort( 0x4 ),	/* 4 */
/* 374 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 376 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 378 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	0x12, 0x0,	/* FC_UP */
/* 386 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (210) */
/* 388 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 390 */	NdrFcShort( 0x10 ),	/* 16 */
/* 392 */	NdrFcShort( 0x10 ),	/* 16 */
/* 394 */	0x12, 0x0,	/* FC_UP */
/* 396 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (292) */
/* 398 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 400 */	NdrFcShort( 0x14 ),	/* 20 */
/* 402 */	NdrFcShort( 0x14 ),	/* 20 */
/* 404 */	0x12, 0x0,	/* FC_UP */
/* 406 */	NdrFcShort( 0xffffffc6 ),	/* Offset= -58 (348) */
/* 408 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 410 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 412 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 414 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 416 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 418 */	NdrFcShort( 0x2 ),	/* Offset= 2 (420) */
/* 420 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 422 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 424 */	
			0x11, 0x10,	/* FC_RP */
/* 426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (428) */
/* 428 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 434 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 436 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 438 */	NdrFcShort( 0x2 ),	/* Offset= 2 (440) */
/* 440 */	NdrFcShort( 0x28 ),	/* 40 */
/* 442 */	NdrFcShort( 0x700b ),	/* 28683 */
/* 444 */	NdrFcLong( 0x1 ),	/* 1 */
/* 448 */	NdrFcShort( 0x46 ),	/* Offset= 70 (518) */
/* 450 */	NdrFcLong( 0x2 ),	/* 2 */
/* 454 */	NdrFcShort( 0x62 ),	/* Offset= 98 (552) */
/* 456 */	NdrFcLong( 0x3 ),	/* 3 */
/* 460 */	NdrFcShort( 0x72 ),	/* Offset= 114 (574) */
/* 462 */	NdrFcLong( 0x5 ),	/* 5 */
/* 466 */	NdrFcShort( 0x6c ),	/* Offset= 108 (574) */
/* 468 */	NdrFcLong( 0x4 ),	/* 4 */
/* 472 */	NdrFcShort( 0xfffffece ),	/* Offset= -306 (166) */
/* 474 */	NdrFcLong( 0x6 ),	/* 6 */
/* 478 */	NdrFcShort( 0x82 ),	/* Offset= 130 (608) */
/* 480 */	NdrFcLong( 0x7 ),	/* 7 */
/* 484 */	NdrFcShort( 0x94 ),	/* Offset= 148 (632) */
/* 486 */	NdrFcLong( 0x8 ),	/* 8 */
/* 490 */	NdrFcShort( 0xc0 ),	/* Offset= 192 (682) */
/* 492 */	NdrFcLong( 0x9 ),	/* 9 */
/* 496 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (692) */
/* 498 */	NdrFcLong( 0xa ),	/* 10 */
/* 502 */	NdrFcShort( 0xcc ),	/* Offset= 204 (706) */
/* 504 */	NdrFcLong( 0xb ),	/* 11 */
/* 508 */	NdrFcShort( 0xcc ),	/* Offset= 204 (712) */
/* 510 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (509) */
/* 512 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 518 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 520 */	NdrFcShort( 0x28 ),	/* 40 */
/* 522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 524 */	NdrFcShort( 0x0 ),	/* Offset= 0 (524) */
/* 526 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 528 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 530 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (512) */
/* 532 */	0x2,		/* FC_CHAR */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 534 */	0x7,		/* 7 */
			NdrFcShort( 0xffffffe9 ),	/* Offset= -23 (512) */
			0x38,		/* FC_ALIGNM4 */
/* 538 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 540 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 542 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 544 */	NdrFcShort( 0x4 ),	/* 4 */
/* 546 */	0x18,		/* 24 */
			0x0,		/*  */
/* 548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 550 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 552 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 554 */	NdrFcShort( 0xc ),	/* 12 */
/* 556 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 558 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 562 */	NdrFcShort( 0x4 ),	/* 4 */
/* 564 */	0x12, 0x0,	/* FC_UP */
/* 566 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (542) */
/* 568 */	
			0x5b,		/* FC_END */

			0x2,		/* FC_CHAR */
/* 570 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 572 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 574 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0xc ),	/* 12 */
/* 578 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 580 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 582 */	NdrFcShort( 0x4 ),	/* 4 */
/* 584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 586 */	0x12, 0x0,	/* FC_UP */
/* 588 */	NdrFcShort( 0xfffffdd0 ),	/* Offset= -560 (28) */
/* 590 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x12, 0x0,	/* FC_UP */
/* 598 */	NdrFcShort( 0xfffffeac ),	/* Offset= -340 (258) */
/* 600 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 602 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 604 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 606 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 608 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x1,		/* 1 */
/* 610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* Offset= 0 (614) */
/* 616 */	0xd,		/* FC_ENUM16 */
			0x5b,		/* FC_END */
/* 618 */	
			0x1c,		/* FC_CVARRAY */
			0x1,		/* 1 */
/* 620 */	NdrFcShort( 0x2 ),	/* 2 */
/* 622 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 624 */	NdrFcShort( 0xa ),	/* 10 */
/* 626 */	0x16,		/* 22 */
			0x55,		/* FC_DIV_2 */
/* 628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 630 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 632 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 634 */	NdrFcShort( 0x10 ),	/* 16 */
/* 636 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 638 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	NdrFcShort( 0x4 ),	/* 4 */
/* 644 */	0x12, 0x0,	/* FC_UP */
/* 646 */	NdrFcShort( 0xfffffd96 ),	/* Offset= -618 (28) */
/* 648 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 650 */	NdrFcShort( 0xc ),	/* 12 */
/* 652 */	NdrFcShort( 0xc ),	/* 12 */
/* 654 */	0x12, 0x0,	/* FC_UP */
/* 656 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (618) */
/* 658 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 660 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 662 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 664 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 666 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 668 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 670 */	NdrFcShort( 0x20 ),	/* 32 */
/* 672 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 674 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 676 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 678 */	0x4,		/* 4 */
			NdrFcShort( 0xffffff59 ),	/* Offset= -167 (512) */
			0x5b,		/* FC_END */
/* 682 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 684 */	NdrFcShort( 0x20 ),	/* 32 */
/* 686 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 688 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (668) */
/* 690 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 692 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 694 */	NdrFcShort( 0x10 ),	/* 16 */
/* 696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 698 */	NdrFcShort( 0xffffff46 ),	/* Offset= -186 (512) */
/* 700 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 702 */	NdrFcShort( 0xffffff42 ),	/* Offset= -190 (512) */
/* 704 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 706 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 710 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 712 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0x2 ),	/* 2 */
/* 716 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 718 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 720 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 722 */	NdrFcShort( 0x2 ),	/* Offset= 2 (724) */
/* 724 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 726 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 730 */	NdrFcShort( 0xfffffede ),	/* Offset= -290 (440) */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0xfffffe24 ),	/* Offset= -476 (258) */
/* 736 */	
			0x11, 0x0,	/* FC_RP */
/* 738 */	NdrFcShort( 0x36 ),	/* Offset= 54 (792) */
/* 740 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 746 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	0x12, 0x0,	/* FC_UP */
/* 754 */	NdrFcShort( 0xfffffe10 ),	/* Offset= -496 (258) */
/* 756 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 758 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 760 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x4 ),	/* 4 */
/* 764 */	0x18,		/* 24 */
			0x0,		/*  */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 770 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 772 */	NdrFcShort( 0x4 ),	/* 4 */
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x1 ),	/* 1 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 782 */	0x12, 0x0,	/* FC_UP */
/* 784 */	NdrFcShort( 0xfffffdf2 ),	/* Offset= -526 (258) */
/* 786 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 788 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (740) */
			0x5b,		/* FC_END */
/* 792 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 796 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 798 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 806 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (760) */
/* 808 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 810 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 812 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 814 */	NdrFcShort( 0xffffff10 ),	/* Offset= -240 (574) */
/* 816 */	
			0x11, 0x0,	/* FC_RP */
/* 818 */	NdrFcShort( 0x2a ),	/* Offset= 42 (860) */
/* 820 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 822 */	NdrFcShort( 0xc ),	/* 12 */
/* 824 */	0x18,		/* 24 */
			0x0,		/*  */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 832 */	NdrFcShort( 0xc ),	/* 12 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x2 ),	/* 2 */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	NdrFcShort( 0x4 ),	/* 4 */
/* 842 */	0x12, 0x0,	/* FC_UP */
/* 844 */	NdrFcShort( 0xfffffcd0 ),	/* Offset= -816 (28) */
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	0x12, 0x0,	/* FC_UP */
/* 852 */	NdrFcShort( 0xfffffdae ),	/* Offset= -594 (258) */
/* 854 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 856 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffee5 ),	/* Offset= -283 (574) */
			0x5b,		/* FC_END */
/* 860 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 866 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 868 */	NdrFcShort( 0x4 ),	/* 4 */
/* 870 */	NdrFcShort( 0x4 ),	/* 4 */
/* 872 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 874 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (820) */
/* 876 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 878 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 880 */	
			0x11, 0x0,	/* FC_RP */
/* 882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (884) */
/* 884 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 888 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 892 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 894 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 902 */	NdrFcShort( 0x4 ),	/* 4 */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	0x12, 0x0,	/* FC_UP */
/* 908 */	NdrFcShort( 0xfffffc90 ),	/* Offset= -880 (28) */
/* 910 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 912 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffd15 ),	/* Offset= -747 (166) */
			0x5b,		/* FC_END */
/* 916 */	
			0x11, 0x10,	/* FC_RP */
/* 918 */	NdrFcShort( 0x2 ),	/* Offset= 2 (920) */
/* 920 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (924) */
/* 924 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 926 */	NdrFcShort( 0xc ),	/* 12 */
/* 928 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 932 */	NdrFcShort( 0x4 ),	/* 4 */
/* 934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 936 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 938 */	NdrFcShort( 0xffffff8a ),	/* Offset= -118 (820) */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 944 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 946 */	
			0x11, 0x0,	/* FC_RP */
/* 948 */	NdrFcShort( 0x20 ),	/* Offset= 32 (980) */
/* 950 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0xc ),	/* 12 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x0 ),	/* Offset= 0 (956) */
/* 958 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 960 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 962 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 966 */	0x18,		/* 24 */
			0x0,		/*  */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 974 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 976 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (950) */
/* 978 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 980 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 988 */	NdrFcShort( 0x4 ),	/* 4 */
/* 990 */	NdrFcShort( 0x4 ),	/* 4 */
/* 992 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 994 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (962) */
/* 996 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 998 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1000 */	
			0x11, 0x0,	/* FC_RP */
/* 1002 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1004) */
/* 1004 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1010 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1012 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1016 */	0x12, 0x0,	/* FC_UP */
/* 1018 */	NdrFcShort( 0xfffffefe ),	/* Offset= -258 (760) */
/* 1020 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1022 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1024 */	
			0x11, 0x0,	/* FC_RP */
/* 1026 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1062) */
/* 1028 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1030 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1034) */
/* 1036 */	0xd,		/* FC_ENUM16 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1038 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffc97 ),	/* Offset= -873 (166) */
			0x8,		/* FC_LONG */
/* 1042 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1044 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (1028) */
/* 1060 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1062 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1066 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1068 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1072 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1074 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1076 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1044) */
/* 1078 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1080 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1082 */	
			0x11, 0x10,	/* FC_RP */
/* 1084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1086) */
/* 1086 */	
			0x12, 0x0,	/* FC_UP */
/* 1088 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1114) */
/* 1090 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1092 */	NdrFcShort( 0xc ),	/* 12 */
/* 1094 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1096 */	NdrFcShort( 0xfffffbcc ),	/* Offset= -1076 (20) */
/* 1098 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0xc ),	/* 12 */
/* 1104 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1106 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 1108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1110 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (1090) */
/* 1112 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1114 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (1100) */
/* 1120 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1124 */	
			0x11, 0x0,	/* FC_RP */
/* 1126 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1114) */
/* 1128 */	
			0x11, 0x0,	/* FC_RP */
/* 1130 */	NdrFcShort( 0xfffffe32 ),	/* Offset= -462 (668) */
/* 1132 */	
			0x11, 0x10,	/* FC_RP */
/* 1134 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1136) */
/* 1136 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1138 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1140) */
/* 1140 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1142 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1144 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1148) */
/* 1148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1150 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 1152 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1156 */	NdrFcShort( 0xfffffc22 ),	/* Offset= -990 (166) */
/* 1158 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1162 */	NdrFcShort( 0x30 ),	/* Offset= 48 (1210) */
/* 1164 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1168 */	NdrFcShort( 0x3e ),	/* Offset= 62 (1230) */
/* 1170 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1174 */	NdrFcShort( 0x62 ),	/* Offset= 98 (1272) */
/* 1176 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1175) */
/* 1178 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1182 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1188 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1194 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1198 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1200 */	0x12, 0x0,	/* FC_UP */
/* 1202 */	NdrFcShort( 0xfffffb6a ),	/* Offset= -1174 (28) */
/* 1204 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1206 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffbef ),	/* Offset= -1041 (166) */
			0x5b,		/* FC_END */
/* 1210 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1222 */	0x12, 0x0,	/* FC_UP */
/* 1224 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1178) */
/* 1226 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1228 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1230 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1232 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1234 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1236 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1240 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1242 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1244 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1248 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1250 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1252 */	NdrFcShort( 0xc ),	/* 12 */
/* 1254 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1262 */	0x12, 0x0,	/* FC_UP */
/* 1264 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1236) */
/* 1266 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1268 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1270 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1272 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1276 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1278 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1286 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (1250) */
/* 1288 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1290 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1294 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1296 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1250) */
/* 1298 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1300 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1302 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 1304 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1306) */
/* 1306 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1308 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1310 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1312 */	NdrFcShort( 0xffffff5c ),	/* Offset= -164 (1148) */
/* 1314 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1316 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (1250) */
/* 1318 */	
			0x12, 0x10,	/* FC_UP */
/* 1320 */	NdrFcShort( 0xfffffffa ),	/* Offset= -6 (1314) */
/* 1322 */	
			0x12, 0x0,	/* FC_UP */
/* 1324 */	NdrFcShort( 0xfffffcd4 ),	/* Offset= -812 (512) */
/* 1326 */	
			0x11, 0x0,	/* FC_RP */
/* 1328 */	NdrFcShort( 0xfffffae4 ),	/* Offset= -1308 (20) */
/* 1330 */	
			0x11, 0x10,	/* FC_RP */
/* 1332 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1334) */
/* 1334 */	
			0x12, 0x0,	/* FC_UP */
/* 1336 */	NdrFcShort( 0xfffffb6e ),	/* Offset= -1170 (166) */
/* 1338 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1340 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1342 */	
			0x11, 0x0,	/* FC_RP */
/* 1344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1346) */
/* 1346 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1352 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1354 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1356 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1358 */	0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1360 */	NdrFcShort( 0xffffff4a ),	/* Offset= -182 (1178) */
/* 1362 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1364 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1366 */	
			0x11, 0x10,	/* FC_RP */
/* 1368 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1370) */
/* 1370 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 1372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1374) */
/* 1374 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1376 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1378 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1380 */	NdrFcShort( 0xffffff18 ),	/* Offset= -232 (1148) */
/* 1382 */	
			0x11, 0x1,	/* FC_RP [all_nodes] */
/* 1384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1386) */
/* 1386 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 1388 */	0x26,		/* 38 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1390 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1392 */	NdrFcShort( 0xffffff0c ),	/* Offset= -244 (1148) */
/* 1394 */	
			0x11, 0x10,	/* FC_RP */
/* 1396 */	NdrFcShort( 0xffffffae ),	/* Offset= -82 (1314) */
/* 1398 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1400 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1402 */	
			0x12, 0x10,	/* FC_UP */
/* 1404 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (1334) */

			0x0
        }
    };
