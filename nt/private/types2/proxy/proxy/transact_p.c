/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:03:45 2019
 */
/* Compiler settings for transact.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "transact.h"

#define TYPE_FORMAT_STRING_SIZE   455                               
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


/* Standard interface: __MIDL__intf_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: BasicTransactionTypes, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITransaction, ver. 0.0,
   GUID={0x0fb15084,0xaf41,0x11ce,{0xbd,0x2b,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransaction_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransaction_FormatStringOffsetTable[] = 
    {
    0,
    36,
    72
    };

static const MIDL_SERVER_INFO ITransaction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransaction_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransaction_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransaction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionProxyVtbl = 
{
    &ITransaction_ProxyInfo,
    &IID_ITransaction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransaction::Commit */ ,
    (void *)-1 /* ITransaction::Abort */ ,
    (void *)-1 /* ITransaction::GetTransactionInfo */
};

const CInterfaceStubVtbl _ITransactionStubVtbl =
{
    &IID_ITransaction,
    &ITransaction_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionNested, ver. 0.0,
   GUID={0x68F03E31,0x7610,0x11ce,{0xBD,0x02,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionNested_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionNested_FormatStringOffsetTable[] = 
    {
    0,
    36,
    72,
    96
    };

static const MIDL_SERVER_INFO ITransactionNested_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionNested_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionNested_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionNested_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _ITransactionNestedProxyVtbl = 
{
    &ITransactionNested_ProxyInfo,
    &IID_ITransactionNested,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransaction::Commit */ ,
    (void *)-1 /* ITransaction::Abort */ ,
    (void *)-1 /* ITransaction::GetTransactionInfo */ ,
    (void *)-1 /* ITransactionNested::GetParent */
};

const CInterfaceStubVtbl _ITransactionNestedStubVtbl =
{
    &IID_ITransactionNested,
    &ITransactionNested_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionDispenser, ver. 0.0,
   GUID={0x0141fda1,0x8fc0,0x11ce,{0xbd,0x18,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionDispenser_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionDispenser_FormatStringOffsetTable[] = 
    {
    126
    };

static const MIDL_SERVER_INFO ITransactionDispenser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionDispenser_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionDispenser_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionDispenser_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITransactionDispenserProxyVtbl = 
{
    &ITransactionDispenser_ProxyInfo,
    &IID_ITransactionDispenser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionDispenser::BeginTransaction */
};

const CInterfaceStubVtbl _ITransactionDispenserStubVtbl =
{
    &IID_ITransactionDispenser,
    &ITransactionDispenser_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionDispenserAdmin, ver. 0.0,
   GUID={0x68F03E3B,0x7610,0x11ce,{0xBD,0x02,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionDispenserAdmin_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionDispenserAdmin_FormatStringOffsetTable[] = 
    {
    126,
    180,
    204
    };

static const MIDL_SERVER_INFO ITransactionDispenserAdmin_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionDispenserAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionDispenserAdmin_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionDispenserAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionDispenserAdminProxyVtbl = 
{
    &ITransactionDispenserAdmin_ProxyInfo,
    &IID_ITransactionDispenserAdmin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionDispenser::BeginTransaction */ ,
    (void *)-1 /* ITransactionDispenserAdmin::EnumTransactions */ ,
    (void *)-1 /* ITransactionDispenserAdmin::GetStatistics */
};

const CInterfaceStubVtbl _ITransactionDispenserAdminStubVtbl =
{
    &IID_ITransactionDispenserAdmin,
    &ITransactionDispenserAdmin_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumTransaction, ver. 0.0,
   GUID={0x68F03E3A,0x7610,0x11ce,{0xBD,0x02,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumTransaction_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumTransaction_RemoteNext_Proxy( 
    IEnumTransaction __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ ITransaction __RPC_FAR *__RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[228],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumTransaction_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumTransaction __RPC_FAR *This;
        ULONG celt;
        ITransaction __RPC_FAR *__RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumTransaction __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        ITransaction __RPC_FAR *__RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumTransaction_Next_Stub(
                                     (IEnumTransaction *) pParamStruct->This,
                                     pParamStruct->celt,
                                     pParamStruct->rgelt,
                                     pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumTransaction_FormatStringOffsetTable[] = 
    {
    228,
    264,
    288,
    306
    };

static const STUB_THUNK IEnumTransaction_StubThunkTable[] = 
    {
    IEnumTransaction_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumTransaction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumTransaction_FormatStringOffsetTable[-3],
    &IEnumTransaction_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumTransaction_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumTransaction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumTransactionProxyVtbl = 
{
    &IEnumTransaction_ProxyInfo,
    &IID_IEnumTransaction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumTransaction_Next_Proxy ,
    (void *)-1 /* IEnumTransaction::Skip */ ,
    (void *)-1 /* IEnumTransaction::Reset */ ,
    (void *)-1 /* IEnumTransaction::Clone */
};

const CInterfaceStubVtbl _IEnumTransactionStubVtbl =
{
    &IID_IEnumTransaction,
    &IEnumTransaction_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionAdmin, ver. 0.0,
   GUID={0x0dea57d2,0xa51c,0x11ce,{0xa9,0xda,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionAdmin_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionAdmin_FormatStringOffsetTable[] = 
    {
    330,
    348,
    366,
    396
    };

static const MIDL_SERVER_INFO ITransactionAdmin_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionAdmin_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionAdmin_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _ITransactionAdminProxyVtbl = 
{
    &ITransactionAdmin_ProxyInfo,
    &IID_ITransactionAdmin,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionAdmin::ForceCommit */ ,
    (void *)-1 /* ITransactionAdmin::ForceAbort */ ,
    (void *)-1 /* ITransactionAdmin::SetDescription */ ,
    (void *)-1 /* ITransactionAdmin::GetDescription */
};

const CInterfaceStubVtbl _ITransactionAdminStubVtbl =
{
    &IID_ITransactionAdmin,
    &ITransactionAdmin_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionControl, ver. 0.0,
   GUID={0x0dea57d1,0xa51c,0x11ce,{0xa9,0xda,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionControl_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionControl_FormatStringOffsetTable[] = 
    {
    426,
    264,
    450
    };

static const MIDL_SERVER_INFO ITransactionControl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionControl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionControl_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionControl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionControlProxyVtbl = 
{
    &ITransactionControl_ProxyInfo,
    &IID_ITransactionControl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionControl::GetStatus */ ,
    (void *)-1 /* ITransactionControl::SetTimeout */ ,
    (void *)-1 /* ITransactionControl::PreventCommit */
};

const CInterfaceStubVtbl _ITransactionControlStubVtbl =
{
    &IID_ITransactionControl,
    &ITransactionControl_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionAdjustEvents, ver. 0.0,
   GUID={0x0dea57d0,0xa51c,0x11ce,{0xa9,0xda,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionAdjustEvents_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionAdjustEvents_FormatStringOffsetTable[] = 
    {
    474
    };

static const MIDL_SERVER_INFO ITransactionAdjustEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionAdjustEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionAdjustEvents_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionAdjustEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITransactionAdjustEventsProxyVtbl = 
{
    &ITransactionAdjustEvents_ProxyInfo,
    &IID_ITransactionAdjustEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionAdjustEvents::OnPrePrepareAdjust */
};

const CInterfaceStubVtbl _ITransactionAdjustEventsStubVtbl =
{
    &IID_ITransactionAdjustEvents,
    &ITransactionAdjustEvents_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionVetoEvents, ver. 0.0,
   GUID={0xfd38c571,0x76b3,0x11ce,{0xbd,0x03,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionVetoEvents_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionVetoEvents_FormatStringOffsetTable[] = 
    {
    474
    };

static const MIDL_SERVER_INFO ITransactionVetoEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionVetoEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionVetoEvents_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionVetoEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITransactionVetoEventsProxyVtbl = 
{
    &ITransactionVetoEvents_ProxyInfo,
    &IID_ITransactionVetoEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionVetoEvents::OnPrePrepare */
};

const CInterfaceStubVtbl _ITransactionVetoEventsStubVtbl =
{
    &IID_ITransactionVetoEvents,
    &ITransactionVetoEvents_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionOutcomeEvents, ver. 0.0,
   GUID={0x0fb15080,0xaf41,0x11ce,{0xbd,0x2b,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionOutcomeEvents_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionOutcomeEvents_FormatStringOffsetTable[] = 
    {
    498,
    534,
    576
    };

static const MIDL_SERVER_INFO ITransactionOutcomeEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionOutcomeEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionOutcomeEvents_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionOutcomeEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionOutcomeEventsProxyVtbl = 
{
    &ITransactionOutcomeEvents_ProxyInfo,
    &IID_ITransactionOutcomeEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionOutcomeEvents::OnCommit */ ,
    (void *)-1 /* ITransactionOutcomeEvents::OnAbort */ ,
    (void *)-1 /* ITransactionOutcomeEvents::OnHeuristicDecision */
};

const CInterfaceStubVtbl _ITransactionOutcomeEventsStubVtbl =
{
    &IID_ITransactionOutcomeEvents,
    &ITransactionOutcomeEvents_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionCompletionEvents, ver. 0.0,
   GUID={0x0dea57d4,0xa51c,0x11ce,{0xa9,0xda,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionCompletionEvents_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionCompletionEvents_FormatStringOffsetTable[] = 
    {
    498,
    534,
    576
    };

static const MIDL_SERVER_INFO ITransactionCompletionEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionCompletionEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionCompletionEvents_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionCompletionEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionCompletionEventsProxyVtbl = 
{
    &ITransactionCompletionEvents_ProxyInfo,
    &IID_ITransactionCompletionEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionCompletionEvents::OnCommit */ ,
    (void *)-1 /* ITransactionCompletionEvents::OnAbort */ ,
    (void *)-1 /* ITransactionCompletionEvents::OnHeuristicDecision */
};

const CInterfaceStubVtbl _ITransactionCompletionEventsStubVtbl =
{
    &IID_ITransactionCompletionEvents,
    &ITransactionCompletionEvents_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Standard interface: TransactionCoordinationTypes, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITransactionCoordinator, ver. 0.0,
   GUID={0x0fb15083,0xaf41,0x11ce,{0xbd,0x2b,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionCoordinator_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionCoordinator_FormatStringOffsetTable[] = 
    {
    612,
    666,
    720
    };

static const MIDL_SERVER_INFO ITransactionCoordinator_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionCoordinator_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionCoordinator_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionCoordinator_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionCoordinatorProxyVtbl = 
{
    &ITransactionCoordinator_ProxyInfo,
    &IID_ITransactionCoordinator,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionCoordinator::Enlist */ ,
    (void *)-1 /* ITransactionCoordinator::EnlistSinglePhase */ ,
    (void *)-1 /* ITransactionCoordinator::EnumResources */
};

const CInterfaceStubVtbl _ITransactionCoordinatorStubVtbl =
{
    &IID_ITransactionCoordinator,
    &ITransactionCoordinator_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionResourceRecover, ver. 0.0,
   GUID={0x7e8e6200,0x76ba,0x11ce,{0xbd,0x03,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionResourceRecover_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionResourceRecover_FormatStringOffsetTable[] = 
    {
    744,
    768
    };

static const MIDL_SERVER_INFO ITransactionResourceRecover_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceRecover_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionResourceRecover_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceRecover_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITransactionResourceRecoverProxyVtbl = 
{
    &ITransactionResourceRecover_ProxyInfo,
    &IID_ITransactionResourceRecover,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionResourceRecover::GetMoniker */ ,
    (void *)-1 /* ITransactionResourceRecover::ReEnlist */
};

const CInterfaceStubVtbl _ITransactionResourceRecoverStubVtbl =
{
    &IID_ITransactionResourceRecover,
    &ITransactionResourceRecover_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionResourceManagement, ver. 0.0,
   GUID={0xa0159630,0x76ba,0x11ce,{0xbd,0x03,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionResourceManagement_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionResourceManagement_FormatStringOffsetTable[] = 
    {
    474
    };

static const MIDL_SERVER_INFO ITransactionResourceManagement_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceManagement_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionResourceManagement_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceManagement_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITransactionResourceManagementProxyVtbl = 
{
    &ITransactionResourceManagement_ProxyInfo,
    &IID_ITransactionResourceManagement,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionResourceManagement::Defect */
};

const CInterfaceStubVtbl _ITransactionResourceManagementStubVtbl =
{
    &IID_ITransactionResourceManagement,
    &ITransactionResourceManagement_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionResource, ver. 0.0,
   GUID={0x424fd970,0xd67a,0x11ce,{0x93,0xfc,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionResource_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionResource_FormatStringOffsetTable[] = 
    {
    474,
    798,
    846,
    876
    };

static const MIDL_SERVER_INFO ITransactionResource_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionResource_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionResource_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionResource_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _ITransactionResourceProxyVtbl = 
{
    &ITransactionResource_ProxyInfo,
    &IID_ITransactionResource,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionResourceManagement::Defect */ ,
    (void *)-1 /* ITransactionResource::Prepare */ ,
    (void *)-1 /* ITransactionResource::Commit */ ,
    (void *)-1 /* ITransactionResource::Abort */
};

const CInterfaceStubVtbl _ITransactionResourceStubVtbl =
{
    &IID_ITransactionResource,
    &ITransactionResource_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionResourceAsync, ver. 0.0,
   GUID={0x424fd971,0xd67a,0x11ce,{0x93,0xfc,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionResourceAsync_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionResourceAsync_FormatStringOffsetTable[] = 
    {
    474,
    912,
    846,
    876
    };

static const MIDL_SERVER_INFO ITransactionResourceAsync_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionResourceAsync_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionResourceAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _ITransactionResourceAsyncProxyVtbl = 
{
    &ITransactionResourceAsync_ProxyInfo,
    &IID_ITransactionResourceAsync,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionResourceManagement::Defect */ ,
    (void *)-1 /* ITransactionResourceAsync::PrepareRequest */ ,
    (void *)-1 /* ITransactionResourceAsync::CommitRequest */ ,
    (void *)-1 /* ITransactionResourceAsync::AbortRequest */
};

const CInterfaceStubVtbl _ITransactionResourceAsyncStubVtbl =
{
    &IID_ITransactionResourceAsync,
    &ITransactionResourceAsync_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionEnlistmentRecover, ver. 0.0,
   GUID={0xa0159635,0x76ba,0x11ce,{0xbd,0x03,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionEnlistmentRecover_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionEnlistmentRecover_FormatStringOffsetTable[] = 
    {
    744,
    954,
    990
    };

static const MIDL_SERVER_INFO ITransactionEnlistmentRecover_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistmentRecover_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionEnlistmentRecover_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistmentRecover_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionEnlistmentRecoverProxyVtbl = 
{
    &ITransactionEnlistmentRecover_ProxyInfo,
    &IID_ITransactionEnlistmentRecover,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionEnlistmentRecover::GetMoniker */ ,
    (void *)-1 /* ITransactionEnlistmentRecover::ReEnlist */ ,
    (void *)-1 /* ITransactionEnlistmentRecover::RecoveryComplete */
};

const CInterfaceStubVtbl _ITransactionEnlistmentRecoverStubVtbl =
{
    &IID_ITransactionEnlistmentRecover,
    &ITransactionEnlistmentRecover_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionEnlistment, ver. 0.0,
   GUID={0xa0159633,0x76ba,0x11ce,{0xbd,0x03,0x52,0x41,0x53,0x48,0x00,0x03}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionEnlistment_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionEnlistment_FormatStringOffsetTable[] = 
    {
    1014,
    1038,
    576,
    1068
    };

static const MIDL_SERVER_INFO ITransactionEnlistment_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistment_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionEnlistment_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistment_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _ITransactionEnlistmentProxyVtbl = 
{
    &ITransactionEnlistment_ProxyInfo,
    &IID_ITransactionEnlistment,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionEnlistment::GetTransaction */ ,
    (void *)-1 /* ITransactionEnlistment::EarlyVote */ ,
    (void *)-1 /* ITransactionEnlistment::HeuristicDecision */ ,
    (void *)-1 /* ITransactionEnlistment::Defect */
};

const CInterfaceStubVtbl _ITransactionEnlistmentStubVtbl =
{
    &IID_ITransactionEnlistment,
    &ITransactionEnlistment_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionEnlistmentAsync, ver. 0.0,
   GUID={0x0fb15081,0xaf41,0x11ce,{0xbd,0x2b,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionEnlistmentAsync_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionEnlistmentAsync_FormatStringOffsetTable[] = 
    {
    1086,
    264,
    450
    };

static const MIDL_SERVER_INFO ITransactionEnlistmentAsync_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistmentAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionEnlistmentAsync_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionEnlistmentAsync_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(6) _ITransactionEnlistmentAsyncProxyVtbl = 
{
    &ITransactionEnlistmentAsync_ProxyInfo,
    &IID_ITransactionEnlistmentAsync,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionEnlistmentAsync::PrepareRequestDone */ ,
    (void *)-1 /* ITransactionEnlistmentAsync::CommitRequestDone */ ,
    (void *)-1 /* ITransactionEnlistmentAsync::AbortRequestDone */
};

const CInterfaceStubVtbl _ITransactionEnlistmentAsyncStubVtbl =
{
    &IID_ITransactionEnlistmentAsync,
    &ITransactionEnlistmentAsync_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumXACTRE, ver. 0.0,
   GUID={0xE1CF9B54,0x8745,0x11ce,{0xA9,0xBA,0x00,0xAA,0x00,0x6C,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IEnumXACTRE_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IEnumXACTRE_RemoteNext_Proxy( 
    IEnumXACTRE __RPC_FAR * This,
    /* [in] */ ULONG celt,
    /* [length_is][size_is][out] */ XACTRE __RPC_FAR *rgelt,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&celt,
                  ( unsigned char __RPC_FAR * )&rgelt,
                  ( unsigned char __RPC_FAR * )&pceltFetched);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1122],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IEnumXACTRE_RemoteNext_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumXACTRE __RPC_FAR *This;
        ULONG celt;
        XACTRE __RPC_FAR *rgelt;
        ULONG __RPC_FAR *pceltFetched;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IEnumXACTRE __RPC_FAR *This;
        char Pad0[4];
        ULONG celt;
        char Pad1[4];
        XACTRE __RPC_FAR *rgelt;
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
    
    pParamStruct->_RetVal = IEnumXACTRE_Next_Stub(
                                (IEnumXACTRE *) pParamStruct->This,
                                pParamStruct->celt,
                                pParamStruct->rgelt,
                                pParamStruct->pceltFetched);
    
}

static const unsigned short IEnumXACTRE_FormatStringOffsetTable[] = 
    {
    1122,
    264,
    288,
    1158
    };

static const STUB_THUNK IEnumXACTRE_StubThunkTable[] = 
    {
    IEnumXACTRE_RemoteNext_Thunk,
    0,
    0,
    0
    };

static const MIDL_SERVER_INFO IEnumXACTRE_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IEnumXACTRE_FormatStringOffsetTable[-3],
    &IEnumXACTRE_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumXACTRE_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IEnumXACTRE_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IEnumXACTREProxyVtbl = 
{
    &IEnumXACTRE_ProxyInfo,
    &IID_IEnumXACTRE,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IEnumXACTRE_Next_Proxy ,
    (void *)-1 /* IEnumXACTRE::Skip */ ,
    (void *)-1 /* IEnumXACTRE::Reset */ ,
    (void *)-1 /* IEnumXACTRE::Clone */
};

const CInterfaceStubVtbl _IEnumXACTREStubVtbl =
{
    &IID_IEnumXACTRE,
    &IEnumXACTRE_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionInProgressEvents, ver. 0.0,
   GUID={0x0dea57d3,0xa51c,0x11ce,{0xa9,0xda,0x00,0xaa,0x00,0x6c,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionInProgressEvents_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionInProgressEvents_FormatStringOffsetTable[] = 
    {
    1182,
    1212
    };

static const MIDL_SERVER_INFO ITransactionInProgressEvents_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionInProgressEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionInProgressEvents_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionInProgressEvents_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITransactionInProgressEventsProxyVtbl = 
{
    &ITransactionInProgressEvents_ProxyInfo,
    &IID_ITransactionInProgressEvents,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionInProgressEvents::OnEarlyVote */ ,
    (void *)-1 /* ITransactionInProgressEvents::OnDefected */
};

const CInterfaceStubVtbl _ITransactionInProgressEventsStubVtbl =
{
    &IID_ITransactionInProgressEvents,
    &ITransactionInProgressEvents_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionExportFactory, ver. 0.0,
   GUID={0xE1CF9B53,0x8745,0x11ce,{0xA9,0xBA,0x00,0xAA,0x00,0x6C,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionExportFactory_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short ITransactionExportFactory_FormatStringOffsetTable[] = 
    {
    1236,
    1260
    };

static const MIDL_SERVER_INFO ITransactionExportFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionExportFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionExportFactory_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionExportFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITransactionExportFactoryProxyVtbl = 
{
    &ITransactionExportFactory_ProxyInfo,
    &IID_ITransactionExportFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionExportFactory::GetRemoteClassId */ ,
    (void *)-1 /* ITransactionExportFactory::Create */
};

const CInterfaceStubVtbl _ITransactionExportFactoryStubVtbl =
{
    &IID_ITransactionExportFactory,
    &ITransactionExportFactory_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionImportWhereabouts, ver. 0.0,
   GUID={0x0141fda4,0x8fc0,0x11ce,{0xbd,0x18,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionImportWhereabouts_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITransactionImportWhereabouts_RemoteGetWhereabouts_Proxy( 
    ITransactionImportWhereabouts __RPC_FAR * This,
    /* [out] */ ULONG __RPC_FAR *pcbUsed,
    /* [in] */ ULONG cbWhereabouts,
    /* [length_is][size_is][out] */ BYTE __RPC_FAR *rgbWhereabouts)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,rgbWhereabouts);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1296],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1296],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pcbUsed,
                  ( unsigned char __RPC_FAR * )&cbWhereabouts,
                  ( unsigned char __RPC_FAR * )&rgbWhereabouts);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1296],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITransactionImportWhereabouts_RemoteGetWhereabouts_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITransactionImportWhereabouts __RPC_FAR *This;
        ULONG __RPC_FAR *pcbUsed;
        ULONG cbWhereabouts;
        BYTE __RPC_FAR *rgbWhereabouts;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITransactionImportWhereabouts __RPC_FAR *This;
        char Pad0[4];
        ULONG __RPC_FAR *pcbUsed;
        char Pad1[4];
        ULONG cbWhereabouts;
        char Pad2[4];
        BYTE __RPC_FAR *rgbWhereabouts;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITransactionImportWhereabouts_GetWhereabouts_Stub(
                                                            (ITransactionImportWhereabouts *) pParamStruct->This,
                                                            pParamStruct->pcbUsed,
                                                            pParamStruct->cbWhereabouts,
                                                            pParamStruct->rgbWhereabouts);
    
}

static const unsigned short ITransactionImportWhereabouts_FormatStringOffsetTable[] = 
    {
    426,
    1296
    };

static const STUB_THUNK ITransactionImportWhereabouts_StubThunkTable[] = 
    {
    0,
    ITransactionImportWhereabouts_RemoteGetWhereabouts_Thunk
    };

static const MIDL_SERVER_INFO ITransactionImportWhereabouts_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionImportWhereabouts_FormatStringOffsetTable[-3],
    &ITransactionImportWhereabouts_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionImportWhereabouts_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionImportWhereabouts_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITransactionImportWhereaboutsProxyVtbl = 
{
    &ITransactionImportWhereabouts_ProxyInfo,
    &IID_ITransactionImportWhereabouts,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionImportWhereabouts::GetWhereaboutsSize */ ,
    ITransactionImportWhereabouts_GetWhereabouts_Proxy
};

const CInterfaceStubVtbl _ITransactionImportWhereaboutsStubVtbl =
{
    &IID_ITransactionImportWhereabouts,
    &ITransactionImportWhereabouts_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionExport, ver. 0.0,
   GUID={0x0141fda5,0x8fc0,0x11ce,{0xbd,0x18,0x20,0x4c,0x4f,0x4f,0x50,0x20}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionExport_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE ITransactionExport_RemoteGetTransactionCookie_Proxy( 
    ITransactionExport __RPC_FAR * This,
    /* [in] */ IUnknown __RPC_FAR *punkTransaction,
    /* [out] */ ULONG __RPC_FAR *pcbUsed,
    /* [in] */ ULONG cbTransactionCookie,
    /* [length_is][size_is][out] */ BYTE __RPC_FAR *rgbTransactionCookie)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,rgbTransactionCookie);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&punkTransaction,
                  ( unsigned char __RPC_FAR * )&pcbUsed,
                  ( unsigned char __RPC_FAR * )&cbTransactionCookie,
                  ( unsigned char __RPC_FAR * )&rgbTransactionCookie);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1362],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
ITransactionExport_RemoteGetTransactionCookie_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITransactionExport __RPC_FAR *This;
        IUnknown __RPC_FAR *punkTransaction;
        ULONG __RPC_FAR *pcbUsed;
        ULONG cbTransactionCookie;
        BYTE __RPC_FAR *rgbTransactionCookie;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        ITransactionExport __RPC_FAR *This;
        char Pad0[4];
        IUnknown __RPC_FAR *punkTransaction;
        char Pad1[4];
        ULONG __RPC_FAR *pcbUsed;
        char Pad2[4];
        ULONG cbTransactionCookie;
        char Pad3[4];
        BYTE __RPC_FAR *rgbTransactionCookie;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = ITransactionExport_GetTransactionCookie_Stub(
                                                       (ITransactionExport *) pParamStruct->This,
                                                       pParamStruct->punkTransaction,
                                                       pParamStruct->pcbUsed,
                                                       pParamStruct->cbTransactionCookie,
                                                       pParamStruct->rgbTransactionCookie);
    
}

static const unsigned short ITransactionExport_FormatStringOffsetTable[] = 
    {
    1332,
    1362
    };

static const STUB_THUNK ITransactionExport_StubThunkTable[] = 
    {
    0,
    ITransactionExport_RemoteGetTransactionCookie_Thunk
    };

static const MIDL_SERVER_INFO ITransactionExport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionExport_FormatStringOffsetTable[-3],
    &ITransactionExport_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionExport_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionExport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(5) _ITransactionExportProxyVtbl = 
{
    &ITransactionExport_ProxyInfo,
    &IID_ITransactionExport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionExport::Export */ ,
    ITransactionExport_GetTransactionCookie_Proxy
};

const CInterfaceStubVtbl _ITransactionExportStubVtbl =
{
    &IID_ITransactionExport,
    &ITransactionExport_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ITransactionImport, ver. 0.0,
   GUID={0xE1CF9B5A,0x8745,0x11ce,{0xA9,0xBA,0x00,0xAA,0x00,0x6C,0x37,0x06}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ITransactionImport_ServerInfo;

#pragma code_seg(".orpc")

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
    0,
    0,  /* Reserved1 */
    0,  /* Reserved2 */
    0,  /* Reserved3 */
    0,  /* Reserved4 */
    0   /* Reserved5 */
    };

static const unsigned short ITransactionImport_FormatStringOffsetTable[] = 
    {
    1404
    };

static const MIDL_SERVER_INFO ITransactionImport_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &ITransactionImport_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO ITransactionImport_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &ITransactionImport_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _ITransactionImportProxyVtbl = 
{
    &ITransactionImport_ProxyInfo,
    &IID_ITransactionImport,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* ITransactionImport::Import */
};

const CInterfaceStubVtbl _ITransactionImportStubVtbl =
{
    &IID_ITransactionImport,
    &ITransactionImport_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL__intf_0082, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

#pragma data_seg(".rdata")

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

	/* Procedure Commit */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	NdrFcShort( 0x18 ),	/* 24 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter fRetaining */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfTC */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfRM */

/* 24 */	NdrFcShort( 0x48 ),	/* 72 */
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

	/* Procedure Abort */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 38 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 42 */	NdrFcShort( 0x30 ),	/* 48 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter pboidReason */

/* 48 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 52 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter fRetaining */

/* 54 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fAsync */

/* 60 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTransactionInfo */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 74 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x48 ),	/* 72 */
/* 82 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pinfo */

/* 84 */	NdrFcShort( 0xffffa112 ),	/* -24302 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 88 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Return value */

/* 90 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 94 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 96 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 98 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 100 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 102 */	NdrFcShort( 0x20 ),	/* 32 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter iid */

/* 108 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 112 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter ppvParent */

/* 114 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 118 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure BeginTransaction */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 128 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 132 */	NdrFcShort( 0x18 ),	/* 24 */
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter punkOuter */

/* 138 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 142 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter isoLevel */

/* 144 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isoFlags */

/* 150 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ulTimeout */

/* 156 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter punkTransactionCoord */

/* 162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 166 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter ppTransaction */

/* 168 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 172 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 174 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTransactions */

/* 180 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 182 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 184 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 190 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 192 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 196 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 198 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStatistics */

/* 204 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 206 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 208 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 212 */	NdrFcShort( 0x3c ),	/* 60 */
/* 214 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pStatistics */

/* 216 */	NdrFcShort( 0xffffa112 ),	/* -24302 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 220 */	NdrFcShort( 0x92 ),	/* Type Offset=146 */

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

	/* Parameter celt */

/* 240 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 242 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 246 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 250 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter pceltFetched */

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

	/* Procedure Skip */


	/* Procedure CommitRequestDone */


	/* Procedure SetTimeout */


	/* Procedure Skip */

/* 264 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 266 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 268 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 272 */	NdrFcShort( 0x8 ),	/* 8 */
/* 274 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter celt */


	/* Parameter hr */


	/* Parameter ulTimeout */


	/* Parameter celt */

/* 276 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 282 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 288 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 290 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 292 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 298 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */


	/* Return value */

/* 300 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 302 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 306 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 308 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 310 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x8 ),	/* 8 */
/* 316 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 318 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 322 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Return value */

/* 324 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ForceCommit */

/* 330 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 332 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 334 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x8 ),	/* 8 */
/* 340 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ForceAbort */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 350 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 352 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 358 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDescription */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 368 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 370 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter lcid */

/* 378 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pswzDescription */

/* 384 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 386 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 388 */	NdrFcShort( 0xbe ),	/* Type Offset=190 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDescription */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 398 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 400 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter lcid */

/* 408 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppswzDescription */

/* 414 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	NdrFcShort( 0xc0 ),	/* Type Offset=192 */

	/* Return value */

/* 420 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWhereaboutsSize */


	/* Procedure GetStatus */

/* 426 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 428 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 434 */	NdrFcShort( 0x10 ),	/* 16 */
/* 436 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pcbWhereabouts */


	/* Parameter pdwStatus */

/* 438 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortRequestDone */


	/* Procedure PreventCommit */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 452 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 454 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hr */


	/* Parameter fPrevent */

/* 462 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 468 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Defect */


	/* Procedure OnPrePrepare */


	/* Procedure OnPrePrepareAdjust */

/* 474 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 476 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 478 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 480 */	NdrFcShort( 0x8 ),	/* 8 */
/* 482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 484 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fInformCoordinator */


	/* Parameter fRetaining */


	/* Parameter fRetaining */

/* 486 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 494 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnCommit */


	/* Procedure OnCommit */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 500 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 502 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 504 */	NdrFcShort( 0x30 ),	/* 48 */
/* 506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 508 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter fRetaining */


	/* Parameter fRetaining */

/* 510 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 512 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewUOW */


	/* Parameter pNewUOW */

/* 516 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 520 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter hr */


	/* Parameter hr */

/* 522 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 530 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAbort */


	/* Procedure OnAbort */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 536 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 538 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 540 */	NdrFcShort( 0x50 ),	/* 80 */
/* 542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 544 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter pboidReason */


	/* Parameter pboidReason */

/* 546 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 550 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter fRetaining */


	/* Parameter fRetaining */

/* 552 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewUOW */


	/* Parameter pNewUOW */

/* 558 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 560 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 562 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter hr */


	/* Parameter hr */

/* 564 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 566 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HeuristicDecision */


	/* Procedure OnHeuristicDecision */


	/* Procedure OnHeuristicDecision */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 578 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 580 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 582 */	NdrFcShort( 0x30 ),	/* 48 */
/* 584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 586 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter dwDecision */


	/* Parameter dwDecision */


	/* Parameter dwDecision */

/* 588 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboidReason */


	/* Parameter pboidReason */


	/* Parameter pboidReason */

/* 594 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 596 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 598 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter fDefecting */


	/* Parameter hr */


	/* Parameter hr */

/* 600 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Enlist */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 614 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 616 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 618 */	NdrFcShort( 0x70 ),	/* 112 */
/* 620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 622 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pResource */

/* 624 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 626 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 628 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter grfRMTC */

/* 630 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prmgrid */

/* 636 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 640 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pinfo */

/* 642 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 646 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter pgrfTCRMENLIST */

/* 648 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnlist */

/* 654 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 656 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 658 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnlistSinglePhase */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 668 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 670 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 672 */	NdrFcShort( 0x68 ),	/* 104 */
/* 674 */	NdrFcShort( 0x10 ),	/* 16 */
/* 676 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pResource */

/* 678 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 682 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */

	/* Parameter grfRMTC */

/* 684 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter prmgrid */

/* 690 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 694 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pinfo */

/* 696 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 698 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 700 */	NdrFcShort( 0x18 ),	/* Type Offset=24 */

	/* Parameter pgrfTCRMENLIST */

/* 702 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnlist */

/* 708 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 712 */	NdrFcShort( 0xd0 ),	/* Type Offset=208 */

	/* Return value */

/* 714 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 716 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumResources */

/* 720 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 722 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 724 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 732 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 736 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 740 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMoniker */


	/* Procedure GetMoniker */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 746 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 748 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 752 */	NdrFcShort( 0x8 ),	/* 8 */
/* 754 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppmk */


	/* Parameter ppmk */

/* 756 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 758 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 760 */	NdrFcShort( 0xfc ),	/* Type Offset=252 */

	/* Return value */


	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReEnlist */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 770 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 772 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 774 */	NdrFcShort( 0x20 ),	/* 32 */
/* 776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 778 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pEnlistment */

/* 780 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x112 ),	/* Type Offset=274 */

	/* Parameter pUOWCur */

/* 786 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 792 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 794 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 796 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Prepare */

/* 798 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 800 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 802 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 804 */	NdrFcShort( 0x18 ),	/* 24 */
/* 806 */	NdrFcShort( 0x30 ),	/* 48 */
/* 808 */	0x5,		/* 5 */
			0x6,		/* 6 */

	/* Parameter fRetaining */

/* 810 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 812 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfRM */

/* 816 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 818 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fSinglePhase */

/* 822 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmk */

/* 828 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 830 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 832 */	NdrFcShort( 0xfc ),	/* Type Offset=252 */

	/* Parameter ppboidReason */

/* 834 */	NdrFcShort( 0x2012 ),	/* 8210 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 838 */	NdrFcShort( 0x124 ),	/* Type Offset=292 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CommitRequest */


	/* Procedure Commit */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 848 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 852 */	NdrFcShort( 0x28 ),	/* 40 */
/* 854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 856 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter grfRM */


	/* Parameter grfRM */

/* 858 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 860 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewUOW */


	/* Parameter pNewUOW */

/* 864 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 868 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */


	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 872 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AbortRequest */


	/* Procedure Abort */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 878 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 880 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 882 */	NdrFcShort( 0x48 ),	/* 72 */
/* 884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 886 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter pboidReason */


	/* Parameter pboidReason */

/* 888 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 892 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter fRetaining */


	/* Parameter fRetaining */

/* 894 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pNewUOW */


	/* Parameter pNewUOW */

/* 900 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 904 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */


	/* Return value */

/* 906 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrepareRequest */

/* 912 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 914 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 916 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 918 */	NdrFcShort( 0x20 ),	/* 32 */
/* 920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 922 */	0x4,		/* 4 */
			0x5,		/* 5 */

	/* Parameter fRetaining */

/* 924 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter grfRM */

/* 930 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fWantMoniker */

/* 936 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fSinglePhase */

/* 942 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 944 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 948 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 950 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReEnlist */

/* 954 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 956 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 960 */	NdrFcShort( 0x40 ),	/* 64 */
/* 962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 964 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pUnkResource */

/* 966 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 968 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 970 */	NdrFcShort( 0x12c ),	/* Type Offset=300 */

	/* Parameter pUOWExpected */

/* 972 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 974 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 976 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter prmgrid */

/* 978 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 980 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 982 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 984 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 986 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RecoveryComplete */

/* 990 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 992 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 994 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 996 */	NdrFcShort( 0x20 ),	/* 32 */
/* 998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1000 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter prmgrid */

/* 1002 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1004 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1006 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1008 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1010 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTransaction */

/* 1014 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1016 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1018 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1024 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppTransaction */

/* 1026 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1030 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EarlyVote */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1040 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1042 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1044 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1046 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1048 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter fVote */

/* 1050 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1052 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pboidReason */

/* 1056 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1058 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1060 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1062 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1064 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Defect */

/* 1068 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1070 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1072 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1078 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1082 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrepareRequestDone */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1088 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1090 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1092 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1096 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hr */

/* 1098 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pmk */

/* 1104 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1106 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1108 */	NdrFcShort( 0x100 ),	/* Type Offset=256 */

	/* Parameter pboidReason */

/* 1110 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1112 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1114 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteNext */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1124 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1126 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1132 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter celt */

/* 1134 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 1140 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1142 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1144 */	NdrFcShort( 0x15a ),	/* Type Offset=346 */

	/* Parameter pceltFetched */

/* 1146 */	NdrFcShort( 0x2150 ),	/* 8528 */
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

	/* Procedure Clone */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1160 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 1162 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1168 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter ppenum */

/* 1170 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1172 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1174 */	NdrFcShort( 0xe6 ),	/* Type Offset=230 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1178 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEarlyVote */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1184 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1186 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1188 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1192 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pResourceInfo */

/* 1194 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1198 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Parameter fVote */

/* 1200 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1202 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1206 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1208 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDefected */

/* 1212 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1214 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1216 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1222 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pResourceInfo */

/* 1224 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1226 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1228 */	NdrFcShort( 0x142 ),	/* Type Offset=322 */

	/* Return value */

/* 1230 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1232 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRemoteClassId */

/* 1236 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1238 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1240 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1246 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pclsid */

/* 1248 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 1250 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1252 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Return value */

/* 1254 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1256 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Create */

/* 1260 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1262 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1264 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1270 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter cbWhereabouts */

/* 1272 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1274 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgbWhereabouts */

/* 1278 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1280 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1282 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter ppExport */

/* 1284 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1288 */	NdrFcShort( 0x182 ),	/* Type Offset=386 */

	/* Return value */

/* 1290 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1292 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetWhereabouts */

/* 1296 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1298 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1300 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1304 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1306 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter pcbUsed */

/* 1308 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1310 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbWhereabouts */

/* 1314 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1316 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgbWhereabouts */

/* 1320 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1322 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1324 */	NdrFcShort( 0x19c ),	/* Type Offset=412 */

	/* Return value */

/* 1326 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Export */

/* 1332 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1334 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1336 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1342 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter punkTransaction */

/* 1344 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1348 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter pcbTransactionCookie */

/* 1350 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1352 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1356 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteGetTransactionCookie */

/* 1362 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1364 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 1366 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1372 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter punkTransaction */

/* 1374 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1376 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1378 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */

	/* Parameter pcbUsed */

/* 1380 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1382 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbTransactionCookie */

/* 1386 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1388 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgbTransactionCookie */

/* 1392 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1396 */	NdrFcShort( 0x1ae ),	/* Type Offset=430 */

	/* Return value */

/* 1398 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Import */

/* 1404 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 1406 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 1408 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1410 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1414 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter cbTransactionCookie */

/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgbTransactionCookie */

/* 1422 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1426 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter piid */

/* 1428 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1432 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter ppvTransaction */

/* 1434 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1438 */	NdrFcShort( 0x1bc ),	/* Type Offset=444 */

	/* Return value */

/* 1440 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1442 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
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
/*  6 */	NdrFcShort( 0x10 ),	/* 16 */
/*  8 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 10 */	
			0x15,		/* FC_STRUCT */
			0x0,		/* 0 */
/* 12 */	NdrFcShort( 0x10 ),	/* 16 */
/* 14 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 16 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (4) */
/* 18 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 20 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 22 */	NdrFcShort( 0x2 ),	/* Offset= 2 (24) */
/* 24 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 26 */	NdrFcShort( 0x28 ),	/* 40 */
/* 28 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 30 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (10) */
/* 32 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 34 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 36 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 38 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 40 */	
			0x11, 0x0,	/* FC_RP */
/* 42 */	NdrFcShort( 0x8 ),	/* Offset= 8 (50) */
/* 44 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 50 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 52 */	NdrFcShort( 0x10 ),	/* 16 */
/* 54 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 56 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (44) */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0x10,	/* FC_RP */
/* 64 */	NdrFcShort( 0x2 ),	/* Offset= 2 (66) */
/* 66 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 68 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 72 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 88 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 90 */	
			0x11, 0x10,	/* FC_RP */
/* 92 */	NdrFcShort( 0x2 ),	/* Offset= 2 (94) */
/* 94 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 96 */	NdrFcLong( 0xfb15084 ),	/* 263278724 */
/* 100 */	NdrFcShort( 0xffffaf41 ),	/* -20671 */
/* 102 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 104 */	0xbd,		/* 189 */
			0x2b,		/* 43 */
/* 106 */	0x20,		/* 32 */
			0x4c,		/* 76 */
/* 108 */	0x4f,		/* 79 */
			0x4f,		/* 79 */
/* 110 */	0x50,		/* 80 */
			0x20,		/* 32 */
/* 112 */	
			0x11, 0x10,	/* FC_RP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 118 */	NdrFcLong( 0x68f03e3a ),	/* 1760575034 */
/* 122 */	NdrFcShort( 0x7610 ),	/* 30224 */
/* 124 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 126 */	0xbd,		/* 189 */
			0x2,		/* 2 */
/* 128 */	0x52,		/* 82 */
			0x41,		/* 65 */
/* 130 */	0x53,		/* 83 */
			0x48,		/* 72 */
/* 132 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 134 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 136 */	NdrFcShort( 0xa ),	/* Offset= 10 (146) */
/* 138 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 146 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 148 */	NdrFcShort( 0x24 ),	/* 36 */
/* 150 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 152 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 154 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 158 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffeb ),	/* Offset= -21 (138) */
			0x5b,		/* FC_END */
/* 162 */	
			0x11, 0x0,	/* FC_RP */
/* 164 */	NdrFcShort( 0x2 ),	/* Offset= 2 (166) */
/* 166 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 174 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 178 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0xffffffaa ),	/* Offset= -86 (94) */
/* 182 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 184 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 186 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 190 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 194 */	NdrFcShort( 0x2 ),	/* Offset= 2 (196) */
/* 196 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 198 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 200 */	
			0x11, 0x0,	/* FC_RP */
/* 202 */	NdrFcShort( 0xffffff4e ),	/* Offset= -178 (24) */
/* 204 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 206 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 208 */	
			0x11, 0x10,	/* FC_RP */
/* 210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (212) */
/* 212 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 214 */	NdrFcLong( 0xa0159633 ),	/* -1609198029 */
/* 218 */	NdrFcShort( 0x76ba ),	/* 30394 */
/* 220 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 222 */	0xbd,		/* 189 */
			0x3,		/* 3 */
/* 224 */	0x52,		/* 82 */
			0x41,		/* 65 */
/* 226 */	0x53,		/* 83 */
			0x48,		/* 72 */
/* 228 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 230 */	
			0x11, 0x10,	/* FC_RP */
/* 232 */	NdrFcShort( 0x2 ),	/* Offset= 2 (234) */
/* 234 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 236 */	NdrFcLong( 0xe1cf9b54 ),	/* -506487980 */
/* 240 */	NdrFcShort( 0xffff8745 ),	/* -30907 */
/* 242 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 244 */	0xa9,		/* 169 */
			0xba,		/* 186 */
/* 246 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 248 */	0x0,		/* 0 */
			0x6c,		/* 108 */
/* 250 */	0x37,		/* 55 */
			0x6,		/* 6 */
/* 252 */	
			0x11, 0x10,	/* FC_RP */
/* 254 */	NdrFcShort( 0x2 ),	/* Offset= 2 (256) */
/* 256 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 258 */	NdrFcLong( 0xf ),	/* 15 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 268 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 270 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 272 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 274 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 276 */	NdrFcLong( 0xfb15083 ),	/* 263278723 */
/* 280 */	NdrFcShort( 0xffffaf41 ),	/* -20671 */
/* 282 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 284 */	0xbd,		/* 189 */
			0x2b,		/* 43 */
/* 286 */	0x20,		/* 32 */
			0x4c,		/* 76 */
/* 288 */	0x4f,		/* 79 */
			0x4f,		/* 79 */
/* 290 */	0x50,		/* 80 */
			0x20,		/* 32 */
/* 292 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (296) */
/* 296 */	
			0x13, 0x0,	/* FC_OP */
/* 298 */	NdrFcShort( 0xfffffee0 ),	/* Offset= -288 (10) */
/* 300 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 302 */	NdrFcLong( 0x424fd970 ),	/* 1112529264 */
/* 306 */	NdrFcShort( 0xffffd67a ),	/* -10630 */
/* 308 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 310 */	0x93,		/* 147 */
			0xfc,		/* 252 */
/* 312 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 314 */	0x0,		/* 0 */
			0x6c,		/* 108 */
/* 316 */	0x37,		/* 55 */
			0x6,		/* 6 */
/* 318 */	
			0x11, 0x0,	/* FC_RP */
/* 320 */	NdrFcShort( 0x1a ),	/* Offset= 26 (346) */
/* 322 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 324 */	NdrFcShort( 0x30 ),	/* 48 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0x12 ),	/* Offset= 18 (346) */
/* 330 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 332 */	NdrFcShort( 0xfffffefc ),	/* Offset= -260 (72) */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 338 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffeb7 ),	/* Offset= -329 (10) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 342 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffeb3 ),	/* Offset= -333 (10) */
			0x5b,		/* FC_END */
/* 346 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 350 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 352 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 354 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 358 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 360 */	NdrFcShort( 0xffffffda ),	/* Offset= -38 (322) */
/* 362 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 364 */	
			0x11, 0x0,	/* FC_RP */
/* 366 */	NdrFcShort( 0xffffffd4 ),	/* Offset= -44 (322) */
/* 368 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 370 */	NdrFcShort( 0xfffffec0 ),	/* Offset= -320 (50) */
/* 372 */	
			0x11, 0x0,	/* FC_RP */
/* 374 */	NdrFcShort( 0x2 ),	/* Offset= 2 (376) */
/* 376 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 378 */	NdrFcShort( 0x1 ),	/* 1 */
/* 380 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 382 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 384 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 386 */	
			0x11, 0x10,	/* FC_RP */
/* 388 */	NdrFcShort( 0x2 ),	/* Offset= 2 (390) */
/* 390 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 392 */	NdrFcLong( 0x141fda5 ),	/* 21101989 */
/* 396 */	NdrFcShort( 0xffff8fc0 ),	/* -28736 */
/* 398 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 400 */	0xbd,		/* 189 */
			0x18,		/* 24 */
/* 402 */	0x20,		/* 32 */
			0x4c,		/* 76 */
/* 404 */	0x4f,		/* 79 */
			0x4f,		/* 79 */
/* 406 */	0x50,		/* 80 */
			0x20,		/* 32 */
/* 408 */	
			0x11, 0x0,	/* FC_RP */
/* 410 */	NdrFcShort( 0x2 ),	/* Offset= 2 (412) */
/* 412 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 414 */	NdrFcShort( 0x1 ),	/* 1 */
/* 416 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 418 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 420 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 424 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 426 */	
			0x11, 0x0,	/* FC_RP */
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 432 */	NdrFcShort( 0x1 ),	/* 1 */
/* 434 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 436 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 438 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 442 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 444 */	
			0x11, 0x10,	/* FC_RP */
/* 446 */	NdrFcShort( 0x2 ),	/* Offset= 2 (448) */
/* 448 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 450 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 452 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif

			0x0
        }
    };

const CInterfaceProxyVtbl * _transact_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ITransactionResourceRecoverProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionResourceManagementProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionNestedProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionEnlistmentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionEnlistmentRecoverProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumTransactionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionDispenserAdminProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionExportFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumXACTREProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionImportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionResourceProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionVetoEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionResourceAsyncProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionOutcomeEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionEnlistmentAsyncProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionCoordinatorProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionDispenserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionImportWhereaboutsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionExportProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionAdjustEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionControlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionAdminProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionInProgressEventsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_ITransactionCompletionEventsProxyVtbl,
    0
};

const CInterfaceStubVtbl * _transact_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ITransactionResourceRecoverStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionResourceManagementStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionNestedStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionEnlistmentStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionEnlistmentRecoverStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumTransactionStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionDispenserAdminStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionExportFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumXACTREStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionImportStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionResourceStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionVetoEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionResourceAsyncStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionOutcomeEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionEnlistmentAsyncStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionCoordinatorStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionDispenserStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionImportWhereaboutsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionExportStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionAdjustEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionControlStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionAdminStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionInProgressEventsStubVtbl,
    ( CInterfaceStubVtbl *) &_ITransactionCompletionEventsStubVtbl,
    0
};

PCInterfaceName const _transact_InterfaceNamesList[] = 
{
    "ITransactionResourceRecover",
    "ITransactionResourceManagement",
    "ITransactionNested",
    "ITransactionEnlistment",
    "ITransactionEnlistmentRecover",
    "IEnumTransaction",
    "ITransactionDispenserAdmin",
    "ITransactionExportFactory",
    "IEnumXACTRE",
    "ITransactionImport",
    "ITransactionResource",
    "ITransactionVetoEvents",
    "ITransactionResourceAsync",
    "ITransactionOutcomeEvents",
    "ITransactionEnlistmentAsync",
    "ITransactionCoordinator",
    "ITransaction",
    "ITransactionDispenser",
    "ITransactionImportWhereabouts",
    "ITransactionExport",
    "ITransactionAdjustEvents",
    "ITransactionControl",
    "ITransactionAdmin",
    "ITransactionInProgressEvents",
    "ITransactionCompletionEvents",
    0
};


#define _transact_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _transact, pIID, n)

int __stdcall _transact_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _transact, 25, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _transact, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _transact, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _transact, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _transact, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _transact, 25, *pIndex )
    
}

const ExtendedProxyFileInfo transact_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _transact_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _transact_StubVtblList,
    (const PCInterfaceName * ) & _transact_InterfaceNamesList,
    0, // no delegation
    & _transact_IID_Lookup, 
    25,
    2
};
