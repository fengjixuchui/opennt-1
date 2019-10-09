/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:15:21 2019
 */
/* Compiler settings for oleext.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "oleext.h"

#define TYPE_FORMAT_STRING_SIZE   2303                              
#define PROC_FORMAT_STRING_SIZE   1447                              

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


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPropertySetContainer, ver. 0.0,
   GUID={0xb4ffae60,0xa7ca,0x11cd,{0xb5,0x8b,0x00,0x00,0x6b,0x82,0x91,0x56}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertySetContainer_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertySetContainer_FormatStringOffsetTable[] = 
    {
    0,
    36,
    60
    };

static const MIDL_SERVER_INFO IPropertySetContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertySetContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertySetContainer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertySetContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IPropertySetContainerProxyVtbl = 
{
    &IPropertySetContainer_ProxyInfo,
    &IID_IPropertySetContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertySetContainer::GetPropset */ ,
    (void *)-1 /* IPropertySetContainer::AddPropset */ ,
    (void *)-1 /* IPropertySetContainer::DeletePropset */
};

const CInterfaceStubVtbl _IPropertySetContainerStubVtbl =
{
    &IID_IPropertySetContainer,
    &IPropertySetContainer_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: INotifyReplica, ver. 0.0,
   GUID={0x99180163,0xDA16,0x101A,{0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO INotifyReplica_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short INotifyReplica_FormatStringOffsetTable[] = 
    {
    84
    };

static const MIDL_SERVER_INFO INotifyReplica_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &INotifyReplica_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO INotifyReplica_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &INotifyReplica_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _INotifyReplicaProxyVtbl = 
{
    &INotifyReplica_ProxyInfo,
    &IID_INotifyReplica,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* INotifyReplica::YouAreAReplica */
};

const CInterfaceStubVtbl _INotifyReplicaStubVtbl =
{
    &IID_INotifyReplica,
    &INotifyReplica_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0073, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IReconcilableObject, ver. 0.0,
   GUID={0x99180162,0xDA16,0x101A,{0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IReconcilableObject_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IReconcilableObject_FormatStringOffsetTable[] = 
    {
    114,
    186
    };

static const MIDL_SERVER_INFO IReconcilableObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IReconcilableObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IReconcilableObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IReconcilableObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IReconcilableObjectProxyVtbl = 
{
    &IReconcilableObject_ProxyInfo,
    &IID_IReconcilableObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IReconcilableObject::Reconcile */ ,
    (void *)-1 /* IReconcilableObject::GetProgressFeedbackMaxEstimate */
};

const CInterfaceStubVtbl _IReconcilableObjectStubVtbl =
{
    &IID_IReconcilableObject,
    &IReconcilableObject_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: Versioning, ver. 0.0,
   GUID={0x6291f800,0x2bfb,0x11ce,{0xbb,0x80,0x08,0x00,0x2b,0x36,0xb2,0xb0}} */


/* Object interface: IReconcileInitiator, ver. 0.0,
   GUID={0x99180161,0xDA16,0x101A,{0x93,0x5C,0x44,0x45,0x53,0x54,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IReconcileInitiator_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IReconcileInitiator_FormatStringOffsetTable[] = 
    {
    210,
    234,
    264,
    294
    };

static const MIDL_SERVER_INFO IReconcileInitiator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IReconcileInitiator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IReconcileInitiator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IReconcileInitiator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IReconcileInitiatorProxyVtbl = 
{
    &IReconcileInitiator_ProxyInfo,
    &IID_IReconcileInitiator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IReconcileInitiator::SetAbortCallback */ ,
    (void *)-1 /* IReconcileInitiator::SetProgressFeedback */ ,
    (void *)-1 /* IReconcileInitiator::FindVersion */ ,
    (void *)-1 /* IReconcileInitiator::FindVersionFromGraph */
};

const CInterfaceStubVtbl _IReconcileInitiatorStubVtbl =
{
    &IID_IReconcileInitiator,
    &IReconcileInitiator_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDifferencing, ver. 0.0,
   GUID={0x994f0af0,0x2977,0x11ce,{0xbb,0x80,0x08,0x00,0x2b,0x36,0xb2,0xb0}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDifferencing_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDifferencing_FormatStringOffsetTable[] = 
    {
    330,
    378,
    426,
    474
    };

static const MIDL_SERVER_INFO IDifferencing_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDifferencing_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDifferencing_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDifferencing_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IDifferencingProxyVtbl = 
{
    &IDifferencing_ProxyInfo,
    &IID_IDifferencing,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDifferencing::SubtractMoniker */ ,
    (void *)-1 /* IDifferencing::SubtractVerid */ ,
    (void *)-1 /* IDifferencing::SubtractTimeStamp */ ,
    (void *)-1 /* IDifferencing::Add */
};

const CInterfaceStubVtbl _IDifferencingStubVtbl =
{
    &IID_IDifferencing,
    &IDifferencing_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0077, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessControl, ver. 0.0,
   GUID={0xEEDD23E0,0x8410,0x11CE,{0xA1,0xC3,0x08,0x00,0x2B,0x2B,0x8D,0x8F}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessControl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IAccessControl_FormatStringOffsetTable[] = 
    {
    504,
    528,
    552,
    582,
    618,
    660
    };

static const MIDL_SERVER_INFO IAccessControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAccessControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAccessControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IAccessControlProxyVtbl = 
{
    &IAccessControl_ProxyInfo,
    &IID_IAccessControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IAccessControl::GrantAccessRights */ ,
    (void *)-1 /* IAccessControl::SetAccessRights */ ,
    (void *)-1 /* IAccessControl::SetOwner */ ,
    (void *)-1 /* IAccessControl::RevokeAccessRights */ ,
    (void *)-1 /* IAccessControl::GetAllAccessRights */ ,
    (void *)-1 /* IAccessControl::IsAccessAllowed */
};

const CInterfaceStubVtbl _IAccessControlStubVtbl =
{
    &IID_IAccessControl,
    &IAccessControl_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0080, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAuditControl, ver. 0.0,
   GUID={0x1da6292f,0xbc66,0x11ce,{0xaa,0xe3,0x00,0xaa,0x00,0x4c,0x27,0x37}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAuditControl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IAuditControl_FormatStringOffsetTable[] = 
    {
    504,
    528,
    702,
    738,
    768
    };

static const MIDL_SERVER_INFO IAuditControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAuditControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAuditControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAuditControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IAuditControlProxyVtbl = 
{
    &IAuditControl_ProxyInfo,
    &IID_IAuditControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IAuditControl::GrantAuditRights */ ,
    (void *)-1 /* IAuditControl::SetAuditRights */ ,
    (void *)-1 /* IAuditControl::RevokeAuditRights */ ,
    (void *)-1 /* IAuditControl::GetAllAuditRights */ ,
    (void *)-1 /* IAuditControl::IsAccessAudited */
};

const CInterfaceStubVtbl _IAuditControlStubVtbl =
{
    &IID_IAuditControl,
    &IAuditControl_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0081, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDirectory, ver. 0.0,
   GUID={0x5c036ea0,0xb556,0x11ce,{0xb3,0x3a,0x00,0xaa,0x00,0x68,0x09,0x37}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDirectory_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT __stdcall IDirectory_RemoteCreateElement_Proxy( 
    IDirectory __RPC_FAR * This,
    /* [in] */ const WCHAR __RPC_FAR *pwcsName,
    /* [in] */ STGCREATE __RPC_FAR *pStgCreate,
    /* [in] */ STGOPEN __RPC_FAR *pStgOpen,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppObjectOpen);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pwcsName,
                  ( unsigned char __RPC_FAR * )&pStgCreate,
                  ( unsigned char __RPC_FAR * )&pStgOpen,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&ppObjectOpen);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDirectory_RemoteCreateElement_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDirectory __RPC_FAR *This;
        const WCHAR __RPC_FAR *pwcsName;
        STGCREATE __RPC_FAR *pStgCreate;
        STGOPEN __RPC_FAR *pStgOpen;
        REFIID riid;
        IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDirectory __RPC_FAR *This;
        char Pad0[4];
        const WCHAR __RPC_FAR *pwcsName;
        char Pad1[4];
        STGCREATE __RPC_FAR *pStgCreate;
        char Pad2[4];
        STGOPEN __RPC_FAR *pStgOpen;
        char Pad3[4];
        REFIID riid;
        char Pad4[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen;
        char Pad5[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDirectory_CreateElement_Stub(
                                        (IDirectory *) pParamStruct->This,
                                        pParamStruct->pwcsName,
                                        pParamStruct->pStgCreate,
                                        pParamStruct->pStgOpen,
                                        pParamStruct->riid,
                                        pParamStruct->ppObjectOpen);
    
}

/* [call_as] */ HRESULT __stdcall IDirectory_RemoteOpenElement_Proxy( 
    IDirectory __RPC_FAR * This,
    /* [in] */ const WCHAR __RPC_FAR *pwcsName,
    /* [in] */ STGOPEN __RPC_FAR *pStgOpen,
    /* [in] */ REFIID riid,
    /* [out] */ STGFMT __RPC_FAR *pStgfmt,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppObjectOpen);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[852],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[852],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pwcsName,
                  ( unsigned char __RPC_FAR * )&pStgOpen,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&pStgfmt,
                  ( unsigned char __RPC_FAR * )&ppObjectOpen);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[852],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDirectory_RemoteOpenElement_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDirectory __RPC_FAR *This;
        const WCHAR __RPC_FAR *pwcsName;
        STGOPEN __RPC_FAR *pStgOpen;
        REFIID riid;
        STGFMT __RPC_FAR *pStgfmt;
        IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDirectory __RPC_FAR *This;
        char Pad0[4];
        const WCHAR __RPC_FAR *pwcsName;
        char Pad1[4];
        STGOPEN __RPC_FAR *pStgOpen;
        char Pad2[4];
        REFIID riid;
        char Pad3[4];
        STGFMT __RPC_FAR *pStgfmt;
        char Pad4[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppObjectOpen;
        char Pad5[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDirectory_OpenElement_Stub(
                                      (IDirectory *) pParamStruct->This,
                                      pParamStruct->pwcsName,
                                      pParamStruct->pStgOpen,
                                      pParamStruct->riid,
                                      pParamStruct->pStgfmt,
                                      pParamStruct->ppObjectOpen);
    
}

static const unsigned short IDirectory_FormatStringOffsetTable[] = 
    {
    804,
    852,
    900,
    942,
    966,
    984,
    1008,
    1050,
    1074,
    1104,
    1140
    };

static const STUB_THUNK IDirectory_StubThunkTable[] = 
    {
    IDirectory_RemoteCreateElement_Thunk,
    IDirectory_RemoteOpenElement_Thunk,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IDirectory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDirectory_FormatStringOffsetTable[-3],
    &IDirectory_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDirectory_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDirectory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IDirectoryProxyVtbl = 
{
    &IDirectory_ProxyInfo,
    &IID_IDirectory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IDirectory_CreateElement_Proxy ,
    IDirectory_OpenElement_Proxy ,
    (void *)-1 /* IDirectory::MoveElement */ ,
    (void *)-1 /* IDirectory::CommitDirectory */ ,
    (void *)-1 /* IDirectory::RevertDirectory */ ,
    (void *)-1 /* IDirectory::DeleteElement */ ,
    (void *)-1 /* IDirectory::SetTimes */ ,
    (void *)-1 /* IDirectory::SetDirectoryClass */ ,
    (void *)-1 /* IDirectory::SetAttributes */ ,
    (void *)-1 /* IDirectory::StatElement */ ,
    (void *)-1 /* IDirectory::EnumDirectoryElements */
};

const CInterfaceStubVtbl _IDirectoryStubVtbl =
{
    &IID_IDirectory,
    &IDirectory_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumSTATDIR, ver. 0.0,
   GUID={0x74c76b90,0xb556,0x11ce,{0xb3,0x3a,0x00,0xaa,0x00,0x68,0x09,0x37}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumSTATDIR_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT __stdcall IEnumSTATDIR_RemoteNext_Proxy( 
    IEnumSTATDIR __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATDIR __RPC_FAR *rgelt,
    /* [out] */ ULONG __RPC_FAR *pceltFetched)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pceltFetched);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1164],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1164],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1164],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumSTATDIR_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATDIR __RPC_FAR *This;
        ULONG celt;
        STATDIR __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATDIR __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        STATDIR __RPC_FAR *rgelt;
        char Pad2[4];
        ULONG __RPC_FAR *pceltFetched;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IEnumSTATDIR_Next_Stub(
                                 (IEnumSTATDIR *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgelt,
                                 pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumSTATDIR_FormatStringOffsetTable[] = 
    {
    1164,
    1200,
    1224,
    1242
    };

static const STUB_THUNK IEnumSTATDIR_StubThunkTable[] = 
    {
    IEnumSTATDIR_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumSTATDIR_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATDIR_FormatStringOffsetTable[-3],
    &IEnumSTATDIR_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATDIR_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATDIR_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumSTATDIRProxyVtbl = 
{
    &IEnumSTATDIR_ProxyInfo,
    &IID_IEnumSTATDIR,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumSTATDIR_Next_Proxy ,
    (void *)-1 /* IEnumSTATDIR::Skip */ ,
    (void *)-1 /* IEnumSTATDIR::Reset */ ,
    (void *)-1 /* IEnumSTATDIR::Clone */
};

const CInterfaceStubVtbl _IEnumSTATDIRStubVtbl =
{
    &IID_IEnumSTATDIR,
    &IEnumSTATDIR_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMultiplePropertyAccess, ver. 0.0,
   GUID={0xec81fede,0xd432,0x11ce,{0x92,0x44,0x00,0x20,0xaf,0x6e,0x72,0xdb}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMultiplePropertyAccess_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[3];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    __MIDL_TypeFormatString.Format,
    0, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x300002c, /* MIDL Version 3.0.44 */
    0,
    UserMarshalRoutines,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short IMultiplePropertyAccess_FormatStringOffsetTable[] = 
    {
    1266,
    1320,
    1380
    };

static const MIDL_SERVER_INFO IMultiplePropertyAccess_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMultiplePropertyAccess_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMultiplePropertyAccess_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMultiplePropertyAccess_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IMultiplePropertyAccessProxyVtbl = 
{
    &IMultiplePropertyAccess_ProxyInfo,
    &IID_IMultiplePropertyAccess,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IMultiplePropertyAccess::GetIDsOfProperties */ ,
    (void *)-1 /* IMultiplePropertyAccess::GetMultiple */ ,
    (void *)-1 /* IMultiplePropertyAccess::PutMultiple */
};

const CInterfaceStubVtbl _IMultiplePropertyAccessStubVtbl =
{
    &IID_IMultiplePropertyAccess,
    &IMultiplePropertyAccess_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0115, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[3] = 
        {
            
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            STGMEDIUM_UserSize
            ,STGMEDIUM_UserMarshal
            ,STGMEDIUM_UserUnmarshal
            ,STGMEDIUM_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetPropset */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	NdrFcShort( 0x40 ),	/* 64 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter rguidName */

/* 12 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter riid */

/* 18 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppvObj */

/* 24 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddPropset */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pPropset */

/* 48 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 52 */	NdrFcShort( 0x20 ),	/* Type Offset=32 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePropset */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 62 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	NdrFcShort( 0x20 ),	/* 32 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter rguidName */

/* 72 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure YouAreAReplica */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 86 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 88 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 90 */	NdrFcShort( 0x8 ),	/* 8 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter cOtherReplicas */

/* 96 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpOtherReplicas */

/* 102 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 106 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reconcile */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 116 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 120 */	NdrFcShort( 0x20 ),	/* 32 */
/* 122 */	NdrFcShort( 0x10 ),	/* 16 */
/* 124 */	0x6,		/* 6 */
			0xa,		/* 10 */

	/* Parameter pInitiator */

/* 126 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 130 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter dwFlags */

/* 132 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hwndOwner */

/* 138 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 142 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Parameter hwndProgressFeedback */

/* 144 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 148 */	NdrFcShort( 0x8e ),	/* Type Offset=142 */

	/* Parameter cInput */

/* 150 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpmkOtherInput */

/* 156 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 160 */	NdrFcShort( 0x98 ),	/* Type Offset=152 */

	/* Parameter plOutIndex */

/* 162 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pstgNewResidues */

/* 168 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 172 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pvReserved */

/* 174 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 178 */	NdrFcShort( 0xc4 ),	/* Type Offset=196 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProgressFeedbackMaxEstimate */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 188 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 190 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x10 ),	/* 16 */
/* 196 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pulProgressMax */

/* 198 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAbortCallback */

/* 210 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 212 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 214 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x8 ),	/* 8 */
/* 220 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUnkForAbort */

/* 222 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 226 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 230 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProgressFeedback */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 236 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 238 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 240 */	NdrFcShort( 0x10 ),	/* 16 */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
/* 244 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter ulProgress */

/* 246 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulProgressMax */

/* 252 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindVersion */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 266 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 270 */	NdrFcShort( 0x20 ),	/* 32 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter pverid */

/* 276 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 280 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppmk */

/* 282 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 286 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 290 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindVersionFromGraph */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 296 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 298 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 302 */	NdrFcShort( 0x28 ),	/* 40 */
/* 304 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter pvergraph */

/* 306 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 310 */	NdrFcShort( 0x138 ),	/* Type Offset=312 */

	/* Parameter pverid */

/* 312 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 316 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppmk */

/* 318 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 322 */	NdrFcShort( 0xda ),	/* Type Offset=218 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SubtractMoniker */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 332 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 334 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 336 */	NdrFcShort( 0xe ),	/* 14 */
/* 338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 340 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pInitiator */

/* 342 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 346 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pOtherStg */

/* 348 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 352 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */

	/* Parameter diffType */

/* 354 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 358 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pStgMedium */

/* 360 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 364 */	NdrFcShort( 0x2d2 ),	/* Type Offset=722 */

	/* Parameter reserved */

/* 366 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 368 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 372 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SubtractVerid */

/* 378 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 380 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 382 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 384 */	NdrFcShort( 0x2e ),	/* 46 */
/* 386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 388 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pInitiator */

/* 390 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 394 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pVerid */

/* 396 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 398 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 400 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter diffType */

/* 402 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 406 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pStgMedium */

/* 408 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 412 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */

	/* Parameter reserved */

/* 414 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SubtractTimeStamp */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 428 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 430 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 432 */	NdrFcShort( 0x1e ),	/* 30 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pInitiator */

/* 438 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 442 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pTimeStamp */

/* 444 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 448 */	NdrFcShort( 0x2ee ),	/* Type Offset=750 */

	/* Parameter diffType */

/* 450 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 454 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter pStgMedium */

/* 456 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 460 */	NdrFcShort( 0x2fa ),	/* Type Offset=762 */

	/* Parameter reserved */

/* 462 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 476 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 478 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pInitiator */

/* 486 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 490 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter pStgMedium */

/* 492 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 494 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 496 */	NdrFcShort( 0x30c ),	/* Type Offset=780 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GrantAuditRights */


	/* Procedure GrantAccessRights */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 506 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 508 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pAuditList */


	/* Parameter pAccessList */

/* 516 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 520 */	NdrFcShort( 0x3fe ),	/* Type Offset=1022 */

	/* Return value */


	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAuditRights */


	/* Procedure SetAccessRights */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 530 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 532 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 538 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pAuditList */


	/* Parameter pAccessList */

/* 540 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 542 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 544 */	NdrFcShort( 0x3fe ),	/* Type Offset=1022 */

	/* Return value */


	/* Return value */

/* 546 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetOwner */

/* 552 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 554 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 556 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 562 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pOwner */

/* 564 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 566 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 568 */	NdrFcShort( 0x364 ),	/* Type Offset=868 */

	/* Parameter pGroup */

/* 570 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 574 */	NdrFcShort( 0x364 ),	/* Type Offset=868 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevokeAccessRights */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 584 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 586 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter lpProperty */

/* 594 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 598 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter cTrustees */

/* 600 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgTrustees */

/* 606 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 610 */	NdrFcShort( 0x41a ),	/* Type Offset=1050 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllAccessRights */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 620 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 622 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 628 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter lpProperty */

/* 630 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 634 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter ppAccessList */

/* 636 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 640 */	NdrFcShort( 0x42c ),	/* Type Offset=1068 */

	/* Parameter ppOwner */

/* 642 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 646 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Parameter ppGroup */

/* 648 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 652 */	NdrFcShort( 0x434 ),	/* Type Offset=1076 */

	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 656 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAccessAllowed */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 662 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 664 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	NdrFcShort( 0x10 ),	/* 16 */
/* 670 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pTrustee */

/* 672 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 676 */	NdrFcShort( 0x364 ),	/* Type Offset=868 */

	/* Parameter lpProperty */

/* 678 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 682 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter AccessRights */

/* 684 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfAccessAllowed */

/* 690 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 696 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 698 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevokeAuditRights */

/* 702 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 704 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 706 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 712 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter lpProperty */

/* 714 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 716 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 718 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter cTrustees */

/* 720 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prgTrustees */

/* 726 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 730 */	NdrFcShort( 0x41a ),	/* Type Offset=1050 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllAuditRights */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 740 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 742 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 748 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter lpProperty */

/* 750 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 754 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter ppAuditList */

/* 756 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 760 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsAccessAudited */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 770 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 772 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 776 */	NdrFcShort( 0x10 ),	/* 16 */
/* 778 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pTrustee */

/* 780 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x364 ),	/* Type Offset=868 */

	/* Parameter AuditRights */

/* 786 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfAccessAudited */

/* 792 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 794 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 800 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCreateElement */

/* 804 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 806 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 808 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 810 */	NdrFcShort( 0x26 ),	/* 38 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pwcsName */

/* 816 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 818 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 820 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pStgCreate */

/* 822 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 826 */	NdrFcShort( 0x4a6 ),	/* Type Offset=1190 */

	/* Parameter pStgOpen */

/* 828 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 830 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 832 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter riid */

/* 834 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 838 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter ppObjectOpen */

/* 840 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 844 */	NdrFcShort( 0x4e0 ),	/* Type Offset=1248 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 848 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOpenElement */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 856 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 858 */	NdrFcShort( 0x26 ),	/* 38 */
/* 860 */	NdrFcShort( 0xe ),	/* 14 */
/* 862 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pwcsName */

/* 864 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 868 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pStgOpen */

/* 870 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 872 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 874 */	NdrFcShort( 0x4d0 ),	/* Type Offset=1232 */

	/* Parameter riid */

/* 876 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 880 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pStgfmt */

/* 882 */	NdrFcShort( 0x2010 ),	/* 8208 */
#ifndef _ALPHA_
/* 884 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 886 */	NdrFcShort( 0x4ea ),	/* Type Offset=1258 */

	/* Parameter ppObjectOpen */

/* 888 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 892 */	NdrFcShort( 0x4ee ),	/* Type Offset=1262 */

	/* Return value */

/* 894 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveElement */

/* 900 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 902 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 904 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 906 */	NdrFcShort( 0x1c ),	/* 28 */
/* 908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 910 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pwcsName */

/* 912 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 914 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 916 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Parameter pdirDest */

/* 918 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 922 */	NdrFcShort( 0x4f8 ),	/* Type Offset=1272 */

	/* Parameter pwcsNewName */

/* 924 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 928 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Parameter grfFlags */

/* 930 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CommitDirectory */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 944 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 946 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 952 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter grfCommitFlags */

/* 954 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 956 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 962 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevertDirectory */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 968 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 970 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 980 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteElement */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 988 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 990 */	NdrFcShort( 0x6 ),	/* 6 */
/* 992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 994 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pwcsName */

/* 996 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 998 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1000 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Return value */

/* 1002 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1004 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTimes */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1010 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1012 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1014 */	NdrFcShort( 0x56 ),	/* 86 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter pwcsName */

/* 1020 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1022 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1024 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Parameter pctime */

/* 1026 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1030 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Parameter patime */

/* 1032 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1036 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Parameter pmtime */

/* 1038 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1042 */	NdrFcShort( 0x50e ),	/* Type Offset=1294 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1046 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDirectoryClass */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1052 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1054 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1056 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter clsid */

/* 1062 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1066 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAttributes */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1076 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1078 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1080 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter pwcsName */

/* 1086 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1090 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Parameter grfAttrs */

/* 1092 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1094 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StatElement */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1106 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1108 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1110 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1114 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter pwcsName */

/* 1116 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1120 */	NdrFcShort( 0x50a ),	/* Type Offset=1290 */

	/* Parameter pstatdir */

/* 1122 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1124 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1126 */	NdrFcShort( 0x51c ),	/* Type Offset=1308 */

	/* Parameter grfStatFlag */

/* 1128 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1130 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1134 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDirectoryElements */

/* 1140 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1142 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1144 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1150 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 1152 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1156 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1160 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1166 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1168 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1174 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 1176 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1178 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1182 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1184 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1186 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Parameter pceltFetched */

/* 1188 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1190 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1202 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1204 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1210 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter celt */

/* 1212 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1214 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1226 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1228 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1244 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1246 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1250 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1252 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 1254 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1256 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1258 */	NdrFcShort( 0x542 ),	/* Type Offset=1346 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1262 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIDsOfProperties */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1268 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1270 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1272 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1274 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1276 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter riid */

/* 1278 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1280 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1282 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter rgszNames */

/* 1284 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1288 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */

	/* Parameter cNames */

/* 1290 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1292 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lcid */

/* 1296 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rghresult */

/* 1302 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1306 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Parameter rgdispid */

/* 1308 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1310 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1312 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1316 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMultiple */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1322 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1324 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1326 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1330 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter rgdispidMembers */

/* 1332 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1334 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1336 */	NdrFcShort( 0x5a2 ),	/* Type Offset=1442 */

	/* Parameter cMembers */

/* 1338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1340 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 1344 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1348 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lcid */

/* 1350 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1352 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAtomic */

/* 1356 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgvarValues */

/* 1362 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1364 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1366 */	NdrFcShort( 0x8ba ),	/* Type Offset=2234 */

	/* Parameter rghresult */

/* 1368 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1372 */	NdrFcShort( 0x5a2 ),	/* Type Offset=1442 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1376 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PutMultiple */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1382 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1384 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 1386 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1390 */	0x7,		/* 7 */
			0x9,		/* 9 */

	/* Parameter rgdispidMembers */

/* 1392 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1396 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Parameter rgusFlags */

/* 1398 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1402 */	NdrFcShort( 0x8d0 ),	/* Type Offset=2256 */

	/* Parameter cMembers */

/* 1404 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1406 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 1410 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1412 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1414 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter lcid */

/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAtomic */

/* 1422 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgvarValues */

/* 1428 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1432 */	NdrFcShort( 0x8ec ),	/* Type Offset=2284 */

	/* Parameter rghresult */

/* 1434 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1438 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 1440 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1442 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x8 ),	/* Offset= 8 (10) */
/*  4 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x8 ),	/* 8 */
/*  8 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 16 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 18 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (4) */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0x10,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 28 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 30 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 32 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 34 */	NdrFcLong( 0x10c ),	/* 268 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 44 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 46 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 48 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 50 */	
			0x12, 0x0,	/* FC_UP */
/* 52 */	NdrFcShort( 0x14 ),	/* Offset= 20 (72) */
/* 54 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 56 */	NdrFcLong( 0xf ),	/* 15 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */
/* 64 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 70 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 72 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 80 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 84 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (54) */
/* 88 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 90 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 92 */	NdrFcLong( 0x99180161 ),	/* -1726480031 */
/* 96 */	NdrFcShort( 0xffffda16 ),	/* -9706 */
/* 98 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 100 */	0x93,		/* 147 */
			0x5c,		/* 92 */
/* 102 */	0x44,		/* 68 */
			0x45,		/* 69 */
/* 104 */	0x53,		/* 83 */
			0x54,		/* 84 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	
			0x12, 0x0,	/* FC_UP */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x2 ),	/* 2 */
/* 118 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 122 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32638) */
/* 124 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 128 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32632) */
/* 130 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (129) */
/* 132 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (108) */
/* 142 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (108) */
/* 152 */	
			0x12, 0x0,	/* FC_UP */
/* 154 */	NdrFcShort( 0x2 ),	/* Offset= 2 (156) */
/* 156 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 160 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 164 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0xffffff8c ),	/* Offset= -116 (54) */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 176 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 180 */	NdrFcLong( 0xb ),	/* 11 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 190 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 192 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 194 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 196 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 198 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 200 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 212 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 214 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 216 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 218 */	
			0x11, 0x10,	/* FC_RP */
/* 220 */	NdrFcShort( 0xffffff5a ),	/* Offset= -166 (54) */
/* 222 */	
			0x11, 0x0,	/* FC_RP */
/* 224 */	NdrFcShort( 0x58 ),	/* Offset= 88 (312) */
/* 226 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 230 */	0x8,		/* 8 */
			0x0,		/*  */
/* 232 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 234 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 236 */	NdrFcShort( 0xffffff1e ),	/* Offset= -226 (10) */
/* 238 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 240 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 242 */	NdrFcShort( 0x4 ),	/* 4 */
/* 244 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (226) */
/* 246 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 248 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 252 */	0x18,		/* 24 */
			0x0,		/*  */
/* 254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 256 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 258 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 260 */	NdrFcShort( 0x10 ),	/* 16 */
/* 262 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 264 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 266 */	NdrFcShort( 0xc ),	/* 12 */
/* 268 */	NdrFcShort( 0xc ),	/* 12 */
/* 270 */	0x12, 0x0,	/* FC_UP */
/* 272 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (248) */
/* 274 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 276 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 278 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 280 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 282 */	NdrFcShort( 0x10 ),	/* 16 */
/* 284 */	0x18,		/* 24 */
			0x0,		/*  */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 292 */	NdrFcShort( 0x10 ),	/* 16 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x1 ),	/* 1 */
/* 298 */	NdrFcShort( 0xc ),	/* 12 */
/* 300 */	NdrFcShort( 0xc ),	/* 12 */
/* 302 */	0x12, 0x0,	/* FC_UP */
/* 304 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (248) */
/* 306 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 308 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcd ),	/* Offset= -51 (258) */
			0x5b,		/* FC_END */
/* 312 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 314 */	NdrFcShort( 0xc ),	/* 12 */
/* 316 */	NdrFcShort( 0xffffffa6 ),	/* Offset= -90 (226) */
/* 318 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 320 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 322 */	NdrFcShort( 0x4 ),	/* 4 */
/* 324 */	NdrFcShort( 0x4 ),	/* 4 */
/* 326 */	0x12, 0x0,	/* FC_UP */
/* 328 */	NdrFcShort( 0xffffffd0 ),	/* Offset= -48 (280) */
/* 330 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 334 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffa1 ),	/* Offset= -95 (240) */
			0x5b,		/* FC_END */
/* 338 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 340 */	NdrFcShort( 0xfffffeb6 ),	/* Offset= -330 (10) */
/* 342 */	
			0x11, 0x0,	/* FC_RP */
/* 344 */	NdrFcShort( 0x17a ),	/* Offset= 378 (722) */
/* 346 */	
			0x13, 0x0,	/* FC_OP */
/* 348 */	NdrFcShort( 0x164 ),	/* Offset= 356 (704) */
/* 350 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 352 */	NdrFcShort( 0x4 ),	/* 4 */
/* 354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* Offset= 0 (360) */
/* 362 */	NdrFcLong( 0x20 ),	/* 32 */
/* 366 */	NdrFcShort( 0x28 ),	/* Offset= 40 (406) */
/* 368 */	NdrFcLong( 0x40 ),	/* 64 */
/* 372 */	NdrFcShort( 0x7e ),	/* Offset= 126 (498) */
/* 374 */	NdrFcLong( 0x10 ),	/* 16 */
/* 378 */	NdrFcShort( 0x90 ),	/* Offset= 144 (522) */
/* 380 */	NdrFcLong( 0x1 ),	/* 1 */
/* 384 */	NdrFcShort( 0x116 ),	/* Offset= 278 (662) */
/* 386 */	NdrFcLong( 0x2 ),	/* 2 */
/* 390 */	NdrFcShort( 0x136 ),	/* Offset= 310 (700) */
/* 392 */	NdrFcLong( 0x4 ),	/* 4 */
/* 396 */	NdrFcShort( 0x3a ),	/* Offset= 58 (454) */
/* 398 */	NdrFcLong( 0x8 ),	/* 8 */
/* 402 */	NdrFcShort( 0x34 ),	/* Offset= 52 (454) */
/* 404 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (403) */
/* 406 */	
			0x13, 0x0,	/* FC_OP */
/* 408 */	NdrFcShort( 0x2 ),	/* Offset= 2 (410) */
/* 410 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 412 */	NdrFcShort( 0x4 ),	/* 4 */
/* 414 */	NdrFcShort( 0x2 ),	/* 2 */
/* 416 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 420 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32340) */
/* 422 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 426 */	NdrFcShort( 0x4 ),	/* Offset= 4 (430) */
/* 428 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32332) */
/* 430 */	
			0x13, 0x0,	/* FC_OP */
/* 432 */	NdrFcShort( 0x2c ),	/* Offset= 44 (476) */
/* 434 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 436 */	NdrFcShort( 0x4 ),	/* 4 */
/* 438 */	NdrFcShort( 0x2 ),	/* 2 */
/* 440 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 444 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32316) */
/* 446 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 450 */	NdrFcShort( 0x4 ),	/* Offset= 4 (454) */
/* 452 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32308) */
/* 454 */	
			0x13, 0x0,	/* FC_OP */
/* 456 */	NdrFcShort( 0xc ),	/* Offset= 12 (468) */
/* 458 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 460 */	NdrFcShort( 0x1 ),	/* 1 */
/* 462 */	0x9,		/* 9 */
			0x0,		/*  */
/* 464 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 466 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 468 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 472 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (458) */
/* 474 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 476 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 478 */	NdrFcShort( 0x10 ),	/* 16 */
/* 480 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 482 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 484 */	NdrFcShort( 0xc ),	/* 12 */
/* 486 */	NdrFcShort( 0xc ),	/* 12 */
/* 488 */	0x13, 0x0,	/* FC_OP */
/* 490 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (434) */
/* 492 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 494 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 496 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 498 */	
			0x13, 0x0,	/* FC_OP */
/* 500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (502) */
/* 502 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 506 */	NdrFcShort( 0x2 ),	/* 2 */
/* 508 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 512 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32248) */
/* 514 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 518 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (454) */
/* 520 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32240) */
/* 522 */	
			0x13, 0x0,	/* FC_OP */
/* 524 */	NdrFcShort( 0x2 ),	/* Offset= 2 (526) */
/* 526 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x2 ),	/* 2 */
/* 532 */	NdrFcLong( 0x7 ),	/* 7 */
/* 536 */	NdrFcShort( 0xa ),	/* Offset= 10 (546) */
/* 538 */	NdrFcLong( 0x5 ),	/* 5 */
/* 542 */	NdrFcShort( 0x3a ),	/* Offset= 58 (600) */
/* 544 */	NdrFcShort( 0x76 ),	/* Offset= 118 (662) */
/* 546 */	
			0x13, 0x0,	/* FC_OP */
/* 548 */	NdrFcShort( 0x2 ),	/* Offset= 2 (550) */
/* 550 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 554 */	NdrFcShort( 0x2 ),	/* 2 */
/* 556 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 560 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32200) */
/* 562 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 566 */	NdrFcShort( 0x4 ),	/* Offset= 4 (570) */
/* 568 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32192) */
/* 570 */	
			0x13, 0x0,	/* FC_OP */
/* 572 */	NdrFcShort( 0xc ),	/* Offset= 12 (584) */
/* 574 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 578 */	0x8,		/* 8 */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 582 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 584 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 586 */	NdrFcShort( 0x18 ),	/* 24 */
/* 588 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (574) */
/* 590 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 592 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 594 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 596 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 598 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 600 */	
			0x13, 0x0,	/* FC_OP */
/* 602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (604) */
/* 604 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 606 */	NdrFcShort( 0x4 ),	/* 4 */
/* 608 */	NdrFcShort( 0x2 ),	/* 2 */
/* 610 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 614 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32146) */
/* 616 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 620 */	NdrFcShort( 0x4 ),	/* Offset= 4 (624) */
/* 622 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32138) */
/* 624 */	
			0x13, 0x0,	/* FC_OP */
/* 626 */	NdrFcShort( 0x1a ),	/* Offset= 26 (652) */
/* 628 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 630 */	NdrFcShort( 0x4 ),	/* 4 */
/* 632 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 634 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 642 */	0x6,		/* 6 */
			0x0,		/*  */
/* 644 */	NdrFcShort( 0xfffffffe ),	/* -2 */
/* 646 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 648 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (628) */
/* 650 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 652 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 654 */	NdrFcShort( 0x4 ),	/* 4 */
/* 656 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (638) */
/* 658 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 660 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 662 */	
			0x13, 0x0,	/* FC_OP */
/* 664 */	NdrFcShort( 0x2 ),	/* Offset= 2 (666) */
/* 666 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 668 */	NdrFcShort( 0x4 ),	/* 4 */
/* 670 */	NdrFcShort( 0x2 ),	/* 2 */
/* 672 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 676 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32084) */
/* 678 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 682 */	NdrFcShort( 0x4 ),	/* Offset= 4 (686) */
/* 684 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32076) */
/* 686 */	
			0x13, 0x0,	/* FC_OP */
/* 688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (690) */
/* 690 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	NdrFcShort( 0xffffff14 ),	/* Offset= -236 (458) */
/* 696 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 702 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 704 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0xc ),	/* 12 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0xc ),	/* Offset= 12 (722) */
/* 712 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 714 */	NdrFcShort( 0xfffffe94 ),	/* Offset= -364 (350) */
/* 716 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 718 */	NdrFcShort( 0xfffffdfa ),	/* Offset= -518 (200) */
/* 720 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 722 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 726 */	NdrFcShort( 0xc ),	/* 12 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xfffffe80 ),	/* Offset= -384 (346) */
/* 732 */	
			0x11, 0x0,	/* FC_RP */
/* 734 */	NdrFcShort( 0x2 ),	/* Offset= 2 (736) */
/* 736 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 738 */	NdrFcShort( 0x1 ),	/* 1 */
/* 740 */	NdrFcShort( 0xc ),	/* 12 */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0xfffffe72 ),	/* Offset= -398 (346) */
/* 746 */	
			0x11, 0x0,	/* FC_RP */
/* 748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (750) */
/* 750 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 756 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 758 */	
			0x11, 0x0,	/* FC_RP */
/* 760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (762) */
/* 762 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 766 */	NdrFcShort( 0xc ),	/* 12 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0xfffffe58 ),	/* Offset= -424 (346) */
/* 772 */	
			0x11, 0x0,	/* FC_RP */
/* 774 */	NdrFcShort( 0x6 ),	/* Offset= 6 (780) */
/* 776 */	
			0x12, 0x0,	/* FC_UP */
/* 778 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (704) */
/* 780 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 784 */	NdrFcShort( 0xc ),	/* 12 */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (776) */
/* 790 */	
			0x11, 0x0,	/* FC_RP */
/* 792 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (1022) */
/* 794 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0xd,		/* FC_ENUM16 */
/* 796 */	0x6,		/* 6 */
			0x0,		/*  */
/* 798 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 800 */	NdrFcShort( 0x2 ),	/* Offset= 2 (802) */
/* 802 */	NdrFcShort( 0x4 ),	/* 4 */
/* 804 */	NdrFcShort( 0x2 ),	/* 2 */
/* 806 */	NdrFcLong( 0x1 ),	/* 1 */
/* 810 */	NdrFcShort( 0xa ),	/* Offset= 10 (820) */
/* 812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x8 ),	/* Offset= 8 (824) */
/* 818 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (817) */
/* 820 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 822 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 824 */	
			0x12, 0x0,	/* FC_UP */
/* 826 */	NdrFcShort( 0x1c ),	/* Offset= 28 (854) */
/* 828 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 830 */	NdrFcShort( 0x6 ),	/* 6 */
/* 832 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 834 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0x6 ),	/* 6 */
/* 838 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 840 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (828) */
/* 842 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 844 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x4 ),	/* 4 */
/* 848 */	0x3,		/* 3 */
			0x0,		/*  */
/* 850 */	NdrFcShort( 0xfffffff9 ),	/* -7 */
/* 852 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 854 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 858 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (844) */
/* 860 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 862 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 864 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (834) */
/* 866 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 868 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x14 ),	/* 20 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0xc ),	/* Offset= 12 (886) */
/* 876 */	0x36,		/* FC_POINTER */
			0xd,		/* FC_ENUM16 */
/* 878 */	0xd,		/* FC_ENUM16 */
			0xd,		/* FC_ENUM16 */
/* 880 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 882 */	NdrFcShort( 0xffffffa8 ),	/* Offset= -88 (794) */
/* 884 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 886 */	
			0x12, 0x0,	/* FC_UP */
/* 888 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (868) */
/* 890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x28 ),	/* 40 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0xc ),	/* Offset= 12 (908) */
/* 898 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 900 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (868) */
/* 902 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 904 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 906 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 908 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 916 */	0x18,		/* 24 */
			0x0,		/*  */
/* 918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 920 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 924 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (890) */
/* 928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 930 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 936 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 938 */	NdrFcShort( 0x4 ),	/* 4 */
/* 940 */	NdrFcShort( 0x4 ),	/* 4 */
/* 942 */	0x12, 0x0,	/* FC_UP */
/* 944 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (912) */
/* 946 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 948 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 950 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 952 */	NdrFcShort( 0xc ),	/* 12 */
/* 954 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 956 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 964 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 966 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 968 */	NdrFcShort( 0x4 ),	/* 4 */
/* 970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 972 */	0x12, 0x0,	/* FC_UP */
/* 974 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (930) */
/* 976 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 978 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 980 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 982 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0xc ),	/* 12 */
/* 986 */	0x18,		/* 24 */
			0x0,		/*  */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 992 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 994 */	NdrFcShort( 0xc ),	/* 12 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1012 */	0x12, 0x0,	/* FC_UP */
/* 1014 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (930) */
/* 1016 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1018 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffbb ),	/* Offset= -69 (950) */
			0x5b,		/* FC_END */
/* 1022 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1026 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1030 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1032 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1034 */	0x12, 0x0,	/* FC_UP */
/* 1036 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (982) */
/* 1038 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1040 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1042 */	
			0x11, 0x0,	/* FC_RP */
/* 1044 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (868) */
/* 1046 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1048 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1050 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1056 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1058 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1062 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1064 */	NdrFcShort( 0xffffff3c ),	/* Offset= -196 (868) */
/* 1066 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1068 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1072) */
/* 1072 */	
			0x13, 0x1,	/* FC_OP [all_nodes] */
/* 1074 */	NdrFcShort( 0xffffffcc ),	/* Offset= -52 (1022) */
/* 1076 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1078 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1080) */
/* 1080 */	
			0x13, 0x0,	/* FC_OP */
/* 1082 */	NdrFcShort( 0xffffff2a ),	/* Offset= -214 (868) */
/* 1084 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1086 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1088) */
/* 1088 */	
			0x13, 0x0,	/* FC_OP */
/* 1090 */	NdrFcShort( 0xffffffbc ),	/* Offset= -68 (1022) */
/* 1092 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1094 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1096 */	
			0x11, 0x0,	/* FC_RP */
/* 1098 */	NdrFcShort( 0x5c ),	/* Offset= 92 (1190) */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0xc ),	/* 12 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0xa ),	/* Offset= 10 (1116) */
/* 1108 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1110 */	NdrFcShort( 0xfffffc72 ),	/* Offset= -910 (200) */
/* 1112 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1116 */	
			0x12, 0x0,	/* FC_UP */
/* 1118 */	NdrFcShort( 0xfffffbac ),	/* Offset= -1108 (10) */
/* 1120 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1122 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1126) */
/* 1128 */	0x8,		/* FC_LONG */
			0xd,		/* FC_ENUM16 */
/* 1130 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1132 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffef7 ),	/* Offset= -265 (868) */
			0x5b,		/* FC_END */
/* 1136 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1138 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1140 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1142 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	0x12, 0x0,	/* FC_UP */
/* 1150 */	NdrFcShort( 0xfffffee6 ),	/* Offset= -282 (868) */
/* 1152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1158 */	0x12, 0x0,	/* FC_UP */
/* 1160 */	NdrFcShort( 0xfffffedc ),	/* Offset= -292 (868) */
/* 1162 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1164 */	NdrFcShort( 0xc ),	/* 12 */
/* 1166 */	NdrFcShort( 0xc ),	/* 12 */
/* 1168 */	0x12, 0x0,	/* FC_UP */
/* 1170 */	NdrFcShort( 0xffffffce ),	/* Offset= -50 (1120) */
/* 1172 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1174 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1176 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1178 */	0x12, 0x0,	/* FC_UP */
/* 1180 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (1120) */
/* 1182 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1184 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1186 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1188 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1190 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1192 */	NdrFcShort( 0xc ),	/* 12 */
/* 1194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1196 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1202) */
/* 1198 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1200 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1202 */	
			0x12, 0x0,	/* FC_UP */
/* 1204 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (1100) */
/* 1206 */	
			0x12, 0x0,	/* FC_UP */
/* 1208 */	NdrFcShort( 0xffffffb8 ),	/* Offset= -72 (1136) */
/* 1210 */	
			0x11, 0x0,	/* FC_RP */
/* 1212 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1232) */
/* 1214 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1216 */	NdrFcLong( 0xfb15084 ),	/* 263278724 */
/* 1220 */	NdrFcShort( 0xffffaf41 ),	/* -20671 */
/* 1222 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 1224 */	0xbd,		/* 189 */
			0x2b,		/* 43 */
/* 1226 */	0x20,		/* 32 */
			0x4c,		/* 76 */
/* 1228 */	0x4f,		/* 79 */
			0x4f,		/* 79 */
/* 1230 */	0x50,		/* 80 */
			0x20,		/* 32 */
/* 1232 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1234 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1238 */	NdrFcShort( 0xa ),	/* Offset= 10 (1248) */
/* 1240 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1242 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1244 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe1 ),	/* Offset= -31 (1214) */
			0x5b,		/* FC_END */
/* 1248 */	
			0x11, 0x10,	/* FC_RP */
/* 1250 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1252) */
/* 1252 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 1254 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1256 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1258 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1260 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x11, 0x10,	/* FC_RP */
/* 1264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1266) */
/* 1266 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 1268 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1270 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1272 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1274 */	NdrFcLong( 0x5c036ea0 ),	/* 1543728800 */
/* 1278 */	NdrFcShort( 0xffffb556 ),	/* -19114 */
/* 1280 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 1282 */	0xb3,		/* 179 */
			0x3a,		/* 58 */
/* 1284 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1286 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 1288 */	0x9,		/* 9 */
			0x37,		/* 55 */
/* 1290 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1292 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1294 */	
			0x12, 0x0,	/* FC_UP */
/* 1296 */	NdrFcShort( 0xfffffdde ),	/* Offset= -546 (750) */
/* 1298 */	
			0x11, 0x0,	/* FC_RP */
/* 1300 */	NdrFcShort( 0x8 ),	/* Offset= 8 (1308) */
/* 1302 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1308 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1310 */	NdrFcShort( 0x48 ),	/* 72 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x1c ),	/* Offset= 28 (1342) */
/* 1316 */	0x36,		/* FC_POINTER */
			0xd,		/* FC_ENUM16 */
/* 1318 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1320 */	0x4,		/* 4 */
			NdrFcShort( 0xffffffed ),	/* Offset= -19 (1302) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1324 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdc1 ),	/* Offset= -575 (750) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1328 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdbd ),	/* Offset= -579 (750) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1332 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffdb9 ),	/* Offset= -583 (750) */
			0x8,		/* FC_LONG */
/* 1336 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1338 */	NdrFcShort( 0xfffffad0 ),	/* Offset= -1328 (10) */
/* 1340 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1342 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1344 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1346 */	
			0x11, 0x10,	/* FC_RP */
/* 1348 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1350) */
/* 1350 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1352 */	NdrFcLong( 0x74c76b90 ),	/* 1959226256 */
/* 1356 */	NdrFcShort( 0xffffb556 ),	/* -19114 */
/* 1358 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 1360 */	0xb3,		/* 179 */
			0x3a,		/* 58 */
/* 1362 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1364 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 1366 */	0x9,		/* 9 */
			0x37,		/* 55 */
/* 1368 */	
			0x11, 0x0,	/* FC_RP */
/* 1370 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1372) */
/* 1372 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1378 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1380 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 1382 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1384 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1386 */	NdrFcShort( 0xffffffb2 ),	/* Offset= -78 (1308) */
/* 1388 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1390 */	
			0x11, 0x0,	/* FC_RP */
/* 1392 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1394) */
/* 1394 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1396 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1398 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1402 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1404 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1418 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1420 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1422 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1424 */	
			0x11, 0x0,	/* FC_RP */
/* 1426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1428) */
/* 1428 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1430 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1432 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1434 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1436 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1438 */	
			0x11, 0x0,	/* FC_RP */
/* 1440 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1442) */
/* 1442 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1446 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1448 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1450 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1452 */	
			0x11, 0x0,	/* FC_RP */
/* 1454 */	NdrFcShort( 0x30c ),	/* Offset= 780 (2234) */
/* 1456 */	
			0x13, 0x0,	/* FC_OP */
/* 1458 */	NdrFcShort( 0x2ec ),	/* Offset= 748 (2206) */
/* 1460 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 1462 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1464 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 1466 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1468) */
/* 1468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1470 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1472 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1476 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31284) */
/* 1478 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1482 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-31284) */
/* 1484 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1488 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31274) */
/* 1490 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1494 */	NdrFcShort( 0xffff800a ),	/* Offset= -32758 (-31264) */
/* 1496 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1500 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31256) */
/* 1502 */	NdrFcLong( 0xb ),	/* 11 */
/* 1506 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31256) */
/* 1508 */	NdrFcLong( 0xa ),	/* 10 */
/* 1512 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31248) */
/* 1514 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1518 */	NdrFcShort( 0xffffff28 ),	/* Offset= -216 (1302) */
/* 1520 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1524 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31232) */
/* 1526 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1530 */	NdrFcShort( 0xbe ),	/* Offset= 190 (1720) */
/* 1532 */	NdrFcLong( 0xd ),	/* 13 */
/* 1536 */	NdrFcShort( 0xfffffac8 ),	/* Offset= -1336 (200) */
/* 1538 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1542 */	NdrFcShort( 0xca ),	/* Offset= 202 (1744) */
/* 1544 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1548 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (1762) */
/* 1550 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1554 */	NdrFcShort( 0x24c ),	/* Offset= 588 (2142) */
/* 1556 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1560 */	NdrFcShort( 0x24a ),	/* Offset= 586 (2146) */
/* 1562 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1566 */	NdrFcShort( 0x248 ),	/* Offset= 584 (2150) */
/* 1568 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1572 */	NdrFcShort( 0x246 ),	/* Offset= 582 (2154) */
/* 1574 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1578 */	NdrFcShort( 0x244 ),	/* Offset= 580 (2158) */
/* 1580 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1584 */	NdrFcShort( 0x232 ),	/* Offset= 562 (2146) */
/* 1586 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1590 */	NdrFcShort( 0x230 ),	/* Offset= 560 (2150) */
/* 1592 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1596 */	NdrFcShort( 0x236 ),	/* Offset= 566 (2162) */
/* 1598 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1602 */	NdrFcShort( 0x22c ),	/* Offset= 556 (2158) */
/* 1604 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1608 */	NdrFcShort( 0x22e ),	/* Offset= 558 (2166) */
/* 1610 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1614 */	NdrFcShort( 0x22c ),	/* Offset= 556 (2170) */
/* 1616 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1620 */	NdrFcShort( 0x22a ),	/* Offset= 554 (2174) */
/* 1622 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1626 */	NdrFcShort( 0x228 ),	/* Offset= 552 (2178) */
/* 1628 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1632 */	NdrFcShort( 0x226 ),	/* Offset= 550 (2182) */
/* 1634 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1638 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-31128) */
/* 1640 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1644 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31118) */
/* 1646 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1650 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31110) */
/* 1652 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1656 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31104) */
/* 1658 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1662 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31098) */
/* 1664 */	NdrFcLong( 0xe ),	/* 14 */
/* 1668 */	NdrFcShort( 0x20a ),	/* Offset= 522 (2190) */
/* 1670 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1674 */	NdrFcShort( 0x210 ),	/* Offset= 528 (2202) */
/* 1676 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1680 */	NdrFcShort( 0x1ce ),	/* Offset= 462 (2142) */
/* 1682 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1686 */	NdrFcShort( 0x1cc ),	/* Offset= 460 (2146) */
/* 1688 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1692 */	NdrFcShort( 0x1ca ),	/* Offset= 458 (2150) */
/* 1694 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1698 */	NdrFcShort( 0x1c4 ),	/* Offset= 452 (2150) */
/* 1700 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1704 */	NdrFcShort( 0x1be ),	/* Offset= 446 (2150) */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1710) */
/* 1712 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1716 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1716) */
/* 1718 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1717) */
/* 1720 */	
			0x13, 0x0,	/* FC_OP */
/* 1722 */	NdrFcShort( 0xc ),	/* Offset= 12 (1734) */
/* 1724 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1726 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1728 */	0x9,		/* 9 */
			0x0,		/*  */
/* 1730 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1732 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1734 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1738 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (1724) */
/* 1740 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1742 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1744 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1746 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1756 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1758 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1760 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1762 */	
			0x13, 0x0,	/* FC_OP */
/* 1764 */	NdrFcShort( 0x168 ),	/* Offset= 360 (2124) */
/* 1766 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1776 */	NdrFcShort( 0x4c ),	/* Offset= 76 (1852) */
/* 1778 */	NdrFcLong( 0xd ),	/* 13 */
/* 1782 */	NdrFcShort( 0x6c ),	/* Offset= 108 (1890) */
/* 1784 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1788 */	NdrFcShort( 0x88 ),	/* Offset= 136 (1924) */
/* 1790 */	NdrFcLong( 0xc ),	/* 12 */
/* 1794 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (1970) */
/* 1796 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1800 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (2000) */
/* 1802 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1806 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (2030) */
/* 1808 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1812 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (2060) */
/* 1814 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1818 */	NdrFcShort( 0x110 ),	/* Offset= 272 (2090) */
/* 1820 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1820) */
/* 1822 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1826 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1830 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1832 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	0x13, 0x0,	/* FC_OP */
/* 1846 */	NdrFcShort( 0xffffff90 ),	/* Offset= -112 (1734) */
/* 1848 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1850 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1852 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1856 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1858 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1864 */	0x11, 0x0,	/* FC_RP */
/* 1866 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (1822) */
/* 1868 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1870 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1872 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1886 */	NdrFcShort( 0xfffff96a ),	/* Offset= -1686 (200) */
/* 1888 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1902) */
/* 1898 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1900 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1902 */	
			0x11, 0x0,	/* FC_RP */
/* 1904 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1872) */
/* 1906 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1910 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1914 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1918 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1920 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (1744) */
/* 1922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1924 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1936) */
/* 1932 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1934 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1936 */	
			0x11, 0x0,	/* FC_RP */
/* 1938 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1906) */
/* 1940 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1944 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1948 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1950 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1952 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	0x13, 0x0,	/* FC_OP */
/* 1964 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (2206) */
/* 1966 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1968 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1970 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1974 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1976 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1978 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1980 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1982 */	0x11, 0x0,	/* FC_RP */
/* 1984 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (1940) */
/* 1986 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1988 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1990 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	0x19,		/* 25 */
			0x0,		/*  */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1998 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 2000 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2002 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2004 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2006 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2008 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2010 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2012 */	0x13, 0x0,	/* FC_OP */
/* 2014 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1990) */
/* 2016 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2018 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2020 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2022 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2024 */	0x19,		/* 25 */
			0x0,		/*  */
/* 2026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2028 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2030 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2034 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2036 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2038 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2042 */	0x13, 0x0,	/* FC_OP */
/* 2044 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2020) */
/* 2046 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2048 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2050 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2054 */	0x19,		/* 25 */
			0x0,		/*  */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2058 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2060 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2062 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2064 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2066 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2068 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2070 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2072 */	0x13, 0x0,	/* FC_OP */
/* 2074 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2050) */
/* 2076 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2078 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2080 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2084 */	0x19,		/* 25 */
			0x0,		/*  */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2090 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2092 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2094 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2096 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2098 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2100 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2102 */	0x13, 0x0,	/* FC_OP */
/* 2104 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2080) */
/* 2106 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2108 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2110 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2114 */	0x6,		/* 6 */
			0x0,		/*  */
/* 2116 */	NdrFcShort( 0xffffffe8 ),	/* -24 */
/* 2118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2120 */	NdrFcShort( 0xfffffaa6 ),	/* Offset= -1370 (750) */
/* 2122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2126 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2128 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (2110) */
/* 2130 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2130) */
/* 2132 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2134 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 2136 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2138 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe8b ),	/* Offset= -373 (1766) */
			0x5b,		/* FC_END */
/* 2142 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2144 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 2146 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2148 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 2150 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2152 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2154 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2156 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 2158 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2160 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 2162 */	
			0x13, 0x0,	/* FC_OP */
/* 2164 */	NdrFcShort( 0xfffffca2 ),	/* Offset= -862 (1302) */
/* 2166 */	
			0x13, 0x10,	/* FC_OP */
/* 2168 */	NdrFcShort( 0xfffffe40 ),	/* Offset= -448 (1720) */
/* 2170 */	
			0x13, 0x10,	/* FC_OP */
/* 2172 */	NdrFcShort( 0xfffff84c ),	/* Offset= -1972 (200) */
/* 2174 */	
			0x13, 0x10,	/* FC_OP */
/* 2176 */	NdrFcShort( 0xfffffe50 ),	/* Offset= -432 (1744) */
/* 2178 */	
			0x13, 0x10,	/* FC_OP */
/* 2180 */	NdrFcShort( 0xfffffe5e ),	/* Offset= -418 (1762) */
/* 2182 */	
			0x13, 0x10,	/* FC_OP */
/* 2184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2186) */
/* 2186 */	
			0x13, 0x0,	/* FC_OP */
/* 2188 */	NdrFcShort( 0xfffff774 ),	/* Offset= -2188 (0) */
/* 2190 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 2192 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2194 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 2196 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 2198 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 2200 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 2202 */	
			0x13, 0x0,	/* FC_OP */
/* 2204 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (2190) */
/* 2206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2208 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2212 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2212) */
/* 2214 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2216 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2218 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2220 */	NdrFcShort( 0xfffffd08 ),	/* Offset= -760 (1460) */
/* 2222 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2224 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2226 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2228 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0xfffffcf8 ),	/* Offset= -776 (1456) */
/* 2234 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2240 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2242 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2246 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2248 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2224) */
/* 2250 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2252 */	
			0x11, 0x0,	/* FC_RP */
/* 2254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2256) */
/* 2256 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 2258 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2260 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2262 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2264 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 2266 */	
			0x11, 0x0,	/* FC_RP */
/* 2268 */	NdrFcShort( 0x10 ),	/* Offset= 16 (2284) */
/* 2270 */	
			0x12, 0x0,	/* FC_UP */
/* 2272 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (2206) */
/* 2274 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2276 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2278 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (2270) */
/* 2284 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2290 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2292 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2296 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2298 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2274) */
/* 2300 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _oleext_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAuditControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertySetContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IReconcileInitiatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IReconcilableObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INotifyReplicaProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumSTATDIRProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDirectoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMultiplePropertyAccessProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDifferencingProxyVtbl,
    0
};

const CInterfaceStubVtbl * _oleext_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAuditControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertySetContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IReconcileInitiatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IReconcilableObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_INotifyReplicaStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumSTATDIRStubVtbl,
    ( CInterfaceStubVtbl *) &_IDirectoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IMultiplePropertyAccessStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IDifferencingStubVtbl,
    0
};

PCInterfaceName const _oleext_InterfaceNamesList[] = 
{
    "IAuditControl",
    "IPropertySetContainer",
    "IReconcileInitiator",
    "IReconcilableObject",
    "INotifyReplica",
    "IEnumSTATDIR",
    "IDirectory",
    "IMultiplePropertyAccess",
    "IAccessControl",
    "IDifferencing",
    0
};


#define _oleext_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _oleext, pIID, n)

int __stdcall _oleext_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _oleext, 10, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _oleext, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _oleext, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _oleext, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _oleext, 10, *pIndex )
    
}

const ExtendedProxyFileInfo oleext_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _oleext_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _oleext_StubVtblList,
    (const PCInterfaceName * ) & _oleext_InterfaceNamesList,
    0, // no delegation
    & _oleext_IID_Lookup, 
    10,
    2
};
