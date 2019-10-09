/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:14:26 2019
 */
/* Compiler settings for ocidl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "ocidl.h"

#define TYPE_FORMAT_STRING_SIZE   1969                              
#define PROC_FORMAT_STRING_SIZE   3251                              

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


/* Standard interface: IOleControlTypes, ver. 1.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IEnumConnections, ver. 0.0,
   GUID={0xB196B287,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumConnections_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumConnections_RemoteNext_Proxy( 
    IEnumConnections __RPC_FAR * This,
    /* [in] */ ULONG cConnections,
    /* [length_is][size_is][out] */ LPCONNECTDATA rgcd,
    /* [out] */ ULONG __RPC_FAR *pcFetched)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcFetched);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&cConnections,
                  ( unsigned char __RPC_FAR * )&rgcd,
                  ( unsigned char __RPC_FAR * )&pcFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumConnections_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumConnections __RPC_FAR *This;
        ULONG cConnections;
        LPCONNECTDATA rgcd;
        ULONG __RPC_FAR *pcFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumConnections __RPC_FAR *This;
        char Pad0[4];
        ULONG cConnections;
        char Pad1[4];
        LPCONNECTDATA rgcd;
        char Pad2[4];
        ULONG __RPC_FAR *pcFetched;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IEnumConnections_Next_Stub(
                                     (IEnumConnections *) pParamStruct->This,
                                     pParamStruct->cConnections,
                                     pParamStruct->rgcd,
                                     pParamStruct->pcFetched);
    
}

static const unsigned short IEnumConnections_FormatStringOffsetTable[] = 
    {
    0,
    36,
    60,
    78
    };

