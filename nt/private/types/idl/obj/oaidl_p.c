/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 02:54:21 2019
 */
/* Compiler settings for oaidl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "oaidl.h"

#define TYPE_FORMAT_STRING_SIZE   2201                              
#define PROC_FORMAT_STRING_SIZE   2005                              

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


/* Standard interface: IOleAutomationTypes, ver. 1.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICreateTypeInfo, ver. 0.0,
   GUID={0x00020405,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICreateTypeInfo2, ver. 0.0,
   GUID={0x0002040E,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICreateTypeLib, ver. 0.0,
   GUID={0x00020406,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ICreateTypeLib2, ver. 0.0,
   GUID={0x0002040F,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IDispatch_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IDispatch_RemoteInvoke_Proxy( 
    IDispatch __RPC_FAR * This,
    /* [in] */ DISPID dispIdMember,
    /* [in] */ REFIID riid,
    /* [in] */ LCID lcid,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DISPPARAMS __RPC_FAR *pDispParams,
    /* [size_is][out] */ VARIANTARG __RPC_FAR *rgVtRef,
    /* [in] */ UINT cVtRef,
    /* [out] */ VARIANT __RPC_FAR *pVarResult,
    /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
    /* [out] */ UINT __RPC_FAR *pArgErr)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pArgErr);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dispIdMember,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&lcid,
                  ( unsigned char __RPC_FAR * )&dwFlags,
                  ( unsigned char __RPC_FAR * )&pDispParams,
                  ( unsigned char __RPC_FAR * )&rgVtRef,
                  ( unsigned char __RPC_FAR * )&cVtRef,
                  ( unsigned char __RPC_FAR * )&pVarResult,
                  ( unsigned char __RPC_FAR * )&pExcepInfo,
                  ( unsigned char __RPC_FAR * )&pArgErr);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[108],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IDispatch_RemoteInvoke_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDispatch __RPC_FAR *This;
        DISPID dispIdMember;
        REFIID riid;
        LCID lcid;
        DWORD dwFlags;
        DISPPARAMS __RPC_FAR *pDispParams;
        VARIANTARG __RPC_FAR *rgVtRef;
        UINT cVtRef;
        VARIANT __RPC_FAR *pVarResult;
        EXCEPINFO __RPC_FAR *pExcepInfo;
        UINT __RPC_FAR *pArgErr;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IDispatch __RPC_FAR *This;
        char Pad0[4];
        DISPID dispIdMember;
        char Pad1[4];
        REFIID riid;
        char Pad2[4];
        LCID lcid;
        char Pad3[4];
        DWORD dwFlags;
        char Pad4[4];
        DISPPARAMS __RPC_FAR *pDispParams;
        char Pad5[4];
        VARIANTARG __RPC_FAR *rgVtRef;
        char Pad6[4];
        UINT cVtRef;
        char Pad7[4];
        VARIANT __RPC_FAR *pVarResult;
        char Pad8[4];
        EXCEPINFO __RPC_FAR *pExcepInfo;
        char Pad9[4];
        UINT __RPC_FAR *pArgErr;
        char Pad10[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IDispatch_Invoke_Stub(
                                (IDispatch *) pParamStruct->This,
                                pParamStruct->dispIdMember,
                                pParamStruct->riid,
                                pParamStruct->lcid,
                                pParamStruct->dwFlags,
                                pParamStruct->pDispParams,
                                pParamStruct->rgVtRef,
                                pParamStruct->cVtRef,
                                pParamStruct->pVarResult,
                                pParamStruct->pExcepInfo,
                                pParamStruct->pArgErr);
    
}

static const unsigned short IDispatch_FormatStringOffsetTable[] = 
    {
    0,
    24,
    60,
    108
    };

static const STUB_THUNK IDispatch_StubThunkTable[] = 
    {
    0,
    0,
    0,
    IDispatch_RemoteInvoke_Thunk
    };

static const MIDL_SERVER_INFO IDispatch_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IDispatch_FormatStringOffsetTable[-3],
    &IDispatch_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IDispatch_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IDispatch_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IDispatchProxyVtbl = 
{
    &IDispatch_ProxyInfo,
    &IID_IDispatch,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IDispatch::GetTypeInfoCount */ ,
    (void *)-1 /* IDispatch::GetTypeInfo */ ,
    (void *)-1 /* IDispatch::GetIDsOfNames */ ,
    IDispatch_Invoke_Proxy
};

const CInterfaceStubVtbl _IDispatchStubVtbl =
{
    &IID_IDispatch,
    &IDispatch_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumVARIANT, ver. 0.0,
   GUID={0x00020404,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumVARIANT_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumVARIANT_RemoteNext_Proxy( 
    IEnumVARIANT __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ VARIANT __RPC_FAR *rgVar,
    /* [out] */ ULONG __RPC_FAR *pCeltFetched)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCeltFetched);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[186],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[186],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgVar,
                  ( unsigned char __RPC_FAR * )&pCeltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[186],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumVARIANT_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumVARIANT __RPC_FAR *This;
        ULONG celt;
        VARIANT __RPC_FAR *rgVar;
        ULONG __RPC_FAR *pCeltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumVARIANT __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        VARIANT __RPC_FAR *rgVar;
        char Pad2[4];
        ULONG __RPC_FAR *pCeltFetched;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IEnumVARIANT_Next_Stub(
                                 (IEnumVARIANT *) pParamStruct->This,
                                 pParamStruct->celt,
                                 pParamStruct->rgVar,
                                 pParamStruct->pCeltFetched);
    
}

static const unsigned short IEnumVARIANT_FormatStringOffsetTable[] = 
    {
    186,
    222,
    246,
    264
    };

