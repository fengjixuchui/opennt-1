/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:02:56 2019
 */
/* Compiler settings for objidl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "objidl.h"

#define TYPE_FORMAT_STRING_SIZE   2737                              
#define PROC_FORMAT_STRING_SIZE   3993                              

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


/* Object interface: IMarshal, ver. 0.0,
   GUID={0x00000003,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMalloc, ver. 0.0,
   GUID={0x00000002,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMallocSpy, ver. 0.0,
   GUID={0x0000001d,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IStdMarshalInfo, ver. 0.0,
   GUID={0x00000018,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IExternalConnection, ver. 0.0,
   GUID={0x00000019,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMultiQI, ver. 0.0,
   GUID={0x00000020,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IEnumUnknown, ver. 0.0,
   GUID={0x00000100,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumUnknown_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumUnknown_RemoteNext_Proxy( 
    IEnumUnknown __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumUnknown_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumUnknown __RPC_FAR *This;
        ULONG celt;
        IUnknown __RPC_FAR *__RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumUnknown __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        IUnknown __RPC_FAR *__RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumUnknown_Next_Stub(
                                 (IEnumUnknown *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgelt,
                                 pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumUnknown_FormatStringOffsetTable[] = 
    {
    0,
    36,
    60,
    78
    };

static const STUB_THUNK IEnumUnknown_StubThunkTable[] = 
    {
    IEnumUnknown_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumUnknown_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumUnknown_FormatStringOffsetTable[-3],
    &IEnumUnknown_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumUnknown_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumUnknown_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumUnknownProxyVtbl = 
{
    &IEnumUnknown_ProxyInfo,
    &IID_IEnumUnknown,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumUnknown_Next_Proxy ,
    (void *)-1 /* IEnumUnknown::Skip */ ,
    (void *)-1 /* IEnumUnknown::Reset */ ,
    (void *)-1 /* IEnumUnknown::Clone */
};

const CInterfaceStubVtbl _IEnumUnknownStubVtbl =
{
    &IID_IEnumUnknown,
    &IEnumUnknown_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IBindCtx, ver. 0.0,
   GUID={0x0000000e,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IBindCtx_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IBindCtx_RemoteSetBindOptions_Proxy( 
    IBindCtx __RPC_FAR * This,
    /* [in] */ BIND_OPTS2 __RPC_FAR *pbindopts)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pbindopts);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[150],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[150],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pbindopts);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[150],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IBindCtx_RemoteSetBindOptions_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBindCtx __RPC_FAR *This;
        BIND_OPTS2 __RPC_FAR *pbindopts;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBindCtx __RPC_FAR *This;
        char Pad0[4];
        BIND_OPTS2 __RPC_FAR *pbindopts;
        char Pad1[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IBindCtx_SetBindOptions_Stub((IBindCtx *) pParamStruct->This,pParamStruct->pbindopts);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IBindCtx_RemoteGetBindOptions_Proxy( 
    IBindCtx __RPC_FAR * This,
    /* [out][in] */ BIND_OPTS2 __RPC_FAR *pbindopts)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pbindopts);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pbindopts);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[174],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IBindCtx_RemoteGetBindOptions_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBindCtx __RPC_FAR *This;
        BIND_OPTS2 __RPC_FAR *pbindopts;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IBindCtx __RPC_FAR *This;
        char Pad0[4];
        BIND_OPTS2 __RPC_FAR *pbindopts;
        char Pad1[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IBindCtx_GetBindOptions_Stub((IBindCtx *) pParamStruct->This,pParamStruct->pbindopts);
    
}

static const unsigned short IBindCtx_FormatStringOffsetTable[] = 
    {
    102,
    126,
    60,
    150,
    174,
    198,
    222,
    252,
    282,
    306
    };

