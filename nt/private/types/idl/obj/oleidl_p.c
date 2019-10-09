/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:14:23 2019
 */
/* Compiler settings for oleidl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "oleidl.h"

#define TYPE_FORMAT_STRING_SIZE   1163                              
#define PROC_FORMAT_STRING_SIZE   2543                              

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


/* Standard interface: __MIDL__intf_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOleAdviseHolder, ver. 0.0,
   GUID={0x00000111,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOleCache, ver. 0.0,
   GUID={0x0000011e,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleCache_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleCache_FormatStringOffsetTable[] = 
    {
    0,
    36,
    60,
    84,
    108
    };

static const MIDL_SERVER_INFO IOleCache_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleCache_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleCache_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleCache_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IOleCacheProxyVtbl = 
{
    &IOleCache_ProxyInfo,
    &IID_IOleCache,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleCache::Cache */ ,
    (void *)-1 /* IOleCache::Uncache */ ,
    (void *)-1 /* IOleCache::EnumCache */ ,
    (void *)-1 /* IOleCache::InitCache */ ,
    (void *)-1 /* IOleCache::SetData */
};

const CInterfaceStubVtbl _IOleCacheStubVtbl =
{
    &IID_IOleCache,
    &IOleCache_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleCache2, ver. 0.0,
   GUID={0x00000128,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleCache2_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IOleCache2_RemoteUpdateCache_Proxy( 
    IOleCache2 __RPC_FAR * This,
    /* [in] */ LPDATAOBJECT pDataObject,
    /* [in] */ DWORD grfUpdf,
    /* [in] */ DWORD pReserved)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pReserved);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pDataObject,
                  ( unsigned char __RPC_FAR * )&grfUpdf,
                  ( unsigned char __RPC_FAR * )&pReserved);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[144],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOleCache2_RemoteUpdateCache_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleCache2 __RPC_FAR *This;
        LPDATAOBJECT pDataObject;
        DWORD grfUpdf;
        DWORD pReserved;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleCache2 __RPC_FAR *This;
        char Pad0[4];
        LPDATAOBJECT pDataObject;
        char Pad1[4];
        DWORD grfUpdf;
        char Pad2[4];
        DWORD pReserved;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOleCache2_UpdateCache_Stub(
                                      (IOleCache2 *) pParamStruct->This,
                                      pParamStruct->pDataObject,
                                      pParamStruct->grfUpdf,
                                      pParamStruct->pReserved);
    
}

static const unsigned short IOleCache2_FormatStringOffsetTable[] = 
    {
    0,
    36,
    60,
    84,
    108,
    144,
    180
    };

static const STUB_THUNK IOleCache2_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    0,
    IOleCache2_RemoteUpdateCache_Thunk,
    0
    };

static const MIDL_SERVER_INFO IOleCache2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleCache2_FormatStringOffsetTable[-3],
    &IOleCache2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleCache2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleCache2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IOleCache2ProxyVtbl = 
{
    &IOleCache2_ProxyInfo,
    &IID_IOleCache2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleCache::Cache */ ,
    (void *)-1 /* IOleCache::Uncache */ ,
    (void *)-1 /* IOleCache::EnumCache */ ,
    (void *)-1 /* IOleCache::InitCache */ ,
    (void *)-1 /* IOleCache::SetData */ ,
    IOleCache2_UpdateCache_Proxy ,
    (void *)-1 /* IOleCache2::DiscardCache */
};