static const STUB_THUNK IEnumVARIANT_StubThunkTable[] = 
    {
    IEnumVARIANT_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumVARIANT_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumVARIANT_FormatStringOffsetTable[-3],
    &IEnumVARIANT_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumVARIANT_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumVARIANT_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumVARIANTProxyVtbl = 
{
    &IEnumVARIANT_ProxyInfo,
    &IID_IEnumVARIANT,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumVARIANT_Next_Proxy ,
    (void *)-1 /* IEnumVARIANT::Skip */ ,
    (void *)-1 /* IEnumVARIANT::Reset */ ,
    (void *)-1 /* IEnumVARIANT::Clone */
};

const CInterfaceStubVtbl _IEnumVARIANTStubVtbl =
{
    &IID_IEnumVARIANT,
    &IEnumVARIANT_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeComp, ver. 0.0,
   GUID={0x00020403,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypeComp_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBind_Proxy( 
    ITypeComp __RPC_FAR * This,
    /* [in] */ LPOLESTR szName,
    /* [in] */ ULONG lHashVal,
    /* [in] */ WORD wFlags,
    /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo,
    /* [out] */ DESCKIND __RPC_FAR *pDescKind,
    /* [out] */ PPFUNCDESC ppFuncDesc,
    /* [out] */ PPVARDESC ppVarDesc,
    /* [out] */ ITypeComp __RPC_FAR *__RPC_FAR *ppTypeComp,
    /* [out] */ CLEANLOCALSTORAGE __RPC_FAR *pDummy)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[288],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[288],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&szName,
                  ( unsigned char __RPC_FAR * )&lHashVal,
                  ( unsigned char __RPC_FAR * )&wFlags,
                  ( unsigned char __RPC_FAR * )&ppTInfo,
                  ( unsigned char __RPC_FAR * )&pDescKind,
                  ( unsigned char __RPC_FAR * )&ppFuncDesc,
                  ( unsigned char __RPC_FAR * )&ppVarDesc,
                  ( unsigned char __RPC_FAR * )&ppTypeComp,
                  ( unsigned char __RPC_FAR * )&pDummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[288],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeComp_RemoteBind_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeComp __RPC_FAR *This;
        LPOLESTR szName;
        ULONG lHashVal;
        WORD wFlags;
        char Pad0[2];
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        DESCKIND __RPC_FAR *pDescKind;
        PPFUNCDESC ppFuncDesc;
        PPVARDESC ppVarDesc;
        ITypeComp __RPC_FAR *__RPC_FAR *ppTypeComp;
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeComp __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR szName;
        char Pad1[4];
        ULONG lHashVal;
        char Pad2[4];
        WORD wFlags;
        char Pad3[6];
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        char Pad4[4];
        DESCKIND __RPC_FAR *pDescKind;
        char Pad5[4];
        PPFUNCDESC ppFuncDesc;
        char Pad6[4];
        PPVARDESC ppVarDesc;
        char Pad7[4];
        ITypeComp __RPC_FAR *__RPC_FAR *ppTypeComp;
        char Pad8[4];
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        char Pad9[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeComp_Bind_Stub(
                              (ITypeComp *) pParamStruct->This,
                              pParamStruct->szName,
                              pParamStruct->lHashVal,
                              pParamStruct->wFlags,
                              pParamStruct->ppTInfo,
                              pParamStruct->pDescKind,
                              pParamStruct->ppFuncDesc,
                              pParamStruct->ppVarDesc,
                              pParamStruct->ppTypeComp,
                              pParamStruct->pDummy);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeComp_RemoteBindType_Proxy( 
    ITypeComp __RPC_FAR * This,
    /* [in] */ LPOLESTR szName,
    /* [in] */ ULONG lHashVal,
    /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppTInfo);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&szName,
                  ( unsigned char __RPC_FAR * )&lHashVal,
                  ( unsigned char __RPC_FAR * )&ppTInfo);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[360],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeComp_RemoteBindType_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeComp __RPC_FAR *This;
        LPOLESTR szName;
        ULONG lHashVal;
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeComp __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR szName;
        char Pad1[4];
        ULONG lHashVal;
        char Pad2[4];
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeComp_BindType_Stub(
                                  (ITypeComp *) pParamStruct->This,
                                  pParamStruct->szName,
                                  pParamStruct->lHashVal,
                                  pParamStruct->ppTInfo);
    
}

static const unsigned short ITypeComp_FormatStringOffsetTable[] = 
    {
    288,
    360
    };

static const STUB_THUNK ITypeComp_StubThunkTable[] = 
    {
    ITypeComp_RemoteBind_Thunk,
    ITypeComp_RemoteBindType_Thunk
    };

static const MIDL_SERVER_INFO ITypeComp_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypeComp_FormatStringOffsetTable[-3],
    &ITypeComp_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITypeComp_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypeComp_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITypeCompProxyVtbl = 
{
    &ITypeComp_ProxyInfo,
    &IID_ITypeComp,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ITypeComp_Bind_Proxy ,
    ITypeComp_BindType_Proxy
};

const CInterfaceStubVtbl _ITypeCompStubVtbl =
{
    &IID_ITypeComp,
    &ITypeComp_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeInfo, ver. 0.0,
   GUID={0x00020401,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypeInfo_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetTypeAttr_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [out] */ PPTYPEATTR ppTypeAttr,
    /* [out] */ CLEANLOCALSTORAGE __RPC_FAR *pDummy)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&ppTypeAttr,
                  ( unsigned char __RPC_FAR * )&pDummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[396],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteGetTypeAttr_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        PPTYPEATTR ppTypeAttr;
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        PPTYPEATTR ppTypeAttr;
        char Pad1[4];
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_GetTypeAttr_Stub(
                                     (ITypeInfo *) pParamStruct->This,
                                     pParamStruct->ppTypeAttr,
                                     pParamStruct->pDummy);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetFuncDesc_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [in] */ UINT index,
    /* [out] */ PPFUNCDESC ppFuncDesc,
    /* [out] */ CLEANLOCALSTORAGE __RPC_FAR *pDummy)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&ppFuncDesc,
                  ( unsigned char __RPC_FAR * )&pDummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[450],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteGetFuncDesc_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        UINT index;
        PPFUNCDESC ppFuncDesc;
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        UINT index;
        char Pad1[4];
        PPFUNCDESC ppFuncDesc;
        char Pad2[4];
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_GetFuncDesc_Stub(
                                     (ITypeInfo *) pParamStruct->This,
                                     pParamStruct->index,
                                     pParamStruct->ppFuncDesc,
                                     pParamStruct->pDummy);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetVarDesc_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [in] */ UINT index,
    /* [out] */ PPVARDESC ppVarDesc,
    /* [out] */ CLEANLOCALSTORAGE __RPC_FAR *pDummy)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[486],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[486],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&ppVarDesc,
                  ( unsigned char __RPC_FAR * )&pDummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[486],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteGetVarDesc_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        UINT index;
        PPVARDESC ppVarDesc;
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        UINT index;
        char Pad1[4];
        PPVARDESC ppVarDesc;
        char Pad2[4];
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_GetVarDesc_Stub(
                                    (ITypeInfo *) pParamStruct->This,
                                    pParamStruct->index,
                                    pParamStruct->ppVarDesc,
                                    pParamStruct->pDummy);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteInvoke_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *pIUnk,
    /* [in] */ MEMBERID memid,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DISPPARAMS __RPC_FAR *pDispParams,
    /* [size_is][out] */ VARIANTARG __RPC_FAR *rgVtRef,
    /* [in] */ UINT cVtRef,
    /* [out] */ VARIANT __RPC_FAR *pVarResult,
    /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
    /* [out] */ UINT __RPC_FAR *pArgErr)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pArgErr);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pIUnk,
                  ( unsigned char __RPC_FAR * )&memid,
                  ( unsigned char __RPC_FAR * )&dwFlags,
                  ( unsigned char __RPC_FAR * )&pDispParams,
                  ( unsigned char __RPC_FAR * )&rgVtRef,
                  ( unsigned char __RPC_FAR * )&cVtRef,
                  ( unsigned char __RPC_FAR * )&pVarResult,
                  ( unsigned char __RPC_FAR * )&pExcepInfo,
                  ( unsigned char __RPC_FAR * )&pArgErr);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[660],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteInvoke_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        IUnknown __RPC_FAR *pIUnk;
        MEMBERID memid;
        DWORD dwFlags;
        DISPPARAMS __RPC_FAR *pDispParams;
        VARIANTARG __RPC_FAR *rgVtRef;
        UINT cVtRef;
        VARIANT __RPC_FAR *pVarResult;
        EXCEPINFO __RPC_FAR *pExcepInfo;
        UINT __RPC_FAR *pArgErr;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        IUnknown __RPC_FAR *pIUnk;
        char Pad1[4];
        MEMBERID memid;
        char Pad2[4];
        DWORD dwFlags;
        char Pad3[4];
        DISPPARAMS __RPC_FAR *pDispParams;
        char Pad4[4];
        VARIANTARG __RPC_FAR *rgVtRef;
        char Pad5[4];
        UINT cVtRef;
        char Pad6[4];
        VARIANT __RPC_FAR *pVarResult;
        char Pad7[4];
        EXCEPINFO __RPC_FAR *pExcepInfo;
        char Pad8[4];
        UINT __RPC_FAR *pArgErr;
        char Pad9[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_Invoke_Stub(
                                (ITypeInfo *) pParamStruct->This,
                                pParamStruct->pIUnk,
                                pParamStruct->memid,
                                pParamStruct->dwFlags,
                                pParamStruct->pDispParams,
                                pParamStruct->rgVtRef,
                                pParamStruct->cVtRef,
                                pParamStruct->pVarResult,
                                pParamStruct->pExcepInfo,
                                pParamStruct->pArgErr);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDocumentation_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [in] */ MEMBERID memid,
    /* [in] */ DWORD refPtrFlags,
    /* [out] */ BSTR __RPC_FAR *pBstrName,
    /* [out] */ BSTR __RPC_FAR *pBstrDocString,
    /* [out] */ DWORD __RPC_FAR *pdwHelpContext,
    /* [out] */ BSTR __RPC_FAR *pBstrHelpFile)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBstrHelpFile);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[732],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[732],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&memid,
                  ( unsigned char __RPC_FAR * )&refPtrFlags,
                  ( unsigned char __RPC_FAR * )&pBstrName,
                  ( unsigned char __RPC_FAR * )&pBstrDocString,
                  ( unsigned char __RPC_FAR * )&pdwHelpContext,
                  ( unsigned char __RPC_FAR * )&pBstrHelpFile);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[732],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteGetDocumentation_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        MEMBERID memid;
        DWORD refPtrFlags;
        BSTR __RPC_FAR *pBstrName;
        BSTR __RPC_FAR *pBstrDocString;
        DWORD __RPC_FAR *pdwHelpContext;
        BSTR __RPC_FAR *pBstrHelpFile;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        MEMBERID memid;
        char Pad1[4];
        DWORD refPtrFlags;
        char Pad2[4];
        BSTR __RPC_FAR *pBstrName;
        char Pad3[4];
        BSTR __RPC_FAR *pBstrDocString;
        char Pad4[4];
        DWORD __RPC_FAR *pdwHelpContext;
        char Pad5[4];
        BSTR __RPC_FAR *pBstrHelpFile;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_GetDocumentation_Stub(
                                          (ITypeInfo *) pParamStruct->This,
                                          pParamStruct->memid,
                                          pParamStruct->refPtrFlags,
                                          pParamStruct->pBstrName,
                                          pParamStruct->pBstrDocString,
                                          pParamStruct->pdwHelpContext,
                                          pParamStruct->pBstrHelpFile);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteGetDllEntry_Proxy( 
    ITypeInfo __RPC_FAR * This,
    /* [in] */ MEMBERID memid,
    /* [in] */ INVOKEKIND invKind,
    /* [in] */ DWORD refPtrFlags,
    /* [out] */ BSTR __RPC_FAR *pBstrDllName,
    /* [out] */ BSTR __RPC_FAR *pBstrName,
    /* [out] */ WORD __RPC_FAR *pwOrdinal)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pwOrdinal);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[786],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[786],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&memid,
                  ( unsigned char __RPC_FAR * )&invKind,
                  ( unsigned char __RPC_FAR * )&refPtrFlags,
                  ( unsigned char __RPC_FAR * )&pBstrDllName,
                  ( unsigned char __RPC_FAR * )&pBstrName,
                  ( unsigned char __RPC_FAR * )&pwOrdinal);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[786],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteGetDllEntry_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        MEMBERID memid;
        INVOKEKIND invKind;
        DWORD refPtrFlags;
        BSTR __RPC_FAR *pBstrDllName;
        BSTR __RPC_FAR *pBstrName;
        WORD __RPC_FAR *pwOrdinal;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        MEMBERID memid;
        char Pad1[4];
        INVOKEKIND invKind;
        char Pad2[4];
        DWORD refPtrFlags;
        char Pad3[4];
        BSTR __RPC_FAR *pBstrDllName;
        char Pad4[4];
        BSTR __RPC_FAR *pBstrName;
        char Pad5[4];
        WORD __RPC_FAR *pwOrdinal;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_GetDllEntry_Stub(
                                     (ITypeInfo *) pParamStruct->This,
                                     pParamStruct->memid,
                                     pParamStruct->invKind,
                                     pParamStruct->refPtrFlags,
                                     pParamStruct->pBstrDllName,
                                     pParamStruct->pBstrName,
                                     pParamStruct->pwOrdinal);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_LocalAddressOfMember_Proxy( 
    ITypeInfo __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[870],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[870],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[870],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_LocalAddressOfMember_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_AddressOfMember_Stub((ITypeInfo *) pParamStruct->This);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_RemoteCreateInstance_Proxy( 
    ITypeInfo __RPC_FAR * This,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&riid,
                  ( unsigned char __RPC_FAR * )&ppvObj);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[888],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_RemoteCreateInstance_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        REFIID riid;
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        REFIID riid;
        char Pad1[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvObj;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_CreateInstance_Stub(
                                        (ITypeInfo *) pParamStruct->This,
                                        pParamStruct->riid,
                                        pParamStruct->ppvObj);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseTypeAttr_Proxy( 
    ITypeInfo __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[978],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[978],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[978],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_LocalReleaseTypeAttr_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_ReleaseTypeAttr_Stub((ITypeInfo *) pParamStruct->This);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseFuncDesc_Proxy( 
    ITypeInfo __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[996],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[996],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[996],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_LocalReleaseFuncDesc_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_ReleaseFuncDesc_Stub((ITypeInfo *) pParamStruct->This);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo_LocalReleaseVarDesc_Proxy( 
    ITypeInfo __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1014],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1014],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1014],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo_LocalReleaseVarDesc_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo_ReleaseVarDesc_Stub((ITypeInfo *) pParamStruct->This);
    
}

static const unsigned short ITypeInfo_FormatStringOffsetTable[] = 
    {
    396,
    426,
    450,
    486,
    522,
    564,
    594,
    624,
    660,
    732,
    786,
    840,
    870,
    888,
    918,
    948,
    978,
    996,
    1014
    };

static const STUB_THUNK ITypeInfo_StubThunkTable[] = 
    {
    ITypeInfo_RemoteGetTypeAttr_Thunk,
    0,
    ITypeInfo_RemoteGetFuncDesc_Thunk,
    ITypeInfo_RemoteGetVarDesc_Thunk,
    0,
    0,
    0,
    0,
    ITypeInfo_RemoteInvoke_Thunk,
    ITypeInfo_RemoteGetDocumentation_Thunk,
    ITypeInfo_RemoteGetDllEntry_Thunk,
    0,
    ITypeInfo_LocalAddressOfMember_Thunk,
    ITypeInfo_RemoteCreateInstance_Thunk,
    0,
    0,
    ITypeInfo_LocalReleaseTypeAttr_Thunk,
    ITypeInfo_LocalReleaseFuncDesc_Thunk,
    ITypeInfo_LocalReleaseVarDesc_Thunk
    };

static const MIDL_SERVER_INFO ITypeInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypeInfo_FormatStringOffsetTable[-3],
    &ITypeInfo_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITypeInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypeInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(22) _ITypeInfoProxyVtbl = 
{
    &ITypeInfo_ProxyInfo,
    &IID_ITypeInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ITypeInfo_GetTypeAttr_Proxy ,
    (void *)-1 /* ITypeInfo::GetTypeComp */ ,
    ITypeInfo_GetFuncDesc_Proxy ,
    ITypeInfo_GetVarDesc_Proxy ,
    (void *)-1 /* ITypeInfo::GetNames */ ,
    (void *)-1 /* ITypeInfo::GetRefTypeOfImplType */ ,
    (void *)-1 /* ITypeInfo::GetImplTypeFlags */ ,
    (void *)-1 /* ITypeInfo::GetIDsOfNames */ ,
    ITypeInfo_Invoke_Proxy ,
    ITypeInfo_GetDocumentation_Proxy ,
    ITypeInfo_GetDllEntry_Proxy ,
    (void *)-1 /* ITypeInfo::GetRefTypeInfo */ ,
    ITypeInfo_AddressOfMember_Proxy ,
    ITypeInfo_CreateInstance_Proxy ,
    (void *)-1 /* ITypeInfo::GetMops */ ,
    (void *)-1 /* ITypeInfo::GetContainingTypeLib */ ,
    ITypeInfo_ReleaseTypeAttr_Proxy ,
    ITypeInfo_ReleaseFuncDesc_Proxy ,
    ITypeInfo_ReleaseVarDesc_Proxy
};

const CInterfaceStubVtbl _ITypeInfoStubVtbl =
{
    &IID_ITypeInfo,
    &ITypeInfo_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeInfo2, ver. 0.0,
   GUID={0x00020412,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypeInfo2_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeInfo2_RemoteGetDocumentation2_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [in] */ MEMBERID memid,
    /* [in] */ LCID lcid,
    /* [in] */ DWORD refPtrFlags,
    /* [out] */ BSTR __RPC_FAR *pbstrHelpString,
    /* [out] */ DWORD __RPC_FAR *pdwHelpStringContext,
    /* [out] */ BSTR __RPC_FAR *pbstrHelpStringDll)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pbstrHelpStringDll);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1326],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1326],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&memid,
                  ( unsigned char __RPC_FAR * )&lcid,
                  ( unsigned char __RPC_FAR * )&refPtrFlags,
                  ( unsigned char __RPC_FAR * )&pbstrHelpString,
                  ( unsigned char __RPC_FAR * )&pdwHelpStringContext,
                  ( unsigned char __RPC_FAR * )&pbstrHelpStringDll);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1326],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeInfo2_RemoteGetDocumentation2_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo2 __RPC_FAR *This;
        MEMBERID memid;
        LCID lcid;
        DWORD refPtrFlags;
        BSTR __RPC_FAR *pbstrHelpString;
        DWORD __RPC_FAR *pdwHelpStringContext;
        BSTR __RPC_FAR *pbstrHelpStringDll;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeInfo2 __RPC_FAR *This;
        char Pad0[4];
        MEMBERID memid;
        char Pad1[4];
        LCID lcid;
        char Pad2[4];
        DWORD refPtrFlags;
        char Pad3[4];
        BSTR __RPC_FAR *pbstrHelpString;
        char Pad4[4];
        DWORD __RPC_FAR *pdwHelpStringContext;
        char Pad5[4];
        BSTR __RPC_FAR *pbstrHelpStringDll;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeInfo2_GetDocumentation2_Stub(
                                            (ITypeInfo2 *) pParamStruct->This,
                                            pParamStruct->memid,
                                            pParamStruct->lcid,
                                            pParamStruct->refPtrFlags,
                                            pParamStruct->pbstrHelpString,
                                            pParamStruct->pdwHelpStringContext,
                                            pParamStruct->pbstrHelpStringDll);
    
}