static const STUB_THUNK IEnumConnections_StubThunkTable[] = 
    {
    IEnumConnections_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumConnections_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumConnections_FormatStringOffsetTable[-3],
    &IEnumConnections_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumConnections_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumConnections_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumConnectionsProxyVtbl = 
{
    &IEnumConnections_ProxyInfo,
    &IID_IEnumConnections,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumConnections_Next_Proxy ,
    (void *)-1 /* IEnumConnections::Skip */ ,
    (void *)-1 /* IEnumConnections::Reset */ ,
    (void *)-1 /* IEnumConnections::Clone */
};

const CInterfaceStubVtbl _IEnumConnectionsStubVtbl =
{
    &IID_IEnumConnections,
    &IEnumConnections_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IConnectionPoint, ver. 0.0,
   GUID={0xB196B286,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IConnectionPoint_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IConnectionPoint_FormatStringOffsetTable[] = 
    {
    102,
    126,
    150,
    180,
    204
    };

static const MIDL_SERVER_INFO IConnectionPoint_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IConnectionPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IConnectionPoint_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IConnectionPoint_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IConnectionPointProxyVtbl = 
{
    &IConnectionPoint_ProxyInfo,
    &IID_IConnectionPoint,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IConnectionPoint::GetConnectionInterface */ ,
    (void *)-1 /* IConnectionPoint::GetConnectionPointContainer */ ,
    (void *)-1 /* IConnectionPoint::Advise */ ,
    (void *)-1 /* IConnectionPoint::Unadvise */ ,
    (void *)-1 /* IConnectionPoint::EnumConnections */
};

const CInterfaceStubVtbl _IConnectionPointStubVtbl =
{
    &IID_IConnectionPoint,
    &IConnectionPoint_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumConnectionPoints, ver. 0.0,
   GUID={0xB196B285,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumConnectionPoints_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumConnectionPoints_RemoteNext_Proxy( 
    IEnumConnectionPoints __RPC_FAR * This,
    /* [in] */ ULONG cConnections,
    /* [length_is][size_is][out] */ LPCONNECTIONPOINT __RPC_FAR *ppCP,
    /* [out] */ ULONG __RPC_FAR *pcFetched)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcFetched);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&cConnections,
                  ( unsigned char __RPC_FAR * )&ppCP,
                  ( unsigned char __RPC_FAR * )&pcFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumConnectionPoints_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumConnectionPoints __RPC_FAR *This;
        ULONG cConnections;
        LPCONNECTIONPOINT __RPC_FAR *ppCP;
        ULONG __RPC_FAR *pcFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumConnectionPoints __RPC_FAR *This;
        char Pad0[4];
        ULONG cConnections;
        char Pad1[4];
        LPCONNECTIONPOINT __RPC_FAR *ppCP;
        char Pad2[4];
        ULONG __RPC_FAR *pcFetched;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IEnumConnectionPoints_Next_Stub(
                                          (IEnumConnectionPoints *) pParamStruct->This,
                                          pParamStruct->cConnections,
                                          pParamStruct->ppCP,
                                          pParamStruct->pcFetched);
    
}

static const unsigned short IEnumConnectionPoints_FormatStringOffsetTable[] = 
    {
    228,
    36,
    60,
    264
    };

static const STUB_THUNK IEnumConnectionPoints_StubThunkTable[] = 
    {
    IEnumConnectionPoints_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumConnectionPoints_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumConnectionPoints_FormatStringOffsetTable[-3],
    &IEnumConnectionPoints_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumConnectionPoints_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumConnectionPoints_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumConnectionPointsProxyVtbl = 
{
    &IEnumConnectionPoints_ProxyInfo,
    &IID_IEnumConnectionPoints,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumConnectionPoints_Next_Proxy ,
    (void *)-1 /* IEnumConnectionPoints::Skip */ ,
    (void *)-1 /* IEnumConnectionPoints::Reset */ ,
    (void *)-1 /* IEnumConnectionPoints::Clone */
};

const CInterfaceStubVtbl _IEnumConnectionPointsStubVtbl =
{
    &IID_IEnumConnectionPoints,
    &IEnumConnectionPoints_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IConnectionPointContainer, ver. 0.0,
   GUID={0xB196B284,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IConnectionPointContainer_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IConnectionPointContainer_FormatStringOffsetTable[] = 
    {
    288,
    312
    };

static const MIDL_SERVER_INFO IConnectionPointContainer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IConnectionPointContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IConnectionPointContainer_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IConnectionPointContainer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IConnectionPointContainerProxyVtbl = 
{
    &IConnectionPointContainer_ProxyInfo,
    &IID_IConnectionPointContainer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IConnectionPointContainer::EnumConnectionPoints */ ,
    (void *)-1 /* IConnectionPointContainer::FindConnectionPoint */
};

const CInterfaceStubVtbl _IConnectionPointContainerStubVtbl =
{
    &IID_IConnectionPointContainer,
    &IConnectionPointContainer_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IClassFactory, ver. 0.0,
   GUID={0x00000001,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IClassFactory2, ver. 0.0,
   GUID={0xB196B28F,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClassFactory2_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IClassFactory2_RemoteCreateInstanceLic_Proxy( 
    IClassFactory2 __RPC_FAR * This,
    /* [in] */ REFIID riid,
    /* [in] */ BSTR bstrKey,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvObj)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppvObj);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&bstrKey,
                  ( unsigned char __RPC_FAR * )&ppvObj);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IClassFactory2_RemoteCreateInstanceLic_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IClassFactory2 __RPC_FAR *This;
        REFIID riid;
        BSTR bstrKey;
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IClassFactory2 __RPC_FAR *This;
        char Pad0[4];
        REFIID riid;
        char Pad1[4];
        BSTR bstrKey;
        char Pad2[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IClassFactory2_CreateInstanceLic_Stub(
                                                (IClassFactory2 *) pParamStruct->This,
                                                pParamStruct->riid,
                                                pParamStruct->bstrKey,
                                                pParamStruct->ppvObj);
    
}

static const unsigned short IClassFactory2_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    342,
    366,
    396
    };

static const STUB_THUNK IClassFactory2_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    IClassFactory2_RemoteCreateInstanceLic_Thunk
    };

static const MIDL_SERVER_INFO IClassFactory2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IClassFactory2_FormatStringOffsetTable[-3],
    &IClassFactory2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IClassFactory2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IClassFactory2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IClassFactory2ProxyVtbl = 
{
    &IClassFactory2_ProxyInfo,
    &IID_IClassFactory2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IClassFactory_CreateInstance_Proxy */ ,
    0 /* IClassFactory_LockServer_Proxy */ ,
    (void *)-1 /* IClassFactory2::GetLicInfo */ ,
    (void *)-1 /* IClassFactory2::RequestLicKey */ ,
    IClassFactory2_CreateInstanceLic_Proxy
};


static const PRPC_STUB_FUNCTION IClassFactory2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IClassFactory2StubVtbl =
{
    &IID_IClassFactory2,
    &IClassFactory2_ServerInfo,
    8,
    &IClassFactory2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IProvideClassInfo, ver. 0.0,
   GUID={0xB196B283,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IProvideClassInfo_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IProvideClassInfo_FormatStringOffsetTable[] = 
    {
    432
    };

static const MIDL_SERVER_INFO IProvideClassInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IProvideClassInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IProvideClassInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IProvideClassInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IProvideClassInfoProxyVtbl = 
{
    &IProvideClassInfo_ProxyInfo,
    &IID_IProvideClassInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IProvideClassInfo::GetClassInfo */
};

const CInterfaceStubVtbl _IProvideClassInfoStubVtbl =
{
    &IID_IProvideClassInfo,
    &IProvideClassInfo_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IProvideClassInfo2, ver. 0.0,
   GUID={0xA6BC3AC0,0xDBAA,0x11CE,{0x9D,0xE3,0x00,0xAA,0x00,0x4B,0xB8,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IProvideClassInfo2_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IProvideClassInfo2_FormatStringOffsetTable[] = 
    {
    432,
    456
    };

static const MIDL_SERVER_INFO IProvideClassInfo2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IProvideClassInfo2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IProvideClassInfo2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IProvideClassInfo2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IProvideClassInfo2ProxyVtbl = 
{
    &IProvideClassInfo2_ProxyInfo,
    &IID_IProvideClassInfo2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IProvideClassInfo::GetClassInfo */ ,
    (void *)-1 /* IProvideClassInfo2::GetGUID */
};

const CInterfaceStubVtbl _IProvideClassInfo2StubVtbl =
{
    &IID_IProvideClassInfo2,
    &IProvideClassInfo2_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleControl, ver. 0.0,
   GUID={0xB196B288,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleControl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleControl_FormatStringOffsetTable[] = 
    {
    486,
    510,
    534,
    180
    };

static const MIDL_SERVER_INFO IOleControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IOleControlProxyVtbl = 
{
    &IOleControl_ProxyInfo,
    &IID_IOleControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleControl::GetControlInfo */ ,
    (void *)-1 /* IOleControl::OnMnemonic */ ,
    (void *)-1 /* IOleControl::OnAmbientPropertyChange */ ,
    (void *)-1 /* IOleControl::FreezeEvents */
};

const CInterfaceStubVtbl _IOleControlStubVtbl =
{
    &IID_IOleControl,
    &IOleControl_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleControlSite, ver. 0.0,
   GUID={0xB196B289,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleControlSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleControlSite_FormatStringOffsetTable[] = 
    {
    558,
    36,
    576,
    600,
    636,
    666,
    690
    };

static const MIDL_SERVER_INFO IOleControlSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleControlSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleControlSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleControlSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IOleControlSiteProxyVtbl = 
{
    &IOleControlSite_ProxyInfo,
    &IID_IOleControlSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleControlSite::OnControlInfoChanged */ ,
    (void *)-1 /* IOleControlSite::LockInPlaceActive */ ,
    (void *)-1 /* IOleControlSite::GetExtendedControl */ ,
    (void *)-1 /* IOleControlSite::TransformCoords */ ,
    (void *)-1 /* IOleControlSite::TranslateAccelerator */ ,
    (void *)-1 /* IOleControlSite::OnFocus */ ,
    (void *)-1 /* IOleControlSite::ShowPropertyFrame */
};

const CInterfaceStubVtbl _IOleControlSiteStubVtbl =
{
    &IID_IOleControlSite,
    &IOleControlSite_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertyPage, ver. 0.0,
   GUID={0xB196B28D,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyPage_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertyPage_FormatStringOffsetTable[] = 
    {
    708,
    732,
    60,
    768,
    792,
    666,
    822,
    846,
    864,
    882,
    906
    };

static const MIDL_SERVER_INFO IPropertyPage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyPage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyPage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyPage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IPropertyPageProxyVtbl = 
{
    &IPropertyPage_ProxyInfo,
    &IID_IPropertyPage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertyPage::SetPageSite */ ,
    (void *)-1 /* IPropertyPage::Activate */ ,
    (void *)-1 /* IPropertyPage::Deactivate */ ,
    (void *)-1 /* IPropertyPage::GetPageInfo */ ,
    (void *)-1 /* IPropertyPage::SetObjects */ ,
    (void *)-1 /* IPropertyPage::Show */ ,
    (void *)-1 /* IPropertyPage::Move */ ,
    (void *)-1 /* IPropertyPage::IsPageDirty */ ,
    (void *)-1 /* IPropertyPage::Apply */ ,
    (void *)-1 /* IPropertyPage::Help */ ,
    (void *)-1 /* IPropertyPage::TranslateAccelerator */
};

const CInterfaceStubVtbl _IPropertyPageStubVtbl =
{
    &IID_IPropertyPage,
    &IPropertyPage_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertyPage2, ver. 0.0,
   GUID={0x01E44665,0x24AC,0x101B,{0x84,0xED,0x08,0x00,0x2B,0x2E,0xC7,0x13}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyPage2_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertyPage2_FormatStringOffsetTable[] = 
    {
    708,
    732,
    60,
    768,
    792,
    666,
    822,
    846,
    864,
    882,
    906,
    930
    };

static const MIDL_SERVER_INFO IPropertyPage2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyPage2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyPage2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyPage2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IPropertyPage2ProxyVtbl = 
{
    &IPropertyPage2_ProxyInfo,
    &IID_IPropertyPage2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertyPage::SetPageSite */ ,
    (void *)-1 /* IPropertyPage::Activate */ ,
    (void *)-1 /* IPropertyPage::Deactivate */ ,
    (void *)-1 /* IPropertyPage::GetPageInfo */ ,
    (void *)-1 /* IPropertyPage::SetObjects */ ,
    (void *)-1 /* IPropertyPage::Show */ ,
    (void *)-1 /* IPropertyPage::Move */ ,
    (void *)-1 /* IPropertyPage::IsPageDirty */ ,
    (void *)-1 /* IPropertyPage::Apply */ ,
    (void *)-1 /* IPropertyPage::Help */ ,
    (void *)-1 /* IPropertyPage::TranslateAccelerator */ ,
    (void *)-1 /* IPropertyPage2::EditProperty */
};

const CInterfaceStubVtbl _IPropertyPage2StubVtbl =
{
    &IID_IPropertyPage2,
    &IPropertyPage2_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertyPageSite, ver. 0.0,
   GUID={0xB196B28C,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyPageSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertyPageSite_FormatStringOffsetTable[] = 
    {
    954,
    978,
    1002,
    1026
    };

static const MIDL_SERVER_INFO IPropertyPageSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyPageSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyPageSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyPageSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IPropertyPageSiteProxyVtbl = 
{
    &IPropertyPageSite_ProxyInfo,
    &IID_IPropertyPageSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertyPageSite::OnStatusChange */ ,
    (void *)-1 /* IPropertyPageSite::GetLocaleID */ ,
    (void *)-1 /* IPropertyPageSite::GetPageContainer */ ,
    (void *)-1 /* IPropertyPageSite::TranslateAccelerator */
};

const CInterfaceStubVtbl _IPropertyPageSiteStubVtbl =
{
    &IID_IPropertyPageSite,
    &IPropertyPageSite_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertyNotifySink, ver. 0.0,
   GUID={0x9BFBBC02,0xEFF1,0x101A,{0x84,0xED,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyNotifySink_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertyNotifySink_FormatStringOffsetTable[] = 
    {
    954,
    36
    };

static const MIDL_SERVER_INFO IPropertyNotifySink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyNotifySink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyNotifySink_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyNotifySink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IPropertyNotifySinkProxyVtbl = 
{
    &IPropertyNotifySink_ProxyInfo,
    &IID_IPropertyNotifySink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertyNotifySink::OnChanged */ ,
    (void *)-1 /* IPropertyNotifySink::OnRequestEdit */
};

const CInterfaceStubVtbl _IPropertyNotifySinkStubVtbl =
{
    &IID_IPropertyNotifySink,
    &IPropertyNotifySink_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISpecifyPropertyPages, ver. 0.0,
   GUID={0xB196B28B,0xBAB4,0x101A,{0xB6,0x9C,0x00,0xAA,0x00,0x34,0x1D,0x07}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISpecifyPropertyPages_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ISpecifyPropertyPages_FormatStringOffsetTable[] = 
    {
    1050
    };

static const MIDL_SERVER_INFO ISpecifyPropertyPages_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISpecifyPropertyPages_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISpecifyPropertyPages_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISpecifyPropertyPages_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ISpecifyPropertyPagesProxyVtbl = 
{
    &ISpecifyPropertyPages_ProxyInfo,
    &IID_ISpecifyPropertyPages,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ISpecifyPropertyPages::GetPages */
};

const CInterfaceStubVtbl _ISpecifyPropertyPagesStubVtbl =
{
    &IID_ISpecifyPropertyPages,
    &ISpecifyPropertyPages_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPersist, ver. 0.0,
   GUID={0x0000010c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPersistMemory, ver. 0.0,
   GUID={0xBD1AE5E0,0xA6AE,0x11CE,{0xBD,0x37,0x50,0x42,0x00,0xC1,0x00,0x00}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistMemory_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IPersistMemory_RemoteLoad_Proxy( 
    IPersistMemory __RPC_FAR * This,
    /* [size_is][in] */ BYTE __RPC_FAR *pMem,
    /* [in] */ ULONG cbSize)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,cbSize);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pMem,
                  ( unsigned char __RPC_FAR * )&cbSize);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1092],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IPersistMemory_RemoteLoad_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPersistMemory __RPC_FAR *This;
        BYTE __RPC_FAR *pMem;
        ULONG cbSize;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPersistMemory __RPC_FAR *This;
        char Pad0[4];
        BYTE __RPC_FAR *pMem;
        char Pad1[4];
        ULONG cbSize;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IPersistMemory_Load_Stub(
                                   (IPersistMemory *) pParamStruct->This,
                                   pParamStruct->pMem,
                                   pParamStruct->cbSize);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IPersistMemory_RemoteSave_Proxy( 
    IPersistMemory __RPC_FAR * This,
    /* [size_is][in] */ BYTE __RPC_FAR *pMem,
    /* [in] */ BOOL fClearDirty,
    /* [in] */ ULONG cbSize)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,cbSize);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pMem,
                  ( unsigned char __RPC_FAR * )&fClearDirty,
                  ( unsigned char __RPC_FAR * )&cbSize);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IPersistMemory_RemoteSave_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPersistMemory __RPC_FAR *This;
        BYTE __RPC_FAR *pMem;
        BOOL fClearDirty;
        ULONG cbSize;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPersistMemory __RPC_FAR *This;
        char Pad0[4];
        BYTE __RPC_FAR *pMem;
        char Pad1[4];
        BOOL fClearDirty;
        char Pad2[4];
        ULONG cbSize;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IPersistMemory_Save_Stub(
                                   (IPersistMemory *) pParamStruct->This,
                                   pParamStruct->pMem,
                                   pParamStruct->fClearDirty,
                                   pParamStruct->cbSize);
    
}

static const unsigned short IPersistMemory_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    1074,
    1092,
    1122,
    1158,
    1182
    };

static const STUB_THUNK IPersistMemory_StubThunkTable[] = 
    {
    0,
    0,
    IPersistMemory_RemoteLoad_Thunk,
    IPersistMemory_RemoteSave_Thunk,
    0,
    0
    };

static const MIDL_SERVER_INFO IPersistMemory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistMemory_FormatStringOffsetTable[-3],
    &IPersistMemory_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistMemory_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistMemory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IPersistMemoryProxyVtbl = 
{
    &IPersistMemory_ProxyInfo,
    &IID_IPersistMemory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistMemory::IsDirty */ ,
    IPersistMemory_Load_Proxy ,
    IPersistMemory_Save_Proxy ,
    (void *)-1 /* IPersistMemory::GetSizeMax */ ,
    (void *)-1 /* IPersistMemory::InitNew */
};


static const PRPC_STUB_FUNCTION IPersistMemory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPersistMemoryStubVtbl =
{
    &IID_IPersistMemory,
    &IPersistMemory_ServerInfo,
    9,
    &IPersistMemory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPersistStreamInit, ver. 0.0,
   GUID={0x7FD52380,0x4E07,0x101B,{0xAE,0x2D,0x08,0x00,0x2B,0x2E,0xC7,0x13}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistStreamInit_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersistStreamInit_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    1074,
    1200,
    1224,
    1254,
    1182
    };

static const MIDL_SERVER_INFO IPersistStreamInit_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistStreamInit_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistStreamInit_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistStreamInit_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IPersistStreamInitProxyVtbl = 
{
    &IPersistStreamInit_ProxyInfo,
    &IID_IPersistStreamInit,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistStreamInit::IsDirty */ ,
    (void *)-1 /* IPersistStreamInit::Load */ ,
    (void *)-1 /* IPersistStreamInit::Save */ ,
    (void *)-1 /* IPersistStreamInit::GetSizeMax */ ,
    (void *)-1 /* IPersistStreamInit::InitNew */
};


static const PRPC_STUB_FUNCTION IPersistStreamInit_table[] =
{
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPersistStreamInitStubVtbl =
{
    &IID_IPersistStreamInit,
    &IPersistStreamInit_ServerInfo,
    9,
    &IPersistStreamInit_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPersistPropertyBag, ver. 0.0,
   GUID={0x37D84F60,0x42CB,0x11CE,{0x81,0x35,0x00,0xAA,0x00,0x4B,0xB8,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistPropertyBag_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersistPropertyBag_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    1074,
    1278,
    1308
    };

static const MIDL_SERVER_INFO IPersistPropertyBag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistPropertyBag_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistPropertyBag_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistPropertyBag_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IPersistPropertyBagProxyVtbl = 
{
    &IPersistPropertyBag_ProxyInfo,
    &IID_IPersistPropertyBag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistPropertyBag::InitNew */ ,
    (void *)-1 /* IPersistPropertyBag::Load */ ,
    (void *)-1 /* IPersistPropertyBag::Save */
};


static const PRPC_STUB_FUNCTION IPersistPropertyBag_table[] =
{
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPersistPropertyBagStubVtbl =
{
    &IID_IPersistPropertyBag,
    &IPersistPropertyBag_ServerInfo,
    7,
    &IPersistPropertyBag_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: ISimpleFrameSite, ver. 0.0,
   GUID={0x742B0E01,0x14E6,0x101B,{0x91,0x4E,0x00,0xAA,0x00,0x30,0x0C,0xAB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISimpleFrameSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ISimpleFrameSite_FormatStringOffsetTable[] = 
    {
    1344,
    1398
    };

static const MIDL_SERVER_INFO ISimpleFrameSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISimpleFrameSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISimpleFrameSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISimpleFrameSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ISimpleFrameSiteProxyVtbl = 
{
    &ISimpleFrameSite_ProxyInfo,
    &IID_ISimpleFrameSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ISimpleFrameSite::PreMessageFilter */ ,
    (void *)-1 /* ISimpleFrameSite::PostMessageFilter */
};

const CInterfaceStubVtbl _ISimpleFrameSiteStubVtbl =
{
    &IID_ISimpleFrameSite,
    &ISimpleFrameSite_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IFont, ver. 0.0,
   GUID={0xBEF6E002,0xA874,0x101A,{0x8B,0xBA,0x00,0xAA,0x00,0x30,0x0C,0xAB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFont_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IFont_FormatStringOffsetTable[] = 
    {
    1452,
    1476,
    1500,
    1524,
    1158,
    666,
    1548,
    1572,
    1596,
    1620,
    1644,
    930,
    1668,
    1692,
    1716,
    1740,
    1764,
    1788,
    1812,
    1836,
    1866,
    1890,
    1914,
    1938
    };

static const MIDL_SERVER_INFO IFont_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFont_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFont_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFont_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(27) _IFontProxyVtbl = 
{
    &IFont_ProxyInfo,
    &IID_IFont,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IFont::get_Name */ ,
    (void *)-1 /* IFont::put_Name */ ,
    (void *)-1 /* IFont::get_Size */ ,
    (void *)-1 /* IFont::put_Size */ ,
    (void *)-1 /* IFont::get_Bold */ ,
    (void *)-1 /* IFont::put_Bold */ ,
    (void *)-1 /* IFont::get_Italic */ ,
    (void *)-1 /* IFont::put_Italic */ ,
    (void *)-1 /* IFont::get_Underline */ ,
    (void *)-1 /* IFont::put_Underline */ ,
    (void *)-1 /* IFont::get_Strikethrough */ ,
    (void *)-1 /* IFont::put_Strikethrough */ ,
    (void *)-1 /* IFont::get_Weight */ ,
    (void *)-1 /* IFont::put_Weight */ ,
    (void *)-1 /* IFont::get_Charset */ ,
    (void *)-1 /* IFont::put_Charset */ ,
    (void *)-1 /* IFont::get_hFont */ ,
    (void *)-1 /* IFont::Clone */ ,
    (void *)-1 /* IFont::IsEqual */ ,
    (void *)-1 /* IFont::SetRatio */ ,
    (void *)-1 /* IFont::QueryTextMetrics */ ,
    (void *)-1 /* IFont::AddRefHfont */ ,
    (void *)-1 /* IFont::ReleaseHfont */ ,
    (void *)-1 /* IFont::SetHdc */
};

const CInterfaceStubVtbl _IFontStubVtbl =
{
    &IID_IFont,
    &IFont_ServerInfo,
    27,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPicture, ver. 0.0,
   GUID={0x7BF80980,0xBF32,0x101A,{0x8B,0xBB,0x00,0xAA,0x00,0x30,0x0C,0xAB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPicture_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPicture_FormatStringOffsetTable[] = 
    {
    1962,
    978,
    1986,
    2010,
    1158,
    2034,
    2112,
    2136,
    2160,
    2196,
    2220,
    2244,
    2262,
    2298
    };

static const MIDL_SERVER_INFO IPicture_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPicture_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPicture_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPicture_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(17) _IPictureProxyVtbl = 
{
    &IPicture_ProxyInfo,
    &IID_IPicture,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPicture::get_Handle */ ,
    (void *)-1 /* IPicture::get_hPal */ ,
    (void *)-1 /* IPicture::get_Type */ ,
    (void *)-1 /* IPicture::get_Width */ ,
    (void *)-1 /* IPicture::get_Height */ ,
    (void *)-1 /* IPicture::Render */ ,
    (void *)-1 /* IPicture::set_hPal */ ,
    (void *)-1 /* IPicture::get_CurDC */ ,
    (void *)-1 /* IPicture::SelectPicture */ ,
    (void *)-1 /* IPicture::get_KeepOriginalFormat */ ,
    (void *)-1 /* IPicture::put_KeepOriginalFormat */ ,
    (void *)-1 /* IPicture::PictureChanged */ ,
    (void *)-1 /* IPicture::SaveAsFile */ ,
    (void *)-1 /* IPicture::get_Attributes */
};

const CInterfaceStubVtbl _IPictureStubVtbl =
{
    &IID_IPicture,
    &IPicture_ServerInfo,
    17,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IFontDisp, ver. 0.0,
   GUID={0xBEF6E003,0xA874,0x101A,{0x8B,0xBA,0x00,0xAA,0x00,0x30,0x0C,0xAB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(7) _IFontDispProxyVtbl = 
{
    0,
    &IID_IFontDisp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IFontDisp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IFontDispStubVtbl =
{
    &IID_IFontDisp,
    0,
    7,
    &IFontDisp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPictureDisp, ver. 0.0,
   GUID={0x7BF80981,0xBF32,0x101A,{0x8B,0xBB,0x00,0xAA,0x00,0x30,0x0C,0xAB}} */


extern const MIDL_STUB_DESC Object_StubDesc;


#pragma code_seg(".orpc")
CINTERFACE_PROXY_VTABLE(7) _IPictureDispProxyVtbl = 
{
    0,
    &IID_IPictureDisp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    0 /* (void *)-1 /* IDispatch::GetTypeInfo */ ,
    0 /* (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


static const PRPC_STUB_FUNCTION IPictureDisp_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IPictureDispStubVtbl =
{
    &IID_IPictureDisp,
    0,
    7,
    &IPictureDisp_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAdviseSink, ver. 0.0,
   GUID={0x0000010f,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAdviseSinkEx, ver. 0.0,
   GUID={0x3AF24290,0x0C96,0x11CE,{0xA0,0xCF,0x00,0xAA,0x00,0x60,0x0A,0xB8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdviseSinkEx_ServerInfo;

#pragma code_seg(".orpc")
/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSinkEx_RemoteOnViewStatusChange_Proxy( 
    IAdviseSinkEx __RPC_FAR * This,
    /* [in] */ DWORD dwViewStatus)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwViewStatus);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2322],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2322],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwViewStatus);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2322],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSinkEx_RemoteOnViewStatusChange_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSinkEx __RPC_FAR *This;
        DWORD dwViewStatus;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSinkEx __RPC_FAR *This;
        char Pad0[4];
        DWORD dwViewStatus;
        char Pad1[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSinkEx_OnViewStatusChange_Stub((IAdviseSinkEx *) pParamStruct->This,pParamStruct->dwViewStatus);
    
}

static const unsigned short IAdviseSinkEx_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2322
    };

static const STUB_THUNK IAdviseSinkEx_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    0,
    IAdviseSinkEx_RemoteOnViewStatusChange_Thunk
    };

static const MIDL_SERVER_INFO IAdviseSinkEx_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAdviseSinkEx_FormatStringOffsetTable[-3],
    &IAdviseSinkEx_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAdviseSinkEx_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAdviseSinkEx_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IAdviseSinkExProxyVtbl = 
{
    &IAdviseSinkEx_ProxyInfo,
    &IID_IAdviseSinkEx,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IAdviseSink_OnDataChange_Proxy */ ,
    0 /* IAdviseSink_OnViewChange_Proxy */ ,
    0 /* IAdviseSink_OnRename_Proxy */ ,
    0 /* IAdviseSink_OnSave_Proxy */ ,
    0 /* IAdviseSink_OnClose_Proxy */ ,
    IAdviseSinkEx_OnViewStatusChange_Proxy
};


static const PRPC_STUB_FUNCTION IAdviseSinkEx_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl _IAdviseSinkExStubVtbl =
{
    &IID_IAdviseSinkEx,
    &IAdviseSinkEx_ServerInfo,
    9,
    &IAdviseSinkEx_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOleWindow, ver. 0.0,
   GUID={0x00000114,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOleInPlaceObject, ver. 0.0,
   GUID={0x00000113,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOleInPlaceObjectWindowless, ver. 0.0,
   GUID={0x1C2056CC,0x5EF4,0x101B,{0x8B,0xC8,0x00,0xAA,0x00,0x3E,0x3B,0x29}} */


/* Object interface: IOleInPlaceSite, ver. 0.0,
   GUID={0x00000119,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOleInPlaceSiteEx, ver. 0.0,
   GUID={0x9C2CAD80,0x3424,0x11CF,{0xB6,0x70,0x00,0xAA,0x00,0x4C,0xD6,0xD8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleInPlaceSiteEx_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleInPlaceSiteEx_FormatStringOffsetTable[] = 
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2344,
    2374,
    2398
    };

static const MIDL_SERVER_INFO IOleInPlaceSiteEx_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceSiteEx_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleInPlaceSiteEx_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleInPlaceSiteEx_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(18) _IOleInPlaceSiteExProxyVtbl = 
{
    &IOleInPlaceSiteEx_ProxyInfo,
    &IID_IOleInPlaceSiteEx,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* (void *)-1 /* IOleWindow::GetWindow */ ,
    0 /* (void *)-1 /* IOleWindow::ContextSensitiveHelp */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::CanInPlaceActivate */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::OnInPlaceActivate */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::OnUIActivate */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::GetWindowContext */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::Scroll */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::OnUIDeactivate */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::OnInPlaceDeactivate */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::DiscardUndoState */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::DeactivateAndUndo */ ,
    0 /* (void *)-1 /* IOleInPlaceSite::OnPosRectChange */ ,
    (void *)-1 /* IOleInPlaceSiteEx::OnInPlaceActivateEx */ ,
    (void *)-1 /* IOleInPlaceSiteEx::OnInPlaceDeactivateEx */ ,
    (void *)-1 /* IOleInPlaceSiteEx::RequestUIActivate */
};


static const PRPC_STUB_FUNCTION IOleInPlaceSiteEx_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOleInPlaceSiteExStubVtbl =
{
    &IID_IOleInPlaceSiteEx,
    &IOleInPlaceSiteEx_ServerInfo,
    18,
    &IOleInPlaceSiteEx_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOleInPlaceSiteWindowless, ver. 0.0,
   GUID={0x922EADA0,0x3424,0x11CF,{0xB6,0x70,0x00,0xAA,0x00,0x4C,0xD6,0xD8}} */


/* Object interface: IViewObject, ver. 0.0,
   GUID={0x0000010d,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IViewObject2, ver. 0.0,
   GUID={0x00000127,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IViewObjectEx, ver. 0.0,
   GUID={0x3AF24292,0x0C96,0x11CE,{0xA0,0xCF,0x00,0xAA,0x00,0x60,0x0A,0xB8}} */


/* Object interface: IOleUndoUnit, ver. 0.0,
   GUID={0x894AD3B0,0xEF97,0x11CE,{0x9B,0xC9,0x00,0xAA,0x00,0x60,0x8E,0x01}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleUndoUnit_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleUndoUnit_FormatStringOffsetTable[] = 
    {
    2416,
    2440,
    2464,
    2494
    };

static const MIDL_SERVER_INFO IOleUndoUnit_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleUndoUnit_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleUndoUnit_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleUndoUnit_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IOleUndoUnitProxyVtbl = 
{
    &IOleUndoUnit_ProxyInfo,
    &IID_IOleUndoUnit,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleUndoUnit::Do */ ,
    (void *)-1 /* IOleUndoUnit::GetDescription */ ,
    (void *)-1 /* IOleUndoUnit::GetUnitType */ ,
    (void *)-1 /* IOleUndoUnit::OnNextAdd */
};

const CInterfaceStubVtbl _IOleUndoUnitStubVtbl =
{
    &IID_IOleUndoUnit,
    &IOleUndoUnit_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleParentUndoUnit, ver. 0.0,
   GUID={0xA1FAF330,0xEF97,0x11CE,{0x9B,0xC9,0x00,0xAA,0x00,0x60,0x8E,0x01}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleParentUndoUnit_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleParentUndoUnit_FormatStringOffsetTable[] = 
    {
    2416,
    2440,
    2464,
    2494,
    2512,
    2536,
    2566,
    2590,
    1596
    };

static const MIDL_SERVER_INFO IOleParentUndoUnit_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleParentUndoUnit_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleParentUndoUnit_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleParentUndoUnit_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(12) _IOleParentUndoUnitProxyVtbl = 
{
    &IOleParentUndoUnit_ProxyInfo,
    &IID_IOleParentUndoUnit,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleUndoUnit::Do */ ,
    (void *)-1 /* IOleUndoUnit::GetDescription */ ,
    (void *)-1 /* IOleUndoUnit::GetUnitType */ ,
    (void *)-1 /* IOleUndoUnit::OnNextAdd */ ,
    (void *)-1 /* IOleParentUndoUnit::Open */ ,
    (void *)-1 /* IOleParentUndoUnit::Close */ ,
    (void *)-1 /* IOleParentUndoUnit::Add */ ,
    (void *)-1 /* IOleParentUndoUnit::FindUnit */ ,
    (void *)-1 /* IOleParentUndoUnit::GetParentState */
};

const CInterfaceStubVtbl _IOleParentUndoUnitStubVtbl =
{
    &IID_IOleParentUndoUnit,
    &IOleParentUndoUnit_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumOleUndoUnits, ver. 0.0,
   GUID={0xB3E7C340,0xEF97,0x11CE,{0x9B,0xC9,0x00,0xAA,0x00,0x60,0x8E,0x01}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumOleUndoUnits_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumOleUndoUnits_RemoteNext_Proxy( 
    IEnumOleUndoUnits __RPC_FAR * This,
    /* [in] */ ULONG cElt,
    /* [length_is][size_is][out] */ IOleUndoUnit __RPC_FAR *__RPC_FAR *rgElt,
    /* [out] */ ULONG __RPC_FAR *pcEltFetched)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcEltFetched);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2614],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2614],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&cElt,
                  ( unsigned char __RPC_FAR * )&rgElt,
                  ( unsigned char __RPC_FAR * )&pcEltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2614],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumOleUndoUnits_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumOleUndoUnits __RPC_FAR *This;
        ULONG cElt;
        IOleUndoUnit __RPC_FAR *__RPC_FAR *rgElt;
        ULONG __RPC_FAR *pcEltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumOleUndoUnits __RPC_FAR *This;
        char Pad0[4];
        ULONG cElt;
        char Pad1[4];
        IOleUndoUnit __RPC_FAR *__RPC_FAR *rgElt;
        char Pad2[4];
        ULONG __RPC_FAR *pcEltFetched;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IEnumOleUndoUnits_Next_Stub(
                                      (IEnumOleUndoUnits *) pParamStruct->This,
                                      pParamStruct->cElt,
                                      pParamStruct->rgElt,
                                      pParamStruct->pcEltFetched);
    
}

static const unsigned short IEnumOleUndoUnits_FormatStringOffsetTable[] = 
    {
    2614,
    36,
    60,
    2650
    };

static const STUB_THUNK IEnumOleUndoUnits_StubThunkTable[] = 
    {
    IEnumOleUndoUnits_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumOleUndoUnits_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumOleUndoUnits_FormatStringOffsetTable[-3],
    &IEnumOleUndoUnits_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumOleUndoUnits_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumOleUndoUnits_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumOleUndoUnitsProxyVtbl = 
{
    &IEnumOleUndoUnits_ProxyInfo,
    &IID_IEnumOleUndoUnits,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumOleUndoUnits_Next_Proxy ,
    (void *)-1 /* IEnumOleUndoUnits::Skip */ ,
    (void *)-1 /* IEnumOleUndoUnits::Reset */ ,
    (void *)-1 /* IEnumOleUndoUnits::Clone */
};

const CInterfaceStubVtbl _IEnumOleUndoUnitsStubVtbl =
{
    &IID_IEnumOleUndoUnits,
    &IEnumOleUndoUnits_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IOleUndoManager, ver. 0.0,
   GUID={0xD001F200,0xEF97,0x11CE,{0x9B,0xC9,0x00,0xAA,0x00,0x60,0x8E,0x01}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOleUndoManager_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOleUndoManager_FormatStringOffsetTable[] = 
    {
    2674,
    2698,
    2728,
    2010,
    2752,
    2776,
    2566,
    2800,
    2824,
    2848,
    2872,
    930
    };

static const MIDL_SERVER_INFO IOleUndoManager_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOleUndoManager_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOleUndoManager_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOleUndoManager_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IOleUndoManagerProxyVtbl = 
{
    &IOleUndoManager_ProxyInfo,
    &IID_IOleUndoManager,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOleUndoManager::Open */ ,
    (void *)-1 /* IOleUndoManager::Close */ ,
    (void *)-1 /* IOleUndoManager::Add */ ,
    (void *)-1 /* IOleUndoManager::GetOpenParentState */ ,
    (void *)-1 /* IOleUndoManager::DiscardFrom */ ,
    (void *)-1 /* IOleUndoManager::UndoTo */ ,
    (void *)-1 /* IOleUndoManager::RedoTo */ ,
    (void *)-1 /* IOleUndoManager::EnumUndoable */ ,
    (void *)-1 /* IOleUndoManager::EnumRedoable */ ,
    (void *)-1 /* IOleUndoManager::GetLastUndoDescription */ ,
    (void *)-1 /* IOleUndoManager::GetLastRedoDescription */ ,
    (void *)-1 /* IOleUndoManager::Enable */
};

const CInterfaceStubVtbl _IOleUndoManagerStubVtbl =
{
    &IID_IOleUndoManager,
    &IOleUndoManager_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IQuickActivate, ver. 0.0,
   GUID={0xCF51ED10,0x62FE,0x11CF,{0xBF,0x86,0x00,0xA0,0xC9,0x03,0x48,0x36}} */


/* Object interface: IPointerInactive, ver. 0.0,
   GUID={0x55980BA0,0x35AA,0x11CF,{0xB6,0x71,0x00,0xAA,0x00,0x4C,0xD6,0xD8}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPointerInactive_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPointerInactive_FormatStringOffsetTable[] = 
    {
    1962,
    2896,
    2938
    };

static const MIDL_SERVER_INFO IPointerInactive_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPointerInactive_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPointerInactive_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPointerInactive_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _IPointerInactiveProxyVtbl = 
{
    &IPointerInactive_ProxyInfo,
    &IID_IPointerInactive,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPointerInactive::GetActivationPolicy */ ,
    (void *)-1 /* IPointerInactive::OnInactiveMouseMove */ ,
    (void *)-1 /* IPointerInactive::OnInactiveSetCursor */
};

const CInterfaceStubVtbl _IPointerInactiveStubVtbl =
{
    &IID_IPointerInactive,
    &IPointerInactive_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IObjectWithSite, ver. 0.0,
   GUID={0xFC4801A3,0x2BA9,0x11CF,{0xA2,0x29,0x00,0xAA,0x00,0x3D,0x73,0x52}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IObjectWithSite_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IObjectWithSite_FormatStringOffsetTable[] = 
    {
    2986,
    3010
    };

static const MIDL_SERVER_INFO IObjectWithSite_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IObjectWithSite_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IObjectWithSite_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IObjectWithSite_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IObjectWithSiteProxyVtbl = 
{
    &IObjectWithSite_ProxyInfo,
    &IID_IObjectWithSite,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IObjectWithSite::SetSite */ ,
    (void *)-1 /* IObjectWithSite::GetSite */
};

const CInterfaceStubVtbl _IObjectWithSiteStubVtbl =
{
    &IID_IObjectWithSite,
    &IObjectWithSite_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IErrorLog, ver. 0.0,
   GUID={0x3127CA40,0x446E,0x11CE,{0x81,0x35,0x00,0xAA,0x00,0x4B,0xB8,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IErrorLog_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IErrorLog_FormatStringOffsetTable[] = 
    {
    3040
    };

static const MIDL_SERVER_INFO IErrorLog_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IErrorLog_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IErrorLog_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IErrorLog_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IErrorLogProxyVtbl = 
{
    &IErrorLog_ProxyInfo,
    &IID_IErrorLog,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IErrorLog::AddError */
};

const CInterfaceStubVtbl _IErrorLogStubVtbl =
{
    &IID_IErrorLog,
    &IErrorLog_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertyBag, ver. 0.0,
   GUID={0x55272A00,0x42CB,0x11CE,{0x81,0x35,0x00,0xAA,0x00,0x4B,0xB8,0x51}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyBag_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IPropertyBag_RemoteRead_Proxy( 
    IPropertyBag __RPC_FAR * This,
    /* [in] */ LPCOLESTR pszPropName,
    /* [out] */ VARIANT __RPC_FAR *pVar,
    /* [in] */ IErrorLog __RPC_FAR *pErrorLog,
    /* [in] */ DWORD varType,
    /* [in] */ IUnknown __RPC_FAR *pUnkObj)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pUnkObj);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3070],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3070],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pszPropName,
                  ( unsigned char __RPC_FAR * )&pVar,
                  ( unsigned char __RPC_FAR * )&pErrorLog,
                  ( unsigned char __RPC_FAR * )&varType,
                  ( unsigned char __RPC_FAR * )&pUnkObj);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3070],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IPropertyBag_RemoteRead_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPropertyBag __RPC_FAR *This;
        LPCOLESTR pszPropName;
        VARIANT __RPC_FAR *pVar;
        IErrorLog __RPC_FAR *pErrorLog;
        DWORD varType;
        IUnknown __RPC_FAR *pUnkObj;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IPropertyBag __RPC_FAR *This;
        char Pad0[4];
        LPCOLESTR pszPropName;
        char Pad1[4];
        VARIANT __RPC_FAR *pVar;
        char Pad2[4];
        IErrorLog __RPC_FAR *pErrorLog;
        char Pad3[4];
        DWORD varType;
        char Pad4[4];
        IUnknown __RPC_FAR *pUnkObj;
        char Pad5[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IPropertyBag_Read_Stub(
                                 (IPropertyBag *) pParamStruct->This,
                                 pParamStruct->pszPropName,
                                 pParamStruct->pVar,
                                 pParamStruct->pErrorLog,
                                 pParamStruct->varType,
                                 pParamStruct->pUnkObj);
    
}

static const unsigned short IPropertyBag_FormatStringOffsetTable[] = 
    {
    3070,
    3118
    };

static const STUB_THUNK IPropertyBag_StubThunkTable[] = 
    {
    IPropertyBag_RemoteRead_Thunk,
    0
    };

static const MIDL_SERVER_INFO IPropertyBag_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyBag_FormatStringOffsetTable[-3],
    &IPropertyBag_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyBag_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyBag_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _IPropertyBagProxyVtbl = 
{
    &IPropertyBag_ProxyInfo,
    &IID_IPropertyBag,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IPropertyBag_Read_Proxy ,
    (void *)-1 /* IPropertyBag::Write */
};

const CInterfaceStubVtbl _IPropertyBagStubVtbl =
{
    &IID_IPropertyBag,
    &IPropertyBag_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPerPropertyBrowsing, ver. 0.0,
   GUID={0x376BD3AA,0x3845,0x101B,{0x84,0xED,0x08,0x00,0x2B,0x2E,0xC7,0x13}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPerPropertyBrowsing_ServerInfo;

#pragma code_seg(".orpc")
extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[6];

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

static const unsigned short IPerPropertyBrowsing_FormatStringOffsetTable[] = 
    {
    3148,
    456,
    3178,
    3214
    };

static const MIDL_SERVER_INFO IPerPropertyBrowsing_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPerPropertyBrowsing_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPerPropertyBrowsing_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPerPropertyBrowsing_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IPerPropertyBrowsingProxyVtbl = 
{
    &IPerPropertyBrowsing_ProxyInfo,
    &IID_IPerPropertyBrowsing,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPerPropertyBrowsing::GetDisplayString */ ,
    (void *)-1 /* IPerPropertyBrowsing::MapPropertyToPage */ ,
    (void *)-1 /* IPerPropertyBrowsing::GetPredefinedStrings */ ,
    (void *)-1 /* IPerPropertyBrowsing::GetPredefinedValue */
};

const CInterfaceStubVtbl _IPerPropertyBrowsingStubVtbl =
{
    &IID_IPerPropertyBrowsing,
    &IPerPropertyBrowsing_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[6] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            HACCEL_UserSize
            ,HACCEL_UserMarshal
            ,HACCEL_UserUnmarshal
            ,HACCEL_UserFree
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            HFONT_UserSize
            ,HFONT_UserMarshal
            ,HFONT_UserUnmarshal
            ,HFONT_UserFree
            },
            {
            HDC_UserSize
            ,HDC_UserMarshal
            ,HDC_UserUnmarshal
            ,HDC_UserFree
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

	/* Procedure RemoteNext */

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
/* 10 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter cConnections */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgcd */

/* 18 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pcFetched */

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


	/* Procedure OnRequestEdit */


	/* Procedure LockInPlaceActive */


	/* Procedure Skip */


	/* Procedure Skip */

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

	/* Parameter cElt */


	/* Parameter dispID */


	/* Parameter fLock */


	/* Parameter cConnections */


	/* Parameter cConnections */

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

	/* Procedure Reset */


	/* Procedure Deactivate */


	/* Procedure Reset */


	/* Procedure Reset */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 62 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 80 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 90 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 94 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetConnectionInterface */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 104 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x28 ),	/* 40 */
/* 112 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pIID */

/* 114 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 118 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetConnectionPointContainer */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppCPC */

/* 138 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 142 */	NdrFcShort( 0x66 ),	/* Type Offset=102 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Advise */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 152 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x10 ),	/* 16 */
/* 160 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pUnkSink */

/* 162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pdwCookie */

/* 168 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FreezeEvents */


	/* Procedure Unadvise */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 182 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter bFreeze */


	/* Parameter dwCookie */

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

	/* Procedure EnumConnections */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 206 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x8 ),	/* 8 */
/* 214 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 216 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 220 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 228 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 230 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 236 */	NdrFcShort( 0x10 ),	/* 16 */
/* 238 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter cConnections */

/* 240 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppCP */

/* 246 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 250 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */

	/* Parameter pcFetched */

/* 252 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 266 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 276 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 280 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumConnectionPoints */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 290 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 300 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	NdrFcShort( 0xa4 ),	/* Type Offset=164 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindConnectionPoint */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 314 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 316 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 318 */	NdrFcShort( 0x20 ),	/* 32 */
/* 320 */	NdrFcShort( 0x8 ),	/* 8 */
/* 322 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter riid */

/* 324 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 328 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ppCP */

/* 330 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 334 */	NdrFcShort( 0xbe ),	/* Type Offset=190 */

	/* Return value */

/* 336 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLicInfo */

/* 342 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 344 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	NdrFcShort( 0x1c ),	/* 28 */
/* 352 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pLicInfo */

/* 354 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 358 */	NdrFcShort( 0xc6 ),	/* Type Offset=198 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RequestLicKey */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 368 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 370 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dwReserved */

/* 378 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrKey */

/* 384 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 388 */	NdrFcShort( 0xea ),	/* Type Offset=234 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCreateInstanceLic */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 398 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 400 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 402 */	NdrFcShort( 0x20 ),	/* 32 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter riid */

/* 408 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 412 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter bstrKey */

/* 414 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	NdrFcShort( 0xf8 ),	/* Type Offset=248 */

	/* Parameter ppvObj */

/* 420 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 424 */	NdrFcShort( 0x102 ),	/* Type Offset=258 */

	/* Return value */

/* 426 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 428 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassInfo */

/* 432 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 434 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 436 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 442 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppTI */

/* 444 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 448 */	NdrFcShort( 0x10c ),	/* Type Offset=268 */

	/* Return value */

/* 450 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MapPropertyToPage */


	/* Procedure GetGUID */

/* 456 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 458 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 460 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 462 */	NdrFcShort( 0x8 ),	/* 8 */
/* 464 */	NdrFcShort( 0x28 ),	/* 40 */
/* 466 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dispID */


	/* Parameter dwGuidKind */

/* 468 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClsid */


	/* Parameter pGUID */

/* 474 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 476 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 478 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */


	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 482 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetControlInfo */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 488 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 490 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 496 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pCI */

/* 498 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 502 */	NdrFcShort( 0x148 ),	/* Type Offset=328 */

	/* Return value */

/* 504 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMnemonic */

/* 510 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 512 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 514 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 520 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pMsg */

/* 522 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 526 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 530 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAmbientPropertyChange */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 536 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 538 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dispID */

/* 546 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnControlInfoChanged */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 560 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 562 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetExtendedControl */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 578 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 580 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 586 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppDisp */

/* 588 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 592 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Return value */

/* 594 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TransformCoords */

/* 600 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 602 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 604 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 606 */	NdrFcShort( 0x28 ),	/* 40 */
/* 608 */	NdrFcShort( 0x28 ),	/* 40 */
/* 610 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter pPtlHimetric */

/* 612 */	NdrFcShort( 0x11a ),	/* 282 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 616 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter pPtfContainer */

/* 618 */	NdrFcShort( 0x11a ),	/* 282 */
#ifndef _ALPHA_
/* 620 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 622 */	NdrFcShort( 0x1a8 ),	/* Type Offset=424 */

	/* Parameter dwFlags */

/* 624 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 626 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 630 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateAccelerator */

/* 636 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 638 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 640 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 646 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pMsg */

/* 648 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 652 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Parameter grfModifiers */

/* 654 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 656 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Bold */


	/* Procedure Show */


	/* Procedure OnFocus */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 668 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 670 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	NdrFcShort( 0x8 ),	/* 8 */
/* 676 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter bold */


	/* Parameter nCmdShow */


	/* Parameter fGotFocus */

/* 678 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowPropertyFrame */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 692 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 694 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 700 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetPageSite */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 710 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 712 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 718 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pPageSite */

/* 720 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 724 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Activate */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 734 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 736 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 738 */	NdrFcShort( 0x20 ),	/* 32 */
/* 740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 742 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hWndParent */

/* 744 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 748 */	NdrFcShort( 0x1c2 ),	/* Type Offset=450 */

	/* Parameter pRect */

/* 750 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 754 */	NdrFcShort( 0x1d0 ),	/* Type Offset=464 */

	/* Parameter bModal */

/* 756 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPageInfo */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 770 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 772 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pPageInfo */

/* 780 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x1de ),	/* Type Offset=478 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetObjects */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 794 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 796 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 802 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter cObjects */

/* 804 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 806 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppUnk */

/* 810 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 812 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 814 */	NdrFcShort( 0x212 ),	/* Type Offset=530 */

	/* Return value */

/* 816 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 818 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Move */

/* 822 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 824 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 826 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 828 */	NdrFcShort( 0x18 ),	/* 24 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pRect */

/* 834 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 838 */	NdrFcShort( 0x1d0 ),	/* Type Offset=464 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsPageDirty */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 848 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 856 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 858 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 860 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Apply */

/* 864 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 866 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 868 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 874 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Help */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 884 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 886 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 892 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszHelpDir */

/* 894 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 898 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Return value */

/* 900 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateAccelerator */

/* 906 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 908 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 910 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pMsg */

/* 918 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 922 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Enable */


	/* Procedure put_Strikethrough */


	/* Procedure EditProperty */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 932 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 934 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 940 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fEnable */


	/* Parameter strikethrough */


	/* Parameter dispID */

/* 942 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 944 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 950 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnChanged */


	/* Procedure OnStatusChange */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 956 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dispID */


	/* Parameter dwFlags */

/* 966 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 968 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 974 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hPal */


	/* Procedure GetLocaleID */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 980 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 982 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x10 ),	/* 16 */
/* 988 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter phPal */


	/* Parameter pLocaleID */

/* 990 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 998 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPageContainer */

/* 1002 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1004 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1006 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1012 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppUnk */

/* 1014 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1016 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1018 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Return value */

/* 1020 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1022 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure TranslateAccelerator */

/* 1026 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1028 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1030 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1034 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1036 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pMsg */

/* 1038 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1042 */	NdrFcShort( 0x174 ),	/* Type Offset=372 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1046 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPages */

/* 1050 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1052 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1054 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1060 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pPages */

/* 1062 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1066 */	NdrFcShort( 0x23e ),	/* Type Offset=574 */

	/* Return value */

/* 1068 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitNew */


	/* Procedure IsDirty */


	/* Procedure IsDirty */

/* 1074 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1076 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1078 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1082 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1084 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteLoad */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1094 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1096 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1102 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pMem */

/* 1104 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1106 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1108 */	NdrFcShort( 0x256 ),	/* Type Offset=598 */

	/* Parameter cbSize */

/* 1110 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1112 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteSave */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1124 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1126 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1132 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pMem */

/* 1134 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1138 */	NdrFcShort( 0x264 ),	/* Type Offset=612 */

	/* Parameter fClearDirty */

/* 1140 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1142 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbSize */

/* 1146 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1148 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */


	/* Procedure get_Bold */


	/* Procedure GetSizeMax */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1160 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1162 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1168 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pHeight */


	/* Parameter pBold */


	/* Parameter pCbSize */

/* 1170 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1172 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1178 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitNew */


	/* Procedure InitNew */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1184 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1186 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1192 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1202 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1204 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1210 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pStm */

/* 1212 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1214 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1216 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Return value */

/* 1218 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 1224 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1226 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1228 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pStm */

/* 1236 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1240 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Parameter fClearDirty */

/* 1242 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1244 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1250 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSizeMax */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1256 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1258 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1264 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pCbSize */

/* 1266 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 1268 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1270 */	NdrFcShort( 0x284 ),	/* Type Offset=644 */

	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1274 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 1278 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1280 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1282 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1288 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pPropBag */

/* 1290 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1292 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1294 */	NdrFcShort( 0x28a ),	/* Type Offset=650 */

	/* Parameter pErrorLog */

/* 1296 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1300 */	NdrFcShort( 0x29c ),	/* Type Offset=668 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1310 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1312 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1314 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1316 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1318 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pPropBag */

/* 1320 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1322 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1324 */	NdrFcShort( 0x28a ),	/* Type Offset=650 */

	/* Parameter fClearDirty */

/* 1326 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fSaveAllProperties */

/* 1332 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1334 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1340 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PreMessageFilter */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1346 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1348 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1350 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1352 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1354 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter hWnd */

/* 1356 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1360 */	NdrFcShort( 0x2ae ),	/* Type Offset=686 */

	/* Parameter msg */

/* 1362 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1364 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wp */

/* 1368 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lp */

/* 1374 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1376 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plResult */

/* 1380 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1382 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwCookie */

/* 1386 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1388 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1392 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PostMessageFilter */

/* 1398 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1400 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1402 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1406 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1408 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter hWnd */

/* 1410 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1412 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1414 */	NdrFcShort( 0x2b8 ),	/* Type Offset=696 */

	/* Parameter msg */

/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wp */

/* 1422 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lp */

/* 1428 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plResult */

/* 1434 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCookie */

/* 1440 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1442 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1446 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1448 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 1452 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1454 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1456 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1462 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pName */

/* 1464 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1466 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1468 */	NdrFcShort( 0x2c6 ),	/* Type Offset=710 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1472 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1478 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1480 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1486 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter name */

/* 1488 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1490 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1492 */	NdrFcShort( 0x2d0 ),	/* Type Offset=720 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1496 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Size */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1502 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1510 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pSize */

/* 1512 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 1514 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1516 */	NdrFcShort( 0x284 ),	/* Type Offset=644 */

	/* Return value */

/* 1518 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1520 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Size */

/* 1524 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1526 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1528 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1534 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter size */

/* 1536 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1538 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1540 */	NdrFcShort( 0x284 ),	/* Type Offset=644 */

	/* Return value */

/* 1542 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1544 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Italic */

/* 1548 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1550 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1552 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1558 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pItalic */

/* 1560 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1562 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1566 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1568 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Italic */

/* 1572 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1574 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1576 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1580 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1582 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter italic */

/* 1584 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1586 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1592 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParentState */


	/* Procedure get_Underline */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1598 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1600 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1604 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1606 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwState */


	/* Parameter pUnderline */

/* 1608 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1610 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1616 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Underline */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1622 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1624 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1630 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter underline */

/* 1632 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1634 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1638 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1640 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Strikethrough */

/* 1644 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1646 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1648 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1654 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pStrikethrough */

/* 1656 */	NdrFcShort( 0x2150 ),	/* 8528 */
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

	/* Procedure get_Weight */

/* 1668 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1670 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 1672 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1676 */	NdrFcShort( 0xe ),	/* 14 */
/* 1678 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pWeight */

/* 1680 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1682 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1684 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1686 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1688 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Weight */

/* 1692 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1694 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 1696 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1698 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1702 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter weight */

/* 1704 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1706 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1708 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1710 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1712 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Charset */

/* 1716 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1718 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 1720 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0xe ),	/* 14 */
/* 1726 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pCharset */

/* 1728 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1730 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1732 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1734 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1736 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Charset */

/* 1740 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1742 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 1744 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1746 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1750 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter charset */

/* 1752 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1754 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1756 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1760 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hFont */

/* 1764 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1766 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1768 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1774 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter phFont */

/* 1776 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1778 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1780 */	NdrFcShort( 0x2e2 ),	/* Type Offset=738 */

	/* Return value */

/* 1782 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1784 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1788 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1790 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 1792 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1798 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppFont */

/* 1800 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1802 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1804 */	NdrFcShort( 0x2ec ),	/* Type Offset=748 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1808 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsEqual */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1814 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1816 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1820 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1822 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pFontOther */

/* 1824 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1826 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1828 */	NdrFcShort( 0x2f0 ),	/* Type Offset=752 */

	/* Return value */

/* 1830 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1832 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetRatio */

/* 1836 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1838 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1840 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1842 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1844 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1846 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter cyLogical */

/* 1848 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1850 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cyHimetric */

/* 1854 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1862 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryTextMetrics */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1868 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1870 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1876 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pTM */

/* 1878 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1880 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1882 */	NdrFcShort( 0x306 ),	/* Type Offset=774 */

	/* Return value */

/* 1884 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1886 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddRefHfont */

/* 1890 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1892 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 1894 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1900 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter hFont */

/* 1902 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1904 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1906 */	NdrFcShort( 0x324 ),	/* Type Offset=804 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1910 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReleaseHfont */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1916 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 1918 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter hFont */

/* 1926 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1930 */	NdrFcShort( 0x32e ),	/* Type Offset=814 */

	/* Return value */

/* 1932 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1934 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHdc */

/* 1938 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1940 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 1942 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1948 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter hDC */

/* 1950 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1952 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1954 */	NdrFcShort( 0x338 ),	/* Type Offset=824 */

	/* Return value */

/* 1956 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1958 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActivationPolicy */


	/* Procedure get_Handle */

/* 1962 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1964 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1966 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1972 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwPolicy */


	/* Parameter pHandle */

/* 1974 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1976 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1982 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Type */

/* 1986 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1988 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1990 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0xe ),	/* 14 */
/* 1996 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pType */

/* 1998 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2000 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2002 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 2004 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2006 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOpenParentState */


	/* Procedure get_Width */

/* 2010 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2012 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2014 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2020 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwState */


	/* Parameter pWidth */

/* 2022 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2024 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2030 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Render */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2036 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2038 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 2040 */	NdrFcShort( 0x58 ),	/* 88 */
/* 2042 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2044 */	0x6,		/* 6 */
			0xb,		/* 11 */

	/* Parameter hDC */

/* 2046 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 2048 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2050 */	NdrFcShort( 0x342 ),	/* Type Offset=834 */

	/* Parameter x */

/* 2052 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2054 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2058 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2060 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cx */

/* 2064 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2066 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cy */

/* 2070 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2072 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter xSrc */

/* 2076 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2078 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ySrc */

/* 2082 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2084 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cxSrc */

/* 2088 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2090 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cySrc */

/* 2094 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2096 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRcWBounds */

/* 2100 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2102 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 2104 */	NdrFcShort( 0x1d0 ),	/* Type Offset=464 */

	/* Return value */

/* 2106 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2108 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 2110 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set_hPal */

/* 2112 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2114 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2116 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2122 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPal */

/* 2124 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2126 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2132 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurDC */

/* 2136 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2138 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2140 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2146 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter phDC */

/* 2148 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 2150 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2152 */	NdrFcShort( 0x350 ),	/* Type Offset=848 */

	/* Return value */

/* 2154 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2156 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectPicture */

/* 2160 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2164 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2170 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter hDCIn */

/* 2172 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 2174 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2176 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Parameter phDCOut */

/* 2178 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 2180 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2182 */	NdrFcShort( 0x368 ),	/* Type Offset=872 */

	/* Parameter phBmpOut */

/* 2184 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2186 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2190 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2192 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_KeepOriginalFormat */

/* 2196 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2198 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 2200 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2204 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2206 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pKeep */

/* 2208 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2210 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2214 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2216 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_KeepOriginalFormat */

/* 2220 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2222 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 2224 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2230 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter keep */

/* 2232 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2234 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2240 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PictureChanged */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2246 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 2248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2254 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 2256 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2258 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveAsFile */

/* 2262 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2264 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 2266 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2270 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2272 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pStream */

/* 2274 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2276 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2278 */	NdrFcShort( 0x26e ),	/* Type Offset=622 */

	/* Parameter fSaveMemCopy */

/* 2280 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2282 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCbSize */

/* 2286 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2288 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2294 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attributes */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2300 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 2302 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2306 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2308 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pDwAttr */

/* 2310 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2312 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2318 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOnViewStatusChange */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2324 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2328 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2330 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2336 */	0x0,		/* 0 */
			0x1,		/* 1 */

	/* Parameter dwViewStatus */

/* 2338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2340 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceActivateEx */

/* 2344 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2346 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 2348 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2352 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2354 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter pfNoRedraw */

/* 2356 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2358 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 2362 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2364 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2368 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2370 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceDeactivateEx */

/* 2374 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2376 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 2378 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2380 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2384 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fNoRedraw */

/* 2386 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2388 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2392 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2394 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RequestUIActivate */

/* 2398 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2400 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 2402 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 2410 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2412 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Do */

/* 2416 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2418 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2420 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2426 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUndoManager */

/* 2428 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2430 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2432 */	NdrFcShort( 0x372 ),	/* Type Offset=882 */

	/* Return value */

/* 2434 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2436 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDescription */

/* 2440 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2442 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2444 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2448 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2450 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pBstr */

/* 2452 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 2454 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2456 */	NdrFcShort( 0x388 ),	/* Type Offset=904 */

	/* Return value */

/* 2458 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2460 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUnitType */

/* 2464 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2466 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2468 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2474 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter pClsid */

/* 2476 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 2478 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2480 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter plID */

/* 2482 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2484 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2488 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2490 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnNextAdd */

/* 2494 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2496 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2498 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 2506 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2508 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 2512 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2514 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2516 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2522 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pPUU */

/* 2524 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2526 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2528 */	NdrFcShort( 0x392 ),	/* Type Offset=914 */

	/* Return value */

/* 2530 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2532 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 2536 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2538 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2540 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pPUU */

/* 2548 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2550 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2552 */	NdrFcShort( 0x392 ),	/* Type Offset=914 */

	/* Parameter fCommit */

/* 2554 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2556 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2560 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2562 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RedoTo */


	/* Procedure Add */

/* 2566 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2568 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2570 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2576 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUU */


	/* Parameter pUU */

/* 2578 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2580 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2582 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */


	/* Return value */

/* 2584 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2586 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FindUnit */

/* 2590 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2592 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2594 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2600 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUU */

/* 2602 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2604 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2606 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */

/* 2608 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2610 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 2614 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2616 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2618 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2624 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter cElt */

/* 2626 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2628 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgElt */

/* 2632 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2634 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2636 */	NdrFcShort( 0x3ba ),	/* Type Offset=954 */

	/* Parameter pcEltFetched */

/* 2638 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2640 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2644 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2646 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 2650 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2652 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2654 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2660 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 2662 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2664 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2666 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 2668 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2670 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 2674 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2676 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2678 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2684 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pPUU */

/* 2686 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2688 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2690 */	NdrFcShort( 0x392 ),	/* Type Offset=914 */

	/* Return value */

/* 2692 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2694 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Close */

/* 2698 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2700 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2702 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pPUU */

/* 2710 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2712 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2714 */	NdrFcShort( 0x392 ),	/* Type Offset=914 */

	/* Parameter fCommit */

/* 2716 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2718 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2722 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2724 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Add */

/* 2728 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2730 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2732 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2736 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2738 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUU */

/* 2740 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2742 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2744 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */

/* 2746 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2748 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscardFrom */

/* 2752 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2754 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2756 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2762 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUU */

/* 2764 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2766 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2768 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */

/* 2770 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2772 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UndoTo */

/* 2776 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2778 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2780 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2786 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUU */

/* 2788 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2790 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2792 */	NdrFcShort( 0x3a4 ),	/* Type Offset=932 */

	/* Return value */

/* 2794 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2796 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumUndoable */

/* 2800 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2802 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2804 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2810 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 2812 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2814 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2816 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 2818 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2820 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumRedoable */

/* 2824 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2826 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2828 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2834 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppEnum */

/* 2836 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2838 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2840 */	NdrFcShort( 0x3cc ),	/* Type Offset=972 */

	/* Return value */

/* 2842 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2844 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastUndoDescription */

/* 2848 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2850 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 2852 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2858 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pBstr */

/* 2860 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 2862 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2864 */	NdrFcShort( 0x3e6 ),	/* Type Offset=998 */

	/* Return value */

/* 2866 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2868 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLastRedoDescription */

/* 2872 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2874 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 2876 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2882 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pBstr */

/* 2884 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 2886 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2888 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInactiveMouseMove */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2898 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2900 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2902 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2906 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter pRectBounds */

/* 2908 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2910 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2912 */	NdrFcShort( 0x1d0 ),	/* Type Offset=464 */

	/* Parameter x */

/* 2914 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2916 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2920 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2922 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfKeyState */

/* 2926 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2928 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2932 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2934 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInactiveSetCursor */

/* 2938 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2940 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2942 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2944 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2948 */	0x4,		/* 4 */
			0x6,		/* 6 */

	/* Parameter pRectBounds */

/* 2950 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2952 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2954 */	NdrFcShort( 0x1d0 ),	/* Type Offset=464 */

	/* Parameter x */

/* 2956 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2958 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2962 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2964 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwMouseMsg */

/* 2968 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2970 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fSetAlways */

/* 2974 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2976 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2980 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2982 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSite */

/* 2986 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2988 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2990 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2994 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2996 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pUnkSite */

/* 2998 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3000 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3002 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 3004 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3006 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSite */

/* 3010 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3012 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 3014 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3016 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3020 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter riid */

/* 3022 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3024 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3026 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Parameter ppvSite */

/* 3028 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3030 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3032 */	NdrFcShort( 0x3fe ),	/* Type Offset=1022 */

	/* Return value */

/* 3034 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3036 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddError */

/* 3040 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3042 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3044 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3050 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pszPropName */

/* 3052 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3054 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3056 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Parameter pExcepInfo */

/* 3058 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3060 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3062 */	NdrFcShort( 0x42a ),	/* Type Offset=1066 */

	/* Return value */

/* 3064 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3066 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteRead */

/* 3070 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3072 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3074 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3078 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3080 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pszPropName */

/* 3082 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3084 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3086 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Parameter pVar */

/* 3088 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 3090 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3092 */	NdrFcShort( 0x720 ),	/* Type Offset=1824 */

	/* Parameter pErrorLog */

/* 3094 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3096 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3098 */	NdrFcShort( 0x29c ),	/* Type Offset=668 */

	/* Parameter varType */

/* 3100 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3102 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pUnkObj */

/* 3106 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3108 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3110 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 3112 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3114 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Write */

/* 3118 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3120 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 3122 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3128 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pszPropName */

/* 3130 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3132 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3134 */	NdrFcShort( 0x226 ),	/* Type Offset=550 */

	/* Parameter pVar */

/* 3136 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3138 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3140 */	NdrFcShort( 0x732 ),	/* Type Offset=1842 */

	/* Return value */

/* 3142 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3144 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayString */

/* 3148 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3150 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3152 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3158 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dispID */

/* 3160 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3162 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstr */

/* 3166 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 3168 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3170 */	NdrFcShort( 0x740 ),	/* Type Offset=1856 */

	/* Return value */

/* 3172 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3174 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPredefinedStrings */

/* 3178 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3180 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 3182 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3188 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter dispID */

/* 3190 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3192 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCaStringsOut */

/* 3196 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 3198 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3200 */	NdrFcShort( 0x76c ),	/* Type Offset=1900 */

	/* Parameter pCaCookiesOut */

/* 3202 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 3204 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3206 */	NdrFcShort( 0x78e ),	/* Type Offset=1934 */

	/* Return value */

/* 3208 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3210 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPredefinedValue */

/* 3214 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3216 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3218 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3220 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3224 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter dispID */

/* 3226 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3228 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwCookie */

/* 3232 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3234 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVarOut */

/* 3238 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 3240 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3242 */	NdrFcShort( 0x7a6 ),	/* Type Offset=1958 */

	/* Return value */

/* 3244 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3246 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x22 ),	/* Offset= 34 (36) */
/*  4 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  6 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x0 ),	/* 0 */
/* 14 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 16 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 18 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 20 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 22 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x8 ),	/* 8 */
/* 26 */	NdrFcShort( 0x0 ),	/* 0 */
/* 28 */	NdrFcShort( 0x8 ),	/* Offset= 8 (36) */
/* 30 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (4) */
/* 34 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 36 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 42 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 44 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 48 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 50 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (22) */
/* 52 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 54 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 56 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 58 */	
			0x11, 0x10,	/* FC_RP */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 64 */	NdrFcLong( 0xb196b287 ),	/* -1315523961 */
/* 68 */	NdrFcShort( 0xffffbab4 ),	/* -17740 */
/* 70 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 72 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 74 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 76 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 78 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 80 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 82 */	NdrFcShort( 0x8 ),	/* Offset= 8 (90) */
/* 84 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 86 */	NdrFcShort( 0x8 ),	/* 8 */
/* 88 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 90 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 92 */	NdrFcShort( 0x10 ),	/* 16 */
/* 94 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 96 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 98 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (84) */
			0x5b,		/* FC_END */
/* 102 */	
			0x11, 0x10,	/* FC_RP */
/* 104 */	NdrFcShort( 0x2 ),	/* Offset= 2 (106) */
/* 106 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 108 */	NdrFcLong( 0xb196b284 ),	/* -1315523964 */
/* 112 */	NdrFcShort( 0xffffbab4 ),	/* -17740 */
/* 114 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 116 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 118 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 120 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 122 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 124 */	
			0x11, 0x0,	/* FC_RP */
/* 126 */	NdrFcShort( 0x14 ),	/* Offset= 20 (146) */
/* 128 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 130 */	NdrFcLong( 0xb196b286 ),	/* -1315523962 */
/* 134 */	NdrFcShort( 0xffffbab4 ),	/* -17740 */
/* 136 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 138 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 140 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 142 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 144 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 146 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 154 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 156 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 158 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 160 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (128) */
/* 162 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 164 */	
			0x11, 0x10,	/* FC_RP */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 170 */	NdrFcLong( 0xb196b285 ),	/* -1315523963 */
/* 174 */	NdrFcShort( 0xffffbab4 ),	/* -17740 */
/* 176 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 178 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 180 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 182 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 184 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 186 */	
			0x11, 0x0,	/* FC_RP */
/* 188 */	NdrFcShort( 0xffffff9e ),	/* Offset= -98 (90) */
/* 190 */	
			0x11, 0x10,	/* FC_RP */
/* 192 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (128) */
/* 194 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 196 */	NdrFcShort( 0x2 ),	/* Offset= 2 (198) */
/* 198 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 200 */	NdrFcShort( 0xc ),	/* 12 */
/* 202 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 204 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 206 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 208 */	NdrFcShort( 0x1a ),	/* Offset= 26 (234) */
/* 210 */	
			0x13, 0x0,	/* FC_OP */
/* 212 */	NdrFcShort( 0xc ),	/* Offset= 12 (224) */
/* 214 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 216 */	NdrFcShort( 0x2 ),	/* 2 */
/* 218 */	0x9,		/* 9 */
			0x0,		/*  */
/* 220 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 222 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 224 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 226 */	NdrFcShort( 0x8 ),	/* 8 */
/* 228 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (214) */
/* 230 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 232 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 234 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x4 ),	/* 4 */
/* 240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 242 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (210) */
/* 244 */	
			0x12, 0x0,	/* FC_UP */
/* 246 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (224) */
/* 248 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (244) */
/* 258 */	
			0x11, 0x10,	/* FC_RP */
/* 260 */	NdrFcShort( 0x2 ),	/* Offset= 2 (262) */
/* 262 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 264 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 268 */	
			0x11, 0x10,	/* FC_RP */
/* 270 */	NdrFcShort( 0x2 ),	/* Offset= 2 (272) */
/* 272 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 274 */	NdrFcLong( 0x20401 ),	/* 132097 */
/* 278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 284 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 286 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 288 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 290 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 292 */	NdrFcShort( 0x24 ),	/* Offset= 36 (328) */
/* 294 */	
			0x13, 0x0,	/* FC_OP */
/* 296 */	NdrFcShort( 0x2 ),	/* Offset= 2 (298) */
/* 298 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 300 */	NdrFcShort( 0x4 ),	/* 4 */
/* 302 */	NdrFcShort( 0x2 ),	/* 2 */
/* 304 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 308 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32452) */
/* 310 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 314 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32446) */
/* 316 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (315) */
/* 318 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 322 */	NdrFcShort( 0x4 ),	/* 4 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (294) */
/* 328 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 330 */	NdrFcShort( 0x10 ),	/* 16 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* Offset= 0 (334) */
/* 336 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 338 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffeb ),	/* Offset= -21 (318) */
			0x6,		/* FC_SHORT */
/* 342 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 344 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 346 */	
			0x11, 0x0,	/* FC_RP */
/* 348 */	NdrFcShort( 0x18 ),	/* Offset= 24 (372) */
/* 350 */	
			0x12, 0x0,	/* FC_UP */
/* 352 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (298) */
/* 354 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 356 */	NdrFcShort( 0x2 ),	/* 2 */
/* 358 */	NdrFcShort( 0x4 ),	/* 4 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (350) */
/* 364 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 370 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 372 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 374 */	NdrFcShort( 0x1c ),	/* 28 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 378 */	NdrFcShort( 0x0 ),	/* Offset= 0 (378) */
/* 380 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 382 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (354) */
/* 384 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 386 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 388 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 390 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (364) */
/* 392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 394 */	
			0x11, 0x10,	/* FC_RP */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 400 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 412 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 414 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 416 */	
			0x11, 0x0,	/* FC_RP */
/* 418 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (364) */
/* 420 */	
			0x11, 0x0,	/* FC_RP */
/* 422 */	NdrFcShort( 0x2 ),	/* Offset= 2 (424) */
/* 424 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0xa,		/* FC_FLOAT */
			0xa,		/* FC_FLOAT */
/* 430 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 432 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 434 */	NdrFcLong( 0xb196b28c ),	/* -1315523956 */
/* 438 */	NdrFcShort( 0xffffbab4 ),	/* -17740 */
/* 440 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 442 */	0xb6,		/* 182 */
			0x9c,		/* 156 */
/* 444 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 446 */	0x0,		/* 0 */
			0x34,		/* 52 */
/* 448 */	0x1d,		/* 29 */
			0x7,		/* 7 */
/* 450 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 452 */	NdrFcShort( 0x2 ),	/* 2 */
/* 454 */	NdrFcShort( 0x4 ),	/* 4 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0xffffff94 ),	/* Offset= -108 (350) */
/* 460 */	
			0x11, 0x0,	/* FC_RP */
/* 462 */	NdrFcShort( 0x2 ),	/* Offset= 2 (464) */
/* 464 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 466 */	NdrFcShort( 0x10 ),	/* 16 */
/* 468 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 470 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 474 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 476 */	NdrFcShort( 0x2 ),	/* Offset= 2 (478) */
/* 478 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 480 */	NdrFcShort( 0x1c ),	/* 28 */
/* 482 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 484 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 486 */	NdrFcShort( 0x4 ),	/* 4 */
/* 488 */	NdrFcShort( 0x4 ),	/* 4 */
/* 490 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 492 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 494 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 498 */	NdrFcShort( 0x10 ),	/* 16 */
/* 500 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 502 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 504 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 506 */	NdrFcShort( 0x14 ),	/* 20 */
/* 508 */	NdrFcShort( 0x14 ),	/* 20 */
/* 510 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 512 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 514 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 516 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 518 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff65 ),	/* Offset= -155 (364) */
			0x8,		/* FC_LONG */
/* 522 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 524 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 526 */	
			0x11, 0x0,	/* FC_RP */
/* 528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (530) */
/* 530 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 534 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 536 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 538 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 542 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 544 */	NdrFcShort( 0xfffffde4 ),	/* Offset= -540 (4) */
/* 546 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 548 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 550 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 552 */	
			0x11, 0x10,	/* FC_RP */
/* 554 */	NdrFcShort( 0xfffffdda ),	/* Offset= -550 (4) */
/* 556 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 558 */	NdrFcShort( 0x10 ),	/* Offset= 16 (574) */
/* 560 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 564 */	0x18,		/* 24 */
			0x0,		/*  */
/* 566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 570 */	NdrFcShort( 0xfffffe20 ),	/* Offset= -480 (90) */
/* 572 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 574 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 580 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 582 */	NdrFcShort( 0x4 ),	/* 4 */
/* 584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 586 */	0x13, 0x0,	/* FC_OP */
/* 588 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (560) */
/* 590 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 592 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 594 */	
			0x11, 0x0,	/* FC_RP */
/* 596 */	NdrFcShort( 0x2 ),	/* Offset= 2 (598) */
/* 598 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 600 */	NdrFcShort( 0x1 ),	/* 1 */
/* 602 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 604 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 606 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 608 */	
			0x11, 0x0,	/* FC_RP */
/* 610 */	NdrFcShort( 0x2 ),	/* Offset= 2 (612) */
/* 612 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 614 */	NdrFcShort( 0x1 ),	/* 1 */
/* 616 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 620 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 622 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 624 */	NdrFcLong( 0xc ),	/* 12 */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (644) */
/* 644 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 648 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 650 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 652 */	NdrFcLong( 0x55272a00 ),	/* 1428630016 */
/* 656 */	NdrFcShort( 0x42cb ),	/* 17099 */
/* 658 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 660 */	0x81,		/* 129 */
			0x35,		/* 53 */
/* 662 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 664 */	0x0,		/* 0 */
			0x4b,		/* 75 */
/* 666 */	0xb8,		/* 184 */
			0x51,		/* 81 */
/* 668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 670 */	NdrFcLong( 0x3127ca40 ),	/* 824691264 */
/* 674 */	NdrFcShort( 0x446e ),	/* 17518 */
/* 676 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 678 */	0x81,		/* 129 */
			0x35,		/* 53 */
/* 680 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 682 */	0x0,		/* 0 */
			0x4b,		/* 75 */
/* 684 */	0xb8,		/* 184 */
			0x51,		/* 81 */
/* 686 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 688 */	NdrFcShort( 0x2 ),	/* 2 */
/* 690 */	NdrFcShort( 0x4 ),	/* 4 */
/* 692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0xfffffea8 ),	/* Offset= -344 (350) */
/* 696 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 698 */	NdrFcShort( 0x2 ),	/* 2 */
/* 700 */	NdrFcShort( 0x4 ),	/* 4 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0xfffffe9e ),	/* Offset= -354 (350) */
/* 706 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 708 */	NdrFcShort( 0x2 ),	/* Offset= 2 (710) */
/* 710 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0xfffffe04 ),	/* Offset= -508 (210) */
/* 720 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0xfffffe1c ),	/* Offset= -484 (244) */
/* 730 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 732 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 736 */	NdrFcShort( 0x2 ),	/* Offset= 2 (738) */
/* 738 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 740 */	NdrFcShort( 0x3 ),	/* 3 */
/* 742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 746 */	NdrFcShort( 0xfffffe3c ),	/* Offset= -452 (294) */
/* 748 */	
			0x11, 0x10,	/* FC_RP */
/* 750 */	NdrFcShort( 0x2 ),	/* Offset= 2 (752) */
/* 752 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 754 */	NdrFcLong( 0xbef6e002 ),	/* -1091117054 */
/* 758 */	NdrFcShort( 0xffffa874 ),	/* -22412 */
/* 760 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 762 */	0x8b,		/* 139 */
			0xba,		/* 186 */
/* 764 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 766 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 768 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 770 */	
			0x11, 0x0,	/* FC_RP */
/* 772 */	NdrFcShort( 0x2 ),	/* Offset= 2 (774) */
/* 774 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 776 */	NdrFcShort( 0x3c ),	/* 60 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x0 ),	/* Offset= 0 (780) */
/* 782 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 784 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 786 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 788 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 790 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 792 */	0x8,		/* FC_LONG */
			0x5,		/* FC_WCHAR */
/* 794 */	0x5,		/* FC_WCHAR */
			0x5,		/* FC_WCHAR */
/* 796 */	0x5,		/* FC_WCHAR */
			0x2,		/* FC_CHAR */
/* 798 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 800 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 802 */	0x3f,		/* FC_STRUCTPAD3 */
			0x5b,		/* FC_END */
/* 804 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 806 */	NdrFcShort( 0x3 ),	/* 3 */
/* 808 */	NdrFcShort( 0x4 ),	/* 4 */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0xfffffe32 ),	/* Offset= -462 (350) */
/* 814 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0xfffffe28 ),	/* Offset= -472 (350) */
/* 824 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 826 */	NdrFcShort( 0x4 ),	/* 4 */
/* 828 */	NdrFcShort( 0x4 ),	/* 4 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0xfffffe1e ),	/* Offset= -482 (350) */
/* 834 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	NdrFcShort( 0xfffffe14 ),	/* Offset= -492 (350) */
/* 844 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 846 */	NdrFcShort( 0x2 ),	/* Offset= 2 (848) */
/* 848 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 850 */	NdrFcShort( 0x4 ),	/* 4 */
/* 852 */	NdrFcShort( 0x4 ),	/* 4 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0xfffffdce ),	/* Offset= -562 (294) */
/* 858 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0xfffffdfc ),	/* Offset= -516 (350) */
/* 868 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 870 */	NdrFcShort( 0x2 ),	/* Offset= 2 (872) */
/* 872 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 874 */	NdrFcShort( 0x4 ),	/* 4 */
/* 876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 880 */	NdrFcShort( 0xfffffdb6 ),	/* Offset= -586 (294) */
/* 882 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 884 */	NdrFcLong( 0xd001f200 ),	/* -805178880 */
/* 888 */	NdrFcShort( 0xffffef97 ),	/* -4201 */
/* 890 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 892 */	0x9b,		/* 155 */
			0xc9,		/* 201 */
/* 894 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 896 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 898 */	0x8e,		/* 142 */
			0x1,		/* 1 */
/* 900 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 902 */	NdrFcShort( 0x2 ),	/* Offset= 2 (904) */
/* 904 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 912 */	NdrFcShort( 0xfffffd42 ),	/* Offset= -702 (210) */
/* 914 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 916 */	NdrFcLong( 0xa1faf330 ),	/* -1577389264 */
/* 920 */	NdrFcShort( 0xffffef97 ),	/* -4201 */
/* 922 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 924 */	0x9b,		/* 155 */
			0xc9,		/* 201 */
/* 926 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 928 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 930 */	0x8e,		/* 142 */
			0x1,		/* 1 */
/* 932 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 934 */	NdrFcLong( 0x894ad3b0 ),	/* -1991584848 */
/* 938 */	NdrFcShort( 0xffffef97 ),	/* -4201 */
/* 940 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 942 */	0x9b,		/* 155 */
			0xc9,		/* 201 */
/* 944 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 946 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 948 */	0x8e,		/* 142 */
			0x1,		/* 1 */
/* 950 */	
			0x11, 0x0,	/* FC_RP */
/* 952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (954) */
/* 954 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 960 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 962 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 964 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 966 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 968 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (932) */
/* 970 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 972 */	
			0x11, 0x10,	/* FC_RP */
/* 974 */	NdrFcShort( 0x2 ),	/* Offset= 2 (976) */
/* 976 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 978 */	NdrFcLong( 0xb3e7c340 ),	/* -1276656832 */
/* 982 */	NdrFcShort( 0xffffef97 ),	/* -4201 */
/* 984 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 986 */	0x9b,		/* 155 */
			0xc9,		/* 201 */
/* 988 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 990 */	0x0,		/* 0 */
			0x60,		/* 96 */
/* 992 */	0x8e,		/* 142 */
			0x1,		/* 1 */
/* 994 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 996 */	NdrFcShort( 0x2 ),	/* Offset= 2 (998) */
/* 998 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0xfffffce4 ),	/* Offset= -796 (210) */
/* 1008 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1010 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1012) */
/* 1012 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0xfffffcd6 ),	/* Offset= -810 (210) */
/* 1022 */	
			0x11, 0x10,	/* FC_RP */
/* 1024 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1026) */
/* 1026 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 1028 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1030 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1032 */	
			0x11, 0x0,	/* FC_RP */
/* 1034 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1066) */
/* 1036 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0xfffffce0 ),	/* Offset= -800 (244) */
/* 1046 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0xfffffcd6 ),	/* Offset= -810 (244) */
/* 1056 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0xfffffccc ),	/* Offset= -820 (244) */
/* 1066 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1068 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1072 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1072) */
/* 1074 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1076 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1078 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (1036) */
/* 1080 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1082 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (1046) */
/* 1084 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1086 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (1056) */
/* 1088 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1090 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1092 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1094 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1096 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (1824) */
/* 1098 */	
			0x13, 0x0,	/* FC_OP */
/* 1100 */	NdrFcShort( 0x2c2 ),	/* Offset= 706 (1806) */
/* 1102 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 1104 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1106 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 1108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1110) */
/* 1110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1112 */	NdrFcShort( 0x29 ),	/* 41 */
/* 1114 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1118 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31642) */
/* 1120 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1124 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-31642) */
/* 1126 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1130 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31632) */
/* 1132 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1136 */	NdrFcShort( 0xffff800a ),	/* Offset= -32758 (-31622) */
/* 1138 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1142 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31614) */
/* 1144 */	NdrFcLong( 0xb ),	/* 11 */
/* 1148 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31614) */
/* 1150 */	NdrFcLong( 0xa ),	/* 10 */
/* 1154 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31606) */
/* 1156 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1160 */	NdrFcShort( 0xfffffdfc ),	/* Offset= -516 (644) */
/* 1162 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1166 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31590) */
/* 1168 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1172 */	NdrFcShort( 0xfffffc3e ),	/* Offset= -962 (210) */
/* 1174 */	NdrFcLong( 0xd ),	/* 13 */
/* 1178 */	NdrFcShort( 0xfffffb6a ),	/* Offset= -1174 (4) */
/* 1180 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1184 */	NdrFcShort( 0xfffffcee ),	/* Offset= -786 (398) */
/* 1186 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 1190 */	NdrFcShort( 0xac ),	/* Offset= 172 (1362) */
/* 1192 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 1196 */	NdrFcShort( 0x222 ),	/* Offset= 546 (1742) */
/* 1198 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 1202 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1746) */
/* 1204 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 1208 */	NdrFcShort( 0x21e ),	/* Offset= 542 (1750) */
/* 1210 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 1214 */	NdrFcShort( 0x21c ),	/* Offset= 540 (1754) */
/* 1216 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 1220 */	NdrFcShort( 0x21a ),	/* Offset= 538 (1758) */
/* 1222 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 1226 */	NdrFcShort( 0x208 ),	/* Offset= 520 (1746) */
/* 1228 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 1232 */	NdrFcShort( 0x206 ),	/* Offset= 518 (1750) */
/* 1234 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 1238 */	NdrFcShort( 0x20c ),	/* Offset= 524 (1762) */
/* 1240 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 1244 */	NdrFcShort( 0x202 ),	/* Offset= 514 (1758) */
/* 1246 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 1250 */	NdrFcShort( 0x204 ),	/* Offset= 516 (1766) */
/* 1252 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 1256 */	NdrFcShort( 0x202 ),	/* Offset= 514 (1770) */
/* 1258 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 1262 */	NdrFcShort( 0x200 ),	/* Offset= 512 (1774) */
/* 1264 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 1268 */	NdrFcShort( 0x1fe ),	/* Offset= 510 (1778) */
/* 1270 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 1274 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1782) */
/* 1276 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1280 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-31486) */
/* 1282 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1286 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31476) */
/* 1288 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1292 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31468) */
/* 1294 */	NdrFcLong( 0x16 ),	/* 22 */
/* 1298 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31462) */
/* 1300 */	NdrFcLong( 0x17 ),	/* 23 */
/* 1304 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31456) */
/* 1306 */	NdrFcLong( 0xe ),	/* 14 */
/* 1310 */	NdrFcShort( 0x1e0 ),	/* Offset= 480 (1790) */
/* 1312 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 1316 */	NdrFcShort( 0x1e6 ),	/* Offset= 486 (1802) */
/* 1318 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 1322 */	NdrFcShort( 0x1a4 ),	/* Offset= 420 (1742) */
/* 1324 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 1328 */	NdrFcShort( 0x1a2 ),	/* Offset= 418 (1746) */
/* 1330 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 1334 */	NdrFcShort( 0x1a0 ),	/* Offset= 416 (1750) */
/* 1336 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 1340 */	NdrFcShort( 0x19a ),	/* Offset= 410 (1750) */
/* 1342 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 1346 */	NdrFcShort( 0x194 ),	/* Offset= 404 (1750) */
/* 1348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1352) */
/* 1354 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1358 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1358) */
/* 1360 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1359) */
/* 1362 */	
			0x13, 0x0,	/* FC_OP */
/* 1364 */	NdrFcShort( 0x168 ),	/* Offset= 360 (1724) */
/* 1366 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1372 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1376 */	NdrFcShort( 0x4c ),	/* Offset= 76 (1452) */
/* 1378 */	NdrFcLong( 0xd ),	/* 13 */
/* 1382 */	NdrFcShort( 0x6c ),	/* Offset= 108 (1490) */
/* 1384 */	NdrFcLong( 0x9 ),	/* 9 */
/* 1388 */	NdrFcShort( 0x88 ),	/* Offset= 136 (1524) */
/* 1390 */	NdrFcLong( 0xc ),	/* 12 */
/* 1394 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (1570) */
/* 1396 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1400 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (1600) */
/* 1402 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1406 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (1630) */
/* 1408 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1412 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (1660) */
/* 1414 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1418 */	NdrFcShort( 0x110 ),	/* Offset= 272 (1690) */
/* 1420 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1420) */
/* 1422 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1424 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1426 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1432 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1434 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	0x13, 0x0,	/* FC_OP */
/* 1446 */	NdrFcShort( 0xfffffb3a ),	/* Offset= -1222 (224) */
/* 1448 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1450 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1452 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1454 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1456 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1458 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1460 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1462 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1464 */	0x11, 0x0,	/* FC_RP */
/* 1466 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (1422) */
/* 1468 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1470 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1472 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1476 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1484 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1486 */	NdrFcShort( 0xfffffa36 ),	/* Offset= -1482 (4) */
/* 1488 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1502) */
/* 1498 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1500 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1502 */	
			0x11, 0x0,	/* FC_RP */
/* 1504 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1472) */
/* 1506 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1510 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1518 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1520 */	NdrFcShort( 0xfffffb9e ),	/* Offset= -1122 (398) */
/* 1522 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1524 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1536) */
/* 1532 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1534 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1536 */	
			0x11, 0x0,	/* FC_RP */
/* 1538 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1506) */
/* 1540 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1542 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1544 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1550 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1556 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1562 */	0x13, 0x0,	/* FC_OP */
/* 1564 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (1806) */
/* 1566 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1570 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1576 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1580 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1582 */	0x11, 0x0,	/* FC_RP */
/* 1584 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (1540) */
/* 1586 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1588 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1590 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1594 */	0x19,		/* 25 */
			0x0,		/*  */
/* 1596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1598 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1600 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1606 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1612 */	0x13, 0x0,	/* FC_OP */
/* 1614 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1590) */
/* 1616 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1618 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1620 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1622 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1624 */	0x19,		/* 25 */
			0x0,		/*  */
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1630 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1634 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1636 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1638 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1640 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1642 */	0x13, 0x0,	/* FC_OP */
/* 1644 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1620) */
/* 1646 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1648 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1650 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1652 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1654 */	0x19,		/* 25 */
			0x0,		/*  */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1660 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1666 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1668 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1670 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1672 */	0x13, 0x0,	/* FC_OP */
/* 1674 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1650) */
/* 1676 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1678 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1680 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1684 */	0x19,		/* 25 */
			0x0,		/*  */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1690 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1694 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1696 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1698 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1700 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1702 */	0x13, 0x0,	/* FC_OP */
/* 1704 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1680) */
/* 1706 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1708 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1710 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1714 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1716 */	NdrFcShort( 0xffffffe8 ),	/* -24 */
/* 1718 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1720 */	NdrFcShort( 0xfffffab4 ),	/* Offset= -1356 (364) */
/* 1722 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1724 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1726 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1728 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (1710) */
/* 1730 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1730) */
/* 1732 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1734 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1736 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1738 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe8b ),	/* Offset= -373 (1366) */
			0x5b,		/* FC_END */
/* 1742 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1744 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1746 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1748 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1750 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1752 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1754 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1756 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1758 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1760 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1762 */	
			0x13, 0x0,	/* FC_OP */
/* 1764 */	NdrFcShort( 0xfffffba0 ),	/* Offset= -1120 (644) */
/* 1766 */	
			0x13, 0x10,	/* FC_OP */
/* 1768 */	NdrFcShort( 0xfffff9ea ),	/* Offset= -1558 (210) */
/* 1770 */	
			0x13, 0x10,	/* FC_OP */
/* 1772 */	NdrFcShort( 0xfffff918 ),	/* Offset= -1768 (4) */
/* 1774 */	
			0x13, 0x10,	/* FC_OP */
/* 1776 */	NdrFcShort( 0xfffffa9e ),	/* Offset= -1378 (398) */
/* 1778 */	
			0x13, 0x10,	/* FC_OP */
/* 1780 */	NdrFcShort( 0xfffffe5e ),	/* Offset= -418 (1362) */
/* 1782 */	
			0x13, 0x10,	/* FC_OP */
/* 1784 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1786) */
/* 1786 */	
			0x13, 0x0,	/* FC_OP */
/* 1788 */	NdrFcShort( 0xfffff904 ),	/* Offset= -1788 (0) */
/* 1790 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1792 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1794 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 1796 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 1800 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1802 */	
			0x13, 0x0,	/* FC_OP */
/* 1804 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (1790) */
/* 1806 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1808 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1812) */
/* 1814 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1816 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1818 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1820 */	NdrFcShort( 0xfffffd32 ),	/* Offset= -718 (1102) */
/* 1822 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1824 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1826 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1828 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0xfffffd22 ),	/* Offset= -734 (1098) */
/* 1834 */	
			0x11, 0x0,	/* FC_RP */
/* 1836 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1842) */
/* 1838 */	
			0x12, 0x0,	/* FC_UP */
/* 1840 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (1806) */
/* 1842 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1844 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1838) */
/* 1852 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1854 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1856) */
/* 1856 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0xfffff98a ),	/* Offset= -1654 (210) */
/* 1866 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1868 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1900) */
/* 1870 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1874 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1880 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1882 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1892 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1894 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1896 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1898 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1900 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1904 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1906 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1908 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1910 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1912 */	0x13, 0x0,	/* FC_OP */
/* 1914 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (1870) */
/* 1916 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1918 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1920 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1922 */	NdrFcShort( 0xc ),	/* Offset= 12 (1934) */
/* 1924 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1926 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1928 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1934 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1938 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1940 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1942 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1944 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1946 */	0x13, 0x0,	/* FC_OP */
/* 1948 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1924) */
/* 1950 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1952 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1954 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1956 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1958) */
/* 1958 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1960 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1962 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1966 */	NdrFcShort( 0xfffffc9c ),	/* Offset= -868 (1098) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _ocidl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IPropertyBagProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleUndoManagerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISimpleFrameSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyNotifySinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFontProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFontDispProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleParentUndoUnitProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumOleUndoUnitsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IErrorLogProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistPropertyBagProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyPage2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPictureProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistStreamInitProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleInPlaceSiteExProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPictureDispProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProvideClassInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IConnectionPointContainerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumConnectionPointsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IConnectionPointProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumConnectionsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleControlSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISpecifyPropertyPagesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyPageSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyPageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IClassFactory2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAdviseSinkExProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPointerInactiveProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IObjectWithSiteProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPerPropertyBrowsingProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOleUndoUnitProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProvideClassInfo2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistMemoryProxyVtbl,
    0
};

const CInterfaceStubVtbl * _ocidl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IPropertyBagStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleUndoManagerStubVtbl,
    ( CInterfaceStubVtbl *) &_ISimpleFrameSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyNotifySinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IFontStubVtbl,
    ( CInterfaceStubVtbl *) &_IFontDispStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleParentUndoUnitStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumOleUndoUnitsStubVtbl,
    ( CInterfaceStubVtbl *) &_IErrorLogStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistPropertyBagStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyPage2StubVtbl,
    ( CInterfaceStubVtbl *) &_IPictureStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistStreamInitStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleInPlaceSiteExStubVtbl,
    ( CInterfaceStubVtbl *) &_IPictureDispStubVtbl,
    ( CInterfaceStubVtbl *) &_IProvideClassInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IConnectionPointContainerStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumConnectionPointsStubVtbl,
    ( CInterfaceStubVtbl *) &_IConnectionPointStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumConnectionsStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleControlStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleControlSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_ISpecifyPropertyPagesStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyPageSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyPageStubVtbl,
    ( CInterfaceStubVtbl *) &_IClassFactory2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAdviseSinkExStubVtbl,
    ( CInterfaceStubVtbl *) &_IPointerInactiveStubVtbl,
    ( CInterfaceStubVtbl *) &_IObjectWithSiteStubVtbl,
    ( CInterfaceStubVtbl *) &_IPerPropertyBrowsingStubVtbl,
    ( CInterfaceStubVtbl *) &_IOleUndoUnitStubVtbl,
    ( CInterfaceStubVtbl *) &_IProvideClassInfo2StubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistMemoryStubVtbl,
    0
};

PCInterfaceName const _ocidl_InterfaceNamesList[] = 
{
    "IPropertyBag",
    "IOleUndoManager",
    "ISimpleFrameSite",
    "IPropertyNotifySink",
    "IFont",
    "IFontDisp",
    "IOleParentUndoUnit",
    "IEnumOleUndoUnits",
    "IErrorLog",
    "IPersistPropertyBag",
    "IPropertyPage2",
    "IPicture",
    "IPersistStreamInit",
    "IOleInPlaceSiteEx",
    "IPictureDisp",
    "IProvideClassInfo",
    "IConnectionPointContainer",
    "IEnumConnectionPoints",
    "IConnectionPoint",
    "IEnumConnections",
    "IOleControl",
    "IOleControlSite",
    "ISpecifyPropertyPages",
    "IPropertyPageSite",
    "IPropertyPage",
    "IClassFactory2",
    "IAdviseSinkEx",
    "IPointerInactive",
    "IObjectWithSite",
    "IPerPropertyBrowsing",
    "IOleUndoUnit",
    "IProvideClassInfo2",
    "IPersistMemory",
    0
};

const IID *  _ocidl_BaseIIDList[] = 
{
    0,
    0,
    0,
    0,
    0,
    &IID_IDispatch,
    0,
    0,
    0,
    &IID_IPersist,
    0,
    0,
    &IID_IPersist,
    &IID_IOleInPlaceSite,
    &IID_IDispatch,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IClassFactory,
    &IID_IAdviseSink,
    0,
    0,
    0,
    0,
    0,
    &IID_IPersist,
    0
};


#define _ocidl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ocidl, pIID, n)

int __stdcall _ocidl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ocidl, 33, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _ocidl, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ocidl, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ocidl, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ocidl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ocidl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ocidl, 33, *pIndex )
    
}

const ExtendedProxyFileInfo ocidl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ocidl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ocidl_StubVtblList,
    (const PCInterfaceName * ) & _ocidl_InterfaceNamesList,
    (const IID ** ) & _ocidl_BaseIIDList,
    & _ocidl_IID_Lookup, 
    33,
    2
};