const CInterfaceStubVtbl _IOleCache2StubVtbl =
{
    &IID_IOleCache2,
    &IOleCache2_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleCacheControl, ver. 0.0,
   GUID={0x00000129,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleCacheControl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleCacheControl_FormatStringOffsetTable[] = 
    {
    204,
    228
    };

static const MIDL_SERVER_INFO IOleCacheControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleCacheControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleCacheControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleCacheControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IOleCacheControlProxyVtbl = 
{
    &IOleCacheControl_ProxyInfo,
    &IID_IOleCacheControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleCacheControl::OnRun */ ,
    (void *)-1 /* IOleCacheControl::OnStop */
};

const CInterfaceStubVtbl _IOleCacheControlStubVtbl =
{
    &IID_IOleCacheControl,
    &IOleCacheControl_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IParseDisplayName, ver. 0.0,
   GUID={0x0000011a,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IParseDisplayName_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IParseDisplayName_FormatStringOffsetTable[] = 
    {
    246
    };

static const MIDL_SERVER_INFO IParseDisplayName_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IParseDisplayName_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IParseDisplayName_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IParseDisplayName_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IParseDisplayNameProxyVtbl = 
{
    &IParseDisplayName_ProxyInfo,
    &IID_IParseDisplayName,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IParseDisplayName::ParseDisplayName */
};

const CInterfaceStubVtbl _IParseDisplayNameStubVtbl =
{
    &IID_IParseDisplayName,
    &IParseDisplayName_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleContainer, ver. 0.0,
   GUID={0x0000011b,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleContainer_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleContainer_FormatStringOffsetTable[] = 
    {
    246,
    288,
    318
    };

static const MIDL_SERVER_INFO IOleContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleContainer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IOleContainerProxyVtbl = 
{
    &IOleContainer_ProxyInfo,
    &IID_IOleContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IParseDisplayName::ParseDisplayName */ ,
    (void *)-1 /* IOleContainer::EnumObjects */ ,
    (void *)-1 /* IOleContainer::LockContainer */
};

const CInterfaceStubVtbl _IOleContainerStubVtbl =
{
    &IID_IOleContainer,
    &IOleContainer_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleClientSite, ver. 0.0,
   GUID={0x00000118,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleClientSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleClientSite_FormatStringOffsetTable[] = 
    {
    342,
    360,
    396,
    420,
    438,
    462
    };

static const MIDL_SERVER_INFO IOleClientSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleClientSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleClientSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleClientSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IOleClientSiteProxyVtbl = 
{
    &IOleClientSite_ProxyInfo,
    &IID_IOleClientSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleClientSite::SaveObject */ ,
    (void *)-1 /* IOleClientSite::GetMoniker */ ,
    (void *)-1 /* IOleClientSite::GetContainer */ ,
    (void *)-1 /* IOleClientSite::ShowObject */ ,
    (void *)-1 /* IOleClientSite::OnShowWindow */ ,
    (void *)-1 /* IOleClientSite::RequestNewObjectLayout */
};

const CInterfaceStubVtbl _IOleClientSiteStubVtbl =
{
    &IID_IOleClientSite,
    &IOleClientSite_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleObject, ver. 0.0,
   GUID={0x00000112,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleObject_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleObject_FormatStringOffsetTable[] = 
    {
    480,
    504,
    528,
    558,
    582,
    612,
    648,
    684,
    714,
    768,
    792,
    810,
    828,
    852,
    882,
    912,
    942,
    972,
    996,
    1020,
    1050
    };

static const MIDL_SERVER_INFO IOleObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(24) _IOleObjectProxyVtbl = 
{
    &IOleObject_ProxyInfo,
    &IID_IOleObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleObject::SetClientSite */ ,
    (void *)-1 /* IOleObject::GetClientSite */ ,
    (void *)-1 /* IOleObject::SetHostNames */ ,
    (void *)-1 /* IOleObject::Close */ ,
    (void *)-1 /* IOleObject::SetMoniker */ ,
    (void *)-1 /* IOleObject::GetMoniker */ ,
    (void *)-1 /* IOleObject::InitFromData */ ,
    (void *)-1 /* IOleObject::GetClipboardData */ ,
    (void *)-1 /* IOleObject::DoVerb */ ,
    (void *)-1 /* IOleObject::EnumVerbs */ ,
    (void *)-1 /* IOleObject::Update */ ,
    (void *)-1 /* IOleObject::IsUpToDate */ ,
    (void *)-1 /* IOleObject::GetUserClassID */ ,
    (void *)-1 /* IOleObject::GetUserType */ ,
    (void *)-1 /* IOleObject::SetExtent */ ,
    (void *)-1 /* IOleObject::GetExtent */ ,
    (void *)-1 /* IOleObject::Advise */ ,
    (void *)-1 /* IOleObject::Unadvise */ ,
    (void *)-1 /* IOleObject::EnumAdvise */ ,
    (void *)-1 /* IOleObject::GetMiscStatus */ ,
    (void *)-1 /* IOleObject::SetColorScheme */
};

const CInterfaceStubVtbl _IOleObjectStubVtbl =
{
    &IID_IOleObject,
    &IOleObject_ServerInfo,
    24,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: IOLETypes, ver. 0.0,
   GUID={0xB0916C84,0x7416,0x101A,{0xBC,0xEA,0x08,0x00,0x2B,0x2B,0x79,0xEF}} */


/* Object interface: IOleWindow, ver. 0.0,
   GUID={0x00000114,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleWindow_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleWindow_FormatStringOffsetTable[] = 
    {
    1074,
    36
    };

static const MIDL_SERVER_INFO IOleWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleWindow_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IOleWindowProxyVtbl = 
{
    &IOleWindow_ProxyInfo,
    &IID_IOleWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */
};

const CInterfaceStubVtbl _IOleWindowStubVtbl =
{
    &IID_IOleWindow,
    &IOleWindow_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleLink, ver. 0.0,
   GUID={0x0000011d,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleLink_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleLink_FormatStringOffsetTable[] = 
    {
    1102,
    1126,
    1150,
    1180,
    1204,
    1228,
    1252,
    1282,
    1300,
    1324,
    1342
    };

static const MIDL_SERVER_INFO IOleLink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleLink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleLink_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleLink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IOleLinkProxyVtbl = 
{
    &IOleLink_ProxyInfo,
    &IID_IOleLink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleLink::SetUpdateOptions */ ,
    (void *)-1 /* IOleLink::GetUpdateOptions */ ,
    (void *)-1 /* IOleLink::SetSourceMoniker */ ,
    (void *)-1 /* IOleLink::GetSourceMoniker */ ,
    (void *)-1 /* IOleLink::SetSourceDisplayName */ ,
    (void *)-1 /* IOleLink::GetSourceDisplayName */ ,
    (void *)-1 /* IOleLink::BindToSource */ ,
    (void *)-1 /* IOleLink::BindIfRunning */ ,
    (void *)-1 /* IOleLink::GetBoundSource */ ,
    (void *)-1 /* IOleLink::UnbindSource */ ,
    (void *)-1 /* IOleLink::Update */
};

const CInterfaceStubVtbl _IOleLinkStubVtbl =
{
    &IID_IOleLink,
    &IOleLink_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleItemContainer, ver. 0.0,
   GUID={0x0000011c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleItemContainer_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IOleItemContainer_RemoteGetObject_Proxy( 
    IOleItemContainer __RPC_FAR * This,
    /* [in] */ LPOLESTR pszItem,
    /* [in] */ DWORD dwSpeedNeeded,
    /* [unique][in] */ IBindCtx __RPC_FAR *pbc,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvObject)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppvObject);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1366],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1366],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pszItem,
                  ( unsigned char __RPC_FAR * )&dwSpeedNeeded,
                  ( unsigned char __RPC_FAR * )&pbc,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&ppvObject);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1366],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOleItemContainer_RemoteGetObject_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleItemContainer __RPC_FAR *This;
        LPOLESTR pszItem;
        DWORD dwSpeedNeeded;
        IBindCtx __RPC_FAR *pbc;
        REFIID riid;
        IUnknown __RPC_FAR *__RPC_FAR *ppvObject;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleItemContainer __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR pszItem;
        char Pad1[4];
        DWORD dwSpeedNeeded;
        char Pad2[4];
        IBindCtx __RPC_FAR *pbc;
        char Pad3[4];
        REFIID riid;
        char Pad4[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvObject;
        char Pad5[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOleItemContainer_GetObject_Stub(
                                           (IOleItemContainer *) pParamStruct->This,
                                           pParamStruct->pszItem,
                                           pParamStruct->dwSpeedNeeded,
                                           pParamStruct->pbc,
                                           pParamStruct->riid,
                                           pParamStruct->ppvObject);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IOleItemContainer_RemoteGetObjectStorage_Proxy( 
    IOleItemContainer __RPC_FAR * This,
    /* [in] */ LPOLESTR pszItem,
    /* [unique][in] */ IBindCtx __RPC_FAR *pbc,
    /* [in] */ REFIID riid,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvStorage)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppvStorage);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1414],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1414],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pszItem,
                  ( unsigned char __RPC_FAR * )&pbc,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&ppvStorage);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1414],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOleItemContainer_RemoteGetObjectStorage_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleItemContainer __RPC_FAR *This;
        LPOLESTR pszItem;
        IBindCtx __RPC_FAR *pbc;
        REFIID riid;
        IUnknown __RPC_FAR *__RPC_FAR *ppvStorage;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleItemContainer __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR pszItem;
        char Pad1[4];
        IBindCtx __RPC_FAR *pbc;
        char Pad2[4];
        REFIID riid;
        char Pad3[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvStorage;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOleItemContainer_GetObjectStorage_Stub(
                                                  (IOleItemContainer *) pParamStruct->This,
                                                  pParamStruct->pszItem,
                                                  pParamStruct->pbc,
                                                  pParamStruct->riid,
                                                  pParamStruct->ppvStorage);
    
}

static const unsigned short IOleItemContainer_FormatStringOffsetTable[] = 
    {
    246,
    288,
    318,
    1366,
    1414,
    1456
    };

static const STUB_THUNK IOleItemContainer_StubThunkTable[] = 
    {
    0,
    0,
    0,
    IOleItemContainer_RemoteGetObject_Thunk,
    IOleItemContainer_RemoteGetObjectStorage_Thunk,
    0
    };

static const MIDL_SERVER_INFO IOleItemContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleItemContainer_FormatStringOffsetTable[-3],
    &IOleItemContainer_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleItemContainer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleItemContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IOleItemContainerProxyVtbl = 
{
    &IOleItemContainer_ProxyInfo,
    &IID_IOleItemContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IParseDisplayName::ParseDisplayName */ ,
    (void *)-1 /* IOleContainer::EnumObjects */ ,
    (void *)-1 /* IOleContainer::LockContainer */ ,
    IOleItemContainer_GetObject_Proxy ,
    IOleItemContainer_GetObjectStorage_Proxy ,
    (void *)-1 /* IOleItemContainer::IsRunning */
};

const CInterfaceStubVtbl _IOleItemContainerStubVtbl =
{
    &IID_IOleItemContainer,
    &IOleItemContainer_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleInPlaceUIWindow, ver. 0.0,
   GUID={0x00000115,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceUIWindow_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleInPlaceUIWindow_FormatStringOffsetTable[] = 
    {
    1074,
    36,
    1480,
    1508,
    1536,
    1564
    };

static const MIDL_SERVER_INFO IOleInPlaceUIWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceUIWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceUIWindow_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceUIWindow_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IOleInPlaceUIWindowProxyVtbl = 
{
    &IOleInPlaceUIWindow_ProxyInfo,
    &IID_IOleInPlaceUIWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    (void *)-1 /* IOleInPlaceUIWindow::GetBorder */ ,
    (void *)-1 /* IOleInPlaceUIWindow::RequestBorderSpace */ ,
    (void *)-1 /* IOleInPlaceUIWindow::SetBorderSpace */ ,
    (void *)-1 /* IOleInPlaceUIWindow::SetActiveObject */
};

const CInterfaceStubVtbl _IOleInPlaceUIWindowStubVtbl =
{
    &IID_IOleInPlaceUIWindow,
    &IOleInPlaceUIWindow_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleInPlaceActiveObject, ver. 0.0,
   GUID={0x00000117,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceActiveObject_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteTranslateAccelerator_Proxy( 
    IOleInPlaceActiveObject __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1594],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1594],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1594],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOleInPlaceActiveObject_RemoteTranslateAccelerator_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleInPlaceActiveObject __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleInPlaceActiveObject __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOleInPlaceActiveObject_TranslateAccelerator_Stub((IOleInPlaceActiveObject *) pParamStruct->This);
    
}

/* [input_sync][call_as] */ HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteResizeBorder_Proxy( 
    IOleInPlaceActiveObject __RPC_FAR * This,
    /* [in] */ LPCRECT prcBorder,
    /* [in] */ REFIID riid,
    /* [iid_is][unique][in] */ IOleInPlaceUIWindow __RPC_FAR *pUIWindow,
    /* [in] */ BOOL fFrameWindow)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,fFrameWindow);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&prcBorder,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&pUIWindow,
                  ( unsigned char __RPC_FAR * )&fFrameWindow);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOleInPlaceActiveObject_RemoteResizeBorder_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleInPlaceActiveObject __RPC_FAR *This;
        LPCRECT prcBorder;
        REFIID riid;
        IOleInPlaceUIWindow __RPC_FAR *pUIWindow;
        BOOL fFrameWindow;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOleInPlaceActiveObject __RPC_FAR *This;
        char Pad0[4];
        LPCRECT prcBorder;
        char Pad1[4];
        REFIID riid;
        char Pad2[4];
        IOleInPlaceUIWindow __RPC_FAR *pUIWindow;
        char Pad3[4];
        BOOL fFrameWindow;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOleInPlaceActiveObject_ResizeBorder_Stub(
                                                    (IOleInPlaceActiveObject *) pParamStruct->This,
                                                    pParamStruct->prcBorder,
                                                    pParamStruct->riid,
                                                    pParamStruct->pUIWindow,
                                                    pParamStruct->fFrameWindow);
    
}

static const unsigned short IOleInPlaceActiveObject_FormatStringOffsetTable[] = 
    {
    1074,
    36,
    1594,
    1612,
    1640,
    1668,
    180
    };

static const STUB_THUNK IOleInPlaceActiveObject_StubThunkTable[] = 
    {
    0,
    0,
    IOleInPlaceActiveObject_RemoteTranslateAccelerator_Thunk,
    0,
    0,
    IOleInPlaceActiveObject_RemoteResizeBorder_Thunk,
    0
    };

static const MIDL_SERVER_INFO IOleInPlaceActiveObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceActiveObject_FormatStringOffsetTable[-3],
    &IOleInPlaceActiveObject_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceActiveObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceActiveObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IOleInPlaceActiveObjectProxyVtbl = 
{
    &IOleInPlaceActiveObject_ProxyInfo,
    &IID_IOleInPlaceActiveObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    IOleInPlaceActiveObject_TranslateAccelerator_Proxy ,
    (void *)-1 /* IOleInPlaceActiveObject::OnFrameWindowActivate */ ,
    (void *)-1 /* IOleInPlaceActiveObject::OnDocWindowActivate */ ,
    IOleInPlaceActiveObject_ResizeBorder_Proxy ,
    (void *)-1 /* IOleInPlaceActiveObject::EnableModeless */
};

const CInterfaceStubVtbl _IOleInPlaceActiveObjectStubVtbl =
{
    &IID_IOleInPlaceActiveObject,
    &IOleInPlaceActiveObject_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleInPlaceFrame, ver. 0.0,
   GUID={0x00000116,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceFrame_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleInPlaceFrame_FormatStringOffsetTable[] = 
    {
    1074,
    36,
    1480,
    1508,
    1536,
    1564,
    1714,
    1744,
    1784,
    1808,
    1836,
    1860
    };

static const MIDL_SERVER_INFO IOleInPlaceFrame_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceFrame_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceFrame_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IOleInPlaceFrameProxyVtbl = 
{
    &IOleInPlaceFrame_ProxyInfo,
    &IID_IOleInPlaceFrame,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    (void *)-1 /* IOleInPlaceUIWindow::GetBorder */ ,
    (void *)-1 /* IOleInPlaceUIWindow::RequestBorderSpace */ ,
    (void *)-1 /* IOleInPlaceUIWindow::SetBorderSpace */ ,
    (void *)-1 /* IOleInPlaceUIWindow::SetActiveObject */ ,
    (void *)-1 /* IOleInPlaceFrame::InsertMenus */ ,
    (void *)-1 /* IOleInPlaceFrame::SetMenu */ ,
    (void *)-1 /* IOleInPlaceFrame::RemoveMenus */ ,
    (void *)-1 /* IOleInPlaceFrame::SetStatusText */ ,
    (void *)-1 /* IOleInPlaceFrame::EnableModeless */ ,
    (void *)-1 /* IOleInPlaceFrame::TranslateAccelerator */
};

const CInterfaceStubVtbl _IOleInPlaceFrameStubVtbl =
{
    &IID_IOleInPlaceFrame,
    &IOleInPlaceFrame_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleInPlaceObject, ver. 0.0,
   GUID={0x00000113,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceObject_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleInPlaceObject_FormatStringOffsetTable[] = 
    {
    1074,
    36,
    1594,
    420,
    1890,
    462
    };

static const MIDL_SERVER_INFO IOleInPlaceObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceObject_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IOleInPlaceObjectProxyVtbl = 
{
    &IOleInPlaceObject_ProxyInfo,
    &IID_IOleInPlaceObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    (void *)-1 /* IOleInPlaceObject::InPlaceDeactivate */ ,
    (void *)-1 /* IOleInPlaceObject::UIDeactivate */ ,
    (void *)-1 /* IOleInPlaceObject::SetObjectRects */ ,
    (void *)-1 /* IOleInPlaceObject::ReactivateAndUndo */
};

const CInterfaceStubVtbl _IOleInPlaceObjectStubVtbl =
{
    &IID_IOleInPlaceObject,
    &IOleInPlaceObject_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleInPlaceSite, ver. 0.0,
   GUID={0x00000119,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleInPlaceSite_FormatStringOffsetTable[] = 
    {
    1074,
    36,
    1594,
    420,
    1924,
    1942,
    1990,
    2014,
    2038,
    1324,
    792,
    2056
    };

static const MIDL_SERVER_INFO IOleInPlaceSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IOleInPlaceSiteProxyVtbl = 
{
    &IOleInPlaceSite_ProxyInfo,
    &IID_IOleInPlaceSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleWindow::GetWindow */ ,
    (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    (void *)-1 /* IOleInPlaceSite::CanInPlaceActivate */ ,
    (void *)-1 /* IOleInPlaceSite::OnInPlaceActivate */ ,
    (void *)-1 /* IOleInPlaceSite::OnUIActivate */ ,
    (void *)-1 /* IOleInPlaceSite::GetWindowContext */ ,
    (void *)-1 /* IOleInPlaceSite::Scroll */ ,
    (void *)-1 /* IOleInPlaceSite::OnUIDeactivate */ ,
    (void *)-1 /* IOleInPlaceSite::OnInPlaceDeactivate */ ,
    (void *)-1 /* IOleInPlaceSite::DiscardUndoState */ ,
    (void *)-1 /* IOleInPlaceSite::DeactivateAndUndo */ ,
    (void *)-1 /* IOleInPlaceSite::OnPosRectChange */
};

const CInterfaceStubVtbl _IOleInPlaceSiteStubVtbl =
{
    &IID_IOleInPlaceSite,
    &IOleInPlaceSite_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IContinue, ver. 0.0,
   GUID={0x0000012a,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IContinue_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IContinue_FormatStringOffsetTable[] = 
    {
    342
    };

static const MIDL_SERVER_INFO IContinue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IContinue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IContinue_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IContinue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IContinueProxyVtbl = 
{
    &IContinue_ProxyInfo,
    &IID_IContinue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IContinue::FContinue */
};

const CInterfaceStubVtbl _IContinueStubVtbl =
{
    &IID_IContinue,
    &IContinue_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IViewObject, ver. 0.0,
   GUID={0x0000010d,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IViewObject_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IViewObject_RemoteDraw_Proxy( 
    IViewObject __RPC_FAR * This,
    /* [in] */ DWORD dwDrawAspect,
    /* [in] */ LONG lindex,
    /* [in] */ DWORD pvAspect,
    /* [unique][in] */ DVTARGETDEVICE __RPC_FAR *ptd,
    /* [in] */ DWORD hdcTargetDev,
    /* [in] */ DWORD hdcDraw,
    /* [in] */ LPCRECTL lprcBounds,
    /* [unique][in] */ LPCRECTL lprcWBounds,
    /* [in] */ IContinue __RPC_FAR *pContinue)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pContinue);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2080],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2080],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwDrawAspect,
                  ( unsigned char __RPC_FAR * )&lindex,
                  ( unsigned char __RPC_FAR * )&pvAspect,
                  ( unsigned char __RPC_FAR * )&ptd,
                  ( unsigned char __RPC_FAR * )&hdcTargetDev,
                  ( unsigned char __RPC_FAR * )&hdcDraw,
                  ( unsigned char __RPC_FAR * )&lprcBounds,
                  ( unsigned char __RPC_FAR * )&lprcWBounds,
                  ( unsigned char __RPC_FAR * )&pContinue);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2080],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IViewObject_RemoteDraw_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        DWORD dwDrawAspect;
        LONG lindex;
        DWORD pvAspect;
        DVTARGETDEVICE __RPC_FAR *ptd;
        DWORD hdcTargetDev;
        DWORD hdcDraw;
        LPCRECTL lprcBounds;
        LPCRECTL lprcWBounds;
        IContinue __RPC_FAR *pContinue;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        char Pad0[4];
        DWORD dwDrawAspect;
        char Pad1[4];
        LONG lindex;
        char Pad2[4];
        DWORD pvAspect;
        char Pad3[4];
        DVTARGETDEVICE __RPC_FAR *ptd;
        char Pad4[4];
        DWORD hdcTargetDev;
        char Pad5[4];
        DWORD hdcDraw;
        char Pad6[4];
        LPCRECTL lprcBounds;
        char Pad7[4];
        LPCRECTL lprcWBounds;
        char Pad8[4];
        IContinue __RPC_FAR *pContinue;
        char Pad9[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IViewObject_Draw_Stub(
                                (IViewObject *) pParamStruct->This,
                                pParamStruct->dwDrawAspect,
                                pParamStruct->lindex,
                                pParamStruct->pvAspect,
                                pParamStruct->ptd,
                                pParamStruct->hdcTargetDev,
                                pParamStruct->hdcDraw,
                                pParamStruct->lprcBounds,
                                pParamStruct->lprcWBounds,
                                pParamStruct->pContinue);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetColorSet_Proxy( 
    IViewObject __RPC_FAR * This,
    /* [in] */ DWORD dwDrawAspect,
    /* [in] */ LONG lindex,
    /* [in] */ DWORD pvAspect,
    /* [unique][in] */ DVTARGETDEVICE __RPC_FAR *ptd,
    /* [in] */ DWORD hicTargetDev,
    /* [out] */ LOGPALETTE __RPC_FAR *__RPC_FAR *ppColorSet)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppColorSet);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2152],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2152],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwDrawAspect,
                  ( unsigned char __RPC_FAR * )&lindex,
                  ( unsigned char __RPC_FAR * )&pvAspect,
                  ( unsigned char __RPC_FAR * )&ptd,
                  ( unsigned char __RPC_FAR * )&hicTargetDev,
                  ( unsigned char __RPC_FAR * )&ppColorSet);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2152],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IViewObject_RemoteGetColorSet_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        DWORD dwDrawAspect;
        LONG lindex;
        DWORD pvAspect;
        DVTARGETDEVICE __RPC_FAR *ptd;
        DWORD hicTargetDev;
        LOGPALETTE __RPC_FAR *__RPC_FAR *ppColorSet;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        char Pad0[4];
        DWORD dwDrawAspect;
        char Pad1[4];
        LONG lindex;
        char Pad2[4];
        DWORD pvAspect;
        char Pad3[4];
        DVTARGETDEVICE __RPC_FAR *ptd;
        char Pad4[4];
        DWORD hicTargetDev;
        char Pad5[4];
        LOGPALETTE __RPC_FAR *__RPC_FAR *ppColorSet;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IViewObject_GetColorSet_Stub(
                                       (IViewObject *) pParamStruct->This,
                                       pParamStruct->dwDrawAspect,
                                       pParamStruct->lindex,
                                       pParamStruct->pvAspect,
                                       pParamStruct->ptd,
                                       pParamStruct->hicTargetDev,
                                       pParamStruct->ppColorSet);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IViewObject_RemoteFreeze_Proxy( 
    IViewObject __RPC_FAR * This,
    /* [in] */ DWORD dwDrawAspect,
    /* [in] */ LONG lindex,
    /* [in] */ DWORD pvAspect,
    /* [out] */ DWORD __RPC_FAR *pdwFreeze)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pdwFreeze);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2206],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2206],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwDrawAspect,
                  ( unsigned char __RPC_FAR * )&lindex,
                  ( unsigned char __RPC_FAR * )&pvAspect,
                  ( unsigned char __RPC_FAR * )&pdwFreeze);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2206],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IViewObject_RemoteFreeze_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        DWORD dwDrawAspect;
        LONG lindex;
        DWORD pvAspect;
        DWORD __RPC_FAR *pdwFreeze;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IViewObject __RPC_FAR *This;
        char Pad0[4];
        DWORD dwDrawAspect;
        char Pad1[4];
        LONG lindex;
        char Pad2[4];
        DWORD pvAspect;
        char Pad3[4];
        DWORD __RPC_FAR *pdwFreeze;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IViewObject_Freeze_Stub(
                                  (IViewObject *) pParamStruct->This,
                                  pParamStruct->dwDrawAspect,
                                  pParamStruct->lindex,
                                  pParamStruct->pvAspect,
                                  pParamStruct->pdwFreeze);
    
}