HRESULT STDMETHODCALLTYPE ITypeInfo2_GetAllCustData_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [out] */ CUSTDATA __RPC_FAR *pCustData)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCustData);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1380],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1380],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pCustData);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1380],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

HRESULT STDMETHODCALLTYPE ITypeInfo2_GetAllFuncCustData_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [in] */ UINT index,
    /* [out] */ CUSTDATA __RPC_FAR *pCustData)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCustData);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&pCustData);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1404],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

HRESULT STDMETHODCALLTYPE ITypeInfo2_GetAllParamCustData_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [in] */ UINT indexFunc,
    /* [in] */ UINT indexParam,
    /* [out] */ CUSTDATA __RPC_FAR *pCustData)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCustData);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1434],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1434],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&indexFunc,
                  ( unsigned char __RPC_FAR * )&indexParam,
                  ( unsigned char __RPC_FAR * )&pCustData);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1434],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

HRESULT STDMETHODCALLTYPE ITypeInfo2_GetAllVarCustData_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [in] */ UINT index,
    /* [out] */ CUSTDATA __RPC_FAR *pCustData)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCustData);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1470],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1470],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&pCustData);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1470],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

HRESULT STDMETHODCALLTYPE ITypeInfo2_GetAllImplTypeCustData_Proxy( 
    ITypeInfo2 __RPC_FAR * This,
    /* [in] */ UINT index,
    /* [out] */ CUSTDATA __RPC_FAR *pCustData)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pCustData);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&pCustData);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

static const unsigned short ITypeInfo2_FormatStringOffsetTable[] = 
    {
    396,
    426,
    450,
    486,
    522,
    564,
    594,
    624,
    660,
    732,
    786,
    840,
    870,
    888,
    918,
    948,
    978,
    996,
    1014,
    1032,
    1056,
    1080,
    1116,
    1146,
    1176,
    1212,
    1254,
    1290,
    1326,
    1380,
    1404,
    1434,
    1470,
    1500
    };

static const STUB_THUNK ITypeInfo2_StubThunkTable[] = 
    {
    ITypeInfo_RemoteGetTypeAttr_Thunk,
    0,
    ITypeInfo_RemoteGetFuncDesc_Thunk,
    ITypeInfo_RemoteGetVarDesc_Thunk,
    0,
    0,
    0,
    0,
    ITypeInfo_RemoteInvoke_Thunk,
    ITypeInfo_RemoteGetDocumentation_Thunk,
    ITypeInfo_RemoteGetDllEntry_Thunk,
    0,
    ITypeInfo_LocalAddressOfMember_Thunk,
    ITypeInfo_RemoteCreateInstance_Thunk,
    0,
    0,
    ITypeInfo_LocalReleaseTypeAttr_Thunk,
    ITypeInfo_LocalReleaseFuncDesc_Thunk,
    ITypeInfo_LocalReleaseVarDesc_Thunk,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    ITypeInfo2_RemoteGetDocumentation2_Thunk,
    0,
    0,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO ITypeInfo2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypeInfo2_FormatStringOffsetTable[-3],
    &ITypeInfo2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITypeInfo2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypeInfo2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(37) _ITypeInfo2ProxyVtbl = 
{
    &ITypeInfo2_ProxyInfo,
    &IID_ITypeInfo2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ITypeInfo_GetTypeAttr_Proxy ,
    (void *)-1 /* ITypeInfo::GetTypeComp */ ,
    ITypeInfo_GetFuncDesc_Proxy ,
    ITypeInfo_GetVarDesc_Proxy ,
    (void *)-1 /* ITypeInfo::GetNames */ ,
    (void *)-1 /* ITypeInfo::GetRefTypeOfImplType */ ,
    (void *)-1 /* ITypeInfo::GetImplTypeFlags */ ,
    (void *)-1 /* ITypeInfo::GetIDsOfNames */ ,
    ITypeInfo_Invoke_Proxy ,
    ITypeInfo_GetDocumentation_Proxy ,
    ITypeInfo_GetDllEntry_Proxy ,
    (void *)-1 /* ITypeInfo::GetRefTypeInfo */ ,
    ITypeInfo_AddressOfMember_Proxy ,
    ITypeInfo_CreateInstance_Proxy ,
    (void *)-1 /* ITypeInfo::GetMops */ ,
    (void *)-1 /* ITypeInfo::GetContainingTypeLib */ ,
    ITypeInfo_ReleaseTypeAttr_Proxy ,
    ITypeInfo_ReleaseFuncDesc_Proxy ,
    ITypeInfo_ReleaseVarDesc_Proxy ,
    (void *)-1 /* ITypeInfo2::GetTypeKind */ ,
    (void *)-1 /* ITypeInfo2::GetTypeFlags */ ,
    (void *)-1 /* ITypeInfo2::GetFuncIndexOfMemId */ ,
    (void *)-1 /* ITypeInfo2::GetVarIndexOfMemId */ ,
    (void *)-1 /* ITypeInfo2::GetCustData */ ,
    (void *)-1 /* ITypeInfo2::GetFuncCustData */ ,
    (void *)-1 /* ITypeInfo2::GetParamCustData */ ,
    (void *)-1 /* ITypeInfo2::GetVarCustData */ ,
    (void *)-1 /* ITypeInfo2::GetImplTypeCustData */ ,
    ITypeInfo2_GetDocumentation2_Proxy ,
    ITypeInfo2_GetAllCustData_Proxy ,
    ITypeInfo2_GetAllFuncCustData_Proxy ,
    ITypeInfo2_GetAllParamCustData_Proxy ,
    ITypeInfo2_GetAllVarCustData_Proxy ,
    ITypeInfo2_GetAllImplTypeCustData_Proxy
};

const CInterfaceStubVtbl _ITypeInfo2StubVtbl =
{
    &IID_ITypeInfo2,
    &ITypeInfo2_ServerInfo,
    37,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeLib, ver. 0.0,
   GUID={0x00020402,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypeLib_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetTypeInfoCount_Proxy( 
    ITypeLib __RPC_FAR * This,
    /* [out] */ UINT __RPC_FAR *pcTInfo)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcTInfo);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pcTInfo);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_RemoteGetTypeInfoCount_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        UINT __RPC_FAR *pcTInfo;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        UINT __RPC_FAR *pcTInfo;
        char Pad1[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_GetTypeInfoCount_Stub((ITypeLib *) pParamStruct->This,pParamStruct->pcTInfo);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetLibAttr_Proxy( 
    ITypeLib __RPC_FAR * This,
    /* [out] */ PPTLIBATTR ppTLibAttr,
    /* [out] */ CLEANLOCALSTORAGE __RPC_FAR *pDummy)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDummy);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1620],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1620],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&ppTLibAttr,
                  ( unsigned char __RPC_FAR * )&pDummy);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1620],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_RemoteGetLibAttr_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        PPTLIBATTR ppTLibAttr;
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        PPTLIBATTR ppTLibAttr;
        char Pad1[4];
        CLEANLOCALSTORAGE __RPC_FAR *pDummy;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_GetLibAttr_Stub(
                                   (ITypeLib *) pParamStruct->This,
                                   pParamStruct->ppTLibAttr,
                                   pParamStruct->pDummy);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_RemoteGetDocumentation_Proxy( 
    ITypeLib __RPC_FAR * This,
    /* [in] */ INT index,
    /* [in] */ DWORD refPtrFlags,
    /* [out] */ BSTR __RPC_FAR *pBstrName,
    /* [out] */ BSTR __RPC_FAR *pBstrDocString,
    /* [out] */ DWORD __RPC_FAR *pdwHelpContext,
    /* [out] */ BSTR __RPC_FAR *pBstrHelpFile)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBstrHelpFile);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1674],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1674],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&refPtrFlags,
                  ( unsigned char __RPC_FAR * )&pBstrName,
                  ( unsigned char __RPC_FAR * )&pBstrDocString,
                  ( unsigned char __RPC_FAR * )&pdwHelpContext,
                  ( unsigned char __RPC_FAR * )&pBstrHelpFile);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1674],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_RemoteGetDocumentation_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        INT index;
        DWORD refPtrFlags;
        BSTR __RPC_FAR *pBstrName;
        BSTR __RPC_FAR *pBstrDocString;
        DWORD __RPC_FAR *pdwHelpContext;
        BSTR __RPC_FAR *pBstrHelpFile;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        INT index;
        char Pad1[4];
        DWORD refPtrFlags;
        char Pad2[4];
        BSTR __RPC_FAR *pBstrName;
        char Pad3[4];
        BSTR __RPC_FAR *pBstrDocString;
        char Pad4[4];
        DWORD __RPC_FAR *pdwHelpContext;
        char Pad5[4];
        BSTR __RPC_FAR *pBstrHelpFile;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_GetDocumentation_Stub(
                                         (ITypeLib *) pParamStruct->This,
                                         pParamStruct->index,
                                         pParamStruct->refPtrFlags,
                                         pParamStruct->pBstrName,
                                         pParamStruct->pBstrDocString,
                                         pParamStruct->pdwHelpContext,
                                         pParamStruct->pBstrHelpFile);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_RemoteIsName_Proxy( 
    ITypeLib __RPC_FAR * This,
    /* [in] */ LPOLESTR szNameBuf,
    /* [in] */ ULONG lHashVal,
    /* [out] */ BOOL __RPC_FAR *pfName,
    /* [out] */ BSTR __RPC_FAR *pBstrLibName)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBstrLibName);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1728],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1728],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&szNameBuf,
                  ( unsigned char __RPC_FAR * )&lHashVal,
                  ( unsigned char __RPC_FAR * )&pfName,
                  ( unsigned char __RPC_FAR * )&pBstrLibName);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1728],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_RemoteIsName_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        LPOLESTR szNameBuf;
        ULONG lHashVal;
        BOOL __RPC_FAR *pfName;
        BSTR __RPC_FAR *pBstrLibName;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR szNameBuf;
        char Pad1[4];
        ULONG lHashVal;
        char Pad2[4];
        BOOL __RPC_FAR *pfName;
        char Pad3[4];
        BSTR __RPC_FAR *pBstrLibName;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_IsName_Stub(
                               (ITypeLib *) pParamStruct->This,
                               pParamStruct->szNameBuf,
                               pParamStruct->lHashVal,
                               pParamStruct->pfName,
                               pParamStruct->pBstrLibName);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_RemoteFindName_Proxy( 
    ITypeLib __RPC_FAR * This,
    /* [in] */ LPOLESTR szNameBuf,
    /* [in] */ ULONG lHashVal,
    /* [length_is][size_is][out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo,
    /* [length_is][size_is][out] */ MEMBERID __RPC_FAR *rgMemId,
    /* [out][in] */ USHORT __RPC_FAR *pcFound,
    /* [out] */ BSTR __RPC_FAR *pBstrLibName)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBstrLibName);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1770],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1770],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&szNameBuf,
                  ( unsigned char __RPC_FAR * )&lHashVal,
                  ( unsigned char __RPC_FAR * )&ppTInfo,
                  ( unsigned char __RPC_FAR * )&rgMemId,
                  ( unsigned char __RPC_FAR * )&pcFound,
                  ( unsigned char __RPC_FAR * )&pBstrLibName);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1770],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_RemoteFindName_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        LPOLESTR szNameBuf;
        ULONG lHashVal;
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        MEMBERID __RPC_FAR *rgMemId;
        USHORT __RPC_FAR *pcFound;
        BSTR __RPC_FAR *pBstrLibName;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        LPOLESTR szNameBuf;
        char Pad1[4];
        ULONG lHashVal;
        char Pad2[4];
        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo;
        char Pad3[4];
        MEMBERID __RPC_FAR *rgMemId;
        char Pad4[4];
        USHORT __RPC_FAR *pcFound;
        char Pad5[4];
        BSTR __RPC_FAR *pBstrLibName;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_FindName_Stub(
                                 (ITypeLib *) pParamStruct->This,
                                 pParamStruct->szNameBuf,
                                 pParamStruct->lHashVal,
                                 pParamStruct->ppTInfo,
                                 pParamStruct->rgMemId,
                                 pParamStruct->pcFound,
                                 pParamStruct->pBstrLibName);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib_LocalReleaseTLibAttr_Proxy( 
    ITypeLib __RPC_FAR * This)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,This);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1824],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1824],
                  ( unsigned char __RPC_FAR * )&This);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1824],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib_LocalReleaseTLibAttr_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib __RPC_FAR *This;
        char Pad0[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib_ReleaseTLibAttr_Stub((ITypeLib *) pParamStruct->This);
    
}