static const STUB_THUNK IBindCtx_StubThunkTable[] = 
    {
    0,
    0,
    0,
    IBindCtx_RemoteSetBindOptions_Thunk,
    IBindCtx_RemoteGetBindOptions_Thunk,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IBindCtx_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IBindCtx_FormatStringOffsetTable[-3],
    &IBindCtx_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IBindCtx_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IBindCtx_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(13) _IBindCtxProxyVtbl = 
{
    &IBindCtx_ProxyInfo,
    &IID_IBindCtx,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IBindCtx::RegisterObjectBound */ ,
    (void *)-1 /* IBindCtx::RevokeObjectBound */ ,
    (void *)-1 /* IBindCtx::ReleaseBoundObjects */ ,
    IBindCtx_SetBindOptions_Proxy ,
    IBindCtx_GetBindOptions_Proxy ,
    (void *)-1 /* IBindCtx::GetRunningObjectTable */ ,
    (void *)-1 /* IBindCtx::RegisterObjectParam */ ,
    (void *)-1 /* IBindCtx::GetObjectParam */ ,
    (void *)-1 /* IBindCtx::EnumObjectParam */ ,
    (void *)-1 /* IBindCtx::RevokeObjectParam */
};

const CInterfaceStubVtbl _IBindCtxStubVtbl =
{
    &IID_IBindCtx,
    &IBindCtx_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumMoniker, ver. 0.0,
   GUID={0x00000102,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumMoniker_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumMoniker_RemoteNext_Proxy( 
    IEnumMoniker __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ IMoniker __RPC_FAR *__RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[330],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[330],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[330],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumMoniker_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumMoniker __RPC_FAR *This;
        ULONG celt;
        IMoniker __RPC_FAR *__RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumMoniker __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        IMoniker __RPC_FAR *__RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumMoniker_Next_Stub(
                                 (IEnumMoniker *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgelt,
                                 pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumMoniker_FormatStringOffsetTable[] = 
    {
    330,
    36,
    60,
    366
    };

static const STUB_THUNK IEnumMoniker_StubThunkTable[] = 
    {
    IEnumMoniker_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumMoniker_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumMoniker_FormatStringOffsetTable[-3],
    &IEnumMoniker_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumMoniker_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumMoniker_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumMonikerProxyVtbl = 
{
    &IEnumMoniker_ProxyInfo,
    &IID_IEnumMoniker,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumMoniker_Next_Proxy ,
    (void *)-1 /* IEnumMoniker::Skip */ ,
    (void *)-1 /* IEnumMoniker::Reset */ ,
    (void *)-1 /* IEnumMoniker::Clone */
};

const CInterfaceStubVtbl _IEnumMonikerStubVtbl =
{
    &IID_IEnumMoniker,
    &IEnumMoniker_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRunnableObject, ver. 0.0,
   GUID={0x00000126,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRunnableObject_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IRunnableObject_RemoteIsRunning_Proxy( 
    IRunnableObject __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[60],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IRunnableObject_RemoteIsRunning_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IRunnableObject __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IRunnableObject __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IRunnableObject_IsRunning_Stub((IRunnableObject *) pParamStruct->This);
    
}

static const unsigned short IRunnableObject_FormatStringOffsetTable[] = 
    {
    390,
    414,
    60,
    438,
    468
    };

static const STUB_THUNK IRunnableObject_StubThunkTable[] = 
    {
    0,
    0,
    IRunnableObject_RemoteIsRunning_Thunk,
    0,
    0
    };

static const MIDL_SERVER_INFO IRunnableObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IRunnableObject_FormatStringOffsetTable[-3],
    &IRunnableObject_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRunnableObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IRunnableObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IRunnableObjectProxyVtbl = 
{
    &IRunnableObject_ProxyInfo,
    &IID_IRunnableObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IRunnableObject::GetRunningClass */ ,
    (void *)-1 /* IRunnableObject::Run */ ,
    IRunnableObject_IsRunning_Proxy ,
    (void *)-1 /* IRunnableObject::LockRunning */ ,
    (void *)-1 /* IRunnableObject::SetContainedObject */
};

const CInterfaceStubVtbl _IRunnableObjectStubVtbl =
{
    &IID_IRunnableObject,
    &IRunnableObject_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRunningObjectTable, ver. 0.0,
   GUID={0x00000010,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRunningObjectTable_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IRunningObjectTable_FormatStringOffsetTable[] = 
    {
    492,
    36,
    534,
    558,
    588,
    618,
    648
    };

static const MIDL_SERVER_INFO IRunningObjectTable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IRunningObjectTable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRunningObjectTable_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IRunningObjectTable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IRunningObjectTableProxyVtbl = 
{
    &IRunningObjectTable_ProxyInfo,
    &IID_IRunningObjectTable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IRunningObjectTable::Register */ ,
    (void *)-1 /* IRunningObjectTable::Revoke */ ,
    (void *)-1 /* IRunningObjectTable::IsRunning */ ,
    (void *)-1 /* IRunningObjectTable::GetObject */ ,
    (void *)-1 /* IRunningObjectTable::NoteChangeTime */ ,
    (void *)-1 /* IRunningObjectTable::GetTimeOfLastChange */ ,
    (void *)-1 /* IRunningObjectTable::EnumRunning */
};

const CInterfaceStubVtbl _IRunningObjectTableStubVtbl =
{
    &IID_IRunningObjectTable,
    &IRunningObjectTable_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPersist, ver. 0.0,
   GUID={0x0000010c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersist_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersist_FormatStringOffsetTable[] = 
    {
    390
    };

static const MIDL_SERVER_INFO IPersist_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersist_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersist_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersist_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IPersistProxyVtbl = 
{
    &IPersist_ProxyInfo,
    &IID_IPersist,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPersist::GetClassID */
};

const CInterfaceStubVtbl _IPersistStubVtbl =
{
    &IID_IPersist,
    &IPersist_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPersistStream, ver. 0.0,
   GUID={0x00000109,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistStream_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersistStream_FormatStringOffsetTable[] = 
    {
    390,
    672,
    690,
    714,
    744
    };

static const MIDL_SERVER_INFO IPersistStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistStream_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistStream_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IPersistStreamProxyVtbl = 
{
    &IPersistStream_ProxyInfo,
    &IID_IPersistStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistStream::IsDirty */ ,
    (void *)-1 /* IPersistStream::Load */ ,
    (void *)-1 /* IPersistStream::Save */ ,
    (void *)-1 /* IPersistStream::GetSizeMax */
};

const CInterfaceStubVtbl _IPersistStreamStubVtbl =
{
    &IID_IPersistStream,
    &IPersistStream_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IMoniker, ver. 0.0,
   GUID={0x0000000f,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IMoniker_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToObject_Proxy( 
    IMoniker __RPC_FAR * This,
    /* [unique][in] */ IBindCtx __RPC_FAR *pbc,
    /* [unique][in] */ IMoniker __RPC_FAR *pmkToLeft,
    /* [in] */ REFIID riidResult,
    /* [iid_is][out] */ IUnknown __RPC_FAR *__RPC_FAR *ppvResult)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppvResult);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[768],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[768],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pbc,
                  ( unsigned char __RPC_FAR * )&pmkToLeft,
                  ( unsigned char __RPC_FAR * )&riidResult,
                  ( unsigned char __RPC_FAR * )&ppvResult);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[768],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IMoniker_RemoteBindToObject_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IMoniker __RPC_FAR *This;
        IBindCtx __RPC_FAR *pbc;
        IMoniker __RPC_FAR *pmkToLeft;
        REFIID riidResult;
        IUnknown __RPC_FAR *__RPC_FAR *ppvResult;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IMoniker __RPC_FAR *This;
        char Pad0[4];
        IBindCtx __RPC_FAR *pbc;
        char Pad1[4];
        IMoniker __RPC_FAR *pmkToLeft;
        char Pad2[4];
        REFIID riidResult;
        char Pad3[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvResult;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IMoniker_BindToObject_Stub(
                                     (IMoniker *) pParamStruct->This,
                                     pParamStruct->pbc,
                                     pParamStruct->pmkToLeft,
                                     pParamStruct->riidResult,
                                     pParamStruct->ppvResult);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IMoniker_RemoteBindToStorage_Proxy( 
    IMoniker __RPC_FAR * This,
    /* [unique][in] */ IBindCtx __RPC_FAR *pbc,
    /* [unique][in] */ IMoniker __RPC_FAR *pmkToLeft,
    /* [in] */ REFIID riid,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[810],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[810],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pbc,
                  ( unsigned char __RPC_FAR * )&pmkToLeft,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&ppvObj);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[810],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IMoniker_RemoteBindToStorage_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IMoniker __RPC_FAR *This;
        IBindCtx __RPC_FAR *pbc;
        IMoniker __RPC_FAR *pmkToLeft;
        REFIID riid;
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IMoniker __RPC_FAR *This;
        char Pad0[4];
        IBindCtx __RPC_FAR *pbc;
        char Pad1[4];
        IMoniker __RPC_FAR *pmkToLeft;
        char Pad2[4];
        REFIID riid;
        char Pad3[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IMoniker_BindToStorage_Stub(
                                      (IMoniker *) pParamStruct->This,
                                      pParamStruct->pbc,
                                      pParamStruct->pmkToLeft,
                                      pParamStruct->riid,
                                      pParamStruct->ppvObj);
    
}

static const unsigned short IMoniker_FormatStringOffsetTable[] = 
    {
    390,
    672,
    690,
    714,
    744,
    768,
    810,
    852,
    894,
    930,
    960,
    984,
    1008,
    1044,
    1080,
    1104,
    1134,
    1164,
    1200,
    1248
    };

static const STUB_THUNK IMoniker_StubThunkTable[] = 
    {
    0,
    0,
    0,
    0,
    0,
    IMoniker_RemoteBindToObject_Thunk,
    IMoniker_RemoteBindToStorage_Thunk,
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
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IMoniker_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IMoniker_FormatStringOffsetTable[-3],
    &IMoniker_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IMoniker_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IMoniker_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(23) _IMonikerProxyVtbl = 
{
    &IMoniker_ProxyInfo,
    &IID_IMoniker,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistStream::IsDirty */ ,
    (void *)-1 /* IPersistStream::Load */ ,
    (void *)-1 /* IPersistStream::Save */ ,
    (void *)-1 /* IPersistStream::GetSizeMax */ ,
    IMoniker_BindToObject_Proxy ,
    IMoniker_BindToStorage_Proxy ,
    (void *)-1 /* IMoniker::Reduce */ ,
    (void *)-1 /* IMoniker::ComposeWith */ ,
    (void *)-1 /* IMoniker::Enum */ ,
    (void *)-1 /* IMoniker::IsEqual */ ,
    (void *)-1 /* IMoniker::Hash */ ,
    (void *)-1 /* IMoniker::IsRunning */ ,
    (void *)-1 /* IMoniker::GetTimeOfLastChange */ ,
    (void *)-1 /* IMoniker::Inverse */ ,
    (void *)-1 /* IMoniker::CommonPrefixWith */ ,
    (void *)-1 /* IMoniker::RelativePathTo */ ,
    (void *)-1 /* IMoniker::GetDisplayName */ ,
    (void *)-1 /* IMoniker::ParseDisplayName */ ,
    (void *)-1 /* IMoniker::IsSystemMoniker */
};

const CInterfaceStubVtbl _IMonikerStubVtbl =
{
    &IID_IMoniker,
    &IMoniker_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IROTData, ver. 0.0,
   GUID={0xf29f6bc0,0x5021,0x11ce,{0xaa,0x15,0x00,0x00,0x69,0x01,0x29,0x3f}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IROTData_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IROTData_FormatStringOffsetTable[] = 
    {
    1272
    };

static const MIDL_SERVER_INFO IROTData_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IROTData_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IROTData_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IROTData_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IROTDataProxyVtbl = 
{
    &IROTData_ProxyInfo,
    &IID_IROTData,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IROTData::GetComparisonData */
};

const CInterfaceStubVtbl _IROTDataStubVtbl =
{
    &IID_IROTData,
    &IROTData_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumString, ver. 0.0,
   GUID={0x00000101,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumString_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumString_RemoteNext_Proxy( 
    IEnumString __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ LPOLESTR __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1308],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1308],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1308],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumString_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumString __RPC_FAR *This;
        ULONG celt;
        LPOLESTR __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumString __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        LPOLESTR __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumString_Next_Stub(
                                (IEnumString *) pParamStruct->This,
                                pParamStruct->celt,
                                pParamStruct->rgelt,
                                pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumString_FormatStringOffsetTable[] = 
    {
    1308,
    36,
    60,
    1344
    };

static const STUB_THUNK IEnumString_StubThunkTable[] = 
    {
    IEnumString_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumString_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumString_FormatStringOffsetTable[-3],
    &IEnumString_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumString_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumString_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumStringProxyVtbl = 
{
    &IEnumString_ProxyInfo,
    &IID_IEnumString,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumString_Next_Proxy ,
    (void *)-1 /* IEnumString::Skip */ ,
    (void *)-1 /* IEnumString::Reset */ ,
    (void *)-1 /* IEnumString::Clone */
};

const CInterfaceStubVtbl _IEnumStringStubVtbl =
{
    &IID_IEnumString,
    &IEnumString_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISequentialStream, ver. 0.0,
   GUID={0x0c733a30,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISequentialStream_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteRead_Proxy( 
    ISequentialStream __RPC_FAR * This,
    /* [length_is][size_is][out] */ byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbRead)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbRead);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1368],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1368],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbRead);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1368],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ISequentialStream_RemoteRead_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ISequentialStream __RPC_FAR *This;
        byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbRead;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ISequentialStream __RPC_FAR *This;
        char Pad0[4];
        byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbRead;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ISequentialStream_Read_Stub(
                                      (ISequentialStream *) pParamStruct->This,
                                      pParamStruct->pv,
                                      pParamStruct->cb,
                                      pParamStruct->pcbRead);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ISequentialStream_RemoteWrite_Proxy( 
    ISequentialStream __RPC_FAR * This,
    /* [size_is][in] */ const byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbWritten)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbWritten);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbWritten);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ISequentialStream_RemoteWrite_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ISequentialStream __RPC_FAR *This;
        const byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbWritten;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ISequentialStream __RPC_FAR *This;
        char Pad0[4];
        const byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbWritten;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ISequentialStream_Write_Stub(
                                       (ISequentialStream *) pParamStruct->This,
                                       pParamStruct->pv,
                                       pParamStruct->cb,
                                       pParamStruct->pcbWritten);
    
}

static const unsigned short ISequentialStream_FormatStringOffsetTable[] = 
    {
    1368,
    1404
    };

static const STUB_THUNK ISequentialStream_StubThunkTable[] = 
    {
    ISequentialStream_RemoteRead_Thunk,
    ISequentialStream_RemoteWrite_Thunk
    };

static const MIDL_SERVER_INFO ISequentialStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISequentialStream_FormatStringOffsetTable[-3],
    &ISequentialStream_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISequentialStream_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISequentialStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ISequentialStreamProxyVtbl = 
{
    &ISequentialStream_ProxyInfo,
    &IID_ISequentialStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ISequentialStream_Read_Proxy ,
    ISequentialStream_Write_Proxy
};

const CInterfaceStubVtbl _ISequentialStreamStubVtbl =
{
    &IID_ISequentialStream,
    &ISequentialStream_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IStream, ver. 0.0,
   GUID={0x0000000c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStream_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IStream_RemoteSeek_Proxy( 
    IStream __RPC_FAR * This,
    /* [in] */ LARGE_INTEGER dlibMove,
    /* [in] */ DWORD dwOrigin,
    /* [out] */ ULARGE_INTEGER __RPC_FAR *plibNewPosition)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,plibNewPosition);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1440],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1440],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dlibMove,
                  ( unsigned char __RPC_FAR * )&dwOrigin,
                  ( unsigned char __RPC_FAR * )&plibNewPosition);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1440],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IStream_RemoteSeek_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStream __RPC_FAR *This;
        #ifdef _MIPS_
        char Pad0[4];
        #endif
        #ifdef _PPC_
        char Pad1[4];
        #endif
        LARGE_INTEGER dlibMove;
        DWORD dwOrigin;
        ULARGE_INTEGER __RPC_FAR *plibNewPosition;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStream __RPC_FAR *This;
        char Pad0[4];
        LARGE_INTEGER dlibMove;
        DWORD dwOrigin;
        char Pad1[4];
        ULARGE_INTEGER __RPC_FAR *plibNewPosition;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IStream_Seek_Stub(
                            (IStream *) pParamStruct->This,
                            pParamStruct->dlibMove,
                            pParamStruct->dwOrigin,
                            pParamStruct->plibNewPosition);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IStream_RemoteCopyTo_Proxy( 
    IStream __RPC_FAR * This,
    /* [unique][in] */ IStream __RPC_FAR *pstm,
    /* [in] */ ULARGE_INTEGER cb,
    /* [out] */ ULARGE_INTEGER __RPC_FAR *pcbRead,
    /* [out] */ ULARGE_INTEGER __RPC_FAR *pcbWritten)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbWritten);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pstm,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbRead,
                  ( unsigned char __RPC_FAR * )&pcbWritten);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IStream_RemoteCopyTo_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStream __RPC_FAR *This;
        IStream __RPC_FAR *pstm;
        ULARGE_INTEGER cb;
        ULARGE_INTEGER __RPC_FAR *pcbRead;
        ULARGE_INTEGER __RPC_FAR *pcbWritten;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStream __RPC_FAR *This;
        char Pad0[4];
        IStream __RPC_FAR *pstm;
        char Pad1[4];
        ULARGE_INTEGER cb;
        ULARGE_INTEGER __RPC_FAR *pcbRead;
        char Pad2[4];
        ULARGE_INTEGER __RPC_FAR *pcbWritten;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IStream_CopyTo_Stub(
                              (IStream *) pParamStruct->This,
                              pParamStruct->pstm,
                              pParamStruct->cb,
                              pParamStruct->pcbRead,
                              pParamStruct->pcbWritten);
    
}

static const unsigned short IStream_FormatStringOffsetTable[] = 
    {
    1368,
    1404,
    1440,
    1476,
    1500,
    1542,
    1566,
    1584,
    1620,
    1656,
    1686
    };

static const STUB_THUNK IStream_StubThunkTable[] = 
    {
    ISequentialStream_RemoteRead_Thunk,
    ISequentialStream_RemoteWrite_Thunk,
    IStream_RemoteSeek_Thunk,
    0,
    IStream_RemoteCopyTo_Thunk,
    0,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStream_FormatStringOffsetTable[-3],
    &IStream_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStream_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(14) _IStreamProxyVtbl = 
{
    &IStream_ProxyInfo,
    &IID_IStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ISequentialStream_Read_Proxy ,
    ISequentialStream_Write_Proxy ,
    IStream_Seek_Proxy ,
    (void *)-1 /* IStream::SetSize */ ,
    IStream_CopyTo_Proxy ,
    (void *)-1 /* IStream::Commit */ ,
    (void *)-1 /* IStream::Revert */ ,
    (void *)-1 /* IStream::LockRegion */ ,
    (void *)-1 /* IStream::UnlockRegion */ ,
    (void *)-1 /* IStream::Stat */ ,
    (void *)-1 /* IStream::Clone */
};

const CInterfaceStubVtbl _IStreamStubVtbl =
{
    &IID_IStream,
    &IStream_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumSTATSTG, ver. 0.0,
   GUID={0x0000000d,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumSTATSTG_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSTATSTG_RemoteNext_Proxy( 
    IEnumSTATSTG __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATSTG __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1710],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1710],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1710],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumSTATSTG_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATSTG __RPC_FAR *This;
        ULONG celt;
        STATSTG __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATSTG __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        STATSTG __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumSTATSTG_Next_Stub(
                                 (IEnumSTATSTG *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgelt,
                                 pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumSTATSTG_FormatStringOffsetTable[] = 
    {
    1710,
    36,
    60,
    1746
    };

static const STUB_THUNK IEnumSTATSTG_StubThunkTable[] = 
    {
    IEnumSTATSTG_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumSTATSTG_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATSTG_FormatStringOffsetTable[-3],
    &IEnumSTATSTG_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATSTG_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATSTG_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumSTATSTGProxyVtbl = 
{
    &IEnumSTATSTG_ProxyInfo,
    &IID_IEnumSTATSTG,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumSTATSTG_Next_Proxy ,
    (void *)-1 /* IEnumSTATSTG::Skip */ ,
    (void *)-1 /* IEnumSTATSTG::Reset */ ,
    (void *)-1 /* IEnumSTATSTG::Clone */
};

const CInterfaceStubVtbl _IEnumSTATSTGStubVtbl =
{
    &IID_IEnumSTATSTG,
    &IEnumSTATSTG_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IStorage, ver. 0.0,
   GUID={0x0000000b,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IStorage_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IStorage_RemoteOpenStream_Proxy( 
    IStorage __RPC_FAR * This,
    /* [string][in] */ const OLECHAR __RPC_FAR *pwcsName,
    /* [in] */ unsigned long cbReserved1,
    /* [size_is][unique][in] */ byte __RPC_FAR *reserved1,
    /* [in] */ DWORD grfMode,
    /* [in] */ DWORD reserved2,
    /* [out] */ IStream __RPC_FAR *__RPC_FAR *ppstm)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppstm);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1818],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1818],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pwcsName,
                  ( unsigned char __RPC_FAR * )&cbReserved1,
                  ( unsigned char __RPC_FAR * )&reserved1,
                  ( unsigned char __RPC_FAR * )&grfMode,
                  ( unsigned char __RPC_FAR * )&reserved2,
                  ( unsigned char __RPC_FAR * )&ppstm);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1818],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IStorage_RemoteOpenStream_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStorage __RPC_FAR *This;
        const OLECHAR __RPC_FAR *pwcsName;
        unsigned long cbReserved1;
        byte __RPC_FAR *reserved1;
        DWORD grfMode;
        DWORD reserved2;
        IStream __RPC_FAR *__RPC_FAR *ppstm;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStorage __RPC_FAR *This;
        char Pad0[4];
        const OLECHAR __RPC_FAR *pwcsName;
        char Pad1[4];
        unsigned long cbReserved1;
        char Pad2[4];
        byte __RPC_FAR *reserved1;
        char Pad3[4];
        DWORD grfMode;
        char Pad4[4];
        DWORD reserved2;
        char Pad5[4];
        IStream __RPC_FAR *__RPC_FAR *ppstm;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IStorage_OpenStream_Stub(
                                   (IStorage *) pParamStruct->This,
                                   pParamStruct->pwcsName,
                                   pParamStruct->cbReserved1,
                                   pParamStruct->reserved1,
                                   pParamStruct->grfMode,
                                   pParamStruct->reserved2,
                                   pParamStruct->ppstm);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IStorage_RemoteEnumElements_Proxy( 
    IStorage __RPC_FAR * This,
    /* [in] */ DWORD reserved1,
    /* [in] */ unsigned long cbReserved2,
    /* [size_is][unique][in] */ byte __RPC_FAR *reserved2,
    /* [in] */ DWORD reserved3,
    /* [out] */ IEnumSTATSTG __RPC_FAR *__RPC_FAR *ppenum)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppenum);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&reserved1,
                  ( unsigned char __RPC_FAR * )&cbReserved2,
                  ( unsigned char __RPC_FAR * )&reserved2,
                  ( unsigned char __RPC_FAR * )&reserved3,
                  ( unsigned char __RPC_FAR * )&ppenum);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2100],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IStorage_RemoteEnumElements_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStorage __RPC_FAR *This;
        DWORD reserved1;
        unsigned long cbReserved2;
        byte __RPC_FAR *reserved2;
        DWORD reserved3;
        IEnumSTATSTG __RPC_FAR *__RPC_FAR *ppenum;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IStorage __RPC_FAR *This;
        char Pad0[4];
        DWORD reserved1;
        char Pad1[4];
        unsigned long cbReserved2;
        char Pad2[4];
        byte __RPC_FAR *reserved2;
        char Pad3[4];
        DWORD reserved3;
        char Pad4[4];
        IEnumSTATSTG __RPC_FAR *__RPC_FAR *ppenum;
        char Pad5[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IStorage_EnumElements_Stub(
                                     (IStorage *) pParamStruct->This,
                                     pParamStruct->reserved1,
                                     pParamStruct->cbReserved2,
                                     pParamStruct->reserved2,
                                     pParamStruct->reserved3,
                                     pParamStruct->ppenum);
    
}

static const unsigned short IStorage_FormatStringOffsetTable[] = 
    {
    1770,
    1818,
    1872,
    1920,
    1974,
    2016,
    2058,
    2082,
    2100,
    306,
    2148,
    2178,
    2220,
    2244,
    2274
    };

static const STUB_THUNK IStorage_StubThunkTable[] = 
    {
    0,
    IStorage_RemoteOpenStream_Thunk,
    0,
    0,
    0,
    0,
    0,
    0,
    IStorage_RemoteEnumElements_Thunk,
    0,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IStorage_FormatStringOffsetTable[-3],
    &IStorage_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(18) _IStorageProxyVtbl = 
{
    &IStorage_ProxyInfo,
    &IID_IStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IStorage::CreateStream */ ,
    IStorage_OpenStream_Proxy ,
    (void *)-1 /* IStorage::CreateStorage */ ,
    (void *)-1 /* IStorage::OpenStorage */ ,
    (void *)-1 /* IStorage::CopyTo */ ,
    (void *)-1 /* IStorage::MoveElementTo */ ,
    (void *)-1 /* IStorage::Commit */ ,
    (void *)-1 /* IStorage::Revert */ ,
    IStorage_EnumElements_Proxy ,
    (void *)-1 /* IStorage::DestroyElement */ ,
    (void *)-1 /* IStorage::RenameElement */ ,
    (void *)-1 /* IStorage::SetElementTimes */ ,
    (void *)-1 /* IStorage::SetClass */ ,
    (void *)-1 /* IStorage::SetStateBits */ ,
    (void *)-1 /* IStorage::Stat */
};

const CInterfaceStubVtbl _IStorageStubVtbl =
{
    &IID_IStorage,
    &IStorage_ServerInfo,
    18,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPersistFile, ver. 0.0,
   GUID={0x0000010b,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistFile_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersistFile_FormatStringOffsetTable[] = 
    {
    390,
    672,
    2304,
    2334,
    2364,
    2388
    };

static const MIDL_SERVER_INFO IPersistFile_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistFile_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistFile_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistFile_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IPersistFileProxyVtbl = 
{
    &IPersistFile_ProxyInfo,
    &IID_IPersistFile,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistFile::IsDirty */ ,
    (void *)-1 /* IPersistFile::Load */ ,
    (void *)-1 /* IPersistFile::Save */ ,
    (void *)-1 /* IPersistFile::SaveCompleted */ ,
    (void *)-1 /* IPersistFile::GetCurFile */
};

const CInterfaceStubVtbl _IPersistFileStubVtbl =
{
    &IID_IPersistFile,
    &IPersistFile_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPersistStorage, ver. 0.0,
   GUID={0x0000010a,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPersistStorage_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPersistStorage_FormatStringOffsetTable[] = 
    {
    390,
    672,
    2412,
    2436,
    2460,
    2490,
    1566
    };

static const MIDL_SERVER_INFO IPersistStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPersistStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPersistStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPersistStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _IPersistStorageProxyVtbl = 
{
    &IPersistStorage_ProxyInfo,
    &IID_IPersistStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPersist::GetClassID */ ,
    (void *)-1 /* IPersistStorage::IsDirty */ ,
    (void *)-1 /* IPersistStorage::InitNew */ ,
    (void *)-1 /* IPersistStorage::Load */ ,
    (void *)-1 /* IPersistStorage::Save */ ,
    (void *)-1 /* IPersistStorage::SaveCompleted */ ,
    (void *)-1 /* IPersistStorage::HandsOffStorage */
};

const CInterfaceStubVtbl _IPersistStorageStubVtbl =
{
    &IID_IPersistStorage,
    &IPersistStorage_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ILockBytes, ver. 0.0,
   GUID={0x0000000a,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ILockBytes_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT __stdcall ILockBytes_RemoteReadAt_Proxy( 
    ILockBytes __RPC_FAR * This,
    /* [in] */ ULARGE_INTEGER ulOffset,
    /* [length_is][size_is][out] */ byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbRead)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbRead);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2514],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2514],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&ulOffset,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbRead);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2514],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ILockBytes_RemoteReadAt_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ILockBytes __RPC_FAR *This;
        #ifdef _MIPS_
        char Pad0[4];
        #endif
        #ifdef _PPC_
        char Pad1[4];
        #endif
        ULARGE_INTEGER ulOffset;
        byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbRead;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ILockBytes __RPC_FAR *This;
        char Pad0[4];
        ULARGE_INTEGER ulOffset;
        byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbRead;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ILockBytes_ReadAt_Stub(
                                 (ILockBytes *) pParamStruct->This,
                                 pParamStruct->ulOffset,
                                 pParamStruct->pv,
                                 pParamStruct->cb,
                                 pParamStruct->pcbRead);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ILockBytes_RemoteWriteAt_Proxy( 
    ILockBytes __RPC_FAR * This,
    /* [in] */ ULARGE_INTEGER ulOffset,
    /* [size_is][in] */ const byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbWritten)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbWritten);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&ulOffset,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbWritten);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ILockBytes_RemoteWriteAt_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ILockBytes __RPC_FAR *This;
        #ifdef _MIPS_
        char Pad0[4];
        #endif
        #ifdef _PPC_
        char Pad1[4];
        #endif
        ULARGE_INTEGER ulOffset;
        const byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbWritten;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ILockBytes __RPC_FAR *This;
        char Pad0[4];
        ULARGE_INTEGER ulOffset;
        const byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbWritten;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ILockBytes_WriteAt_Stub(
                                  (ILockBytes *) pParamStruct->This,
                                  pParamStruct->ulOffset,
                                  pParamStruct->pv,
                                  pParamStruct->cb,
                                  pParamStruct->pcbWritten);
    
}

static const unsigned short ILockBytes_FormatStringOffsetTable[] = 
    {
    2514,
    2556,
    60,
    1476,
    2598,
    2634,
    2670
    };

static const STUB_THUNK ILockBytes_StubThunkTable[] = 
    {
    ILockBytes_RemoteReadAt_Thunk,
    ILockBytes_RemoteWriteAt_Thunk,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO ILockBytes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ILockBytes_FormatStringOffsetTable[-3],
    &ILockBytes_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ILockBytes_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ILockBytes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(10) _ILockBytesProxyVtbl = 
{
    &ILockBytes_ProxyInfo,
    &IID_ILockBytes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ILockBytes_ReadAt_Proxy ,
    ILockBytes_WriteAt_Proxy ,
    (void *)-1 /* ILockBytes::Flush */ ,
    (void *)-1 /* ILockBytes::SetSize */ ,
    (void *)-1 /* ILockBytes::LockRegion */ ,
    (void *)-1 /* ILockBytes::UnlockRegion */ ,
    (void *)-1 /* ILockBytes::Stat */
};

const CInterfaceStubVtbl _ILockBytesStubVtbl =
{
    &IID_ILockBytes,
    &ILockBytes_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumFORMATETC, ver. 0.0,
   GUID={0x00000103,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumFORMATETC_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumFORMATETC_RemoteNext_Proxy( 
    IEnumFORMATETC __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ FORMATETC __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2700],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2700],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2700],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumFORMATETC_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumFORMATETC __RPC_FAR *This;
        ULONG celt;
        FORMATETC __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumFORMATETC __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        FORMATETC __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumFORMATETC_Next_Stub(
                                   (IEnumFORMATETC *) pParamStruct->This,
                                   pParamStruct->celt,
                                   pParamStruct->rgelt,
                                   pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumFORMATETC_FormatStringOffsetTable[] = 
    {
    2700,
    36,
    60,
    2736
    };

static const STUB_THUNK IEnumFORMATETC_StubThunkTable[] = 
    {
    IEnumFORMATETC_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumFORMATETC_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumFORMATETC_FormatStringOffsetTable[-3],
    &IEnumFORMATETC_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumFORMATETC_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumFORMATETC_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumFORMATETCProxyVtbl = 
{
    &IEnumFORMATETC_ProxyInfo,
    &IID_IEnumFORMATETC,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumFORMATETC_Next_Proxy ,
    (void *)-1 /* IEnumFORMATETC::Skip */ ,
    (void *)-1 /* IEnumFORMATETC::Reset */ ,
    (void *)-1 /* IEnumFORMATETC::Clone */
};

const CInterfaceStubVtbl _IEnumFORMATETCStubVtbl =
{
    &IID_IEnumFORMATETC,
    &IEnumFORMATETC_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumSTATDATA, ver. 0.0,
   GUID={0x00000105,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumSTATDATA_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSTATDATA_RemoteNext_Proxy( 
    IEnumSTATDATA __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATDATA __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2760],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2760],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2760],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumSTATDATA_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATDATA __RPC_FAR *This;
        ULONG celt;
        STATDATA __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATDATA __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        STATDATA __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumSTATDATA_Next_Stub(
                                  (IEnumSTATDATA *) pParamStruct->This,
                                  pParamStruct->celt,
                                  pParamStruct->rgelt,
                                  pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumSTATDATA_FormatStringOffsetTable[] = 
    {
    2760,
    36,
    60,
    2796
    };

static const STUB_THUNK IEnumSTATDATA_StubThunkTable[] = 
    {
    IEnumSTATDATA_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumSTATDATA_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATDATA_FormatStringOffsetTable[-3],
    &IEnumSTATDATA_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATDATA_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATDATA_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumSTATDATAProxyVtbl = 
{
    &IEnumSTATDATA_ProxyInfo,
    &IID_IEnumSTATDATA,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumSTATDATA_Next_Proxy ,
    (void *)-1 /* IEnumSTATDATA::Skip */ ,
    (void *)-1 /* IEnumSTATDATA::Reset */ ,
    (void *)-1 /* IEnumSTATDATA::Clone */
};

const CInterfaceStubVtbl _IEnumSTATDATAStubVtbl =
{
    &IID_IEnumSTATDATA,
    &IEnumSTATDATA_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IRootStorage, ver. 0.0,
   GUID={0x00000012,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IRootStorage_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IRootStorage_FormatStringOffsetTable[] = 
    {
    2820
    };

static const MIDL_SERVER_INFO IRootStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IRootStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IRootStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IRootStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IRootStorageProxyVtbl = 
{
    &IRootStorage_ProxyInfo,
    &IID_IRootStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IRootStorage::SwitchToFile */
};

const CInterfaceStubVtbl _IRootStorageStubVtbl =
{
    &IID_IRootStorage,
    &IRootStorage_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAdviseSink, ver. 0.0,
   GUID={0x0000010f,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdviseSink_ServerInfo;

#pragma code_seg(".orpc")
/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSink_RemoteOnDataChange_Proxy( 
    IAdviseSink __RPC_FAR * This,
    /* [unique][in] */ FORMATETC __RPC_FAR *pFormatetc,
    /* [unique][in] */ ASYNC_STGMEDIUM __RPC_FAR *pStgmed)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pStgmed);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2844],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2844],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pFormatetc,
                  ( unsigned char __RPC_FAR * )&pStgmed);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2844],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSink_RemoteOnDataChange_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        FORMATETC __RPC_FAR *pFormatetc;
        ASYNC_STGMEDIUM __RPC_FAR *pStgmed;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        char Pad0[4];
        FORMATETC __RPC_FAR *pFormatetc;
        char Pad1[4];
        ASYNC_STGMEDIUM __RPC_FAR *pStgmed;
        char Pad2[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSink_OnDataChange_Stub(
                                 (IAdviseSink *) pParamStruct->This,
                                 pParamStruct->pFormatetc,
                                 pParamStruct->pStgmed);
    
}

/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSink_RemoteOnViewChange_Proxy( 
    IAdviseSink __RPC_FAR * This,
    /* [in] */ DWORD dwAspect,
    /* [in] */ LONG lindex)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lindex);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2872],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2872],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwAspect,
                  ( unsigned char __RPC_FAR * )&lindex);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2872],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSink_RemoteOnViewChange_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        DWORD dwAspect;
        LONG lindex;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        char Pad0[4];
        DWORD dwAspect;
        char Pad1[4];
        LONG lindex;
        char Pad2[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSink_OnViewChange_Stub(
                                 (IAdviseSink *) pParamStruct->This,
                                 pParamStruct->dwAspect,
                                 pParamStruct->lindex);
    
}

/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSink_RemoteOnRename_Proxy( 
    IAdviseSink __RPC_FAR * This,
    /* [in] */ IMoniker __RPC_FAR *pmk)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pmk);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2900],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2900],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pmk);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2900],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSink_RemoteOnRename_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        IMoniker __RPC_FAR *pmk;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        char Pad0[4];
        IMoniker __RPC_FAR *pmk;
        char Pad1[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSink_OnRename_Stub((IAdviseSink *) pParamStruct->This,pParamStruct->pmk);
    
}