static const unsigned short IViewObject_FormatStringOffsetTable[] = 
    {
    2080,
    2152,
    2206,
    558,
    2248,
    2284
    };

static const STUB_THUNK IViewObject_StubThunkTable[] = 
    {
    IViewObject_RemoteDraw_Thunk,
    IViewObject_RemoteGetColorSet_Thunk,
    IViewObject_RemoteFreeze_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IViewObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IViewObject_FormatStringOffsetTable[-3],
    &IViewObject_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IViewObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IViewObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IViewObjectProxyVtbl = 
{
    &IViewObject_ProxyInfo,
    &IID_IViewObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IViewObject_Draw_Proxy ,
    IViewObject_GetColorSet_Proxy ,
    IViewObject_Freeze_Proxy ,
    (void *)-1 /* IViewObject::Unfreeze */ ,
    (void *)-1 /* IViewObject::SetAdvise */ ,
    (void *)-1 /* IViewObject::GetAdvise */
};

const CInterfaceStubVtbl _IViewObjectStubVtbl =
{
    &IID_IViewObject,
    &IViewObject_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IViewObject2, ver. 0.0,
   GUID={0x00000127,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IViewObject2_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IViewObject2_FormatStringOffsetTable[] = 
    {
    2080,
    2152,
    2206,
    558,
    2248,
    2284,
    2320
    };

static const STUB_THUNK IViewObject2_StubThunkTable[] = 
    {
    IViewObject_RemoteDraw_Thunk,
    IViewObject_RemoteGetColorSet_Thunk,
    IViewObject_RemoteFreeze_Thunk,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IViewObject2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IViewObject2_FormatStringOffsetTable[-3],
    &IViewObject2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IViewObject2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IViewObject2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IViewObject2ProxyVtbl = 
{
    &IViewObject2_ProxyInfo,
    &IID_IViewObject2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IViewObject_Draw_Proxy ,
    IViewObject_GetColorSet_Proxy ,
    IViewObject_Freeze_Proxy ,
    (void *)-1 /* IViewObject::Unfreeze */ ,
    (void *)-1 /* IViewObject::SetAdvise */ ,
    (void *)-1 /* IViewObject::GetAdvise */ ,
    (void *)-1 /* IViewObject2::GetExtent */
};

const CInterfaceStubVtbl _IViewObject2StubVtbl =
{
    &IID_IViewObject2,
    &IViewObject2_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDropSource, ver. 0.0,
   GUID={0x00000121,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDropTarget, ver. 0.0,
   GUID={0x00000122,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDropTarget_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IDropTarget_FormatStringOffsetTable[] = 
    {
    2362,
    2404,
    1594,
    2440
    };

static const MIDL_SERVER_INFO IDropTarget_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDropTarget_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDropTarget_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDropTarget_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IDropTargetProxyVtbl = 
{
    &IDropTarget_ProxyInfo,
    &IID_IDropTarget,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDropTarget::DragEnter */ ,
    (void *)-1 /* IDropTarget::DragOver */ ,
    (void *)-1 /* IDropTarget::DragLeave */ ,
    (void *)-1 /* IDropTarget::Drop */
};

const CInterfaceStubVtbl _IDropTargetStubVtbl =
{
    &IID_IDropTarget,
    &IDropTarget_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumOLEVERB, ver. 0.0,
   GUID={0x00000104,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumOLEVERB_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumOLEVERB_RemoteNext_Proxy( 
    IEnumOLEVERB __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ LPOLEVERB rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2482],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2482],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2482],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumOLEVERB_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumOLEVERB __RPC_FAR *This;
        ULONG celt;
        LPOLEVERB rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumOLEVERB __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        LPOLEVERB rgelt;
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
    
    pParamStruct->_RetVal = IEnumOLEVERB_Next_Stub(
                                 (IEnumOLEVERB *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgelt,
                                 pParamStruct->pceltFetched);
    
}

extern const EXPR_EVAL ExprEvalRoutines[];
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[6];

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    ExprEvalRoutines,
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

static const unsigned short IEnumOLEVERB_FormatStringOffsetTable[] = 
    {
    2482,
    36,
    1594,
    2518
    };

static const STUB_THUNK IEnumOLEVERB_StubThunkTable[] = 
    {
    IEnumOLEVERB_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumOLEVERB_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumOLEVERB_FormatStringOffsetTable[-3],
    &IEnumOLEVERB_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumOLEVERB_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumOLEVERB_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumOLEVERBProxyVtbl = 
{
    &IEnumOLEVERB_ProxyInfo,
    &IID_IEnumOLEVERB,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumOLEVERB_Next_Proxy ,
    (void *)-1 /* IEnumOLEVERB::Skip */ ,
    (void *)-1 /* IEnumOLEVERB::Reset */ ,
    (void *)-1 /* IEnumOLEVERB::Clone */
};

const CInterfaceStubVtbl _IEnumOLEVERBStubVtbl =
{
    &IID_IEnumOLEVERB,
    &IEnumOLEVERB_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

static void __RPC_USER IOleCache_DVTARGETDEVICEExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    DVTARGETDEVICE __RPC_FAR *pS	=	( DVTARGETDEVICE __RPC_FAR * )(pStubMsg->StackTop - 12);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->tdSize - sizeof( DWORD  ) - 4 * sizeof( WORD  );
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IOleCache_DVTARGETDEVICEExprEval_0000
    };


static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[6] = 
        {
            
            {
            CLIPFORMAT_UserSize
            ,CLIPFORMAT_UserMarshal
            ,CLIPFORMAT_UserUnmarshal
            ,CLIPFORMAT_UserFree
            },
            {
            STGMEDIUM_UserSize
            ,STGMEDIUM_UserMarshal
            ,STGMEDIUM_UserUnmarshal
            ,STGMEDIUM_UserFree
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            HMENU_UserSize
            ,HMENU_UserMarshal
            ,HMENU_UserUnmarshal
            ,HMENU_UserFree
            },
            {
            HGLOBAL_UserSize
            ,HGLOBAL_UserMarshal
            ,HGLOBAL_UserUnmarshal
            ,HGLOBAL_UserFree
            },
            {
            HACCEL_UserSize
            ,HACCEL_UserMarshal
            ,HACCEL_UserUnmarshal
            ,HACCEL_UserFree
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

	/* Procedure Cache */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	NdrFcShort( 0x8 ),	/* 8 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pformatetc */

/* 12 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter advf */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwConnection */

/* 24 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure ContextSensitiveHelp */


	/* Procedure Uncache */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter celt */


	/* Parameter fEnterMode */


	/* Parameter dwConnection */

/* 48 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumCache */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 62 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenumSTATDATA */

/* 72 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 78 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCache */

/* 84 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 86 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 88 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x8 ),	/* 8 */
/* 94 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pDataObject */

/* 96 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 100 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetData */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 110 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 118 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pformatetc */

/* 120 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 124 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pmedium */

/* 126 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 130 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */

	/* Parameter fRelease */

/* 132 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteUpdateCache */

/* 144 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 146 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 148 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 150 */	NdrFcShort( 0x10 ),	/* 16 */
/* 152 */	NdrFcShort( 0x8 ),	/* 8 */
/* 154 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pDataObject */

/* 156 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 160 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter grfUpdf */

/* 162 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pReserved */

/* 168 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableModeless */


	/* Procedure DiscardCache */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 182 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fEnable */


	/* Parameter dwDiscardOptions */

/* 192 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRun */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 206 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pDataObject */

/* 216 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 220 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStop */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 230 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 238 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ParseDisplayName */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 248 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 256 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter pbc */

/* 258 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 262 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Parameter pszDisplayName */

/* 264 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 268 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter pchEaten */

/* 270 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 272 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmkOut */

/* 276 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 280 */	NdrFcShort( 0x22c ),	/* Type Offset=556 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumObjects */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 290 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter grfFlags */

/* 300 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenum */

/* 306 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 310 */	NdrFcShort( 0x242 ),	/* Type Offset=578 */

	/* Return value */

/* 312 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockContainer */

/* 318 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 320 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 322 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fLock */

/* 330 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FContinue */


	/* Procedure SaveObject */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 344 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 352 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMoniker */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 362 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 364 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 366 */	NdrFcShort( 0x10 ),	/* 16 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter dwAssign */

/* 372 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwWhichMoniker */

/* 378 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmk */

/* 384 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 388 */	NdrFcShort( 0x22c ),	/* Type Offset=556 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainer */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 398 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 400 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppContainer */

/* 408 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 412 */	NdrFcShort( 0x258 ),	/* Type Offset=600 */

	/* Return value */

/* 414 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceActivate */


	/* Procedure UIDeactivate */


	/* Procedure ShowObject */

/* 420 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 422 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 430 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnShowWindow */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 440 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 442 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fShow */

/* 450 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 456 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReactivateAndUndo */


	/* Procedure RequestNewObjectLayout */

/* 462 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 464 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 466 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 472 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 474 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 476 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClientSite */

/* 480 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 482 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 484 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 490 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pClientSite */

/* 492 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 494 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 496 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Return value */

/* 498 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClientSite */

/* 504 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 506 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 508 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 514 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppClientSite */

/* 516 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 520 */	NdrFcShort( 0x280 ),	/* Type Offset=640 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHostNames */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 530 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 532 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 538 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter szContainerApp */

/* 540 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 542 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 544 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter szContainerObj */

/* 546 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 550 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Unfreeze */


	/* Procedure Close */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 560 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 562 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwFreeze */


	/* Parameter dwSaveOption */

/* 570 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMoniker */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 584 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 586 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter dwWhichMoniker */

/* 594 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmk */

/* 600 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 604 */	NdrFcShort( 0x230 ),	/* Type Offset=560 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMoniker */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 614 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 616 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 618 */	NdrFcShort( 0x10 ),	/* 16 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter dwAssign */

/* 624 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 626 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwWhichMoniker */

/* 630 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmk */

/* 636 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 640 */	NdrFcShort( 0x22c ),	/* Type Offset=556 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitFromData */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 650 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 652 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 654 */	NdrFcShort( 0x10 ),	/* 16 */
/* 656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 658 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pDataObject */

/* 660 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 664 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter fCreation */

/* 666 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 668 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwReserved */

/* 672 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 678 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClipboardData */

/* 684 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 686 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 688 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dwReserved */

/* 696 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 698 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDataObject */

/* 702 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 706 */	NdrFcShort( 0x284 ),	/* Type Offset=644 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoVerb */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 716 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 718 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 720 */	NdrFcShort( 0x30 ),	/* 48 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter iVerb */

/* 726 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpmsg */

/* 732 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 736 */	NdrFcShort( 0x288 ),	/* Type Offset=648 */

	/* Parameter pActiveSite */

/* 738 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 740 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 742 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Parameter lindex */

/* 744 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hwndParent */

/* 750 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 754 */	NdrFcShort( 0x2cc ),	/* Type Offset=716 */

	/* Parameter lprcPosRect */

/* 756 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 760 */	NdrFcShort( 0x2d6 ),	/* Type Offset=726 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumVerbs */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 770 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 772 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnumOleVerb */

/* 780 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x2e4 ),	/* Type Offset=740 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeactivateAndUndo */


	/* Procedure Update */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 794 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 796 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 802 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 806 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsUpToDate */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 812 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 814 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 822 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUserClassID */

/* 828 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 830 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 832 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x28 ),	/* 40 */
/* 838 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pClsid */

/* 840 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 844 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 848 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUserType */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 854 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 856 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dwFormOfType */

/* 864 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszUserType */

/* 870 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 872 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 874 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetExtent */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 884 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 886 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 888 */	NdrFcShort( 0x18 ),	/* 24 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dwDrawAspect */

/* 894 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter psizel */

/* 900 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 904 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtent */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 914 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 916 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 920 */	NdrFcShort( 0x18 ),	/* 24 */
/* 922 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dwDrawAspect */

/* 924 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter psizel */

/* 930 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 934 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 936 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Advise */

/* 942 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 944 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 946 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 952 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pAdvSink */

/* 954 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 956 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 958 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Parameter pdwConnection */

/* 960 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 962 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 968 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Unadvise */

/* 972 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 974 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 976 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 982 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwConnection */

/* 984 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 986 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumAdvise */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 998 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1000 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenumAdvise */

/* 1008 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1010 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1012 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1016 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMiscStatus */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1022 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1024 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1030 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dwAspect */

/* 1032 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwStatus */

/* 1038 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1046 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetColorScheme */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1052 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1054 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pLogpal */

/* 1062 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1066 */	NdrFcShort( 0x1b8 ),	/* Type Offset=440 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindow */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1076 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1080 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1082 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1088 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter phwnd */

/* 1090 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1092 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1094 */	NdrFcShort( 0x33e ),	/* Type Offset=830 */

	/* Return value */

/* 1096 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1098 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetUpdateOptions */

/* 1102 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1104 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1112 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwUpdateOpt */

/* 1114 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1120 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1122 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUpdateOptions */

/* 1126 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1128 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1130 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1136 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwUpdateOpt */

/* 1138 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1140 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1144 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSourceMoniker */

/* 1150 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1152 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1156 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1160 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pmk */

/* 1162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1166 */	NdrFcShort( 0x230 ),	/* Type Offset=560 */

	/* Parameter rclsid */

/* 1168 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1172 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Return value */

/* 1174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1176 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSourceMoniker */

/* 1180 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1182 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppmk */

/* 1192 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1196 */	NdrFcShort( 0x22c ),	/* Type Offset=556 */

	/* Return value */

/* 1198 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSourceDisplayName */

/* 1204 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1206 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1208 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1214 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszStatusText */

/* 1216 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1218 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1220 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Return value */

/* 1222 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1224 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSourceDisplayName */

/* 1228 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1232 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1238 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppszDisplayName */

/* 1240 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 1242 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1244 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Return value */

/* 1246 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BindToSource */

/* 1252 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1254 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1256 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1262 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter bindflags */

/* 1264 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1266 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbc */

/* 1270 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1272 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1274 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Return value */

/* 1276 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1278 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BindIfRunning */

/* 1282 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1284 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1292 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1294 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1296 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBoundSource */

/* 1300 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1302 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1310 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppunk */

/* 1312 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1314 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1316 */	NdrFcShort( 0x34c ),	/* Type Offset=844 */

	/* Return value */

/* 1318 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1320 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscardUndoState */


	/* Procedure UnbindSource */

/* 1324 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1326 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1338 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Update */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1344 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1352 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pbc */

/* 1354 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1356 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1358 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Return value */

/* 1360 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1362 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetObject */

/* 1366 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1368 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1372 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pszItem */

/* 1378 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1380 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1382 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter dwSpeedNeeded */

/* 1384 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1386 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbc */

/* 1390 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1392 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1394 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Parameter riid */

/* 1396 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1398 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1400 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Parameter ppvObject */

/* 1402 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1404 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1406 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Return value */

/* 1408 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1410 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetObjectStorage */

/* 1414 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1416 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1420 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1424 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter pszItem */

/* 1426 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1428 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1430 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Parameter pbc */

/* 1432 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1434 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1436 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Parameter riid */

/* 1438 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1440 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1442 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Parameter ppvStorage */

/* 1444 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1446 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1448 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Return value */

/* 1450 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1452 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsRunning */

/* 1456 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1458 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1460 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1466 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszItem */

/* 1468 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1470 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1472 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Return value */

/* 1474 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1476 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBorder */

/* 1480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1482 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1486 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1488 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1494 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter lprectBorder */

/* 1496 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 1498 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1500 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Return value */

/* 1502 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RequestBorderSpace */

/* 1508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1510 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1514 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1516 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1518 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1522 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pborderwidths */

/* 1524 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1526 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1528 */	NdrFcShort( 0x2d6 ),	/* Type Offset=726 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1532 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetBorderSpace */

/* 1536 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1538 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1542 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1544 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1546 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pborderwidths */

/* 1552 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1554 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1556 */	NdrFcShort( 0x2d6 ),	/* Type Offset=726 */

	/* Return value */

/* 1558 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1560 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetActiveObject */

/* 1564 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1568 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pActiveObject */

/* 1576 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1578 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1580 */	NdrFcShort( 0x368 ),	/* Type Offset=872 */

	/* Parameter pszObjName */

/* 1582 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1584 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1586 */	NdrFcShort( 0x1c ),	/* Type Offset=28 */

	/* Return value */

/* 1588 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1590 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure DragLeave */


	/* Procedure CanInPlaceActivate */


	/* Procedure InPlaceDeactivate */


	/* Procedure RemoteTranslateAccelerator */

/* 1594 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1596 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1598 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1606 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1608 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnFrameWindowActivate */

/* 1612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1614 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1618 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1620 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1626 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fActivate */

/* 1628 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1630 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1634 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1636 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDocWindowActivate */

/* 1640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1642 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1646 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1648 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1654 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fActivate */

/* 1656 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1658 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1662 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1664 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteResizeBorder */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1670 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1674 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1676 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1678 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1682 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter prcBorder */

/* 1684 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1686 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1688 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter riid */

/* 1690 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1692 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1694 */	NdrFcShort( 0x304 ),	/* Type Offset=772 */

	/* Parameter pUIWindow */

/* 1696 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1698 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1700 */	NdrFcShort( 0x37e ),	/* Type Offset=894 */

	/* Parameter fFrameWindow */

/* 1702 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1704 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1708 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1710 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertMenus */

/* 1714 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1716 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1718 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1720 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1722 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1724 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter hmenuShared */

/* 1726 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1728 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1730 */	NdrFcShort( 0x384 ),	/* Type Offset=900 */

	/* Parameter lpMenuWidths */

/* 1732 */	NdrFcShort( 0x11a ),	/* 282 */
#ifndef _ALPHA_
/* 1734 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1736 */	NdrFcShort( 0x398 ),	/* Type Offset=920 */

	/* Return value */

/* 1738 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1740 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetMenu */

/* 1744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1746 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1750 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1752 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1758 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hmenuShared */

/* 1760 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1762 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1764 */	NdrFcShort( 0x3a2 ),	/* Type Offset=930 */

	/* Parameter holemenu */

/* 1766 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1768 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1770 */	NdrFcShort( 0x3ac ),	/* Type Offset=940 */

	/* Parameter hwndActiveObject */

/* 1772 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1774 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1776 */	NdrFcShort( 0x3b6 ),	/* Type Offset=950 */

	/* Return value */

/* 1778 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1780 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoveMenus */

/* 1784 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1786 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1788 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1794 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter hmenuShared */

/* 1796 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1798 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1800 */	NdrFcShort( 0x3c0 ),	/* Type Offset=960 */

	/* Return value */

/* 1802 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1804 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStatusText */

/* 1808 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1810 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1814 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1816 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1822 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszStatusText */

/* 1824 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1826 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1828 */	NdrFcShort( 0x22a ),	/* Type Offset=554 */

	/* Return value */

/* 1830 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1832 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnableModeless */

/* 1836 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1838 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1840 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1846 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fEnable */

/* 1848 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1850 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateAccelerator */

/* 1860 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1862 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 1864 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1866 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1868 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1870 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter lpmsg */

/* 1872 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1874 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1876 */	NdrFcShort( 0x2b6 ),	/* Type Offset=694 */

	/* Parameter wID */

/* 1878 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1880 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1882 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1886 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjectRects */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 1892 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 1896 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1898 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1900 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter lprcPosRect */

/* 1906 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1908 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1910 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter lprcClipRect */

/* 1912 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1914 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1916 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Return value */

/* 1918 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1920 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIActivate */

/* 1924 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1926 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1934 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1936 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1938 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowContext */

/* 1942 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1944 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1946 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1950 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1952 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter ppFrame */

/* 1954 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1956 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1958 */	NdrFcShort( 0x3ce ),	/* Type Offset=974 */

	/* Parameter ppDoc */

/* 1960 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1962 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1964 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter lprcPosRect */

/* 1966 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 1968 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1970 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter lprcClipRect */

/* 1972 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 1974 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1976 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter lpFrameInfo */

/* 1978 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 1980 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1982 */	NdrFcShort( 0x412 ),	/* Type Offset=1042 */

	/* Return value */

/* 1984 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1986 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Scroll */

/* 1990 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1992 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 1994 */	NdrFcShort( 0x10 ),	/* x86, MIPS Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x10 ),	/* MIPS Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1996 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2000 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter scrollExtant */

/* 2002 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2004 */	NdrFcShort( 0x4 ),	/* x86, MIPS Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x4 ),	/* MIPS Stack size/offset = 4 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2006 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 2008 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2010 */	NdrFcShort( 0xc ),	/* x86, MIPS Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0xc ),	/* MIPS Stack size/offset = 12 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIDeactivate */

/* 2014 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2016 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2018 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2024 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fUndoable */

/* 2026 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2028 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2032 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2034 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceDeactivate */

/* 2038 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2040 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2042 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2048 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 2050 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2052 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPosRectChange */

/* 2056 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2058 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 2060 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2062 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter lprcPosRect */

/* 2068 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2070 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2072 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Return value */

/* 2074 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2076 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteDraw */

/* 2080 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2082 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2084 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 2086 */	NdrFcShort( 0x60 ),	/* 96 */
/* 2088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2090 */	0x6,		/* 6 */
			0xa,		/* 10 */

	/* Parameter dwDrawAspect */

/* 2092 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2094 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lindex */

/* 2098 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2100 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvAspect */

/* 2104 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptd */

/* 2110 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2112 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2114 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter hdcTargetDev */

/* 2116 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2118 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hdcDraw */

/* 2122 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2124 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lprcBounds */

/* 2128 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2130 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2132 */	NdrFcShort( 0x2da ),	/* Type Offset=730 */

	/* Parameter lprcWBounds */

/* 2134 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2136 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2138 */	NdrFcShort( 0x2d6 ),	/* Type Offset=726 */

	/* Parameter pContinue */

/* 2140 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2142 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 2144 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Return value */

/* 2146 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2148 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 2150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetColorSet */

/* 2152 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2154 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2156 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2158 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2162 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter dwDrawAspect */

/* 2164 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2166 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lindex */

/* 2170 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2172 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvAspect */

/* 2176 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2178 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptd */

/* 2182 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2184 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2186 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter hicTargetDev */

/* 2188 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2190 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppColorSet */

/* 2194 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 2196 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2198 */	NdrFcShort( 0x43c ),	/* Type Offset=1084 */

	/* Return value */

/* 2200 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2202 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteFreeze */

/* 2206 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2208 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2210 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2212 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2216 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter dwDrawAspect */

/* 2218 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2220 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lindex */

/* 2224 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2226 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pvAspect */

/* 2230 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2232 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwFreeze */

/* 2236 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2238 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2242 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2244 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAdvise */

/* 2248 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2250 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2252 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2254 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2258 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter aspects */

/* 2260 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2262 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter advf */

/* 2266 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2268 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAdvSink */

/* 2272 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2274 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2276 */	NdrFcShort( 0x320 ),	/* Type Offset=800 */

	/* Return value */

/* 2278 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2280 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAdvise */

/* 2284 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2286 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2288 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2292 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2294 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter pAspects */

/* 2296 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2298 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAdvf */

/* 2302 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2304 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppAdvSink */

/* 2308 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2312 */	NdrFcShort( 0x444 ),	/* Type Offset=1092 */

	/* Return value */

/* 2314 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2316 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtent */

/* 2320 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2322 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2324 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2326 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2328 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2330 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter dwDrawAspect */

/* 2332 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2334 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lindex */

/* 2338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2340 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ptd */

/* 2344 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2346 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2348 */	NdrFcShort( 0x426 ),	/* Type Offset=1062 */

	/* Parameter lpsizel */

/* 2350 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 2352 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2354 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Return value */

/* 2356 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2358 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DragEnter */

/* 2362 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2364 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2366 */	NdrFcShort( 0x1c ),	/* x86, MIPS Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x1c ),	/* MIPS Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2368 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2370 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2372 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pDataObj */

/* 2374 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2376 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2378 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter grfKeyState */

/* 2380 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2382 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pt */

/* 2386 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2388 */	NdrFcShort( 0xc ),	/* x86, MIPS Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0xc ),	/* MIPS Stack size/offset = 12 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2390 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Parameter pdwEffect */

/* 2392 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2394 */	NdrFcShort( 0x14 ),	/* x86, MIPS Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x14 ),	/* MIPS Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2398 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2400 */	NdrFcShort( 0x18 ),	/* x86, MIPS Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x18 ),	/* MIPS Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DragOver */

/* 2404 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2406 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2408 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2410 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2414 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter grfKeyState */

/* 2416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pt */

/* 2422 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
/* 2424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2426 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Parameter pdwEffect */

/* 2428 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
/* 2430 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2434 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2436 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Drop */

/* 2440 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2442 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2444 */	NdrFcShort( 0x1c ),	/* x86, MIPS Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x1c ),	/* MIPS Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2446 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2448 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2450 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pDataObj */

/* 2452 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2454 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2456 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter grfKeyState */

/* 2458 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2460 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pt */

/* 2464 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2466 */	NdrFcShort( 0xc ),	/* x86, MIPS Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0xc ),	/* MIPS Stack size/offset = 12 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2468 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Parameter pdwEffect */

/* 2470 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2472 */	NdrFcShort( 0x14 ),	/* x86, MIPS Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x14 ),	/* MIPS Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2476 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 2478 */	NdrFcShort( 0x18 ),	/* x86, MIPS Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x18 ),	/* MIPS Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 2482 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2484 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2486 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2490 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2492 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 2494 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2496 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 2500 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2502 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2504 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Parameter pceltFetched */

/* 2506 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2508 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2512 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2514 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 2518 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2520 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2522 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2528 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 2530 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2532 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2534 */	NdrFcShort( 0x2e4 ),	/* Type Offset=740 */

	/* Return value */

/* 2536 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2538 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x0,	/* FC_UP */
/*  2 */	NdrFcShort( 0x3e ),	/* Offset= 62 (64) */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 10 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 18 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32742) */
/* 20 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 24 */	NdrFcShort( 0x4 ),	/* Offset= 4 (28) */
/* 26 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (25) */
/* 28 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 30 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 32 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 34 */	NdrFcShort( 0x0 ),	/* 0 */
/* 36 */	NdrFcShort( 0x2 ),	/* 2 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (4) */
/* 42 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0x1 ),	/* 1 */
/* 46 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 52 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0xc ),	/* 12 */
/* 56 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (42) */
/* 58 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 60 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 62 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 64 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 66 */	NdrFcShort( 0x14 ),	/* 20 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0xc ),	/* Offset= 12 (82) */
/* 72 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (32) */
/* 76 */	0x38,		/* FC_ALIGNM4 */
			0x36,		/* FC_POINTER */
/* 78 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 80 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 82 */	
			0x12, 0x0,	/* FC_UP */
/* 84 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (52) */
/* 86 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 88 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x10,	/* FC_RP */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 96 */	NdrFcLong( 0x105 ),	/* 261 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 104 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 110 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0x10e ),	/* 270 */
/* 118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 122 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 124 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 128 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 130 */	
			0x12, 0x0,	/* FC_UP */
/* 132 */	NdrFcShort( 0x188 ),	/* Offset= 392 (524) */
/* 134 */	
			0x12, 0x0,	/* FC_UP */
/* 136 */	NdrFcShort( 0x172 ),	/* Offset= 370 (506) */
/* 138 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 140 */	NdrFcShort( 0x4 ),	/* 4 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* Offset= 0 (148) */
/* 150 */	NdrFcLong( 0x20 ),	/* 32 */
/* 154 */	NdrFcShort( 0x28 ),	/* Offset= 40 (194) */
/* 156 */	NdrFcLong( 0x40 ),	/* 64 */
/* 160 */	NdrFcShort( 0x7e ),	/* Offset= 126 (286) */
/* 162 */	NdrFcLong( 0x10 ),	/* 16 */
/* 166 */	NdrFcShort( 0x90 ),	/* Offset= 144 (310) */
/* 168 */	NdrFcLong( 0x1 ),	/* 1 */
/* 172 */	NdrFcShort( 0x116 ),	/* Offset= 278 (450) */
/* 174 */	NdrFcLong( 0x2 ),	/* 2 */
/* 178 */	NdrFcShort( 0xffffff6a ),	/* Offset= -150 (28) */
/* 180 */	NdrFcLong( 0x4 ),	/* 4 */
/* 184 */	NdrFcShort( 0x3a ),	/* Offset= 58 (242) */
/* 186 */	NdrFcLong( 0x8 ),	/* 8 */
/* 190 */	NdrFcShort( 0x34 ),	/* Offset= 52 (242) */
/* 192 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (191) */
/* 194 */	
			0x12, 0x0,	/* FC_UP */
/* 196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (198) */
/* 198 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	NdrFcShort( 0x2 ),	/* 2 */
/* 204 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 208 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32552) */
/* 210 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 214 */	NdrFcShort( 0x4 ),	/* Offset= 4 (218) */
/* 216 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32544) */
/* 218 */	
			0x12, 0x0,	/* FC_UP */
/* 220 */	NdrFcShort( 0x2c ),	/* Offset= 44 (264) */
/* 222 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 224 */	NdrFcShort( 0x4 ),	/* 4 */
/* 226 */	NdrFcShort( 0x2 ),	/* 2 */
/* 228 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 232 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32528) */
/* 234 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 238 */	NdrFcShort( 0x4 ),	/* Offset= 4 (242) */
/* 240 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32520) */
/* 242 */	
			0x12, 0x0,	/* FC_UP */
/* 244 */	NdrFcShort( 0xc ),	/* Offset= 12 (256) */
/* 246 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 250 */	0x9,		/* 9 */
			0x0,		/*  */
/* 252 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 254 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 256 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 258 */	NdrFcShort( 0x4 ),	/* 4 */
/* 260 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (246) */
/* 262 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 264 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 266 */	NdrFcShort( 0x10 ),	/* 16 */
/* 268 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 270 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 272 */	NdrFcShort( 0xc ),	/* 12 */
/* 274 */	NdrFcShort( 0xc ),	/* 12 */
/* 276 */	0x12, 0x0,	/* FC_UP */
/* 278 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (222) */
/* 280 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 282 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 284 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 286 */	
			0x12, 0x0,	/* FC_UP */
/* 288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (290) */
/* 290 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 294 */	NdrFcShort( 0x2 ),	/* 2 */
/* 296 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 300 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32460) */
/* 302 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 306 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (242) */
/* 308 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32452) */
/* 310 */	
			0x12, 0x0,	/* FC_UP */
/* 312 */	NdrFcShort( 0x2 ),	/* Offset= 2 (314) */
/* 314 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 318 */	NdrFcShort( 0x2 ),	/* 2 */
/* 320 */	NdrFcLong( 0x7 ),	/* 7 */
/* 324 */	NdrFcShort( 0xa ),	/* Offset= 10 (334) */
/* 326 */	NdrFcLong( 0x5 ),	/* 5 */
/* 330 */	NdrFcShort( 0x3a ),	/* Offset= 58 (388) */
/* 332 */	NdrFcShort( 0x76 ),	/* Offset= 118 (450) */
/* 334 */	
			0x12, 0x0,	/* FC_UP */
/* 336 */	NdrFcShort( 0x2 ),	/* Offset= 2 (338) */
/* 338 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 340 */	NdrFcShort( 0x4 ),	/* 4 */
/* 342 */	NdrFcShort( 0x2 ),	/* 2 */
/* 344 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 348 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32412) */
/* 350 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 354 */	NdrFcShort( 0x4 ),	/* Offset= 4 (358) */
/* 356 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32404) */
/* 358 */	
			0x12, 0x0,	/* FC_UP */
/* 360 */	NdrFcShort( 0xc ),	/* Offset= 12 (372) */
/* 362 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 364 */	NdrFcShort( 0x1 ),	/* 1 */
/* 366 */	0x8,		/* 8 */
			0x0,		/*  */
/* 368 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 370 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 372 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 374 */	NdrFcShort( 0x18 ),	/* 24 */
/* 376 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (362) */
/* 378 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 380 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 382 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 384 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 386 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 388 */	
			0x12, 0x0,	/* FC_UP */
/* 390 */	NdrFcShort( 0x2 ),	/* Offset= 2 (392) */
/* 392 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 394 */	NdrFcShort( 0x4 ),	/* 4 */
/* 396 */	NdrFcShort( 0x2 ),	/* 2 */
/* 398 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 402 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32358) */
/* 404 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 408 */	NdrFcShort( 0x4 ),	/* Offset= 4 (412) */
/* 410 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32350) */
/* 412 */	
			0x12, 0x0,	/* FC_UP */
/* 414 */	NdrFcShort( 0x1a ),	/* Offset= 26 (440) */
/* 416 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 418 */	NdrFcShort( 0x4 ),	/* 4 */
/* 420 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 422 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 424 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 426 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 428 */	NdrFcShort( 0x4 ),	/* 4 */
/* 430 */	0x6,		/* 6 */
			0x0,		/*  */
/* 432 */	NdrFcShort( 0xfffffffe ),	/* -2 */
/* 434 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 436 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (416) */
/* 438 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 440 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 444 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (426) */
/* 446 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 450 */	
			0x12, 0x0,	/* FC_UP */
/* 452 */	NdrFcShort( 0x2 ),	/* Offset= 2 (454) */
/* 454 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 456 */	NdrFcShort( 0x4 ),	/* 4 */
/* 458 */	NdrFcShort( 0x2 ),	/* 2 */
/* 460 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 464 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32296) */
/* 466 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 470 */	NdrFcShort( 0x4 ),	/* Offset= 4 (474) */
/* 472 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32288) */
/* 474 */	
			0x12, 0x0,	/* FC_UP */
/* 476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (478) */
/* 478 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	NdrFcShort( 0xffffff14 ),	/* Offset= -236 (246) */
/* 484 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 486 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 488 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 490 */	NdrFcLong( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 500 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 502 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 504 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 506 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 508 */	NdrFcShort( 0xc ),	/* 12 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	NdrFcShort( 0xc ),	/* Offset= 12 (524) */
/* 514 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 516 */	NdrFcShort( 0xfffffe86 ),	/* Offset= -378 (138) */
/* 518 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 520 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (488) */
/* 522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 524 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 528 */	NdrFcShort( 0xc ),	/* 12 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0xfffffe72 ),	/* Offset= -398 (134) */
/* 534 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 536 */	NdrFcLong( 0xe ),	/* 14 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 548 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 550 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 552 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 554 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 556 */	
			0x11, 0x10,	/* FC_RP */
/* 558 */	NdrFcShort( 0x2 ),	/* Offset= 2 (560) */
/* 560 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 562 */	NdrFcLong( 0xf ),	/* 15 */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 572 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 574 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 576 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 578 */	
			0x11, 0x10,	/* FC_RP */
/* 580 */	NdrFcShort( 0x2 ),	/* Offset= 2 (582) */
/* 582 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 584 */	NdrFcLong( 0x100 ),	/* 256 */
/* 588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 594 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 596 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 598 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 600 */	
			0x11, 0x10,	/* FC_RP */
/* 602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (604) */
/* 604 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 606 */	NdrFcLong( 0x11b ),	/* 283 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 618 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 620 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 622 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 624 */	NdrFcLong( 0x118 ),	/* 280 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 634 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 640 */	
			0x11, 0x10,	/* FC_RP */
/* 642 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (622) */
/* 644 */	
			0x11, 0x10,	/* FC_RP */
/* 646 */	NdrFcShort( 0xfffffdea ),	/* Offset= -534 (112) */
/* 648 */	
			0x12, 0x0,	/* FC_UP */
/* 650 */	NdrFcShort( 0x2c ),	/* Offset= 44 (694) */
/* 652 */	
			0x12, 0x0,	/* FC_UP */
/* 654 */	NdrFcShort( 0x2 ),	/* Offset= 2 (656) */
/* 656 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 658 */	NdrFcShort( 0x4 ),	/* 4 */
/* 660 */	NdrFcShort( 0x2 ),	/* 2 */
/* 662 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 666 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32094) */
/* 668 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 672 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32088) */
/* 674 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (673) */
/* 676 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 678 */	NdrFcShort( 0x2 ),	/* 2 */
/* 680 */	NdrFcShort( 0x4 ),	/* 4 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (652) */
/* 686 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 694 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x1c ),	/* 28 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* Offset= 0 (700) */
/* 702 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 704 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (676) */
/* 706 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 708 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 710 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (686) */
/* 714 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 716 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 718 */	NdrFcShort( 0x2 ),	/* 2 */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0xffffffb8 ),	/* Offset= -72 (652) */
/* 726 */	
			0x12, 0x0,	/* FC_UP */
/* 728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (730) */
/* 730 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 732 */	NdrFcShort( 0x10 ),	/* 16 */
/* 734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 736 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 738 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 740 */	
			0x11, 0x10,	/* FC_RP */
/* 742 */	NdrFcShort( 0x2 ),	/* Offset= 2 (744) */
/* 744 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 746 */	NdrFcLong( 0x104 ),	/* 260 */
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 754 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 756 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 758 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 760 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 762 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 764 */	NdrFcShort( 0x8 ),	/* Offset= 8 (772) */
/* 766 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0x8 ),	/* 8 */
/* 770 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 772 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 778 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 780 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (766) */
			0x5b,		/* FC_END */
/* 784 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 786 */	NdrFcShort( 0x2 ),	/* Offset= 2 (788) */
/* 788 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 790 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 792 */	
			0x11, 0x0,	/* FC_RP */
/* 794 */	NdrFcShort( 0xffffff94 ),	/* Offset= -108 (686) */
/* 796 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 798 */	NdrFcShort( 0xffffff90 ),	/* Offset= -112 (686) */
/* 800 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 802 */	NdrFcLong( 0x10f ),	/* 271 */
/* 806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 810 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 812 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 814 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 816 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 818 */	
			0x11, 0x0,	/* FC_RP */
/* 820 */	NdrFcShort( 0xfffffe84 ),	/* Offset= -380 (440) */
/* 822 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 824 */	NdrFcShort( 0x6 ),	/* Offset= 6 (830) */
/* 826 */	
			0x13, 0x0,	/* FC_OP */
/* 828 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (656) */
/* 830 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 832 */	NdrFcShort( 0x2 ),	/* 2 */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (826) */
/* 840 */	
			0x11, 0x0,	/* FC_RP */
/* 842 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (772) */
/* 844 */	
			0x11, 0x10,	/* FC_RP */
/* 846 */	NdrFcShort( 0xfffffe9a ),	/* Offset= -358 (488) */
/* 848 */	
			0x11, 0x10,	/* FC_RP */
/* 850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (852) */
/* 852 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 854 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 856 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 858 */	
			0x11, 0x10,	/* FC_RP */
/* 860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (862) */
/* 862 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 864 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 868 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 870 */	NdrFcShort( 0xffffff74 ),	/* Offset= -140 (730) */
/* 872 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 874 */	NdrFcLong( 0x117 ),	/* 279 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 884 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 886 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 888 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 890 */	
			0x11, 0x0,	/* FC_RP */
/* 892 */	NdrFcShort( 0xffffff5e ),	/* Offset= -162 (730) */
/* 894 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 896 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 898 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 900 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 902 */	NdrFcShort( 0x3 ),	/* 3 */
/* 904 */	NdrFcShort( 0x4 ),	/* 4 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0xffffff00 ),	/* Offset= -256 (652) */
/* 910 */	
			0x11, 0x0,	/* FC_RP */
/* 912 */	NdrFcShort( 0x8 ),	/* Offset= 8 (920) */
/* 914 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 916 */	NdrFcShort( 0x18 ),	/* 24 */
/* 918 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 920 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 922 */	NdrFcShort( 0x18 ),	/* 24 */
/* 924 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 926 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (914) */
/* 928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 930 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 932 */	NdrFcShort( 0x3 ),	/* 3 */
/* 934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 938 */	NdrFcShort( 0xfffffee2 ),	/* Offset= -286 (652) */
/* 940 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 948 */	NdrFcShort( 0xfffffe0e ),	/* Offset= -498 (450) */
/* 950 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 952 */	NdrFcShort( 0x2 ),	/* 2 */
/* 954 */	NdrFcShort( 0x4 ),	/* 4 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0xfffffece ),	/* Offset= -306 (652) */
/* 960 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 962 */	NdrFcShort( 0x3 ),	/* 3 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0xfffffec4 ),	/* Offset= -316 (652) */
/* 970 */	
			0x11, 0x0,	/* FC_RP */
/* 972 */	NdrFcShort( 0xfffffeea ),	/* Offset= -278 (694) */
/* 974 */	
			0x11, 0x10,	/* FC_RP */
/* 976 */	NdrFcShort( 0x2 ),	/* Offset= 2 (978) */
/* 978 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 980 */	NdrFcLong( 0x116 ),	/* 278 */
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 990 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 992 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 994 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 996 */	
			0x11, 0x10,	/* FC_RP */
/* 998 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1000) */
/* 1000 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1002 */	NdrFcLong( 0x115 ),	/* 277 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1012 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1014 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1016 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1018 */	
			0x11, 0x0,	/* FC_RP */
/* 1020 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1042) */
/* 1022 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1024 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1026 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0xffffff34 ),	/* Offset= -204 (826) */
/* 1032 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1034 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1036 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0xffffff2a ),	/* Offset= -214 (826) */
/* 1042 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1044 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1048) */
/* 1050 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1052 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1054 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1022) */
/* 1056 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1058 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (1032) */
/* 1060 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1062 */	
			0x12, 0x0,	/* FC_UP */
/* 1064 */	NdrFcShort( 0xfffffc0c ),	/* Offset= -1012 (52) */
/* 1066 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1068 */	NdrFcLong( 0x12a ),	/* 298 */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1078 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1080 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1082 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1084 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1086 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1088) */
/* 1088 */	
			0x13, 0x0,	/* FC_OP */
/* 1090 */	NdrFcShort( 0xfffffd76 ),	/* Offset= -650 (440) */
/* 1092 */	
			0x11, 0x10,	/* FC_RP */
/* 1094 */	NdrFcShort( 0xfffffeda ),	/* Offset= -294 (800) */
/* 1096 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1098 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1100 */	
			0x11, 0x0,	/* FC_RP */
/* 1102 */	NdrFcShort( 0x18 ),	/* Offset= 24 (1126) */
/* 1104 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1108 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1110 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1112 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1116 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1118 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1122 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1124 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1126 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 1128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1130 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1132 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1134 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1138 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1140 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 1142 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1152 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1154 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1156 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1158 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (1104) */
			0x5b,		/* FC_END */

			0x0
        }
    };

const CInterfaceProxyVtbl * _oleidl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IEnumOLEVERBProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IViewObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceUIWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceFrameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceActiveObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleClientSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IParseDisplayNameProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleItemContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleLinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleCacheProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDropTargetProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IViewObject2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleCache2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleCacheControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IContinueProxyVtbl,
    0
};

const CInterfaceStubVtbl * _oleidl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IEnumOLEVERBStubVtbl,
    ( CInterfaceStubVtbl *) &_IViewObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceUIWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceFrameStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceActiveObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleClientSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IParseDisplayNameStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleItemContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleLinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleCacheStubVtbl,
    ( CInterfaceStubVtbl *) &_IDropTargetStubVtbl,
    ( CInterfaceStubVtbl *) &_IViewObject2StubVtbl,
    ( CInterfaceStubVtbl *) &_IOleCache2StubVtbl,
    ( CInterfaceStubVtbl *) &_IOleCacheControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IContinueStubVtbl,
    0
};

PCInterfaceName const _oleidl_InterfaceNamesList[] = 
{
    "IEnumOLEVERB",
    "IViewObject",
    "IOleObject",
    "IOleInPlaceObject",
    "IOleWindow",
    "IOleInPlaceUIWindow",
    "IOleInPlaceFrame",
    "IOleInPlaceActiveObject",
    "IOleClientSite",
    "IOleInPlaceSite",
    "IParseDisplayName",
    "IOleContainer",
    "IOleItemContainer",
    "IOleLink",
    "IOleCache",
    "IDropTarget",
    "IViewObject2",
    "IOleCache2",
    "IOleCacheControl",
    "IContinue",
    0
};


#define _oleidl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _oleidl, pIID, n)

int __stdcall _oleidl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _oleidl, 20, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _oleidl, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _oleidl, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _oleidl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _oleidl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _oleidl, 20, *pIndex )
    
}

const ExtendedProxyFileInfo oleidl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _oleidl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _oleidl_StubVtblList,
    (const PCInterfaceName * ) & _oleidl_InterfaceNamesList,
    0, // no delegation
    & _oleidl_IID_Lookup, 
    20,
    2
};