static const unsigned short ITypeLib_FormatStringOffsetTable[] = 
    {
    0,
    1530,
    1560,
    1590,
    1620,
    1650,
    1674,
    1728,
    1770,
    1824
    };

static const STUB_THUNK ITypeLib_StubThunkTable[] = 
    {
    ITypeLib_RemoteGetTypeInfoCount_Thunk,
    0,
    0,
    0,
    ITypeLib_RemoteGetLibAttr_Thunk,
    0,
    ITypeLib_RemoteGetDocumentation_Thunk,
    ITypeLib_RemoteIsName_Thunk,
    ITypeLib_RemoteFindName_Thunk,
    ITypeLib_LocalReleaseTLibAttr_Thunk
    };

static const MIDL_SERVER_INFO ITypeLib_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypeLib_FormatStringOffsetTable[-3],
    &ITypeLib_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITypeLib_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypeLib_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(13) _ITypeLibProxyVtbl = 
{
    &ITypeLib_ProxyInfo,
    &IID_ITypeLib,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ITypeLib_GetTypeInfoCount_Proxy ,
    (void *)-1 /* ITypeLib::GetTypeInfo */ ,
    (void *)-1 /* ITypeLib::GetTypeInfoType */ ,
    (void *)-1 /* ITypeLib::GetTypeInfoOfGuid */ ,
    ITypeLib_GetLibAttr_Proxy ,
    (void *)-1 /* ITypeLib::GetTypeComp */ ,
    ITypeLib_GetDocumentation_Proxy ,
    ITypeLib_IsName_Proxy ,
    ITypeLib_FindName_Proxy ,
    ITypeLib_ReleaseTLibAttr_Proxy
};

const CInterfaceStubVtbl _ITypeLibStubVtbl =
{
    &IID_ITypeLib,
    &ITypeLib_ServerInfo,
    13,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeLib2, ver. 0.0,
   GUID={0x00020411,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITypeLib2_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetLibStatistics_Proxy( 
    ITypeLib2 __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pcUniqueNames,
    /* [out] */ ULONG __RPC_FAR *pcchUniqueNames)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcchUniqueNames);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1872],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1872],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pcUniqueNames,
                  ( unsigned char __RPC_FAR * )&pcchUniqueNames);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1872],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib2_RemoteGetLibStatistics_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib2 __RPC_FAR *This;
        ULONG __RPC_FAR *pcUniqueNames;
        ULONG __RPC_FAR *pcchUniqueNames;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib2 __RPC_FAR *This;
        char Pad0[4];
        ULONG __RPC_FAR *pcUniqueNames;
        char Pad1[4];
        ULONG __RPC_FAR *pcchUniqueNames;
        char Pad2[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib2_GetLibStatistics_Stub(
                                          (ITypeLib2 *) pParamStruct->This,
                                          pParamStruct->pcUniqueNames,
                                          pParamStruct->pcchUniqueNames);
    
}

/* [call_as] */ HRESULT STDMETHODCALLTYPE ITypeLib2_RemoteGetDocumentation2_Proxy( 
    ITypeLib2 __RPC_FAR * This,
    /* [in] */ INT index,
    /* [in] */ LCID lcid,
    /* [in] */ DWORD refPtrFlags,
    /* [out] */ BSTR __RPC_FAR *pbstrHelpString,
    /* [out] */ DWORD __RPC_FAR *pdwHelpStringContext,
    /* [out] */ BSTR __RPC_FAR *pbstrHelpStringDll)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pbstrHelpStringDll);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1902],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1902],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&index,
                  ( unsigned char __RPC_FAR * )&lcid,
                  ( unsigned char __RPC_FAR * )&refPtrFlags,
                  ( unsigned char __RPC_FAR * )&pbstrHelpString,
                  ( unsigned char __RPC_FAR * )&pdwHelpStringContext,
                  ( unsigned char __RPC_FAR * )&pbstrHelpStringDll);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1902],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITypeLib2_RemoteGetDocumentation2_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib2 __RPC_FAR *This;
        INT index;
        LCID lcid;
        DWORD refPtrFlags;
        BSTR __RPC_FAR *pbstrHelpString;
        DWORD __RPC_FAR *pdwHelpStringContext;
        BSTR __RPC_FAR *pbstrHelpStringDll;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITypeLib2 __RPC_FAR *This;
        char Pad0[4];
        INT index;
        char Pad1[4];
        LCID lcid;
        char Pad2[4];
        DWORD refPtrFlags;
        char Pad3[4];
        BSTR __RPC_FAR *pbstrHelpString;
        char Pad4[4];
        DWORD __RPC_FAR *pdwHelpStringContext;
        char Pad5[4];
        BSTR __RPC_FAR *pbstrHelpStringDll;
        char Pad6[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITypeLib2_GetDocumentation2_Stub(
                                           (ITypeLib2 *) pParamStruct->This,
                                           pParamStruct->index,
                                           pParamStruct->lcid,
                                           pParamStruct->refPtrFlags,
                                           pParamStruct->pbstrHelpString,
                                           pParamStruct->pdwHelpStringContext,
                                           pParamStruct->pbstrHelpStringDll);
    
}

static const unsigned short ITypeLib2_FormatStringOffsetTable[] = 
    {
    0,
    1530,
    1560,
    1590,
    1620,
    1650,
    1674,
    1728,
    1770,
    1824,
    1842,
    1872,
    1902,
    1956
    };

static const STUB_THUNK ITypeLib2_StubThunkTable[] = 
    {
    ITypeLib_RemoteGetTypeInfoCount_Thunk,
    0,
    0,
    0,
    ITypeLib_RemoteGetLibAttr_Thunk,
    0,
    ITypeLib_RemoteGetDocumentation_Thunk,
    ITypeLib_RemoteIsName_Thunk,
    ITypeLib_RemoteFindName_Thunk,
    ITypeLib_LocalReleaseTLibAttr_Thunk,
    0,
    ITypeLib2_RemoteGetLibStatistics_Thunk,
    ITypeLib2_RemoteGetDocumentation2_Thunk,
    0
    };

static const MIDL_SERVER_INFO ITypeLib2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITypeLib2_FormatStringOffsetTable[-3],
    &ITypeLib2_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITypeLib2_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITypeLib2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(17) _ITypeLib2ProxyVtbl = 
{
    &ITypeLib2_ProxyInfo,
    &IID_ITypeLib2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    ITypeLib_GetTypeInfoCount_Proxy ,
    (void *)-1 /* ITypeLib::GetTypeInfo */ ,
    (void *)-1 /* ITypeLib::GetTypeInfoType */ ,
    (void *)-1 /* ITypeLib::GetTypeInfoOfGuid */ ,
    ITypeLib_GetLibAttr_Proxy ,
    (void *)-1 /* ITypeLib::GetTypeComp */ ,
    ITypeLib_GetDocumentation_Proxy ,
    ITypeLib_IsName_Proxy ,
    ITypeLib_FindName_Proxy ,
    ITypeLib_ReleaseTLibAttr_Proxy ,
    (void *)-1 /* ITypeLib2::GetCustData */ ,
    ITypeLib2_GetLibStatistics_Proxy ,
    ITypeLib2_GetDocumentation2_Proxy ,
    (void *)-1 /* ITypeLib2::GetAllCustData */
};