/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSink_RemoteOnSave_Proxy( 
    IAdviseSink __RPC_FAR * This)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2922],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2922],
                  ( unsigned char __RPC_FAR * )&This);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2922],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSink_RemoteOnSave_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        char Pad0[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSink_OnSave_Stub((IAdviseSink *) pParamStruct->This);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IAdviseSink_RemoteOnClose_Proxy( 
    IAdviseSink __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2938],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2938],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2938],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IAdviseSink_RemoteOnClose_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IAdviseSink_OnClose_Stub((IAdviseSink *) pParamStruct->This);
    
}

static const unsigned short IAdviseSink_FormatStringOffsetTable[] = 
    {
    2844,
    2872,
    2900,
    2922,
    2938
    };

static const STUB_THUNK IAdviseSink_StubThunkTable[] = 
    {
    IAdviseSink_RemoteOnDataChange_Thunk,
    IAdviseSink_RemoteOnViewChange_Thunk,
    IAdviseSink_RemoteOnRename_Thunk,
    IAdviseSink_RemoteOnSave_Thunk,
    IAdviseSink_RemoteOnClose_Thunk
    };

static const MIDL_SERVER_INFO IAdviseSink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAdviseSink_FormatStringOffsetTable[-3],
    &IAdviseSink_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAdviseSink_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAdviseSink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(8) _IAdviseSinkProxyVtbl = 
{
    &IAdviseSink_ProxyInfo,
    &IID_IAdviseSink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IAdviseSink_OnDataChange_Proxy ,
    IAdviseSink_OnViewChange_Proxy ,
    IAdviseSink_OnRename_Proxy ,
    IAdviseSink_OnSave_Proxy ,
    IAdviseSink_OnClose_Proxy
};

const CInterfaceStubVtbl _IAdviseSinkStubVtbl =
{
    &IID_IAdviseSink,
    &IAdviseSink_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAdviseSink2, ver. 0.0,
   GUID={0x00000125,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAdviseSink2_ServerInfo;

#pragma code_seg(".orpc")
/* [async][call_as] */ void STDMETHODCALLTYPE IAdviseSink2_RemoteOnLinkSrcChange_Proxy( 
    IAdviseSink2 __RPC_FAR * This,
    /* [unique][in] */ IMoniker __RPC_FAR *pmk)
{

#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pmk);
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2956],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2956],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pmk);
#else
    NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2956],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    
}

void __RPC_API
IAdviseSink2_RemoteOnLinkSrcChange_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink2 __RPC_FAR *This;
        IMoniker __RPC_FAR *pmk;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IAdviseSink2 __RPC_FAR *This;
        char Pad0[4];
        IMoniker __RPC_FAR *pmk;
        char Pad1[4];
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    IAdviseSink2_OnLinkSrcChange_Stub((IAdviseSink2 *) pParamStruct->This,pParamStruct->pmk);
    
}

static const unsigned short IAdviseSink2_FormatStringOffsetTable[] = 
    {
    2844,
    2872,
    2900,
    2922,
    2938,
    2956
    };

static const STUB_THUNK IAdviseSink2_StubThunkTable[] = 
    {
    IAdviseSink_RemoteOnDataChange_Thunk,
    IAdviseSink_RemoteOnViewChange_Thunk,
    IAdviseSink_RemoteOnRename_Thunk,
    IAdviseSink_RemoteOnSave_Thunk,
    IAdviseSink_RemoteOnClose_Thunk,
    IAdviseSink2_RemoteOnLinkSrcChange_Thunk
    };

static const MIDL_SERVER_INFO IAdviseSink2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IAdviseSink2_FormatStringOffsetTable[-3],
    &IAdviseSink2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAdviseSink2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IAdviseSink2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(9) _IAdviseSink2ProxyVtbl = 
{
    &IAdviseSink2_ProxyInfo,
    &IID_IAdviseSink2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IAdviseSink_OnDataChange_Proxy ,
    IAdviseSink_OnViewChange_Proxy ,
    IAdviseSink_OnRename_Proxy ,
    IAdviseSink_OnSave_Proxy ,
    IAdviseSink_OnClose_Proxy ,
    IAdviseSink2_OnLinkSrcChange_Proxy
};

const CInterfaceStubVtbl _IAdviseSink2StubVtbl =
{
    &IID_IAdviseSink2,
    &IAdviseSink2_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDataObject, ver. 0.0,
   GUID={0x0000010e,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDataObject_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetData_Proxy( 
    IDataObject __RPC_FAR * This,
    /* [unique][in] */ FORMATETC __RPC_FAR *pformatetcIn,
    /* [out] */ STGMEDIUM __RPC_FAR *pRemoteMedium)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pRemoteMedium);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2978],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2978],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pformatetcIn,
                  ( unsigned char __RPC_FAR * )&pRemoteMedium);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2978],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDataObject_RemoteGetData_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        FORMATETC __RPC_FAR *pformatetcIn;
        STGMEDIUM __RPC_FAR *pRemoteMedium;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        char Pad0[4];
        FORMATETC __RPC_FAR *pformatetcIn;
        char Pad1[4];
        STGMEDIUM __RPC_FAR *pRemoteMedium;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDataObject_GetData_Stub(
                                   (IDataObject *) pParamStruct->This,
                                   pParamStruct->pformatetcIn,
                                   pParamStruct->pRemoteMedium);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IDataObject_RemoteGetDataHere_Proxy( 
    IDataObject __RPC_FAR * This,
    /* [unique][in] */ FORMATETC __RPC_FAR *pformatetc,
    /* [out][in] */ STGMEDIUM __RPC_FAR *pRemoteMedium)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pRemoteMedium);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3008],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3008],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pformatetc,
                  ( unsigned char __RPC_FAR * )&pRemoteMedium);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3008],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDataObject_RemoteGetDataHere_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        FORMATETC __RPC_FAR *pformatetc;
        STGMEDIUM __RPC_FAR *pRemoteMedium;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        char Pad0[4];
        FORMATETC __RPC_FAR *pformatetc;
        char Pad1[4];
        STGMEDIUM __RPC_FAR *pRemoteMedium;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDataObject_GetDataHere_Stub(
                                       (IDataObject *) pParamStruct->This,
                                       pParamStruct->pformatetc,
                                       pParamStruct->pRemoteMedium);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE IDataObject_RemoteSetData_Proxy( 
    IDataObject __RPC_FAR * This,
    /* [unique][in] */ FORMATETC __RPC_FAR *pformatetc,
    /* [unique][in] */ FLAG_STGMEDIUM __RPC_FAR *pmedium,
    /* [in] */ BOOL fRelease)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,fRelease);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3092],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3092],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pformatetc,
                  ( unsigned char __RPC_FAR * )&pmedium,
                  ( unsigned char __RPC_FAR * )&fRelease);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3092],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDataObject_RemoteSetData_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        FORMATETC __RPC_FAR *pformatetc;
        FLAG_STGMEDIUM __RPC_FAR *pmedium;
        BOOL fRelease;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDataObject __RPC_FAR *This;
        char Pad0[4];
        FORMATETC __RPC_FAR *pformatetc;
        char Pad1[4];
        FLAG_STGMEDIUM __RPC_FAR *pmedium;
        char Pad2[4];
        BOOL fRelease;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDataObject_SetData_Stub(
                                   (IDataObject *) pParamStruct->This,
                                   pParamStruct->pformatetc,
                                   pParamStruct->pmedium,
                                   pParamStruct->fRelease);
    
}

static const unsigned short IDataObject_FormatStringOffsetTable[] = 
    {
    2978,
    3008,
    3038,
    3062,
    3092,
    3128,
    3158,
    3200,
    3224
    };

static const STUB_THUNK IDataObject_StubThunkTable[] = 
    {
    IDataObject_RemoteGetData_Thunk,
    IDataObject_RemoteGetDataHere_Thunk,
    0,
    0,
    IDataObject_RemoteSetData_Thunk,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IDataObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDataObject_FormatStringOffsetTable[-3],
    &IDataObject_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDataObject_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDataObject_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(12) _IDataObjectProxyVtbl = 
{
    &IDataObject_ProxyInfo,
    &IID_IDataObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IDataObject_GetData_Proxy ,
    IDataObject_GetDataHere_Proxy ,
    (void *)-1 /* IDataObject::QueryGetData */ ,
    (void *)-1 /* IDataObject::GetCanonicalFormatEtc */ ,
    IDataObject_SetData_Proxy ,
    (void *)-1 /* IDataObject::EnumFormatEtc */ ,
    (void *)-1 /* IDataObject::DAdvise */ ,
    (void *)-1 /* IDataObject::DUnadvise */ ,
    (void *)-1 /* IDataObject::EnumDAdvise */
};

const CInterfaceStubVtbl _IDataObjectStubVtbl =
{
    &IID_IDataObject,
    &IDataObject_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IDataAdviseHolder, ver. 0.0,
   GUID={0x00000110,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IMessageFilter, ver. 0.0,
   GUID={0x00000016,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IRpcChannelBuffer, ver. 0.0,
   GUID={0xD5F56B60,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


/* Object interface: IRpcProxyBuffer, ver. 0.0,
   GUID={0xD5F56A34,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


/* Object interface: IRpcStubBuffer, ver. 0.0,
   GUID={0xD5F56AFC,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


/* Object interface: IPSFactoryBuffer, ver. 0.0,
   GUID={0xD5F569D0,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


/* Standard interface: __MIDL__intf_0041, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IChannelHook, ver. 0.0,
   GUID={0x1008c4a0,0x7613,0x11cf,{0x9a,0xf1,0x00,0x20,0xaf,0x6e,0x72,0xf4}} */


/* Standard interface: __MIDL__intf_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IPropertyStorage, ver. 0.0,
   GUID={0x00000138,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertyStorage_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertyStorage_FormatStringOffsetTable[] = 
    {
    3248,
    3284,
    3326,
    3356,
    3392,
    3428,
    2058,
    2082,
    3458,
    3482,
    3518,
    3542
    };

static const MIDL_SERVER_INFO IPropertyStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertyStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertyStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertyStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(15) _IPropertyStorageProxyVtbl = 
{
    &IPropertyStorage_ProxyInfo,
    &IID_IPropertyStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertyStorage::ReadMultiple */ ,
    (void *)-1 /* IPropertyStorage::WriteMultiple */ ,
    (void *)-1 /* IPropertyStorage::DeleteMultiple */ ,
    (void *)-1 /* IPropertyStorage::ReadPropertyNames */ ,
    (void *)-1 /* IPropertyStorage::WritePropertyNames */ ,
    (void *)-1 /* IPropertyStorage::DeletePropertyNames */ ,
    (void *)-1 /* IPropertyStorage::Commit */ ,
    (void *)-1 /* IPropertyStorage::Revert */ ,
    (void *)-1 /* IPropertyStorage::Enum */ ,
    (void *)-1 /* IPropertyStorage::SetTimes */ ,
    (void *)-1 /* IPropertyStorage::SetClass */ ,
    (void *)-1 /* IPropertyStorage::Stat */
};

const CInterfaceStubVtbl _IPropertyStorageStubVtbl =
{
    &IID_IPropertyStorage,
    &IPropertyStorage_ServerInfo,
    15,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPropertySetStorage, ver. 0.0,
   GUID={0x0000013A,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPropertySetStorage_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IPropertySetStorage_FormatStringOffsetTable[] = 
    {
    3566,
    3614,
    3650,
    3674
    };

static const MIDL_SERVER_INFO IPropertySetStorage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IPropertySetStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IPropertySetStorage_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IPropertySetStorage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IPropertySetStorageProxyVtbl = 
{
    &IPropertySetStorage_ProxyInfo,
    &IID_IPropertySetStorage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IPropertySetStorage::Create */ ,
    (void *)-1 /* IPropertySetStorage::Open */ ,
    (void *)-1 /* IPropertySetStorage::Delete */ ,
    (void *)-1 /* IPropertySetStorage::Enum */
};

const CInterfaceStubVtbl _IPropertySetStorageStubVtbl =
{
    &IID_IPropertySetStorage,
    &IPropertySetStorage_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumSTATPROPSTG, ver. 0.0,
   GUID={0x00000139,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumSTATPROPSTG_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSTATPROPSTG_RemoteNext_Proxy( 
    IEnumSTATPROPSTG __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATPROPSTG __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3698],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3698],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3698],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumSTATPROPSTG_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATPROPSTG __RPC_FAR *This;
        ULONG celt;
        STATPROPSTG __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATPROPSTG __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        STATPROPSTG __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumSTATPROPSTG_Next_Stub(
                                     (IEnumSTATPROPSTG *) pParamStruct->This,
                                     pParamStruct->celt,
                                     pParamStruct->rgelt,
                                     pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumSTATPROPSTG_FormatStringOffsetTable[] = 
    {
    3698,
    36,
    60,
    3734
    };

static const STUB_THUNK IEnumSTATPROPSTG_StubThunkTable[] = 
    {
    IEnumSTATPROPSTG_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumSTATPROPSTG_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATPROPSTG_FormatStringOffsetTable[-3],
    &IEnumSTATPROPSTG_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATPROPSTG_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATPROPSTG_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumSTATPROPSTGProxyVtbl = 
{
    &IEnumSTATPROPSTG_ProxyInfo,
    &IID_IEnumSTATPROPSTG,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumSTATPROPSTG_Next_Proxy ,
    (void *)-1 /* IEnumSTATPROPSTG::Skip */ ,
    (void *)-1 /* IEnumSTATPROPSTG::Reset */ ,
    (void *)-1 /* IEnumSTATPROPSTG::Clone */
};

const CInterfaceStubVtbl _IEnumSTATPROPSTGStubVtbl =
{
    &IID_IEnumSTATPROPSTG,
    &IEnumSTATPROPSTG_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumSTATPROPSETSTG, ver. 0.0,
   GUID={0x0000013B,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumSTATPROPSETSTG_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumSTATPROPSETSTG_RemoteNext_Proxy( 
    IEnumSTATPROPSETSTG __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ STATPROPSETSTG __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3758],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3758],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3758],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumSTATPROPSETSTG_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATPROPSETSTG __RPC_FAR *This;
        ULONG celt;
        STATPROPSETSTG __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumSTATPROPSETSTG __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        STATPROPSETSTG __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumSTATPROPSETSTG_Next_Stub(
                                        (IEnumSTATPROPSETSTG *) pParamStruct->This,
                                        pParamStruct->celt,
                                        pParamStruct->rgelt,
                                        pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumSTATPROPSETSTG_FormatStringOffsetTable[] = 
    {
    3758,
    36,
    60,
    3674
    };

static const STUB_THUNK IEnumSTATPROPSETSTG_StubThunkTable[] = 
    {
    IEnumSTATPROPSETSTG_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumSTATPROPSETSTG_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATPROPSETSTG_FormatStringOffsetTable[-3],
    &IEnumSTATPROPSETSTG_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumSTATPROPSETSTG_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumSTATPROPSETSTG_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumSTATPROPSETSTGProxyVtbl = 
{
    &IEnumSTATPROPSETSTG_ProxyInfo,
    &IID_IEnumSTATPROPSETSTG,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumSTATPROPSETSTG_Next_Proxy ,
    (void *)-1 /* IEnumSTATPROPSETSTG::Skip */ ,
    (void *)-1 /* IEnumSTATPROPSETSTG::Reset */ ,
    (void *)-1 /* IEnumSTATPROPSETSTG::Clone */
};

const CInterfaceStubVtbl _IEnumSTATPROPSETSTGStubVtbl =
{
    &IID_IEnumSTATPROPSETSTG,
    &IEnumSTATPROPSETSTG_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IClientSecurity, ver. 0.0,
   GUID={0x0000013D,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IServerSecurity, ver. 0.0,
   GUID={0x0000013E,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IClassActivator, ver. 0.0,
   GUID={0x00000140,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClassActivator_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IClassActivator_FormatStringOffsetTable[] = 
    {
    3794
    };

static const MIDL_SERVER_INFO IClassActivator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IClassActivator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IClassActivator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IClassActivator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IClassActivatorProxyVtbl = 
{
    &IClassActivator_ProxyInfo,
    &IID_IClassActivator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IClassActivator::GetClassObject */
};

const CInterfaceStubVtbl _IClassActivatorStubVtbl =
{
    &IID_IClassActivator,
    &IClassActivator_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0049, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IFillLockBytes, ver. 0.0,
   GUID={0x99caf010,0x415e,0x11cf,{0x88,0x14,0x00,0xaa,0x00,0xb5,0x69,0xf5}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IFillLockBytes_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT __stdcall IFillLockBytes_RemoteFillAppend_Proxy( 
    IFillLockBytes __RPC_FAR * This,
    /* [size_is][in] */ const byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbWritten)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbWritten);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3842],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3842],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbWritten);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3842],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IFillLockBytes_RemoteFillAppend_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IFillLockBytes __RPC_FAR *This;
        const byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbWritten;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IFillLockBytes __RPC_FAR *This;
        char Pad0[4];
        const byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbWritten;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IFillLockBytes_FillAppend_Stub(
                                         (IFillLockBytes *) pParamStruct->This,
                                         pParamStruct->pv,
                                         pParamStruct->cb,
                                         pParamStruct->pcbWritten);
    
}

/* [call_as] */ HRESULT __stdcall IFillLockBytes_RemoteFillAt_Proxy( 
    IFillLockBytes __RPC_FAR * This,
    /* [in] */ ULARGE_INTEGER ulOffset,
    /* [size_is][in] */ const byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbWritten)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbWritten);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&ulOffset,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbWritten);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2556],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IFillLockBytes_RemoteFillAt_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IFillLockBytes __RPC_FAR *This;
        #ifdef _MIPS_
        char Pad0[4];
        #endif
        #ifdef _PPC_
        char Pad1[4];
        #endif
        ULARGE_INTEGER ulOffset;
        const byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbWritten;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IFillLockBytes __RPC_FAR *This;
        char Pad0[4];
        ULARGE_INTEGER ulOffset;
        const byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbWritten;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IFillLockBytes_FillAt_Stub(
                                     (IFillLockBytes *) pParamStruct->This,
                                     pParamStruct->ulOffset,
                                     pParamStruct->pv,
                                     pParamStruct->cb,
                                     pParamStruct->pcbWritten);
    
}

static const unsigned short IFillLockBytes_FormatStringOffsetTable[] = 
    {
    3842,
    2556,
    3878,
    3902
    };

static const STUB_THUNK IFillLockBytes_StubThunkTable[] = 
    {
    IFillLockBytes_RemoteFillAppend_Thunk,
    IFillLockBytes_RemoteFillAt_Thunk,
    0,
    0
    };

static const MIDL_SERVER_INFO IFillLockBytes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IFillLockBytes_FormatStringOffsetTable[-3],
    &IFillLockBytes_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IFillLockBytes_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IFillLockBytes_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IFillLockBytesProxyVtbl = 
{
    &IFillLockBytes_ProxyInfo,
    &IID_IFillLockBytes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IFillLockBytes_FillAppend_Proxy ,
    IFillLockBytes_FillAt_Proxy ,
    (void *)-1 /* IFillLockBytes::SetFillSize */ ,
    (void *)-1 /* IFillLockBytes::Terminate */
};

const CInterfaceStubVtbl _IFillLockBytesStubVtbl =
{
    &IID_IFillLockBytes,
    &IFillLockBytes_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IProgressNotify, ver. 0.0,
   GUID={0xa9d758a0,0x4617,0x11cf,{0x95,0xfc,0x00,0xaa,0x00,0x68,0x0d,0xb4}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IProgressNotify_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IProgressNotify_FormatStringOffsetTable[] = 
    {
    3926
    };

static const MIDL_SERVER_INFO IProgressNotify_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IProgressNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IProgressNotify_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IProgressNotify_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IProgressNotifyProxyVtbl = 
{
    &IProgressNotify_ProxyInfo,
    &IID_IProgressNotify,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IProgressNotify::OnProgress */
};

const CInterfaceStubVtbl _IProgressNotifyStubVtbl =
{
    &IID_IProgressNotify,
    &IProgressNotify_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ILayoutStorage, ver. 0.0,
   GUID={0x0e6d4d90,0x6738,0x11cf,{0x96,0x08,0x00,0xaa,0x00,0x68,0x0d,0xb4}} */


/* Object interface: ISurrogate, ver. 1.0,
   GUID={0x00000022,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISurrogate_ServerInfo;

#pragma code_seg(".orpc")
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

static const unsigned short ISurrogate_FormatStringOffsetTable[] = 
    {
    3968,
    672
    };

static const MIDL_SERVER_INFO ISurrogate_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISurrogate_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISurrogate_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISurrogate_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ISurrogateProxyVtbl = 
{
    &ISurrogate_ProxyInfo,
    &IID_ISurrogate,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ISurrogate::LoadDllServer */ ,
    (void *)-1 /* ISurrogate::FreeSurrogate */
};

const CInterfaceStubVtbl _ISurrogateStubVtbl =
{
    &IID_ISurrogate,
    &ISurrogate_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

static void __RPC_USER IEnumFORMATETC_DVTARGETDEVICEExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    DVTARGETDEVICE __RPC_FAR *pS	=	( DVTARGETDEVICE __RPC_FAR * )(pStubMsg->StackTop - 12);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->tdSize - sizeof( DWORD  ) - 4 * sizeof( WORD  );
}

static void __RPC_USER IPropertyStorage_PROPVARIANTExprEval_0001( PMIDL_STUB_MESSAGE pStubMsg )
{
    PROPVARIANT __RPC_FAR *pS	=	( PROPVARIANT __RPC_FAR * )(pStubMsg->StackTop - 8);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = ( unsigned short  )(pS->vt & 0x1fff);
}

static void __RPC_USER IPropertyStorage_CLIPDATAExprEval_0002( PMIDL_STUB_MESSAGE pStubMsg )
{
    CLIPDATA __RPC_FAR *pS	=	( CLIPDATA __RPC_FAR * )pStubMsg->StackTop;
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->cbSize - 4;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    IEnumFORMATETC_DVTARGETDEVICEExprEval_0000
    ,IPropertyStorage_PROPVARIANTExprEval_0001
    ,IPropertyStorage_CLIPDATAExprEval_0002
    };


static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[6] = 
        {
            
            {
            SNB_UserSize
            ,SNB_UserMarshal
            ,SNB_UserUnmarshal
            ,SNB_UserFree
            },
            {
            CLIPFORMAT_UserSize
            ,CLIPFORMAT_UserMarshal
            ,CLIPFORMAT_UserUnmarshal
            ,CLIPFORMAT_UserFree
            },
            {
            ASYNC_STGMEDIUM_UserSize
            ,ASYNC_STGMEDIUM_UserMarshal
            ,ASYNC_STGMEDIUM_UserUnmarshal
            ,ASYNC_STGMEDIUM_UserFree
            },
            {
            STGMEDIUM_UserSize
            ,STGMEDIUM_UserMarshal
            ,STGMEDIUM_UserUnmarshal
            ,STGMEDIUM_UserFree
            },
            {
            FLAG_STGMEDIUM_UserSize
            ,FLAG_STGMEDIUM_UserMarshal
            ,FLAG_STGMEDIUM_UserUnmarshal
            ,FLAG_STGMEDIUM_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
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

	/* Parameter celt */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 18 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */

	/* Parameter pceltFetched */

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


	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Skip */


	/* Procedure Revoke */


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

	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */


	/* Parameter celt */


	/* Parameter dwRegister */


	/* Parameter celt */


	/* Parameter celt */

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


	/* Procedure Reset */


	/* Procedure Reset */


	/* Procedure Reset */


	/* Procedure Flush */


	/* Procedure Reset */


	/* Procedure Reset */


	/* Procedure RemoteIsRunning */


	/* Procedure Reset */


	/* Procedure ReleaseBoundObjects */


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


	/* Return value */


	/* Return value */


	/* Return value */


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

	/* Parameter ppenum */

/* 90 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 94 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterObjectBound */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 104 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x8 ),	/* 8 */
/* 112 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter punk */

/* 114 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 118 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RevokeObjectBound */

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
/* 136 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter punk */

/* 138 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 142 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteSetBindOptions */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 152 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pbindopts */

/* 162 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetBindOptions */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 176 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 178 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x7,		/* 7 */
			0x2,		/* 2 */

	/* Parameter pbindopts */

/* 186 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 190 */	NdrFcShort( 0xd6 ),	/* Type Offset=214 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRunningObjectTable */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 208 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pprot */

/* 210 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 214 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RegisterObjectParam */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 224 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 226 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pszKey */

/* 234 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 238 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter punk */

/* 240 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 244 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObjectParam */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 254 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 256 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 262 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pszKey */

/* 264 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 268 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter ppunk */

/* 270 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 272 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 274 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 276 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumObjectParam */

/* 282 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 284 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 292 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 294 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 296 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 298 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DestroyElement */


	/* Procedure RevokeObjectParam */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 308 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pwcsName */


	/* Parameter pszKey */

/* 318 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 322 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */


	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 332 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 334 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 338 */	NdrFcShort( 0x10 ),	/* 16 */
/* 340 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 342 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 348 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 352 */	NdrFcShort( 0x13a ),	/* Type Offset=314 */

	/* Parameter pceltFetched */

/* 354 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 368 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 370 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 378 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 382 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassID */


	/* Procedure GetRunningClass */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 392 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 394 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x28 ),	/* 40 */
/* 400 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pClassID */


	/* Parameter lpClsid */

/* 402 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 406 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */


	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Run */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 416 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 418 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	NdrFcShort( 0x8 ),	/* 8 */
/* 424 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pbc */

/* 426 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 428 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 430 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockRunning */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 440 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 442 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 444 */	NdrFcShort( 0x10 ),	/* 16 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter fLock */

/* 450 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 454 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fLastUnlockCloses */

/* 456 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 462 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetContainedObject */

/* 468 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 470 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 472 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 478 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fContained */

/* 480 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 482 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */

/* 492 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 494 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 496 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	NdrFcShort( 0x10 ),	/* 16 */
/* 502 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter grfFlags */

/* 504 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter punkObject */

/* 510 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 512 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 514 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pmkObjectName */

/* 516 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 520 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pdwRegister */

/* 522 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 530 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsRunning */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 536 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 538 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pmkObjectName */

/* 546 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 550 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetObject */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 560 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 562 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pmkObjectName */

/* 570 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 574 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter ppunkObject */

/* 576 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 580 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Return value */

/* 582 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NoteChangeTime */

/* 588 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 590 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 592 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 594 */	NdrFcShort( 0x18 ),	/* 24 */
/* 596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 598 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dwRegister */

/* 600 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfiletime */

/* 606 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 610 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Return value */

/* 612 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimeOfLastChange */

/* 618 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 622 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 626 */	NdrFcShort( 0x18 ),	/* 24 */
/* 628 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pmkObjectName */

/* 630 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 634 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pfiletime */

/* 636 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 640 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumRunning */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 650 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 652 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 658 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenumMoniker */

/* 660 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 664 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 666 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 668 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FreeSurrogate */


	/* Procedure IsDirty */


	/* Procedure IsDirty */


	/* Procedure IsDirty */

/* 672 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 674 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 676 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 682 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 684 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 690 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 692 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 694 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	NdrFcShort( 0x8 ),	/* 8 */
/* 700 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pStm */

/* 702 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 706 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 714 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 716 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 718 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 724 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pStm */

/* 726 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 730 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter fClearDirty */

/* 732 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 740 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSizeMax */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 746 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 748 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x18 ),	/* 24 */
/* 754 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pcbSize */

/* 756 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 760 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteBindToObject */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 770 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 772 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 774 */	NdrFcShort( 0x20 ),	/* 32 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter pbc */

/* 780 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 786 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter riidResult */

/* 792 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 794 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 796 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter ppvResult */

/* 798 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 800 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 802 */	NdrFcShort( 0x1ba ),	/* Type Offset=442 */

	/* Return value */

/* 804 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 806 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteBindToStorage */

/* 810 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 812 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 814 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 816 */	NdrFcShort( 0x20 ),	/* 32 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter pbc */

/* 822 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 826 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 828 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 830 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 832 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter riid */

/* 834 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 838 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter ppvObj */

/* 840 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 844 */	NdrFcShort( 0x1c4 ),	/* Type Offset=452 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 848 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reduce */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 854 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 856 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	NdrFcShort( 0x8 ),	/* 8 */
/* 862 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter pbc */

/* 864 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 868 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter dwReduceHowFar */

/* 870 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 872 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmkToLeft */

/* 876 */	NdrFcShort( 0x201b ),	/* 8219 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 880 */	NdrFcShort( 0x1ce ),	/* Type Offset=462 */

	/* Parameter ppmkReduced */

/* 882 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 884 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 886 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 888 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ComposeWith */

/* 894 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 896 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 898 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 900 */	NdrFcShort( 0x8 ),	/* 8 */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter pmkRight */

/* 906 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 910 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter fOnlyIfNotGeneric */

/* 912 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 914 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmkComposite */

/* 918 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 922 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Enum */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 932 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 934 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 940 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter fForward */

/* 942 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 944 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenumMoniker */

/* 948 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 950 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 952 */	NdrFcShort( 0x14c ),	/* Type Offset=332 */

	/* Return value */

/* 954 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 956 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsEqual */

/* 960 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 962 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 964 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 970 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pmkOtherMoniker */

/* 972 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 974 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 976 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 980 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hash */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 986 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 988 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 994 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwHash */

/* 996 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 998 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1000 */	0x8,		/* FC_LONG */
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

	/* Procedure IsRunning */

/* 1008 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1010 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 1012 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pbc */

/* 1020 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1022 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1024 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 1026 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1030 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pmkNewlyRunning */

/* 1032 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1036 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Return value */

/* 1038 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTimeOfLastChange */

/* 1044 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1046 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 1048 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1052 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1054 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pbc */

/* 1056 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1058 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1060 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 1062 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1066 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pFileTime */

/* 1068 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1072 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1076 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Inverse */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1082 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 1084 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1090 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppmk */

/* 1092 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1094 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1096 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 1098 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CommonPrefixWith */

/* 1104 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1106 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 1108 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1114 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pmkOther */

/* 1116 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1120 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter ppmkPrefix */

/* 1122 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1124 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1126 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1130 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RelativePathTo */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1136 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1138 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1144 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pmkOther */

/* 1146 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1148 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1150 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter ppmkRelPath */

/* 1152 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1156 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1160 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDisplayName */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1166 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 1168 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1174 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter pbc */

/* 1176 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1178 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1180 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 1182 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1184 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1186 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter ppszDisplayName */

/* 1188 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 1190 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1192 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ParseDisplayName */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1202 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1204 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1208 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1210 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pbc */

/* 1212 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1214 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1216 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter pmkToLeft */

/* 1218 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1222 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Parameter pszDisplayName */

/* 1224 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1226 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1228 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter pchEaten */

/* 1230 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1232 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmkOut */

/* 1236 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1240 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1244 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSystemMoniker */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1250 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1252 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1256 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1258 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pdwMksys */

/* 1260 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1262 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1266 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1268 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetComparisonData */

/* 1272 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1274 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1276 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1280 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1282 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter pbData */

/* 1284 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1288 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Parameter cbMax */

/* 1290 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1292 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 1296 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1302 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 1308 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1310 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1312 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1316 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1318 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 1320 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1322 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1326 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1330 */	NdrFcShort( 0x1f0 ),	/* Type Offset=496 */

	/* Parameter pceltFetched */

/* 1332 */	NdrFcShort( 0x2150 ),	/* 8528 */
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

	/* Procedure Clone */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1346 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1348 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1354 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 1356 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1360 */	NdrFcShort( 0x10e ),	/* Type Offset=270 */

	/* Return value */

/* 1362 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1364 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteRead */

/* 1368 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1370 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1372 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1378 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter pv */

/* 1380 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1382 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1384 */	NdrFcShort( 0x216 ),	/* Type Offset=534 */

	/* Parameter cb */

/* 1386 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1388 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbRead */

/* 1392 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteWrite */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1406 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1408 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1414 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pv */

/* 1416 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1420 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Parameter cb */

/* 1422 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbWritten */

/* 1428 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1434 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteSeek */

/* 1440 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1442 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1444 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1446 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1448 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1450 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter dlibMove */

/* 1452 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1454 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1456 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwOrigin */

/* 1458 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1460 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter plibNewPosition */

/* 1464 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1466 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1468 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1472 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSize */


	/* Procedure SetSize */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1478 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1480 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1482 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1486 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter cb */


	/* Parameter libNewSize */

/* 1488 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1490 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1492 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */


	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1496 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCopyTo */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1502 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1506 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1508 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1510 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pstm */

/* 1512 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1514 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1516 */	NdrFcShort( 0x19a ),	/* Type Offset=410 */

	/* Parameter cb */

/* 1518 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
/* 1520 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1522 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter pcbRead */

/* 1524 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 1526 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1528 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter pcbWritten */

/* 1530 */	NdrFcShort( 0x2112 ),	/* 8466 */
#ifndef _ALPHA_
/* 1532 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1534 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 1536 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1538 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */

/* 1542 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1544 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1546 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1548 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1552 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter grfCommitFlags */

/* 1554 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1556 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1560 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1562 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HandsOffStorage */


	/* Procedure Revert */

/* 1566 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1568 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1570 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1576 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 1578 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1580 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockRegion */

/* 1584 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1586 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1588 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1590 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1592 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1594 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter libOffset */

/* 1596 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1598 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1600 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter cb */

/* 1602 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1606 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwLockType */

/* 1608 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1610 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1616 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnlockRegion */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1622 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1624 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1626 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1630 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter libOffset */

/* 1632 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1636 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter cb */

/* 1638 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1642 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwLockType */

/* 1644 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1646 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1650 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 1652 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1654 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stat */

/* 1656 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1658 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1660 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1666 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter pstatstg */

/* 1668 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1670 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1672 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Parameter grfStatFlag */

/* 1674 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1676 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1680 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1682 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1686 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1688 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1690 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1694 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1696 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppstm */

/* 1698 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1700 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1702 */	NdrFcShort( 0x254 ),	/* Type Offset=596 */

	/* Return value */

/* 1704 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1706 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 1710 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1712 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1714 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1720 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 1722 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1724 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1728 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1730 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1732 */	NdrFcShort( 0x25c ),	/* Type Offset=604 */

	/* Parameter pceltFetched */

/* 1734 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1736 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1740 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1742 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 1746 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1748 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1750 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1756 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 1758 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1760 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1762 */	NdrFcShort( 0x280 ),	/* Type Offset=640 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1766 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStream */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1772 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1774 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1776 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1780 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pwcsName */

/* 1782 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1784 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1786 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter grfMode */

/* 1788 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1790 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved1 */

/* 1794 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1796 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved2 */

/* 1800 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1802 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppstm */

/* 1806 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1808 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1810 */	NdrFcShort( 0x254 ),	/* Type Offset=596 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1814 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOpenStream */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1820 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1822 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1824 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1826 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1828 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pwcsName */

/* 1830 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1832 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1834 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter cbReserved1 */

/* 1836 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1838 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved1 */

/* 1842 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1844 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1846 */	NdrFcShort( 0x296 ),	/* Type Offset=662 */

	/* Parameter grfMode */

/* 1848 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1850 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved2 */

/* 1854 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppstm */

/* 1860 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1862 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1864 */	NdrFcShort( 0x254 ),	/* Type Offset=596 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1868 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateStorage */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1874 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1876 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1878 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1882 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter pwcsName */

/* 1884 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1886 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1888 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter grfMode */

/* 1890 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwStgFmt */

/* 1896 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1898 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved2 */

/* 1902 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1904 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppstg */

/* 1908 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1910 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1912 */	NdrFcShort( 0x2a4 ),	/* Type Offset=676 */

	/* Return value */

/* 1914 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1916 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenStorage */

/* 1920 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1922 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1924 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1926 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1930 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pwcsName */

/* 1932 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1934 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1936 */	NdrFcShort( 0x2ba ),	/* Type Offset=698 */

	/* Parameter pstgPriority */

/* 1938 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1940 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1942 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Parameter grfMode */

/* 1944 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1946 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter snbExclude */

/* 1950 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 1952 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1954 */	NdrFcShort( 0x2d6 ),	/* Type Offset=726 */

	/* Parameter reserved */

/* 1956 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1958 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppstg */

/* 1962 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1964 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1966 */	NdrFcShort( 0x2a4 ),	/* Type Offset=676 */

	/* Return value */

/* 1968 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1970 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CopyTo */

/* 1974 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1976 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1978 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1984 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter ciidExclude */

/* 1986 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1988 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgiidExclude */

/* 1992 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1994 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1996 */	NdrFcShort( 0x2e0 ),	/* Type Offset=736 */

	/* Parameter snbExclude */

/* 1998 */	NdrFcShort( 0x8b ),	/* 139 */
#ifndef _ALPHA_
/* 2000 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2002 */	NdrFcShort( 0x2f2 ),	/* Type Offset=754 */

	/* Parameter pstgDest */

/* 2004 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2006 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2008 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 2010 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2012 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MoveElementTo */

/* 2016 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2018 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2020 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2026 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pwcsName */

/* 2028 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2030 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2032 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter pstgDest */

/* 2034 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2036 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2038 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Parameter pwcsNewName */

/* 2040 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2042 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2044 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter grfFlags */

/* 2046 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2048 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2052 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2054 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2056 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Commit */


	/* Procedure Commit */

/* 2058 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2060 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2062 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2068 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter grfCommitFlags */


	/* Parameter grfCommitFlags */

/* 2070 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2072 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2076 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2078 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Revert */


	/* Procedure Revert */

/* 2082 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2084 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 2086 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2092 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 2094 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2096 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteEnumElements */

/* 2100 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2102 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2104 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2106 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2110 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter reserved1 */

/* 2112 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2114 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbReserved2 */

/* 2118 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2120 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter reserved2 */

/* 2124 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2126 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2128 */	NdrFcShort( 0x296 ),	/* Type Offset=662 */

	/* Parameter reserved3 */

/* 2130 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2132 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenum */

/* 2136 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2138 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2140 */	NdrFcShort( 0x280 ),	/* Type Offset=640 */

	/* Return value */

/* 2142 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2144 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RenameElement */

/* 2148 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2150 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 2152 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2158 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pwcsOldName */

/* 2160 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2162 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2164 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter pwcsNewName */

/* 2166 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2168 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2170 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2174 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetElementTimes */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2180 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 2182 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2184 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2188 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pwcsName */

/* 2190 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2192 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2194 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter pctime */

/* 2196 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2198 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2200 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter patime */

/* 2202 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2204 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2206 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter pmtime */

/* 2208 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2210 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2212 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Return value */

/* 2214 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2216 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClass */

/* 2220 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2222 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 2224 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2226 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2230 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter clsid */

/* 2232 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 2234 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2236 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 2238 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2240 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetStateBits */

/* 2244 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2246 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 2248 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2254 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter grfStateBits */

/* 2256 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2258 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfMask */

/* 2262 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2264 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2266 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2270 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stat */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2276 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 2278 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2284 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter pstatstg */

/* 2286 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2288 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2290 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Parameter grfStatFlag */

/* 2292 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2294 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2298 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2300 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2302 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 2304 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2306 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2308 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2314 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pszFileName */

/* 2316 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2318 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2320 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Parameter dwMode */

/* 2322 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2324 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2328 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2330 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 2334 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2336 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2338 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pszFileName */

/* 2346 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2348 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2350 */	NdrFcShort( 0x2ba ),	/* Type Offset=698 */

	/* Parameter fRemember */

/* 2352 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2354 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2358 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2360 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveCompleted */

/* 2364 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2366 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2368 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2374 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszFileName */

/* 2376 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2378 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2380 */	NdrFcShort( 0x2ba ),	/* Type Offset=698 */

	/* Return value */

/* 2382 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2384 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurFile */

/* 2388 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2390 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2392 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2398 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppszFileName */

/* 2400 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 2402 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2404 */	NdrFcShort( 0x1d6 ),	/* Type Offset=470 */

	/* Return value */

/* 2406 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2408 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2410 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitNew */

/* 2412 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2414 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2416 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2422 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pStg */

/* 2424 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2426 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2428 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 2430 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2432 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Load */

/* 2436 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2438 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2440 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2446 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pStg */

/* 2448 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2450 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2452 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 2454 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2456 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Save */

/* 2460 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2462 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2464 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2468 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2470 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pStgSave */

/* 2472 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2474 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2476 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Parameter fSameAsLoad */

/* 2478 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2480 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2486 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveCompleted */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2492 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2494 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2500 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pStgNew */

/* 2502 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2504 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2506 */	NdrFcShort( 0x2a8 ),	/* Type Offset=680 */

	/* Return value */

/* 2508 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2510 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteReadAt */

/* 2514 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2516 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2518 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2520 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2522 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2524 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter ulOffset */

/* 2526 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2528 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2530 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter pv */

/* 2532 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2536 */	NdrFcShort( 0x300 ),	/* Type Offset=768 */

	/* Parameter cb */

/* 2538 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbRead */

/* 2544 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2546 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2550 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2552 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteFillAt */


	/* Procedure RemoteWriteAt */

/* 2556 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2558 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2560 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2562 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2566 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter ulOffset */


	/* Parameter ulOffset */

/* 2568 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2570 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2572 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter pv */


	/* Parameter pv */

/* 2574 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2576 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2578 */	NdrFcShort( 0x312 ),	/* Type Offset=786 */

	/* Parameter cb */


	/* Parameter cb */

/* 2580 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbWritten */


	/* Parameter pcbWritten */

/* 2586 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2588 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2590 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2592 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2594 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LockRegion */

/* 2598 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2600 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2602 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2604 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2608 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter libOffset */

/* 2610 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2612 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2614 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter cb */

/* 2616 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2620 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwLockType */

/* 2622 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2624 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2628 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2630 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnlockRegion */

/* 2634 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2636 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2638 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
#else
			NdrFcShort( 0x20 ),	/* MIPS & PPC Stack size/offset = 32 */
#endif
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2640 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2644 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter libOffset */

/* 2646 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2648 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2650 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter cb */

/* 2652 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2654 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2656 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Parameter dwLockType */

/* 2658 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2660 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2662 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2664 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 2666 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
#else
			NdrFcShort( 0x1c ),	/* MIPS & PPC Stack size/offset = 28 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stat */

/* 2670 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2672 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 2674 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2680 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter pstatstg */

/* 2682 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2684 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2686 */	NdrFcShort( 0x228 ),	/* Type Offset=552 */

	/* Parameter grfStatFlag */

/* 2688 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2690 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2696 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2702 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2704 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2708 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2710 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 2712 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2714 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 2718 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2720 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2722 */	NdrFcShort( 0x36e ),	/* Type Offset=878 */

	/* Parameter pceltFetched */

/* 2724 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2726 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2730 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2732 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 2736 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2738 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2740 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2746 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 2748 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2750 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2752 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 2754 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2756 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 2760 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2762 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2764 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2768 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2770 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 2772 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2774 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 2778 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2780 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2782 */	NdrFcShort( 0x3c0 ),	/* Type Offset=960 */

	/* Parameter pceltFetched */

/* 2784 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2786 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2790 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2792 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 2796 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2798 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2800 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2806 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 2808 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 2810 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2812 */	NdrFcShort( 0x3d2 ),	/* Type Offset=978 */

	/* Return value */

/* 2814 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2816 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SwitchToFile */

/* 2820 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2822 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2824 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2830 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pszFile */

/* 2832 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2834 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2836 */	NdrFcShort( 0x108 ),	/* Type Offset=264 */

	/* Return value */

/* 2838 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2840 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOnDataChange */

/* 2844 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2846 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2850 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2852 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2858 */	0x2,		/* 2 */
			0x2,		/* 2 */

	/* Parameter pFormatetc */

/* 2860 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2862 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2864 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pStgmed */

/* 2866 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2868 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2870 */	NdrFcShort( 0x3ec ),	/* Type Offset=1004 */

	/* Procedure RemoteOnViewChange */

/* 2872 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2874 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2878 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 2880 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	0x0,		/* 0 */
			0x2,		/* 2 */

	/* Parameter dwAspect */

/* 2888 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2890 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lindex */

/* 2894 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2896 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOnRename */

/* 2900 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2902 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2906 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 2908 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2914 */	0x2,		/* 2 */
			0x1,		/* 1 */

	/* Parameter pmk */

/* 2916 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2918 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2920 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Procedure RemoteOnSave */

/* 2922 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2924 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2928 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 2930 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	0x0,		/* 0 */
			0x0,		/* 0 */

	/* Procedure RemoteOnClose */

/* 2938 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2940 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 2942 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2948 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 2950 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2952 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteOnLinkSrcChange */

/* 2956 */	0x33,		/* FC_AUTO_HANDLE */
			0x7c,		/* 124 */
/* 2958 */	NdrFcLong( 0x40000000 ),	/* 1073741824 */
/* 2962 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2964 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2970 */	0x2,		/* 2 */
			0x1,		/* 1 */

	/* Parameter pmk */

/* 2972 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2974 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2976 */	NdrFcShort( 0x128 ),	/* Type Offset=296 */

	/* Procedure RemoteGetData */

/* 2978 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 2980 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 2982 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2988 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pformatetcIn */

/* 2990 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2992 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2994 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pRemoteMedium */

/* 2996 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 2998 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3000 */	NdrFcShort( 0x576 ),	/* Type Offset=1398 */

	/* Return value */

/* 3002 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3004 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDataHere */

/* 3008 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3010 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 3012 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3018 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pformatetc */

/* 3020 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3022 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3024 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pRemoteMedium */

/* 3026 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 3028 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3030 */	NdrFcShort( 0x584 ),	/* Type Offset=1412 */

	/* Return value */

/* 3032 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3034 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure QueryGetData */

/* 3038 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3040 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 3042 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3048 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pformatetc */

/* 3050 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3052 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3054 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Return value */

/* 3056 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3058 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCanonicalFormatEtc */

/* 3062 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3064 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3066 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3072 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pformatectIn */

/* 3074 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3076 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3078 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pformatetcOut */

/* 3080 */	NdrFcShort( 0x6113 ),	/* 24851 */
#ifndef _ALPHA_
/* 3082 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3084 */	NdrFcShort( 0x358 ),	/* Type Offset=856 */

	/* Return value */

/* 3086 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3088 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteSetData */

/* 3092 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3094 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 3096 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3102 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pformatetc */

/* 3104 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3106 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3108 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pmedium */

/* 3110 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3112 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3114 */	NdrFcShort( 0x592 ),	/* Type Offset=1426 */

	/* Parameter fRelease */

/* 3116 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3118 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3122 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3124 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumFormatEtc */

/* 3128 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3130 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3132 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3138 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dwDirection */

/* 3140 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3142 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenumFormatEtc */

/* 3146 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3148 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3150 */	NdrFcShort( 0x380 ),	/* Type Offset=896 */

	/* Return value */

/* 3152 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DAdvise */

/* 3158 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3160 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 3162 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3168 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pformatetc */

/* 3170 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3172 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3174 */	NdrFcShort( 0x358 ),	/* Type Offset=856 */

	/* Parameter advf */

/* 3176 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3178 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAdvSink */

/* 3182 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3186 */	NdrFcShort( 0x39a ),	/* Type Offset=922 */

	/* Parameter pdwConnection */

/* 3188 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3190 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3194 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3196 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DUnadvise */

/* 3200 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3202 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 3204 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3210 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwConnection */

/* 3212 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3214 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3218 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumDAdvise */

/* 3224 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3226 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3228 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3234 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenumAdvise */

/* 3236 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3238 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3240 */	NdrFcShort( 0x3d2 ),	/* Type Offset=978 */

	/* Return value */

/* 3242 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3244 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadMultiple */

/* 3248 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3250 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3252 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3258 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter cpspec */

/* 3260 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3262 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpspec */

/* 3266 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3268 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3270 */	NdrFcShort( 0x5e0 ),	/* Type Offset=1504 */

	/* Parameter rgpropvar */

/* 3272 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3274 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3276 */	NdrFcShort( 0x9aa ),	/* Type Offset=2474 */

	/* Return value */

/* 3278 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3280 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteMultiple */

/* 3284 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3286 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 3288 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3290 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3294 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter cpspec */

/* 3296 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3298 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpspec */

/* 3302 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3304 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3306 */	NdrFcShort( 0x5e0 ),	/* Type Offset=1504 */

	/* Parameter rgpropvar */

/* 3308 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3312 */	NdrFcShort( 0x9aa ),	/* Type Offset=2474 */

	/* Parameter propidNameFirst */

/* 3314 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3316 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3320 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3322 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteMultiple */

/* 3326 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3328 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 3330 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3336 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter cpspec */

/* 3338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3340 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpspec */

/* 3344 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3346 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3348 */	NdrFcShort( 0x5e0 ),	/* Type Offset=1504 */

	/* Return value */

/* 3350 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3352 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadPropertyNames */

/* 3356 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3358 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3360 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3366 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter cpropid */

/* 3368 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3370 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpropid */

/* 3374 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3376 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3378 */	NdrFcShort( 0x9bc ),	/* Type Offset=2492 */

	/* Parameter rglpwstrName */

/* 3380 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3382 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3384 */	NdrFcShort( 0x9c6 ),	/* Type Offset=2502 */

	/* Return value */

/* 3386 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3388 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WritePropertyNames */

/* 3392 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3394 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 3396 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3402 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter cpropid */

/* 3404 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3406 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpropid */

/* 3410 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3412 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3414 */	NdrFcShort( 0x9bc ),	/* Type Offset=2492 */

	/* Parameter rglpwstrName */

/* 3416 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3418 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3420 */	NdrFcShort( 0x9e4 ),	/* Type Offset=2532 */

	/* Return value */

/* 3422 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3424 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePropertyNames */

/* 3428 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3430 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3432 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3438 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter cpropid */

/* 3440 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3442 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgpropid */

/* 3446 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3448 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3450 */	NdrFcShort( 0x9bc ),	/* Type Offset=2492 */

	/* Return value */

/* 3452 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3454 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Enum */

/* 3458 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3460 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3462 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3468 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 3470 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3472 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3474 */	NdrFcShort( 0xa02 ),	/* Type Offset=2562 */

	/* Return value */

/* 3476 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3478 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetTimes */

/* 3482 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3484 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 3486 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3488 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3492 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter pctime */

/* 3494 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3496 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3498 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter patime */

/* 3500 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3502 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3504 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter pmtime */

/* 3506 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3508 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3510 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Return value */

/* 3512 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3514 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetClass */

/* 3518 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3520 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 3522 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3524 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3528 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter clsid */

/* 3530 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3532 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3534 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3536 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3538 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3540 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stat */

/* 3542 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3544 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 3546 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3550 */	NdrFcShort( 0x88 ),	/* 136 */
/* 3552 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pstatpsstg */

/* 3554 */	NdrFcShort( 0x112 ),	/* 274 */
#ifndef _ALPHA_
/* 3556 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3558 */	NdrFcShort( 0xa1c ),	/* Type Offset=2588 */

	/* Return value */

/* 3560 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3562 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 3566 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3568 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3570 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3572 */	NdrFcShort( 0x58 ),	/* 88 */
/* 3574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3576 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter rfmtid */

/* 3578 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3580 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3582 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter pclsid */

/* 3584 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 3586 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3588 */	NdrFcShort( 0xa38 ),	/* Type Offset=2616 */

	/* Parameter grfFlags */

/* 3590 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3592 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfMode */

/* 3596 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3598 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppprstg */

/* 3602 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3604 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3606 */	NdrFcShort( 0xa3c ),	/* Type Offset=2620 */

	/* Return value */

/* 3608 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3610 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3612 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Open */

/* 3614 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3616 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 3618 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3620 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3624 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter rfmtid */

/* 3626 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3628 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3630 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter grfMode */

/* 3632 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3634 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppprstg */

/* 3638 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3640 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3642 */	NdrFcShort( 0xa3c ),	/* Type Offset=2620 */

	/* Return value */

/* 3644 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3646 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Delete */

/* 3650 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3652 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 3654 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3656 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3660 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter rfmtid */

/* 3662 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3664 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3666 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3668 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3670 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */


	/* Procedure Enum */

/* 3674 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3676 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3678 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3684 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */


	/* Parameter ppenum */

/* 3686 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3688 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3690 */	NdrFcShort( 0xa52 ),	/* Type Offset=2642 */

	/* Return value */


	/* Return value */

/* 3692 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3694 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 3698 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3700 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3702 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3706 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3708 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 3710 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3712 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 3716 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 3718 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3720 */	NdrFcShort( 0xa7e ),	/* Type Offset=2686 */

	/* Parameter pceltFetched */

/* 3722 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3724 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3728 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3730 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 3734 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3736 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3738 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3744 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 3746 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3748 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3750 */	NdrFcShort( 0xa02 ),	/* Type Offset=2562 */

	/* Return value */

/* 3752 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3754 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 3758 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3760 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3762 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3766 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3768 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 3770 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3772 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 3776 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 3778 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3780 */	NdrFcShort( 0xa94 ),	/* Type Offset=2708 */

	/* Parameter pceltFetched */

/* 3782 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3784 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3788 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3790 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetClassObject */

/* 3794 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3796 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3798 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3800 */	NdrFcShort( 0x50 ),	/* 80 */
/* 3802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3804 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter rclsid */

/* 3806 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3808 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3810 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter dwClassContext */

/* 3812 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3814 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter locale */

/* 3818 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3820 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 3824 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3826 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3828 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter ppv */

/* 3830 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 3832 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3834 */	NdrFcShort( 0xaa6 ),	/* Type Offset=2726 */

	/* Return value */

/* 3836 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3838 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteFillAppend */

/* 3842 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3844 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3846 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3850 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3852 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pv */

/* 3854 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3856 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3858 */	NdrFcShort( 0x1e2 ),	/* Type Offset=482 */

	/* Parameter cb */

/* 3860 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3862 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbWritten */

/* 3866 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3868 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3872 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3874 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3876 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFillSize */

/* 3878 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3880 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 3882 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3888 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter ulSize */

/* 3890 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 3892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* MIPS & PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3894 */	NdrFcShort( 0x1b0 ),	/* Type Offset=432 */

	/* Return value */

/* 3896 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 3898 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* MIPS & PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Terminate */

/* 3902 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3904 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 3906 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3908 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3910 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3912 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter bCanceled */

/* 3914 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3916 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3920 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3922 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnProgress */

/* 3926 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3928 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3930 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3932 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3936 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter dwProgressCurrent */

/* 3938 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3940 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwProgressMaximum */

/* 3944 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3946 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAccurate */

/* 3950 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3952 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fOwner */

/* 3956 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3958 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3962 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3964 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadDllServer */

/* 3968 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 3970 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 3972 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3974 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3976 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3978 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter Clsid */

/* 3980 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 3982 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3984 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Return value */

/* 3986 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3988 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x14 ),	/* Offset= 20 (22) */
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
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */
/* 26 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 30 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 34 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (4) */
/* 38 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 40 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 42 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 44 */	
			0x11, 0x10,	/* FC_RP */
/* 46 */	NdrFcShort( 0x2 ),	/* Offset= 2 (48) */
/* 48 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 50 */	NdrFcLong( 0x100 ),	/* 256 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 60 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 62 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 64 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 66 */	
			0x11, 0x0,	/* FC_RP */
/* 68 */	NdrFcShort( 0x92 ),	/* Offset= 146 (214) */
/* 70 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 72 */	NdrFcShort( 0x2 ),	/* 2 */
/* 74 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 76 */	NdrFcShort( 0x4 ),	/* 4 */
/* 78 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 80 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 82 */	NdrFcShort( 0x2 ),	/* 2 */
/* 84 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 86 */	NdrFcShort( 0xc ),	/* 12 */
/* 88 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 90 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 92 */	NdrFcShort( 0x2 ),	/* 2 */
/* 94 */	0x18,		/* 24 */
			0x57,		/* FC_ADD_1 */
/* 96 */	NdrFcShort( 0x14 ),	/* 20 */
/* 98 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 100 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 102 */	NdrFcShort( 0x1c ),	/* 28 */
/* 104 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 106 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	0x12, 0x0,	/* FC_UP */
/* 114 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (70) */
/* 116 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x12, 0x0,	/* FC_UP */
/* 124 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (80) */
/* 126 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 132 */	0x12, 0x0,	/* FC_UP */
/* 134 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (90) */
/* 136 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 138 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x1c ),	/* 28 */
/* 150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 164 */	NdrFcShort( 0x14 ),	/* 20 */
/* 166 */	NdrFcShort( 0x14 ),	/* 20 */
/* 168 */	0x12, 0x0,	/* FC_UP */
/* 170 */	NdrFcShort( 0xffffffba ),	/* Offset= -70 (100) */
/* 172 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 174 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 176 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 178 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 180 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 182 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 184 */	NdrFcShort( 0x10 ),	/* 16 */
/* 186 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 192 */	NdrFcShort( 0x4 ),	/* 4 */
/* 194 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 196 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 204 */	0x12, 0x0,	/* FC_UP */
/* 206 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (146) */
/* 208 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 210 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 212 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 214 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 216 */	NdrFcShort( 0x20 ),	/* 32 */
/* 218 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 220 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 222 */	NdrFcShort( 0x1c ),	/* 28 */
/* 224 */	NdrFcShort( 0x1c ),	/* 28 */
/* 226 */	0x12, 0x0,	/* FC_UP */
/* 228 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (182) */
/* 230 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 236 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 238 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 240 */	
			0x11, 0x10,	/* FC_RP */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 246 */	NdrFcLong( 0x10 ),	/* 16 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 256 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 258 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 260 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 262 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 264 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x11, 0x10,	/* FC_RP */
/* 268 */	NdrFcShort( 0xfffffef8 ),	/* Offset= -264 (4) */
/* 270 */	
			0x11, 0x10,	/* FC_RP */
/* 272 */	NdrFcShort( 0x2 ),	/* Offset= 2 (274) */
/* 274 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 276 */	NdrFcLong( 0x101 ),	/* 257 */
/* 280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 284 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 286 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 288 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 290 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 292 */	
			0x11, 0x0,	/* FC_RP */
/* 294 */	NdrFcShort( 0x14 ),	/* Offset= 20 (314) */
/* 296 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 298 */	NdrFcLong( 0xf ),	/* 15 */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 308 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 310 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 312 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 314 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 318 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 322 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 324 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 326 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 328 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (296) */
/* 330 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 332 */	
			0x11, 0x10,	/* FC_RP */
/* 334 */	NdrFcShort( 0x2 ),	/* Offset= 2 (336) */
/* 336 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 338 */	NdrFcLong( 0x102 ),	/* 258 */
/* 342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 346 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 352 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 354 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 356 */	NdrFcShort( 0x8 ),	/* Offset= 8 (364) */
/* 358 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 364 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 366 */	NdrFcShort( 0x10 ),	/* 16 */
/* 368 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 370 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 372 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (358) */
			0x5b,		/* FC_END */
/* 376 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 378 */	NdrFcLong( 0xe ),	/* 14 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 394 */	
			0x11, 0x0,	/* FC_RP */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 402 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 404 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 406 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 408 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (398) */
/* 410 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 412 */	NdrFcLong( 0xc ),	/* 12 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 422 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 424 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 426 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 428 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 430 */	NdrFcShort( 0x2 ),	/* Offset= 2 (432) */
/* 432 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 438 */	
			0x11, 0x0,	/* FC_RP */
/* 440 */	NdrFcShort( 0xffffffb4 ),	/* Offset= -76 (364) */
/* 442 */	
			0x11, 0x10,	/* FC_RP */
/* 444 */	NdrFcShort( 0x2 ),	/* Offset= 2 (446) */
/* 446 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 448 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 450 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 452 */	
			0x11, 0x10,	/* FC_RP */
/* 454 */	NdrFcShort( 0x2 ),	/* Offset= 2 (456) */
/* 456 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 458 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 460 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 462 */	
			0x12, 0x14,	/* FC_UP [alloced_on_stack] */
/* 464 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (296) */
/* 466 */	
			0x11, 0x10,	/* FC_RP */
/* 468 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (296) */
/* 470 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 472 */	NdrFcShort( 0x2 ),	/* Offset= 2 (474) */
/* 474 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 476 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 478 */	
			0x11, 0x0,	/* FC_RP */
/* 480 */	NdrFcShort( 0x2 ),	/* Offset= 2 (482) */
/* 482 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 486 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 490 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 492 */	
			0x11, 0x0,	/* FC_RP */
/* 494 */	NdrFcShort( 0x2 ),	/* Offset= 2 (496) */
/* 496 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 498 */	NdrFcShort( 0x4 ),	/* 4 */
/* 500 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 502 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 504 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 508 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 510 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 512 */	NdrFcShort( 0x4 ),	/* 4 */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x1 ),	/* 1 */
/* 518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 522 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 524 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 526 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 530 */	
			0x11, 0x0,	/* FC_RP */
/* 532 */	NdrFcShort( 0x2 ),	/* Offset= 2 (534) */
/* 534 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 538 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 540 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 542 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 544 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 546 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 548 */	
			0x11, 0x0,	/* FC_RP */
/* 550 */	NdrFcShort( 0x2 ),	/* Offset= 2 (552) */
/* 552 */	
			0x16,		/* FC_PSTRUCT */
			0x7,		/* 7 */
/* 554 */	NdrFcShort( 0x48 ),	/* 72 */
/* 556 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 558 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 566 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 568 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 570 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 572 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff73 ),	/* Offset= -141 (432) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 576 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff4d ),	/* Offset= -179 (398) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 580 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff49 ),	/* Offset= -183 (398) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 584 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff45 ),	/* Offset= -187 (398) */
			0x8,		/* FC_LONG */
/* 588 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 590 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff1d ),	/* Offset= -227 (364) */
			0x8,		/* FC_LONG */
/* 594 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 596 */	
			0x11, 0x10,	/* FC_RP */
/* 598 */	NdrFcShort( 0xffffff44 ),	/* Offset= -188 (410) */
/* 600 */	
			0x11, 0x0,	/* FC_RP */
/* 602 */	NdrFcShort( 0x2 ),	/* Offset= 2 (604) */
/* 604 */	
			0x1c,		/* FC_CVARRAY */
			0x7,		/* 7 */
/* 606 */	NdrFcShort( 0x48 ),	/* 72 */
/* 608 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 610 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 612 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 616 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 618 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x4a,		/* FC_VARIABLE_OFFSET */
/* 620 */	NdrFcShort( 0x48 ),	/* 72 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 632 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 634 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 636 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffab ),	/* Offset= -85 (552) */
			0x5b,		/* FC_END */
/* 640 */	
			0x11, 0x10,	/* FC_RP */
/* 642 */	NdrFcShort( 0x2 ),	/* Offset= 2 (644) */
/* 644 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 646 */	NdrFcLong( 0xd ),	/* 13 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 656 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 658 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 660 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 662 */	
			0x12, 0x0,	/* FC_UP */
/* 664 */	NdrFcShort( 0x2 ),	/* Offset= 2 (666) */
/* 666 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 670 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 672 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 674 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 676 */	
			0x11, 0x10,	/* FC_RP */
/* 678 */	NdrFcShort( 0x2 ),	/* Offset= 2 (680) */
/* 680 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 682 */	NdrFcLong( 0xb ),	/* 11 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 692 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 694 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 696 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 698 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 700 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 702 */	
			0x12, 0x0,	/* FC_UP */
/* 704 */	NdrFcShort( 0xc ),	/* Offset= 12 (716) */
/* 706 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 708 */	NdrFcShort( 0x2 ),	/* 2 */
/* 710 */	0x9,		/* 9 */
			0x0,		/*  */
/* 712 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 714 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 716 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 720 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (706) */
/* 722 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 724 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 726 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x4 ),	/* 4 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (702) */
/* 736 */	
			0x12, 0x0,	/* FC_UP */
/* 738 */	NdrFcShort( 0x2 ),	/* Offset= 2 (740) */
/* 740 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 742 */	NdrFcShort( 0x10 ),	/* 16 */
/* 744 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 748 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0xfffffe7e ),	/* Offset= -386 (364) */
/* 752 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 754 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (702) */
/* 764 */	
			0x11, 0x0,	/* FC_RP */
/* 766 */	NdrFcShort( 0x2 ),	/* Offset= 2 (768) */
/* 768 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 770 */	NdrFcShort( 0x1 ),	/* 1 */
/* 772 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 774 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 776 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 778 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
#else
			NdrFcShort( 0x18 ),	/* MIPS & PPC Stack size/offset = 24 */
#endif
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 780 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 782 */	
			0x11, 0x0,	/* FC_RP */
/* 784 */	NdrFcShort( 0x2 ),	/* Offset= 2 (786) */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 790 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
#if !defined(_MIPS_) && !defined(_PPC_)
/* 792 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* MIPS & PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 794 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 796 */	
			0x11, 0x0,	/* FC_RP */
/* 798 */	NdrFcShort( 0x50 ),	/* Offset= 80 (878) */
/* 800 */	
			0x13, 0x0,	/* FC_OP */
/* 802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (804) */
/* 804 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 806 */	NdrFcShort( 0x4 ),	/* 4 */
/* 808 */	NdrFcShort( 0x2 ),	/* 2 */
/* 810 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 814 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31946) */
/* 816 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 820 */	NdrFcShort( 0xfffffea6 ),	/* Offset= -346 (474) */
/* 822 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (821) */
/* 824 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 826 */	NdrFcShort( 0x1 ),	/* 1 */
/* 828 */	NdrFcShort( 0x2 ),	/* 2 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (800) */
/* 834 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 838 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 842 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 844 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0xc ),	/* 12 */
/* 848 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (834) */
/* 850 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 852 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 854 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 856 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 858 */	NdrFcShort( 0x14 ),	/* 20 */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0xc ),	/* Offset= 12 (874) */
/* 864 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (824) */
/* 868 */	0x38,		/* FC_ALIGNM4 */
			0x36,		/* FC_POINTER */
/* 870 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 872 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 874 */	
			0x13, 0x0,	/* FC_OP */
/* 876 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (844) */
/* 878 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 882 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 884 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 886 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 888 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 890 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 892 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (856) */
/* 894 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 896 */	
			0x11, 0x10,	/* FC_RP */
/* 898 */	NdrFcShort( 0x2 ),	/* Offset= 2 (900) */
/* 900 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 902 */	NdrFcLong( 0x103 ),	/* 259 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 912 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 914 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 916 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 918 */	
			0x11, 0x0,	/* FC_RP */
/* 920 */	NdrFcShort( 0x28 ),	/* Offset= 40 (960) */
/* 922 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 924 */	NdrFcLong( 0x10f ),	/* 271 */
/* 928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 936 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 938 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 940 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 942 */	NdrFcShort( 0x20 ),	/* 32 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 946 */	NdrFcShort( 0xe ),	/* Offset= 14 (960) */
/* 948 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 950 */	NdrFcShort( 0xffffffa2 ),	/* Offset= -94 (856) */
/* 952 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 954 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdf ),	/* Offset= -33 (922) */
			0x8,		/* FC_LONG */
/* 958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 960 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 964 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 966 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 968 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 970 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 972 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 974 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (940) */
/* 976 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 978 */	
			0x11, 0x10,	/* FC_RP */
/* 980 */	NdrFcShort( 0x2 ),	/* Offset= 2 (982) */
/* 982 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 984 */	NdrFcLong( 0x105 ),	/* 261 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 994 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 996 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 998 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1000 */	
			0x12, 0x0,	/* FC_UP */
/* 1002 */	NdrFcShort( 0xffffff6e ),	/* Offset= -146 (856) */
/* 1004 */	
			0x12, 0x0,	/* FC_UP */
/* 1006 */	NdrFcShort( 0x176 ),	/* Offset= 374 (1380) */
/* 1008 */	
			0x12, 0x0,	/* FC_UP */
/* 1010 */	NdrFcShort( 0x160 ),	/* Offset= 352 (1362) */
/* 1012 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1014 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1022) */
/* 1024 */	NdrFcLong( 0x20 ),	/* 32 */
/* 1028 */	NdrFcShort( 0x28 ),	/* Offset= 40 (1068) */
/* 1030 */	NdrFcLong( 0x40 ),	/* 64 */
/* 1034 */	NdrFcShort( 0x7e ),	/* Offset= 126 (1160) */
/* 1036 */	NdrFcLong( 0x10 ),	/* 16 */
/* 1040 */	NdrFcShort( 0x90 ),	/* Offset= 144 (1184) */
/* 1042 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1046 */	NdrFcShort( 0x116 ),	/* Offset= 278 (1324) */
/* 1048 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1052 */	NdrFcShort( 0xfffffe9e ),	/* Offset= -354 (698) */
/* 1054 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1058 */	NdrFcShort( 0x3a ),	/* Offset= 58 (1116) */
/* 1060 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1064 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1116) */
/* 1066 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1065) */
/* 1068 */	
			0x12, 0x0,	/* FC_UP */
/* 1070 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1072) */
/* 1072 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1074 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1076 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1078 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1082 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31678) */
/* 1084 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1088 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1092) */
/* 1090 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31670) */
/* 1092 */	
			0x12, 0x0,	/* FC_UP */
/* 1094 */	NdrFcShort( 0x2c ),	/* Offset= 44 (1138) */
/* 1096 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1098 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1100 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1102 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1106 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31654) */
/* 1108 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1112 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1116) */
/* 1114 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31646) */
/* 1116 */	
			0x12, 0x0,	/* FC_UP */
/* 1118 */	NdrFcShort( 0xc ),	/* Offset= 12 (1130) */
/* 1120 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1124 */	0x9,		/* 9 */
			0x0,		/*  */
/* 1126 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1128 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1130 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1134 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (1120) */
/* 1136 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1138 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1140 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1142 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1146 */	NdrFcShort( 0xc ),	/* 12 */
/* 1148 */	NdrFcShort( 0xc ),	/* 12 */
/* 1150 */	0x12, 0x0,	/* FC_UP */
/* 1152 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (1096) */
/* 1154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1158 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1160 */	
			0x12, 0x0,	/* FC_UP */
/* 1162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1164) */
/* 1164 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1166 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1168 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1170 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1174 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31586) */
/* 1176 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1180 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (1116) */
/* 1182 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31578) */
/* 1184 */	
			0x12, 0x0,	/* FC_UP */
/* 1186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1188) */
/* 1188 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1190 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1192 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1194 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1198 */	NdrFcShort( 0xa ),	/* Offset= 10 (1208) */
/* 1200 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1204 */	NdrFcShort( 0x3a ),	/* Offset= 58 (1262) */
/* 1206 */	NdrFcShort( 0x76 ),	/* Offset= 118 (1324) */
/* 1208 */	
			0x12, 0x0,	/* FC_UP */
/* 1210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1212) */
/* 1212 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1214 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1216 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1218 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1222 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31538) */
/* 1224 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1228 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1232) */
/* 1230 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31530) */
/* 1232 */	
			0x12, 0x0,	/* FC_UP */
/* 1234 */	NdrFcShort( 0xc ),	/* Offset= 12 (1246) */
/* 1236 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1240 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1242 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1244 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1246 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1248 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1250 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (1236) */
/* 1252 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1254 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1256 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1258 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1260 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1262 */	
			0x12, 0x0,	/* FC_UP */
/* 1264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1266) */
/* 1266 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1268 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1270 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1272 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1276 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31484) */
/* 1278 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1282 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1286) */
/* 1284 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31476) */
/* 1286 */	
			0x12, 0x0,	/* FC_UP */
/* 1288 */	NdrFcShort( 0x1a ),	/* Offset= 26 (1314) */
/* 1290 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 1292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1294 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 1296 */	0x2,		/* FC_CHAR */
			0x2,		/* FC_CHAR */
/* 1298 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1300 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1304 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1306 */	NdrFcShort( 0xfffffffe ),	/* -2 */
/* 1308 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1310 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (1290) */
/* 1312 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1314 */	
			0x17,		/* FC_CSTRUCT */
			0x1,		/* 1 */
/* 1316 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1318 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (1300) */
/* 1320 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1322 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1324 */	
			0x12, 0x0,	/* FC_UP */
/* 1326 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1328) */
/* 1328 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 1330 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1332 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1334 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 1338 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31422) */
/* 1340 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 1344 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1348) */
/* 1346 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31414) */
/* 1348 */	
			0x12, 0x0,	/* FC_UP */
/* 1350 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1352) */
/* 1352 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1356 */	NdrFcShort( 0xffffff14 ),	/* Offset= -236 (1120) */
/* 1358 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1360 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1362 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1364 */	NdrFcShort( 0xc ),	/* 12 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0xc ),	/* Offset= 12 (1380) */
/* 1370 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1372 */	NdrFcShort( 0xfffffe98 ),	/* Offset= -360 (1012) */
/* 1374 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1376 */	NdrFcShort( 0xfffffaa4 ),	/* Offset= -1372 (4) */
/* 1378 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1380 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1382 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1384 */	NdrFcShort( 0xc ),	/* 12 */
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0xfffffe84 ),	/* Offset= -380 (1008) */
/* 1390 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1392 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1398) */
/* 1394 */	
			0x13, 0x0,	/* FC_OP */
/* 1396 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (1362) */
/* 1398 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1400 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1402 */	NdrFcShort( 0xc ),	/* 12 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1394) */
/* 1408 */	
			0x11, 0x0,	/* FC_RP */
/* 1410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1412) */
/* 1412 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1416 */	NdrFcShort( 0xc ),	/* 12 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1420 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (1394) */
/* 1422 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1424 */	NdrFcShort( 0xfffffdc8 ),	/* Offset= -568 (856) */
/* 1426 */	
			0x12, 0x0,	/* FC_UP */
/* 1428 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1450) */
/* 1430 */	
			0x12, 0x0,	/* FC_UP */
/* 1432 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1434) */
/* 1434 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1436 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1440 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1440) */
/* 1442 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1444 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1446 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (1362) */
/* 1448 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1450 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1452 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1454 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1430) */
/* 1460 */	
			0x11, 0x0,	/* FC_RP */
/* 1462 */	NdrFcShort( 0xfffffda2 ),	/* Offset= -606 (856) */
/* 1464 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1466 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1468 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1470 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1472) */
/* 1472 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1474 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1476 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1480 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31280) */
/* 1482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1486 */	NdrFcShort( 0xfffffcec ),	/* Offset= -788 (698) */
/* 1488 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1488) */
/* 1490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1496) */
/* 1498 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1500 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdb ),	/* Offset= -37 (1464) */
			0x5b,		/* FC_END */
/* 1504 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1510 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1512 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1516 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1518 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1490) */
/* 1520 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1522 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x7,		/* FC_USHORT */
/* 1524 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 1526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1528 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1530) */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	NdrFcShort( 0x32 ),	/* 50 */
/* 1534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1538) */
/* 1540 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1544 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1544) */
/* 1546 */	NdrFcLong( 0x11 ),	/* 17 */
/* 1550 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-31216) */
/* 1552 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1556 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31206) */
/* 1558 */	NdrFcLong( 0x12 ),	/* 18 */
/* 1562 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31200) */
/* 1564 */	NdrFcLong( 0xb ),	/* 11 */
/* 1568 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31194) */
/* 1570 */	NdrFcLong( 0xffff ),	/* 65535 */
/* 1574 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-31188) */
/* 1576 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1580 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31180) */
/* 1582 */	NdrFcLong( 0x13 ),	/* 19 */
/* 1586 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31174) */
/* 1588 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1592 */	NdrFcShort( 0xffff800a ),	/* Offset= -32758 (-31166) */
/* 1594 */	NdrFcLong( 0xa ),	/* 10 */
/* 1598 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31162) */
/* 1600 */	NdrFcLong( 0x14 ),	/* 20 */
/* 1604 */	NdrFcShort( 0xfffffb6c ),	/* Offset= -1172 (432) */
/* 1606 */	NdrFcLong( 0x15 ),	/* 21 */
/* 1610 */	NdrFcShort( 0xfffffb66 ),	/* Offset= -1178 (432) */
/* 1612 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1616 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31140) */
/* 1618 */	NdrFcLong( 0x6 ),	/* 6 */
/* 1622 */	NdrFcShort( 0xfffffb5a ),	/* Offset= -1190 (432) */
/* 1624 */	NdrFcLong( 0x7 ),	/* 7 */
/* 1628 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-31128) */
/* 1630 */	NdrFcLong( 0x40 ),	/* 64 */
/* 1634 */	NdrFcShort( 0xfffffb2c ),	/* Offset= -1236 (398) */
/* 1636 */	NdrFcLong( 0x48 ),	/* 72 */
/* 1640 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (1836) */
/* 1642 */	NdrFcLong( 0x41 ),	/* 65 */
/* 1646 */	NdrFcShort( 0xcc ),	/* Offset= 204 (1850) */
/* 1648 */	NdrFcLong( 0x46 ),	/* 70 */
/* 1652 */	NdrFcShort( 0xc6 ),	/* Offset= 198 (1850) */
/* 1654 */	NdrFcLong( 0x47 ),	/* 71 */
/* 1658 */	NdrFcShort( 0xd4 ),	/* Offset= 212 (1870) */
/* 1660 */	NdrFcLong( 0x42 ),	/* 66 */
/* 1664 */	NdrFcShort( 0xfffffb1a ),	/* Offset= -1254 (410) */
/* 1666 */	NdrFcLong( 0x44 ),	/* 68 */
/* 1670 */	NdrFcShort( 0xfffffb14 ),	/* Offset= -1260 (410) */
/* 1672 */	NdrFcLong( 0x43 ),	/* 67 */
/* 1676 */	NdrFcShort( 0xfffffc1c ),	/* Offset= -996 (680) */
/* 1678 */	NdrFcLong( 0x45 ),	/* 69 */
/* 1682 */	NdrFcShort( 0xfffffc16 ),	/* Offset= -1002 (680) */
/* 1684 */	NdrFcLong( 0x8 ),	/* 8 */
/* 1688 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (1930) */
/* 1690 */	NdrFcLong( 0xfff ),	/* 4095 */
/* 1694 */	NdrFcShort( 0x9c ),	/* Offset= 156 (1850) */
/* 1696 */	NdrFcLong( 0x1e ),	/* 30 */
/* 1700 */	NdrFcShort( 0xf0 ),	/* Offset= 240 (1940) */
/* 1702 */	NdrFcLong( 0x1f ),	/* 31 */
/* 1706 */	NdrFcShort( 0xfffffb30 ),	/* Offset= -1232 (474) */
/* 1708 */	NdrFcLong( 0x1011 ),	/* 4113 */
/* 1712 */	NdrFcShort( 0x8a ),	/* Offset= 138 (1850) */
/* 1714 */	NdrFcLong( 0x1002 ),	/* 4098 */
/* 1718 */	NdrFcShort( 0xec ),	/* Offset= 236 (1954) */
/* 1720 */	NdrFcLong( 0x1012 ),	/* 4114 */
/* 1724 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (1954) */
/* 1726 */	NdrFcLong( 0x100b ),	/* 4107 */
/* 1730 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (1954) */
/* 1732 */	NdrFcLong( 0x1003 ),	/* 4099 */
/* 1736 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (1984) */
/* 1738 */	NdrFcLong( 0x1013 ),	/* 4115 */
/* 1742 */	NdrFcShort( 0xf2 ),	/* Offset= 242 (1984) */
/* 1744 */	NdrFcLong( 0x1004 ),	/* 4100 */
/* 1748 */	NdrFcShort( 0x10a ),	/* Offset= 266 (2014) */
/* 1750 */	NdrFcLong( 0x100a ),	/* 4106 */
/* 1754 */	NdrFcShort( 0xe6 ),	/* Offset= 230 (1984) */
/* 1756 */	NdrFcLong( 0x1014 ),	/* 4116 */
/* 1760 */	NdrFcShort( 0x120 ),	/* Offset= 288 (2048) */
/* 1762 */	NdrFcLong( 0x1015 ),	/* 4117 */
/* 1766 */	NdrFcShort( 0x11a ),	/* Offset= 282 (2048) */
/* 1768 */	NdrFcLong( 0x1005 ),	/* 4101 */
/* 1772 */	NdrFcShort( 0x132 ),	/* Offset= 306 (2078) */
/* 1774 */	NdrFcLong( 0x1006 ),	/* 4102 */
/* 1778 */	NdrFcShort( 0x10e ),	/* Offset= 270 (2048) */
/* 1780 */	NdrFcLong( 0x1007 ),	/* 4103 */
/* 1784 */	NdrFcShort( 0x126 ),	/* Offset= 294 (2078) */
/* 1786 */	NdrFcLong( 0x1040 ),	/* 4160 */
/* 1790 */	NdrFcShort( 0x142 ),	/* Offset= 322 (2112) */
/* 1792 */	NdrFcLong( 0x1048 ),	/* 4168 */
/* 1796 */	NdrFcShort( 0x15e ),	/* Offset= 350 (2146) */
/* 1798 */	NdrFcLong( 0x1047 ),	/* 4167 */
/* 1802 */	NdrFcShort( 0x18c ),	/* Offset= 396 (2198) */
/* 1804 */	NdrFcLong( 0x1008 ),	/* 4104 */
/* 1808 */	NdrFcShort( 0x1b6 ),	/* Offset= 438 (2246) */
/* 1810 */	NdrFcLong( 0x1fff ),	/* 8191 */
/* 1814 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (2298) */
/* 1816 */	NdrFcLong( 0x101e ),	/* 4126 */
/* 1820 */	NdrFcShort( 0x210 ),	/* Offset= 528 (2348) */
/* 1822 */	NdrFcLong( 0x101f ),	/* 4127 */
/* 1826 */	NdrFcShort( 0x23c ),	/* Offset= 572 (2398) */
/* 1828 */	NdrFcLong( 0x100c ),	/* 4108 */
/* 1832 */	NdrFcShort( 0x25c ),	/* Offset= 604 (2436) */
/* 1834 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1833) */
/* 1836 */	
			0x13, 0x0,	/* FC_OP */
/* 1838 */	NdrFcShort( 0xfffffa3e ),	/* Offset= -1474 (364) */
/* 1840 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1844 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1850 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1852 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1854 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1856 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1858 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1860 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1862 */	0x13, 0x0,	/* FC_OP */
/* 1864 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1840) */
/* 1866 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1868 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1870 */	
			0x13, 0x0,	/* FC_OP */
/* 1872 */	NdrFcShort( 0xc ),	/* Offset= 12 (1884) */
/* 1874 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1876 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1878 */	0x10,		/* 16 */
			0x59,		/* FC_CALLBACK */
/* 1880 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1882 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1884 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1886 */	NdrFcShort( 0xc ),	/* 12 */
/* 1888 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1890 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1896 */	0x13, 0x0,	/* FC_OP */
/* 1898 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1874) */
/* 1900 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1902 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1904 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1906 */	
			0x13, 0x0,	/* FC_OP */
/* 1908 */	NdrFcShort( 0xc ),	/* Offset= 12 (1920) */
/* 1910 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1912 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1914 */	0x9,		/* 9 */
			0x0,		/*  */
/* 1916 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1918 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1920 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 1922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1924 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (1910) */
/* 1926 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1928 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1930 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1932 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1934 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1938 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1906) */
/* 1940 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1942 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 1944 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1946 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1948 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1952 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1954 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1958 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1960 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1966 */	0x13, 0x0,	/* FC_OP */
/* 1968 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1944) */
/* 1970 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1972 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1974 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1976 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1978 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1982 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1984 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1990 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1992 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1994 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1996 */	0x13, 0x0,	/* FC_OP */
/* 1998 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1974) */
/* 2000 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2002 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2004 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2006 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2008 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	0xa,		/* FC_FLOAT */
			0x5b,		/* FC_END */
/* 2014 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2018 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2020 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2024 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2026 */	0x13, 0x0,	/* FC_OP */
/* 2028 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2004) */
/* 2030 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2032 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2034 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2038 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2042 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2044 */	NdrFcShort( 0xfffff9b4 ),	/* Offset= -1612 (432) */
/* 2046 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2048 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2052 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2054 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2056 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2058 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2060 */	0x13, 0x0,	/* FC_OP */
/* 2062 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (2034) */
/* 2064 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2066 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2068 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 2070 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2072 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	0xc,		/* FC_DOUBLE */
			0x5b,		/* FC_END */
/* 2078 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2082 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2084 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2086 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2088 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2090 */	0x13, 0x0,	/* FC_OP */
/* 2092 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2068) */
/* 2094 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2096 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2098 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2102 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2106 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2108 */	NdrFcShort( 0xfffff952 ),	/* Offset= -1710 (398) */
/* 2110 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2112 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2116 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2118 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2120 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2124 */	0x13, 0x0,	/* FC_OP */
/* 2126 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (2098) */
/* 2128 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2130 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2132 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2136 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2140 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2142 */	NdrFcShort( 0xfffff90e ),	/* Offset= -1778 (364) */
/* 2144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2146 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2150 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2152 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2158 */	0x13, 0x0,	/* FC_OP */
/* 2160 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (2132) */
/* 2162 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2164 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2166 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2168 */	NdrFcShort( 0xc ),	/* 12 */
/* 2170 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2174 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2176 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2178 */	NdrFcShort( 0xc ),	/* 12 */
/* 2180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2188 */	0x13, 0x0,	/* FC_OP */
/* 2190 */	NdrFcShort( 0xfffffec4 ),	/* Offset= -316 (1874) */
/* 2192 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2194 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffec9 ),	/* Offset= -311 (1884) */
			0x5b,		/* FC_END */
/* 2198 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2200 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2202 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2204 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2206 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2210 */	0x13, 0x0,	/* FC_OP */
/* 2212 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (2166) */
/* 2214 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2216 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2218 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2220 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2222 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0xfffffec0 ),	/* Offset= -320 (1906) */
/* 2228 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2232 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2240 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2242 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (2218) */
/* 2244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2246 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2250 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2252 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2256 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2258 */	0x13, 0x0,	/* FC_OP */
/* 2260 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (2228) */
/* 2262 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2264 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2266 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2270 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2276 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2284 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2288 */	0x13, 0x0,	/* FC_OP */
/* 2290 */	NdrFcShort( 0xfffffe3e ),	/* Offset= -450 (1840) */
/* 2292 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2294 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe43 ),	/* Offset= -445 (1850) */
			0x5b,		/* FC_END */
/* 2298 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2300 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2302 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2304 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2306 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2310 */	0x13, 0x0,	/* FC_OP */
/* 2312 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (2266) */
/* 2314 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2316 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2318 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2320 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2322 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2326 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2328 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2330 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2340 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2342 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 2344 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2346 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2348 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2352 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2354 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2356 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2358 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2360 */	0x13, 0x0,	/* FC_OP */
/* 2362 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (2318) */
/* 2364 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2366 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2368 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2372 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2376 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2378 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2380 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2392 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2394 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2396 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2398 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2400 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2402 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2404 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2406 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2408 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2410 */	0x13, 0x0,	/* FC_OP */
/* 2412 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (2368) */
/* 2414 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2416 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2418 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2422 */	0x18,		/* 24 */
			0x0,		/*  */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2430 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2432 */	NdrFcShort( 0x18 ),	/* Offset= 24 (2456) */
/* 2434 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2436 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 2438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2440 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2442 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 2444 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2446 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2448 */	0x13, 0x0,	/* FC_OP */
/* 2450 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (2418) */
/* 2452 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2454 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2456 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 2458 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2462 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2462) */
/* 2464 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2466 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2468 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2470 */	NdrFcShort( 0xfffffc4c ),	/* Offset= -948 (1522) */
/* 2472 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2474 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x7,		/* 7 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2480 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2482 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 2486 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2488 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (2456) */
/* 2490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2492 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2494 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2496 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2498 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2500 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2502 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2504 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2506 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2508 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2510 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2512 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2514 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2524 */	0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2526 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2528 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2530 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2532 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 2534 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2536 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2538 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2540 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 2542 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 2544 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2554 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 2556 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2558 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 2560 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2562 */	
			0x11, 0x10,	/* FC_RP */
/* 2564 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2566) */
/* 2566 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2568 */	NdrFcLong( 0x139 ),	/* 313 */
/* 2572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2576 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2578 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2580 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2582 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2584 */	
			0x11, 0x0,	/* FC_RP */
/* 2586 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2588) */
/* 2588 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 2590 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2592 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2594 */	NdrFcShort( 0xfffff74a ),	/* Offset= -2230 (364) */
/* 2596 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2598 */	NdrFcShort( 0xfffff746 ),	/* Offset= -2234 (364) */
/* 2600 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2602 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff763 ),	/* Offset= -2205 (398) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2606 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff75f ),	/* Offset= -2209 (398) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 2610 */	0x0,		/* 0 */
			NdrFcShort( 0xfffff75b ),	/* Offset= -2213 (398) */
			0x8,		/* FC_LONG */
/* 2614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2616 */	
			0x12, 0x0,	/* FC_UP */
/* 2618 */	NdrFcShort( 0xfffff732 ),	/* Offset= -2254 (364) */
/* 2620 */	
			0x11, 0x10,	/* FC_RP */
/* 2622 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2624) */
/* 2624 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2626 */	NdrFcLong( 0x138 ),	/* 312 */
/* 2630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2634 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2638 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2640 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2642 */	
			0x11, 0x10,	/* FC_RP */
/* 2644 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2646) */
/* 2646 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 2648 */	NdrFcLong( 0x13b ),	/* 315 */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 2658 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2660 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2662 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 2664 */	
			0x11, 0x0,	/* FC_RP */
/* 2666 */	NdrFcShort( 0x14 ),	/* Offset= 20 (2686) */
/* 2668 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2670 */	NdrFcShort( 0xc ),	/* 12 */
/* 2672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2674 */	NdrFcShort( 0x8 ),	/* Offset= 8 (2682) */
/* 2676 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 2678 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 2680 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2682 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 2684 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 2686 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2690 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2692 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2694 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2696 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2698 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2700 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (2668) */
/* 2702 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2704 */	
			0x11, 0x0,	/* FC_RP */
/* 2706 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2708) */
/* 2708 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 2710 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2712 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2714 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2716 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2718 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2720 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2722 */	NdrFcShort( 0xffffff7a ),	/* Offset= -134 (2588) */
/* 2724 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2726 */	
			0x11, 0x10,	/* FC_RP */
/* 2728 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2730) */
/* 2730 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 2732 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 2734 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif

			0x0
        }
    };

const CInterfaceProxyVtbl * _objidl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IEnumUnknownProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumStringProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumMonikerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumFORMATETCProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumSTATDATAProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ILockBytesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistFileProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPersistProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumSTATSTGProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBindCtxProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IDataObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IMonikerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAdviseSinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRunningObjectTableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IFillLockBytesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRootStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISurrogateProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAdviseSink2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IRunnableObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISequentialStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertyStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumSTATPROPSTGProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPropertySetStorageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumSTATPROPSETSTGProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IClassActivatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IProgressNotifyProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IROTDataProxyVtbl,
    0
};

const CInterfaceStubVtbl * _objidl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IEnumUnknownStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumStringStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumMonikerStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumFORMATETCStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumSTATDATAStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_ILockBytesStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistFileStubVtbl,
    ( CInterfaceStubVtbl *) &_IStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_IPersistStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumSTATSTGStubVtbl,
    ( CInterfaceStubVtbl *) &_IBindCtxStubVtbl,
    ( CInterfaceStubVtbl *) &_IDataObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IMonikerStubVtbl,
    ( CInterfaceStubVtbl *) &_IAdviseSinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IRunningObjectTableStubVtbl,
    ( CInterfaceStubVtbl *) &_IFillLockBytesStubVtbl,
    ( CInterfaceStubVtbl *) &_IRootStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_ISurrogateStubVtbl,
    ( CInterfaceStubVtbl *) &_IAdviseSink2StubVtbl,
    ( CInterfaceStubVtbl *) &_IRunnableObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_ISequentialStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertyStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumSTATPROPSTGStubVtbl,
    ( CInterfaceStubVtbl *) &_IPropertySetStorageStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumSTATPROPSETSTGStubVtbl,
    ( CInterfaceStubVtbl *) &_IClassActivatorStubVtbl,
    ( CInterfaceStubVtbl *) &_IProgressNotifyStubVtbl,
    ( CInterfaceStubVtbl *) &_IROTDataStubVtbl,
    0
};

PCInterfaceName const _objidl_InterfaceNamesList[] = 
{
    "IEnumUnknown",
    "IEnumString",
    "IEnumMoniker",
    "IEnumFORMATETC",
    "IEnumSTATDATA",
    "IPersistStream",
    "ILockBytes",
    "IPersistStorage",
    "IStorage",
    "IPersistFile",
    "IStream",
    "IPersist",
    "IEnumSTATSTG",
    "IBindCtx",
    "IDataObject",
    "IMoniker",
    "IAdviseSink",
    "IRunningObjectTable",
    "IFillLockBytes",
    "IRootStorage",
    "ISurrogate",
    "IAdviseSink2",
    "IRunnableObject",
    "ISequentialStream",
    "IPropertyStorage",
    "IEnumSTATPROPSTG",
    "IPropertySetStorage",
    "IEnumSTATPROPSETSTG",
    "IClassActivator",
    "IProgressNotify",
    "IROTData",
    0
};


#define _objidl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _objidl, pIID, n)

int __stdcall _objidl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _objidl, 31, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _objidl, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _objidl, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _objidl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _objidl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _objidl, 31, *pIndex )
    
}

const ExtendedProxyFileInfo objidl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _objidl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _objidl_StubVtblList,
    (const PCInterfaceName * ) & _objidl_InterfaceNamesList,
    0, // no delegation
    & _objidl_IID_Lookup, 
    31,
    2
};