const CInterfaceStubVtbl _ITypeLib2StubVtbl =
{
    &IID_ITypeLib2,
    &ITypeLib2_ServerInfo,
    17,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITypeChangeEvents, ver. 0.0,
   GUID={0x00020410,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IErrorInfo, ver. 0.0,
   GUID={0x1CF2B120,0x547D,0x101B,{0x8E,0x65,0x08,0x00,0x2B,0x2B,0xD1,0x19}} */


/* Object interface: ICreateErrorInfo, ver. 0.0,
   GUID={0x22F03340,0x547D,0x101B,{0x8E,0x65,0x08,0x00,0x2B,0x2B,0xD1,0x19}} */


/* Object interface: ISupportErrorInfo, ver. 0.0,
   GUID={0xDF0B3D60,0x548F,0x101B,{0x8E,0x65,0x08,0x00,0x2B,0x2B,0xD1,0x19}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISupportErrorInfo_ServerInfo;

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

static const unsigned short ISupportErrorInfo_FormatStringOffsetTable[] = 
    {
    1980
    };

static const MIDL_SERVER_INFO ISupportErrorInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ISupportErrorInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ISupportErrorInfo_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ISupportErrorInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ISupportErrorInfoProxyVtbl = 
{
    &ISupportErrorInfo_ProxyInfo,
    &IID_ISupportErrorInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ISupportErrorInfo::InterfaceSupportsErrorInfo */
};

const CInterfaceStubVtbl _ISupportErrorInfoStubVtbl =
{
    &IID_ISupportErrorInfo,
    &ISupportErrorInfo_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[3] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            CLEANLOCALSTORAGE_UserSize
            ,CLEANLOCALSTORAGE_UserMarshal
            ,CLEANLOCALSTORAGE_UserUnmarshal
            ,CLEANLOCALSTORAGE_UserFree
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

	/* Procedure RemoteGetTypeInfoCount */


	/* Procedure GetTypeInfoCount */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pcTInfo */


	/* Parameter pctinfo */

/* 12 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 18 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInfo */

/* 24 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 26 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 30 */	NdrFcShort( 0x10 ),	/* 16 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter iTInfo */

/* 36 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 40 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lcid */

/* 42 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 48 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 52 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIDsOfNames */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 62 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 66 */	NdrFcShort( 0x30 ),	/* 48 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter riid */

/* 72 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter rgszNames */

/* 78 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */

	/* Parameter cNames */

/* 84 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lcid */

/* 90 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgDispId */

/* 96 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 100 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteInvoke */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 110 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 112 */	NdrFcShort( 0x30 ),	/* x86, MIPS, PPC Stack size/offset = 48 */
#else
			NdrFcShort( 0x60 ),	/* Alpha Stack size/offset = 96 */
#endif
/* 114 */	NdrFcShort( 0x40 ),	/* 64 */
/* 116 */	NdrFcShort( 0x10 ),	/* 16 */
/* 118 */	0x7,		/* 7 */
			0xb,		/* 11 */

	/* Parameter dispIdMember */

/* 120 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riid */

/* 126 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 130 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter lcid */

/* 132 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 138 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDispParams */

/* 144 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 148 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Parameter rgVtRef */

/* 150 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 154 */	NdrFcShort( 0x3d2 ),	/* Type Offset=978 */

	/* Parameter cVtRef */

/* 156 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVarResult */

/* 162 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 166 */	NdrFcShort( 0x3e8 ),	/* Type Offset=1000 */

	/* Parameter pExcepInfo */

/* 168 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 172 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter pArgErr */

/* 174 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 180 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 182 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 186 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 188 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 190 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 192 */	NdrFcShort( 0x8 ),	/* 8 */
/* 194 */	NdrFcShort( 0x10 ),	/* 16 */
/* 196 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 198 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgVar */

/* 204 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 208 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */

	/* Parameter pCeltFetched */

/* 210 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 216 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */

/* 222 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 224 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 226 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter celt */

/* 234 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 248 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 250 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x8 ),	/* 8 */
/* 256 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 258 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
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
/* 280 */	NdrFcShort( 0x454 ),	/* Type Offset=1108 */

	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteBind */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 290 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 294 */	NdrFcShort( 0xe ),	/* 14 */
/* 296 */	NdrFcShort( 0x18 ),	/* 24 */
/* 298 */	0x7,		/* 7 */
			0xa,		/* 10 */

	/* Parameter szName */

/* 300 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter lHashVal */

/* 306 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter wFlags */

/* 312 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 316 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 318 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 322 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter pDescKind */

/* 324 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 328 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter ppFuncDesc */

/* 330 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 334 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Parameter ppVarDesc */

/* 336 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 340 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Parameter ppTypeComp */

/* 342 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 346 */	NdrFcShort( 0x5a4 ),	/* Type Offset=1444 */

	/* Parameter pDummy */

/* 348 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 352 */	NdrFcShort( 0x5c0 ),	/* Type Offset=1472 */

	/* Return value */

/* 354 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteBindType */

/* 360 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 362 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 364 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter szName */

/* 372 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 376 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter lHashVal */

/* 378 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 384 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 388 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetTypeAttr */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 398 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 400 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x10 ),	/* 16 */
/* 406 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter ppTypeAttr */

/* 408 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 412 */	NdrFcShort( 0x5ca ),	/* Type Offset=1482 */

	/* Parameter pDummy */

/* 414 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	NdrFcShort( 0x60c ),	/* Type Offset=1548 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeComp */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 428 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 436 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppTComp */

/* 438 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 442 */	NdrFcShort( 0x5a4 ),	/* Type Offset=1444 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetFuncDesc */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 452 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 454 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	NdrFcShort( 0x10 ),	/* 16 */
/* 460 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter index */

/* 462 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppFuncDesc */

/* 468 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 472 */	NdrFcShort( 0x472 ),	/* Type Offset=1138 */

	/* Parameter pDummy */

/* 474 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 476 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 478 */	NdrFcShort( 0x61c ),	/* Type Offset=1564 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 482 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetVarDesc */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 488 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 490 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 496 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter index */

/* 498 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 502 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppVarDesc */

/* 504 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 506 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 508 */	NdrFcShort( 0x54e ),	/* Type Offset=1358 */

	/* Parameter pDummy */

/* 510 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 512 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 514 */	NdrFcShort( 0x62c ),	/* Type Offset=1580 */

	/* Return value */

/* 516 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 520 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNames */

/* 522 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 524 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 526 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 528 */	NdrFcShort( 0x10 ),	/* 16 */
/* 530 */	NdrFcShort( 0x10 ),	/* 16 */
/* 532 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter memid */

/* 534 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 536 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgBstrNames */

/* 540 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 542 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 544 */	NdrFcShort( 0x644 ),	/* Type Offset=1604 */

	/* Parameter cMaxNames */

/* 546 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNames */

/* 552 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 558 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 560 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRefTypeOfImplType */

/* 564 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 568 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	NdrFcShort( 0x10 ),	/* 16 */
/* 574 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter index */

/* 576 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pRefType */

/* 582 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetImplTypeFlags */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 596 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 598 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 602 */	NdrFcShort( 0x10 ),	/* 16 */
/* 604 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter index */

/* 606 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pImplTypeFlags */

/* 612 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 616 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 620 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIDsOfNames */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 626 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 628 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 630 */	NdrFcShort( 0x8 ),	/* 8 */
/* 632 */	NdrFcShort( 0x8 ),	/* 8 */
/* 634 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter rgszNames */

/* 636 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 640 */	NdrFcShort( 0x65a ),	/* Type Offset=1626 */

	/* Parameter cNames */

/* 642 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMemId */

/* 648 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 652 */	NdrFcShort( 0x67c ),	/* Type Offset=1660 */

	/* Return value */

/* 654 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 656 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteInvoke */

/* 660 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 662 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 664 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 666 */	NdrFcShort( 0x18 ),	/* 24 */
/* 668 */	NdrFcShort( 0x10 ),	/* 16 */
/* 670 */	0x7,		/* 7 */
			0xa,		/* 10 */

	/* Parameter pIUnk */

/* 672 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 676 */	NdrFcShort( 0x18a ),	/* Type Offset=394 */

	/* Parameter memid */

/* 678 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 684 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDispParams */

/* 690 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 694 */	NdrFcShort( 0x3aa ),	/* Type Offset=938 */

	/* Parameter rgVtRef */

/* 696 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 698 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 700 */	NdrFcShort( 0x694 ),	/* Type Offset=1684 */

	/* Parameter cVtRef */

/* 702 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVarResult */

/* 708 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 712 */	NdrFcShort( 0x6aa ),	/* Type Offset=1706 */

	/* Parameter pExcepInfo */

/* 714 */	NdrFcShort( 0xffff8113 ),	/* -32493 */
#ifndef _ALPHA_
/* 716 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 718 */	NdrFcShort( 0x418 ),	/* Type Offset=1048 */

	/* Parameter pArgErr */

/* 720 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 726 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 728 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDocumentation */

/* 732 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 734 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 736 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 738 */	NdrFcShort( 0x10 ),	/* 16 */
/* 740 */	NdrFcShort( 0x10 ),	/* 16 */
/* 742 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter memid */

/* 744 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refPtrFlags */

/* 750 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrName */

/* 756 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 760 */	NdrFcShort( 0x6b8 ),	/* Type Offset=1720 */

	/* Parameter pBstrDocString */

/* 762 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 766 */	NdrFcShort( 0x6c6 ),	/* Type Offset=1734 */

	/* Parameter pdwHelpContext */

/* 768 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 770 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrHelpFile */

/* 774 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 776 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 778 */	NdrFcShort( 0x6d4 ),	/* Type Offset=1748 */

	/* Return value */

/* 780 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDllEntry */

/* 786 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 788 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 790 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 792 */	NdrFcShort( 0x18 ),	/* 24 */
/* 794 */	NdrFcShort( 0xe ),	/* 14 */
/* 796 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter memid */

/* 798 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 800 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter invKind */

/* 804 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 806 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 808 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter refPtrFlags */

/* 810 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 812 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrDllName */

/* 816 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 818 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 820 */	NdrFcShort( 0x6e2 ),	/* Type Offset=1762 */

	/* Parameter pBstrName */

/* 822 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 826 */	NdrFcShort( 0x6f0 ),	/* Type Offset=1776 */

	/* Parameter pwOrdinal */

/* 828 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 830 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 832 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 834 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRefTypeInfo */

/* 840 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 842 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 844 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 850 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter hRefType */

/* 852 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 854 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 858 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 860 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 862 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalAddressOfMember */

/* 870 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 872 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 874 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 880 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 884 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteCreateInstance */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 890 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 892 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 894 */	NdrFcShort( 0x20 ),	/* 32 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter riid */

/* 900 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 904 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter ppvObj */

/* 906 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 910 */	NdrFcShort( 0x6fe ),	/* Type Offset=1790 */

	/* Return value */

/* 912 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 914 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMops */

/* 918 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 920 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 922 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 928 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter memid */

/* 930 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrMops */

/* 936 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 940 */	NdrFcShort( 0x70c ),	/* Type Offset=1804 */

	/* Return value */

/* 942 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 944 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainingTypeLib */

/* 948 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 950 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 952 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 956 */	NdrFcShort( 0x10 ),	/* 16 */
/* 958 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter ppTLib */

/* 960 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 962 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 964 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */

	/* Parameter pIndex */

/* 966 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 968 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 972 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 974 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalReleaseTypeAttr */

/* 978 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 980 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 982 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalReleaseFuncDesc */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 998 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 1000 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1006 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1010 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalReleaseVarDesc */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1016 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1018 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1026 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeKind */

/* 1032 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1034 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1036 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1040 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1042 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pTypeKind */

/* 1044 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1046 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1048 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1052 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeFlags */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1058 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1060 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1066 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pTypeFlags */

/* 1068 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1076 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFuncIndexOfMemId */

/* 1080 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1082 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 1084 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1086 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1088 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1090 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter memid */

/* 1092 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1094 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1096 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter invKind */

/* 1098 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1102 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter pFuncIndex */

/* 1104 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1106 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1110 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1112 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVarIndexOfMemId */

/* 1116 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1118 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 1120 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1126 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter memid */

/* 1128 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1130 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVarIndex */

/* 1134 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1140 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1142 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCustData */

/* 1146 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1148 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 1150 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1152 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1156 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter guid */

/* 1158 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1160 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1162 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1164 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1166 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1168 */	NdrFcShort( 0x730 ),	/* Type Offset=1840 */

	/* Return value */

/* 1170 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1172 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFuncCustData */

/* 1176 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1178 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1180 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1182 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1186 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter index */

/* 1188 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1190 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter guid */

/* 1194 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1198 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1200 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1202 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1204 */	NdrFcShort( 0x73e ),	/* Type Offset=1854 */

	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1208 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParamCustData */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1214 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 1216 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1218 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1222 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter indexFunc */

/* 1224 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1226 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter indexParam */

/* 1230 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter guid */

/* 1236 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1240 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1242 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1244 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1246 */	NdrFcShort( 0x74c ),	/* Type Offset=1868 */

	/* Return value */

/* 1248 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1250 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetVarCustData */

/* 1254 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1256 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 1258 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1260 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1264 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter index */

/* 1266 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1268 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter guid */

/* 1272 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1274 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1276 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1278 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1280 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1282 */	NdrFcShort( 0x75a ),	/* Type Offset=1882 */

	/* Return value */

/* 1284 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetImplTypeCustData */

/* 1290 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1292 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 1294 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1296 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1298 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1300 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter index */

/* 1302 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter guid */

/* 1308 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1310 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1312 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1314 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1316 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1318 */	NdrFcShort( 0x768 ),	/* Type Offset=1896 */

	/* Return value */

/* 1320 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1322 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDocumentation2 */

/* 1326 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1328 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 1330 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1332 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1334 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1336 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter memid */

/* 1338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1340 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lcid */

/* 1344 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refPtrFlags */

/* 1350 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1352 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrHelpString */

/* 1356 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1360 */	NdrFcShort( 0x776 ),	/* Type Offset=1910 */

	/* Parameter pdwHelpStringContext */

/* 1362 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1364 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrHelpStringDll */

/* 1368 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1372 */	NdrFcShort( 0x784 ),	/* Type Offset=1924 */

	/* Return value */

/* 1374 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1376 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllCustData */

/* 1380 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1382 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 1384 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1390 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pCustData */

/* 1392 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1396 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllFuncCustData */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1406 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 1408 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1414 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter index */

/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCustData */

/* 1422 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1426 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllParamCustData */

/* 1434 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1436 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 1438 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1440 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1442 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1444 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter indexFunc */

/* 1446 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1448 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter indexParam */

/* 1452 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1454 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCustData */

/* 1458 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1460 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1462 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1466 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllVarCustData */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1472 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 1474 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1480 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter index */

/* 1482 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1484 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCustData */

/* 1488 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1490 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1492 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1496 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllImplTypeCustData */

/* 1500 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1502 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1510 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter index */

/* 1512 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1514 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pCustData */

/* 1518 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1520 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1522 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1526 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInfo */

/* 1530 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1532 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1534 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1540 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter index */

/* 1542 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1544 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 1548 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1550 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1552 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 1554 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1556 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInfoType */

/* 1560 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1562 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 1564 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1570 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter index */

/* 1572 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1574 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1576 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pTKind */

/* 1578 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1580 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1582 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1586 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInfoOfGuid */

/* 1590 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1592 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1594 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1596 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1600 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter guid */

/* 1602 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1604 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1606 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter ppTinfo */

/* 1608 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1610 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1612 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 1614 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1616 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetLibAttr */

/* 1620 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1622 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 1624 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1628 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1630 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter ppTLibAttr */

/* 1632 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 1634 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1636 */	NdrFcShort( 0x7d0 ),	/* Type Offset=2000 */

	/* Parameter pDummy */

/* 1638 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 1640 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1642 */	NdrFcShort( 0x7f2 ),	/* Type Offset=2034 */

	/* Return value */

/* 1644 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1646 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeComp */

/* 1650 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1652 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1654 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1660 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppTComp */

/* 1662 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1664 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1666 */	NdrFcShort( 0x5a4 ),	/* Type Offset=1444 */

	/* Return value */

/* 1668 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1670 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDocumentation */

/* 1674 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1676 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 1678 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1680 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1682 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1684 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter index */

/* 1686 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1688 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refPtrFlags */

/* 1692 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1694 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrName */

/* 1698 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1700 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1702 */	NdrFcShort( 0x800 ),	/* Type Offset=2048 */

	/* Parameter pBstrDocString */

/* 1704 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1706 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1708 */	NdrFcShort( 0x80e ),	/* Type Offset=2062 */

	/* Parameter pdwHelpContext */

/* 1710 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1712 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrHelpFile */

/* 1716 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1718 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1720 */	NdrFcShort( 0x81c ),	/* Type Offset=2076 */

	/* Return value */

/* 1722 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1724 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteIsName */

/* 1728 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1730 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 1732 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1734 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1736 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1738 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter szNameBuf */

/* 1740 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1742 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1744 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter lHashVal */

/* 1746 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1748 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pfName */

/* 1752 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1754 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBstrLibName */

/* 1758 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1760 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1762 */	NdrFcShort( 0x82a ),	/* Type Offset=2090 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1766 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteFindName */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1772 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1774 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1776 */	NdrFcShort( 0xe ),	/* 14 */
/* 1778 */	NdrFcShort( 0xe ),	/* 14 */
/* 1780 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter szNameBuf */

/* 1782 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1784 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1786 */	NdrFcShort( 0x46c ),	/* Type Offset=1132 */

	/* Parameter lHashVal */

/* 1788 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1790 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTInfo */

/* 1794 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1796 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1798 */	NdrFcShort( 0x838 ),	/* Type Offset=2104 */

	/* Parameter rgMemId */

/* 1800 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1802 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1804 */	NdrFcShort( 0x84e ),	/* Type Offset=2126 */

	/* Parameter pcFound */

/* 1806 */	NdrFcShort( 0x158 ),	/* 344 */
#ifndef _ALPHA_
/* 1808 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1810 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter pBstrLibName */

/* 1812 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1814 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1816 */	NdrFcShort( 0x864 ),	/* Type Offset=2148 */

	/* Return value */

/* 1818 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1820 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LocalReleaseTLibAttr */

/* 1824 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1826 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 1828 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1834 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1836 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1838 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCustData */

/* 1842 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1844 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 1846 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1848 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1852 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter guid */

/* 1854 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1858 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter pVarVal */

/* 1860 */	NdrFcShort( 0x4113 ),	/* 16659 */
#ifndef _ALPHA_
/* 1862 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1864 */	NdrFcShort( 0x872 ),	/* Type Offset=2162 */

	/* Return value */

/* 1866 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1868 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetLibStatistics */

/* 1872 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1874 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 1876 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1882 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter pcUniqueNames */

/* 1884 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1886 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcchUniqueNames */

/* 1890 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1898 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetDocumentation2 */

/* 1902 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1904 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 1906 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1908 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1910 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1912 */	0x5,		/* 5 */
			0x7,		/* 7 */

	/* Parameter index */

/* 1914 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1916 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lcid */

/* 1920 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1922 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refPtrFlags */

/* 1926 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrHelpString */

/* 1932 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1934 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1936 */	NdrFcShort( 0x880 ),	/* Type Offset=2176 */

	/* Parameter pdwHelpStringContext */

/* 1938 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1940 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbstrHelpStringDll */

/* 1944 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1946 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1948 */	NdrFcShort( 0x88e ),	/* Type Offset=2190 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1952 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAllCustData */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1958 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 1960 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1966 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter pCustData */

/* 1968 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 1970 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1972 */	NdrFcShort( 0x7c0 ),	/* Type Offset=1984 */

	/* Return value */

/* 1974 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1976 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InterfaceSupportsErrorInfo */

/* 1980 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1982 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1984 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1986 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1990 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter riid */

/* 1992 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1994 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1996 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Return value */

/* 1998 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2000 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  2 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x11, 0x10,	/* FC_RP */
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 10 */	NdrFcLong( 0x20401 ),	/* 132097 */
/* 14 */	NdrFcShort( 0x0 ),	/* 0 */
/* 16 */	NdrFcShort( 0x0 ),	/* 0 */
/* 18 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 20 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 22 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 24 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 26 */	
			0x11, 0x0,	/* FC_RP */
/* 28 */	NdrFcShort( 0x8 ),	/* Offset= 8 (36) */
/* 30 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0x8 ),	/* 8 */
/* 34 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 36 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x10 ),	/* 16 */
/* 40 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 42 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 44 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (30) */
			0x5b,		/* FC_END */
/* 48 */	
			0x11, 0x0,	/* FC_RP */
/* 50 */	NdrFcShort( 0x2 ),	/* Offset= 2 (52) */
/* 52 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 58 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 60 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 76 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 80 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 82 */	
			0x11, 0x0,	/* FC_RP */
/* 84 */	NdrFcShort( 0x2 ),	/* Offset= 2 (86) */
/* 86 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 88 */	NdrFcShort( 0x4 ),	/* 4 */
/* 90 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 96 */	
			0x11, 0x0,	/* FC_RP */
/* 98 */	NdrFcShort( 0x348 ),	/* Offset= 840 (938) */
/* 100 */	
			0x12, 0x0,	/* FC_UP */
/* 102 */	NdrFcShort( 0x30c ),	/* Offset= 780 (882) */
/* 104 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 106 */	0x6,		/* 6 */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0xfffffff8 ),	/* -8 */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 114 */	NdrFcShort( 0x29 ),	/* 41 */
/* 116 */	NdrFcLong( 0x3 ),	/* 3 */
/* 120 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32640) */
/* 122 */	NdrFcLong( 0x11 ),	/* 17 */
/* 126 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-32640) */
/* 128 */	NdrFcLong( 0x2 ),	/* 2 */
/* 132 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-32630) */
/* 134 */	NdrFcLong( 0x4 ),	/* 4 */
/* 138 */	NdrFcShort( 0xffff800a ),	/* Offset= -32758 (-32620) */
/* 140 */	NdrFcLong( 0x5 ),	/* 5 */
/* 144 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-32612) */
/* 146 */	NdrFcLong( 0xb ),	/* 11 */
/* 150 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-32612) */
/* 152 */	NdrFcLong( 0xa ),	/* 10 */
/* 156 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32604) */
/* 158 */	NdrFcLong( 0x6 ),	/* 6 */
/* 162 */	NdrFcShort( 0xca ),	/* Offset= 202 (364) */
/* 164 */	NdrFcLong( 0x7 ),	/* 7 */
/* 168 */	NdrFcShort( 0xffff800c ),	/* Offset= -32756 (-32588) */
/* 170 */	NdrFcLong( 0x8 ),	/* 8 */
/* 174 */	NdrFcShort( 0xc4 ),	/* Offset= 196 (370) */
/* 176 */	NdrFcLong( 0xd ),	/* 13 */
/* 180 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (394) */
/* 182 */	NdrFcLong( 0x9 ),	/* 9 */
/* 186 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (412) */
/* 188 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 192 */	NdrFcShort( 0xee ),	/* Offset= 238 (430) */
/* 194 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 198 */	NdrFcShort( 0x26c ),	/* Offset= 620 (818) */
/* 200 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 204 */	NdrFcShort( 0x26a ),	/* Offset= 618 (822) */
/* 206 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 210 */	NdrFcShort( 0x268 ),	/* Offset= 616 (826) */
/* 212 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 216 */	NdrFcShort( 0x266 ),	/* Offset= 614 (830) */
/* 218 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 222 */	NdrFcShort( 0x264 ),	/* Offset= 612 (834) */
/* 224 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 228 */	NdrFcShort( 0x252 ),	/* Offset= 594 (822) */
/* 230 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 234 */	NdrFcShort( 0x250 ),	/* Offset= 592 (826) */
/* 236 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 240 */	NdrFcShort( 0x256 ),	/* Offset= 598 (838) */
/* 242 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 246 */	NdrFcShort( 0x24c ),	/* Offset= 588 (834) */
/* 248 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 252 */	NdrFcShort( 0x24e ),	/* Offset= 590 (842) */
/* 254 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 258 */	NdrFcShort( 0x24c ),	/* Offset= 588 (846) */
/* 260 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 264 */	NdrFcShort( 0x24a ),	/* Offset= 586 (850) */
/* 266 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 270 */	NdrFcShort( 0x248 ),	/* Offset= 584 (854) */
/* 272 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 276 */	NdrFcShort( 0x246 ),	/* Offset= 582 (858) */
/* 278 */	NdrFcLong( 0x10 ),	/* 16 */
/* 282 */	NdrFcShort( 0xffff8002 ),	/* Offset= -32766 (-32484) */
/* 284 */	NdrFcLong( 0x12 ),	/* 18 */
/* 288 */	NdrFcShort( 0xffff8006 ),	/* Offset= -32762 (-32474) */
/* 290 */	NdrFcLong( 0x13 ),	/* 19 */
/* 294 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32466) */
/* 296 */	NdrFcLong( 0x16 ),	/* 22 */
/* 300 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32460) */
/* 302 */	NdrFcLong( 0x17 ),	/* 23 */
/* 306 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32454) */
/* 308 */	NdrFcLong( 0xe ),	/* 14 */
/* 312 */	NdrFcShort( 0x22a ),	/* Offset= 554 (866) */
/* 314 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 318 */	NdrFcShort( 0x230 ),	/* Offset= 560 (878) */
/* 320 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 324 */	NdrFcShort( 0x1ee ),	/* Offset= 494 (818) */
/* 326 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 330 */	NdrFcShort( 0x1ec ),	/* Offset= 492 (822) */
/* 332 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 336 */	NdrFcShort( 0x1ea ),	/* Offset= 490 (826) */
/* 338 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 342 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (826) */
/* 344 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 348 */	NdrFcShort( 0x1de ),	/* Offset= 478 (826) */
/* 350 */	NdrFcLong( 0x0 ),	/* 0 */
/* 354 */	NdrFcShort( 0x0 ),	/* Offset= 0 (354) */
/* 356 */	NdrFcLong( 0x1 ),	/* 1 */
/* 360 */	NdrFcShort( 0x0 ),	/* Offset= 0 (360) */
/* 362 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (361) */
/* 364 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 370 */	
			0x12, 0x0,	/* FC_UP */
/* 372 */	NdrFcShort( 0xc ),	/* Offset= 12 (384) */
/* 374 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 376 */	NdrFcShort( 0x2 ),	/* 2 */
/* 378 */	0x9,		/* 9 */
			0x0,		/*  */
/* 380 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 382 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 384 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 388 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (374) */
/* 390 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 392 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 394 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 406 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 408 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 410 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 412 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 414 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 422 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 424 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 426 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 428 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 430 */	
			0x12, 0x0,	/* FC_UP */
/* 432 */	NdrFcShort( 0x170 ),	/* Offset= 368 (800) */
/* 434 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 436 */	NdrFcShort( 0x8 ),	/* 8 */
/* 438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 440 */	NdrFcLong( 0x8 ),	/* 8 */
/* 444 */	NdrFcShort( 0x4c ),	/* Offset= 76 (520) */
/* 446 */	NdrFcLong( 0xd ),	/* 13 */
/* 450 */	NdrFcShort( 0x6c ),	/* Offset= 108 (558) */
/* 452 */	NdrFcLong( 0x9 ),	/* 9 */
/* 456 */	NdrFcShort( 0x88 ),	/* Offset= 136 (592) */
/* 458 */	NdrFcLong( 0xc ),	/* 12 */
/* 462 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (638) */
/* 464 */	NdrFcLong( 0x10 ),	/* 16 */
/* 468 */	NdrFcShort( 0xc8 ),	/* Offset= 200 (668) */
/* 470 */	NdrFcLong( 0x2 ),	/* 2 */
/* 474 */	NdrFcShort( 0xe0 ),	/* Offset= 224 (698) */
/* 476 */	NdrFcLong( 0x3 ),	/* 3 */
/* 480 */	NdrFcShort( 0xf8 ),	/* Offset= 248 (728) */
/* 482 */	NdrFcLong( 0x14 ),	/* 20 */
/* 486 */	NdrFcShort( 0x110 ),	/* Offset= 272 (758) */
/* 488 */	NdrFcShort( 0x0 ),	/* Offset= 0 (488) */
/* 490 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 492 */	NdrFcShort( 0x4 ),	/* 4 */
/* 494 */	0x18,		/* 24 */
			0x0,		/*  */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 500 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 502 */	NdrFcShort( 0x4 ),	/* 4 */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	0x12, 0x0,	/* FC_UP */
/* 514 */	NdrFcShort( 0xffffff7e ),	/* Offset= -130 (384) */
/* 516 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 518 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 520 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 524 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 526 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x4 ),	/* 4 */
/* 532 */	0x11, 0x0,	/* FC_RP */
/* 534 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (490) */
/* 536 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 538 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 540 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 544 */	0x18,		/* 24 */
			0x0,		/*  */
/* 546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 548 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 552 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 554 */	NdrFcShort( 0xffffff60 ),	/* Offset= -160 (394) */
/* 556 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 558 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x6 ),	/* Offset= 6 (570) */
/* 566 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 568 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 570 */	
			0x11, 0x0,	/* FC_RP */
/* 572 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (540) */
/* 574 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	0x18,		/* 24 */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 586 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (412) */
/* 590 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 592 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x6 ),	/* Offset= 6 (604) */
/* 600 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 602 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 604 */	
			0x11, 0x0,	/* FC_RP */
/* 606 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (574) */
/* 608 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 610 */	NdrFcShort( 0x4 ),	/* 4 */
/* 612 */	0x18,		/* 24 */
			0x0,		/*  */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 618 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 620 */	NdrFcShort( 0x4 ),	/* 4 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 624 */	NdrFcShort( 0x1 ),	/* 1 */
/* 626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	0x12, 0x0,	/* FC_UP */
/* 632 */	NdrFcShort( 0xfa ),	/* Offset= 250 (882) */
/* 634 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 636 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 638 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 642 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 644 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 646 */	NdrFcShort( 0x4 ),	/* 4 */
/* 648 */	NdrFcShort( 0x4 ),	/* 4 */
/* 650 */	0x11, 0x0,	/* FC_RP */
/* 652 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (608) */
/* 654 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 656 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 658 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 662 */	0x19,		/* 25 */
			0x0,		/*  */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 668 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 670 */	NdrFcShort( 0x8 ),	/* 8 */
/* 672 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 674 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 676 */	NdrFcShort( 0x4 ),	/* 4 */
/* 678 */	NdrFcShort( 0x4 ),	/* 4 */
/* 680 */	0x12, 0x0,	/* FC_UP */
/* 682 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (658) */
/* 684 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 686 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 688 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 690 */	NdrFcShort( 0x2 ),	/* 2 */
/* 692 */	0x19,		/* 25 */
			0x0,		/*  */
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 698 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 702 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 704 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	NdrFcShort( 0x4 ),	/* 4 */
/* 710 */	0x12, 0x0,	/* FC_UP */
/* 712 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (688) */
/* 714 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 716 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 718 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 720 */	NdrFcShort( 0x4 ),	/* 4 */
/* 722 */	0x19,		/* 25 */
			0x0,		/*  */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 728 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x8 ),	/* 8 */
/* 732 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 734 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 736 */	NdrFcShort( 0x4 ),	/* 4 */
/* 738 */	NdrFcShort( 0x4 ),	/* 4 */
/* 740 */	0x12, 0x0,	/* FC_UP */
/* 742 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (718) */
/* 744 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 746 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 748 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 750 */	NdrFcShort( 0x8 ),	/* 8 */
/* 752 */	0x19,		/* 25 */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 758 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 762 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 764 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 770 */	0x12, 0x0,	/* FC_UP */
/* 772 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (748) */
/* 774 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 776 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 778 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 784 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 790 */	0x6,		/* 6 */
			0x0,		/*  */
/* 792 */	NdrFcShort( 0xffffffe8 ),	/* -24 */
/* 794 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 796 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (778) */
/* 798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 800 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 802 */	NdrFcShort( 0x18 ),	/* 24 */
/* 804 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (786) */
/* 806 */	NdrFcShort( 0x0 ),	/* Offset= 0 (806) */
/* 808 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 810 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 812 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 814 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe83 ),	/* Offset= -381 (434) */
			0x5b,		/* FC_END */
/* 818 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 820 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 822 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 824 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 826 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 828 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 830 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 832 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 834 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 836 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 838 */	
			0x12, 0x0,	/* FC_UP */
/* 840 */	NdrFcShort( 0xfffffe24 ),	/* Offset= -476 (364) */
/* 842 */	
			0x12, 0x10,	/* FC_UP */
/* 844 */	NdrFcShort( 0xfffffe26 ),	/* Offset= -474 (370) */
/* 846 */	
			0x12, 0x10,	/* FC_UP */
/* 848 */	NdrFcShort( 0xfffffe3a ),	/* Offset= -454 (394) */
/* 850 */	
			0x12, 0x10,	/* FC_UP */
/* 852 */	NdrFcShort( 0xfffffe48 ),	/* Offset= -440 (412) */
/* 854 */	
			0x12, 0x10,	/* FC_UP */
/* 856 */	NdrFcShort( 0xfffffe56 ),	/* Offset= -426 (430) */
/* 858 */	
			0x12, 0x10,	/* FC_UP */
/* 860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (862) */
/* 862 */	
			0x12, 0x0,	/* FC_UP */
/* 864 */	NdrFcShort( 0xfffffca0 ),	/* Offset= -864 (0) */
/* 866 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 868 */	NdrFcShort( 0x10 ),	/* 16 */
/* 870 */	0x6,		/* FC_SHORT */
			0x2,		/* FC_CHAR */
/* 872 */	0x2,		/* FC_CHAR */
			0x38,		/* FC_ALIGNM4 */
/* 874 */	0x8,		/* FC_LONG */
			0x39,		/* FC_ALIGNM8 */
/* 876 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 878 */	
			0x12, 0x0,	/* FC_UP */
/* 880 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (866) */
/* 882 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 884 */	NdrFcShort( 0x18 ),	/* 24 */
/* 886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0x0 ),	/* Offset= 0 (888) */
/* 890 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 892 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 894 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 896 */	NdrFcShort( 0xfffffce8 ),	/* Offset= -792 (104) */
/* 898 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 900 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x10 ),	/* 16 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0xfffffcd8 ),	/* Offset= -808 (100) */
/* 910 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	0x18,		/* 24 */
			0x0,		/*  */
/* 916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 918 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 922 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 924 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (900) */
/* 926 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 928 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 930 */	NdrFcShort( 0x4 ),	/* 4 */
/* 932 */	0x18,		/* 24 */
			0x0,		/*  */
/* 934 */	NdrFcShort( 0xc ),	/* 12 */
/* 936 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 938 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 940 */	NdrFcShort( 0x10 ),	/* 16 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x8 ),	/* Offset= 8 (952) */
/* 946 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 948 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 950 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 952 */	
			0x12, 0x0,	/* FC_UP */
/* 954 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (910) */
/* 956 */	
			0x12, 0x0,	/* FC_UP */
/* 958 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (928) */
/* 960 */	
			0x11, 0x0,	/* FC_RP */
/* 962 */	NdrFcShort( 0x10 ),	/* Offset= 16 (978) */
/* 964 */	
			0x13, 0x0,	/* FC_OP */
/* 966 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (882) */
/* 968 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x10 ),	/* 16 */
/* 974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 976 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (964) */
/* 978 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 984 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 986 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 990 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (968) */
/* 994 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 996 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 998 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1000) */
/* 1000 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (964) */
/* 1010 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1012 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1048) */
/* 1014 */	
			0x13, 0x0,	/* FC_OP */
/* 1016 */	NdrFcShort( 0xfffffd88 ),	/* Offset= -632 (384) */
/* 1018 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1022 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (1014) */
/* 1028 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1032 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1036 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (1014) */
/* 1038 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1040 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1042 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1014) */
/* 1048 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1050 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1054 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1054) */
/* 1056 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1058 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1060 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (1018) */
/* 1062 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1064 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (1028) */
/* 1066 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1068 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (1038) */
/* 1070 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1072 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1074 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1076 */	
			0x11, 0x0,	/* FC_RP */
/* 1078 */	NdrFcShort( 0xc ),	/* Offset= 12 (1090) */
/* 1080 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1084 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1088 */	NdrFcShort( 0xffffff84 ),	/* Offset= -124 (964) */
/* 1090 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1094 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1096 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1098 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1102 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1104 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1080) */
/* 1106 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1108 */	
			0x11, 0x10,	/* FC_RP */
/* 1110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1112) */
/* 1112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1114 */	NdrFcLong( 0x20404 ),	/* 132100 */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1124 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1126 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1128 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1130 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1136 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 1138 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1142) */
/* 1142 */	
			0x13, 0x0,	/* FC_OP */
/* 1144 */	NdrFcShort( 0xb4 ),	/* Offset= 180 (1324) */
/* 1146 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x6,		/* FC_SHORT */
/* 1148 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1150 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1152 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1154) */
/* 1154 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1158 */	NdrFcLong( 0x1a ),	/* 26 */
/* 1162 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1184) */
/* 1164 */	NdrFcLong( 0x1b ),	/* 27 */
/* 1168 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1184) */
/* 1170 */	NdrFcLong( 0x1c ),	/* 28 */
/* 1174 */	NdrFcShort( 0xe ),	/* Offset= 14 (1188) */
/* 1176 */	NdrFcLong( 0x1d ),	/* 29 */
/* 1180 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31580) */
/* 1182 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1182) */
/* 1184 */	
			0x13, 0x0,	/* FC_OP */
/* 1186 */	NdrFcShort( 0x24 ),	/* Offset= 36 (1222) */
/* 1188 */	
			0x13, 0x0,	/* FC_OP */
/* 1190 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1206) */
/* 1192 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1196 */	0x6,		/* 6 */
			0x0,		/*  */
/* 1198 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1200 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1202 */	NdrFcShort( 0xfffffe58 ),	/* Offset= -424 (778) */
/* 1204 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1206 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1210 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (1192) */
/* 1212 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1212) */
/* 1214 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1216 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1222) */
/* 1218 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1220 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1222 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1228) */
/* 1230 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1232 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (1146) */
/* 1234 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1238 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	NdrFcShort( 0xfffffee6 ),	/* Offset= -282 (964) */
/* 1248 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1250 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1254) */
/* 1256 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1258 */	0x4,		/* 4 */
			NdrFcShort( 0xffffffeb ),	/* Offset= -21 (1238) */
			0x5b,		/* FC_END */
/* 1262 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1264 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1274) */
/* 1270 */	0x36,		/* FC_POINTER */
			0x6,		/* FC_SHORT */
/* 1272 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 1274 */	
			0x13, 0x0,	/* FC_OP */
/* 1276 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (1248) */
/* 1278 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1280 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1282 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1284 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1284) */
/* 1286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1288 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (1222) */
/* 1290 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1292 */	NdrFcShort( 0xffffffe2 ),	/* Offset= -30 (1262) */
/* 1294 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1296 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1298 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1300 */	0x16,		/* 22 */
			0x0,		/*  */
/* 1302 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1304 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1306 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1310 */	0x16,		/* 22 */
			0x0,		/*  */
/* 1312 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1314 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1318 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1320 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (1278) */
/* 1322 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1324 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1326 */	NdrFcShort( 0x34 ),	/* 52 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1350) */
/* 1332 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1334 */	0x36,		/* FC_POINTER */
			0xe,		/* FC_ENUM32 */
/* 1336 */	0xe,		/* FC_ENUM32 */
			0xe,		/* FC_ENUM32 */
/* 1338 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1340 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1344 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (1278) */
/* 1346 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1348 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1350 */	
			0x13, 0x0,	/* FC_OP */
/* 1352 */	NdrFcShort( 0xffffffc8 ),	/* Offset= -56 (1296) */
/* 1354 */	
			0x13, 0x0,	/* FC_OP */
/* 1356 */	NdrFcShort( 0xffffffce ),	/* Offset= -50 (1306) */
/* 1358 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1360 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1362) */
/* 1362 */	
			0x13, 0x0,	/* FC_OP */
/* 1364 */	NdrFcShort( 0x36 ),	/* Offset= 54 (1418) */
/* 1366 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1368 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1370 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1374) */
/* 1374 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1376 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1382 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31378) */
/* 1384 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1388 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31372) */
/* 1390 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1394 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-31366) */
/* 1396 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1400 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1404) */
/* 1402 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1401) */
/* 1404 */	
			0x13, 0x0,	/* FC_OP */
/* 1406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1408) */
/* 1408 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1412 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0xfffffe3c ),	/* Offset= -452 (964) */
/* 1418 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1424 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1440) */
/* 1426 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1428 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1430 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (1366) */
/* 1432 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1434 */	NdrFcShort( 0xffffff64 ),	/* Offset= -156 (1278) */
/* 1436 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1438 */	0xe,		/* FC_ENUM32 */
			0x5b,		/* FC_END */
/* 1440 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1442 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1444 */	
			0x11, 0x10,	/* FC_RP */
/* 1446 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1448) */
/* 1448 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1450 */	NdrFcLong( 0x20403 ),	/* 132099 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1458 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1460 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1462 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1464 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1466 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1468 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1472) */
/* 1470 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1472 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 1474 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1476 */	NdrFcShort( 0xc ),	/* 12 */
/* 1478 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1480 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (1470) */
/* 1482 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1484 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1486) */
/* 1486 */	
			0x13, 0x0,	/* FC_OP */
/* 1488 */	NdrFcShort( 0xe ),	/* Offset= 14 (1502) */
/* 1490 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1496) */
/* 1498 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1500 */	0x3e,		/* FC_STRUCTPAD2 */
			0x5b,		/* FC_END */
/* 1502 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1504 */	NdrFcShort( 0x4c ),	/* 76 */
/* 1506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1508 */	NdrFcShort( 0x1e ),	/* Offset= 30 (1538) */
/* 1510 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0xfffffa3c ),	/* Offset= -1476 (36) */
/* 1514 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1516 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1518 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1520 */	0xe,		/* FC_ENUM32 */
			0x6,		/* FC_SHORT */
/* 1522 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1524 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1526 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1528 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1530 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffecb ),	/* Offset= -309 (1222) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1534 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd3 ),	/* Offset= -45 (1490) */
			0x5b,		/* FC_END */
/* 1538 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1540 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1542 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1544 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1548) */
/* 1546 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1548 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 1550 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1552 */	NdrFcShort( 0xc ),	/* 12 */
/* 1554 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1556 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (1546) */
/* 1558 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1560 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1564) */
/* 1562 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1564 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 1566 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1568 */	NdrFcShort( 0xc ),	/* 12 */
/* 1570 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1572 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (1562) */
/* 1574 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1576 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1580) */
/* 1578 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1580 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 1582 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1584 */	NdrFcShort( 0xc ),	/* 12 */
/* 1586 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1588 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (1578) */
/* 1590 */	
			0x11, 0x0,	/* FC_RP */
/* 1592 */	NdrFcShort( 0xc ),	/* Offset= 12 (1604) */
/* 1594 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1596 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1598 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0xfffffdb4 ),	/* Offset= -588 (1014) */
/* 1604 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1610 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1612 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 1614 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1594) */
/* 1620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1622 */	
			0x11, 0x0,	/* FC_RP */
/* 1624 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1626) */
/* 1626 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1628 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1630 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1632 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1634 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1636 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1638 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1650 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1652 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1656 */	
			0x11, 0x0,	/* FC_RP */
/* 1658 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1660) */
/* 1660 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1662 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1664 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1666 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1668 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1670 */	
			0x11, 0x0,	/* FC_RP */
/* 1672 */	NdrFcShort( 0xc ),	/* Offset= 12 (1684) */
/* 1674 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0xfffffd32 ),	/* Offset= -718 (964) */
/* 1684 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1688 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1690 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1692 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1696 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1698 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1674) */
/* 1700 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1702 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1704 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1706) */
/* 1706 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1714 */	NdrFcShort( 0xfffffd12 ),	/* Offset= -750 (964) */
/* 1716 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1718 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1720) */
/* 1720 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1722 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1724 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0xfffffd36 ),	/* Offset= -714 (1014) */
/* 1730 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1732 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1734) */
/* 1734 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1736 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1738 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0xfffffd28 ),	/* Offset= -728 (1014) */
/* 1744 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1746 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1748) */
/* 1748 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1752 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1756 */	NdrFcShort( 0xfffffd1a ),	/* Offset= -742 (1014) */
/* 1758 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1762) */
/* 1762 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1764 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1766 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0xfffffd0c ),	/* Offset= -756 (1014) */
/* 1772 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1774 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1776) */
/* 1776 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1778 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1780 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0xfffffcfe ),	/* Offset= -770 (1014) */
/* 1786 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1788 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1790 */	
			0x11, 0x10,	/* FC_RP */
/* 1792 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1794) */
/* 1794 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 1796 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1798 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1800 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1802 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1804) */
/* 1804 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1812 */	NdrFcShort( 0xfffffce2 ),	/* Offset= -798 (1014) */
/* 1814 */	
			0x11, 0x10,	/* FC_RP */
/* 1816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1818) */
/* 1818 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1820 */	NdrFcLong( 0x20402 ),	/* 132098 */
/* 1824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1828 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1830 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1832 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1834 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1836 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1840) */
/* 1840 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1844 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1848 */	NdrFcShort( 0xfffffc8c ),	/* Offset= -884 (964) */
/* 1850 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1852 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1854) */
/* 1854 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1858 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1862 */	NdrFcShort( 0xfffffc7e ),	/* Offset= -898 (964) */
/* 1864 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1866 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1868) */
/* 1868 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0xfffffc70 ),	/* Offset= -912 (964) */
/* 1878 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1880 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1882) */
/* 1882 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0xfffffc62 ),	/* Offset= -926 (964) */
/* 1892 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1894 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1896) */
/* 1896 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1900 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1904 */	NdrFcShort( 0xfffffc54 ),	/* Offset= -940 (964) */
/* 1906 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1908 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1910) */
/* 1910 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1914 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0xfffffc78 ),	/* Offset= -904 (1014) */
/* 1920 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1922 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1924) */
/* 1924 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1928 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0xfffffc6a ),	/* Offset= -918 (1014) */
/* 1934 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1936 */	NdrFcShort( 0x30 ),	/* Offset= 48 (1984) */
/* 1938 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1942 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1946 */	NdrFcShort( 0xfffffc2a ),	/* Offset= -982 (964) */
/* 1948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1950 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1954 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1954) */
/* 1956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1958 */	NdrFcShort( 0xfffff87e ),	/* Offset= -1922 (36) */
/* 1960 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1962 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1938) */
/* 1964 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1966 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1970 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1978 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1980 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1948) */
/* 1982 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1984 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1990 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1996) */
/* 1992 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1994 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1996 */	
			0x13, 0x0,	/* FC_OP */
/* 1998 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1966) */
/* 2000 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 2002 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2004) */
/* 2004 */	
			0x13, 0x0,	/* FC_OP */
/* 2006 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2008) */
/* 2008 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 2010 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2014 */	NdrFcShort( 0x0 ),	/* Offset= 0 (2014) */
/* 2016 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2018 */	NdrFcShort( 0xfffff842 ),	/* Offset= -1982 (36) */
/* 2020 */	0x8,		/* FC_LONG */
			0xe,		/* FC_ENUM32 */
/* 2022 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 2024 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 2026 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2028 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2030 */	NdrFcShort( 0x4 ),	/* Offset= 4 (2034) */
/* 2032 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 2034 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/* 2036 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2038 */	NdrFcShort( 0xc ),	/* 12 */
/* 2040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2042 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (2032) */
/* 2044 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2046 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2048) */
/* 2048 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2050 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0xfffffbee ),	/* Offset= -1042 (1014) */
/* 2058 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2060 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2062) */
/* 2062 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2064 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2066 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0xfffffbe0 ),	/* Offset= -1056 (1014) */
/* 2072 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2074 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2076) */
/* 2076 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2084 */	NdrFcShort( 0xfffffbd2 ),	/* Offset= -1070 (1014) */
/* 2086 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2088 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2090) */
/* 2090 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2098 */	NdrFcShort( 0xfffffbc4 ),	/* Offset= -1084 (1014) */
/* 2100 */	
			0x11, 0x0,	/* FC_RP */
/* 2102 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2104) */
/* 2104 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	0x26,		/* 38 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2110 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2112 */	0x26,		/* 38 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2114 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2116 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 2118 */	NdrFcShort( 0xfffff7c2 ),	/* Offset= -2110 (8) */
/* 2120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 2122 */	
			0x11, 0x0,	/* FC_RP */
/* 2124 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2126) */
/* 2126 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 2128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2130 */	0x26,		/* 38 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2132 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2134 */	0x26,		/* 38 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 2136 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2138 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 2140 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 2142 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 2144 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2148) */
/* 2148 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2156 */	NdrFcShort( 0xfffffb8a ),	/* Offset= -1142 (1014) */
/* 2158 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2160 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2162) */
/* 2162 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2170 */	NdrFcShort( 0xfffffb4a ),	/* Offset= -1206 (964) */
/* 2172 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2174 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2176) */
/* 2176 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2178 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2180 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0xfffffb6e ),	/* Offset= -1170 (1014) */
/* 2186 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 2188 */	NdrFcShort( 0x2 ),	/* Offset= 2 (2190) */
/* 2190 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 2192 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0xfffffb60 ),	/* Offset= -1184 (1014) */

			0x0
        }
    };

const CInterfaceProxyVtbl * _oaidl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IDispatchProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypeInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypeLibProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypeCompProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumVARIANTProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypeLib2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITypeInfo2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ISupportErrorInfoProxyVtbl,
    0
};

const CInterfaceStubVtbl * _oaidl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IDispatchStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypeInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypeLibStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypeCompStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumVARIANTStubVtbl,
    ( CInterfaceStubVtbl *) &_ITypeLib2StubVtbl,
    ( CInterfaceStubVtbl *) &_ITypeInfo2StubVtbl,
    ( CInterfaceStubVtbl *) &_ISupportErrorInfoStubVtbl,
    0
};

PCInterfaceName const _oaidl_InterfaceNamesList[] = 
{
    "IDispatch",
    "ITypeInfo",
    "ITypeLib",
    "ITypeComp",
    "IEnumVARIANT",
    "ITypeLib2",
    "ITypeInfo2",
    "ISupportErrorInfo",
    0
};


#define _oaidl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _oaidl, pIID, n)

int __stdcall _oaidl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _oaidl, 8, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _oaidl, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _oaidl, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _oaidl, 8, *pIndex )
    
}

const ExtendedProxyFileInfo oaidl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _oaidl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _oaidl_StubVtblList,
    (const PCInterfaceName * ) & _oaidl_InterfaceNamesList,
    0, // no delegation
    & _oaidl_IID_Lookup, 
    8,
    2
};
