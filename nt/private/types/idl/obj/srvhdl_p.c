/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:02:56 2019
 */
/* Compiler settings for srvhdl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "srvhdl.h"

#define TYPE_FORMAT_STRING_SIZE   631                               
#define PROC_FORMAT_STRING_SIZE   719                               

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


/* Object interface: IServerHandler, ver. 0.0,
   GUID={0xF4F569D0,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IServerHandler_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IServerHandler_FormatStringOffsetTable[] = 
    {
    0,
    30,
    60,
    90
    };

static const MIDL_SERVER_INFO IServerHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IServerHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IServerHandler_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IServerHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(7) _IServerHandlerProxyVtbl = 
{
    &IServerHandler_ProxyInfo,
    &IID_IServerHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IServerHandler::RunAndInitialize */ ,
    (void *)-1 /* IServerHandler::RunAndDoVerb */ ,
    (void *)-1 /* IServerHandler::DoVerb */ ,
    (void *)-1 /* IServerHandler::CloseAndRelease */
};

const CInterfaceStubVtbl _IServerHandlerStubVtbl =
{
    &IID_IServerHandler,
    &IServerHandler_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IClientSiteHandler, ver. 0.0,
   GUID={0xF4F569D1,0x593B,0x101A,{0xB5,0x69,0x08,0x00,0x2B,0x2D,0xBF,0x7A}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClientSiteHandler_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT __stdcall IClientSiteHandler_RemotePrivQueryInterface_Proxy( 
    IClientSiteHandler __RPC_FAR * This,
    /* [in] */ DWORD dwId,
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
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&dwId,
                  ( unsigned char __RPC_FAR * )&riidResult,
                  ( unsigned char __RPC_FAR * )&ppvResult);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[114],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IClientSiteHandler_RemotePrivQueryInterface_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IClientSiteHandler __RPC_FAR *This;
        DWORD dwId;
        REFIID riidResult;
        IUnknown __RPC_FAR *__RPC_FAR *ppvResult;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IClientSiteHandler __RPC_FAR *This;
        char Pad0[4];
        DWORD dwId;
        char Pad1[4];
        REFIID riidResult;
        char Pad2[4];
        IUnknown __RPC_FAR *__RPC_FAR *ppvResult;
        char Pad3[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IClientSiteHandler_PrivQueryInterface_Stub(
                                                     (IClientSiteHandler *) pParamStruct->This,
                                                     pParamStruct->dwId,
                                                     pParamStruct->riidResult,
                                                     pParamStruct->ppvResult);
    
}

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

static const unsigned short IClientSiteHandler_FormatStringOffsetTable[] = 
    {
    114,
    150,
    174,
    90,
    198,
    240,
    270,
    294,
    324,
    348,
    376,
    400,
    418,
    436,
    454,
    502,
    526,
    550,
    568,
    586,
    604,
    628,
    658,
    688
    };

static const STUB_THUNK IClientSiteHandler_StubThunkTable[] = 
    {
    IClientSiteHandler_RemotePrivQueryInterface_Thunk,
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

static const MIDL_SERVER_INFO IClientSiteHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IClientSiteHandler_FormatStringOffsetTable[-3],
    &IClientSiteHandler_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IClientSiteHandler_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IClientSiteHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(27) _IClientSiteHandlerProxyVtbl = 
{
    &IClientSiteHandler_ProxyInfo,
    &IID_IClientSiteHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    IClientSiteHandler_PrivQueryInterface_Proxy ,
    (void *)-1 /* IClientSiteHandler::PrivAddRef */ ,
    (void *)-1 /* IClientSiteHandler::PrivRelease */ ,
    (void *)-1 /* IClientSiteHandler::SaveObject */ ,
    (void *)-1 /* IClientSiteHandler::GetMoniker */ ,
    (void *)-1 /* IClientSiteHandler::GetContainer */ ,
    (void *)-1 /* IClientSiteHandler::ShowObject */ ,
    (void *)-1 /* IClientSiteHandler::OnShowWindow */ ,
    (void *)-1 /* IClientSiteHandler::RequestNewObjectLayout */ ,
    (void *)-1 /* IClientSiteHandler::GetWindow */ ,
    (void *)-1 /* IClientSiteHandler::ContextSensitiveHelp */ ,
    (void *)-1 /* IClientSiteHandler::CanInPlaceActivate */ ,
    (void *)-1 /* IClientSiteHandler::OnInPlaceActivate */ ,
    (void *)-1 /* IClientSiteHandler::OnUIActivate */ ,
    (void *)-1 /* IClientSiteHandler::GetWindowContext */ ,
    (void *)-1 /* IClientSiteHandler::Scroll */ ,
    (void *)-1 /* IClientSiteHandler::OnUIDeactivate */ ,
    (void *)-1 /* IClientSiteHandler::OnInPlaceDeactivate */ ,
    (void *)-1 /* IClientSiteHandler::DiscardUndoState */ ,
    (void *)-1 /* IClientSiteHandler::DeactivateAndUndo */ ,
    (void *)-1 /* IClientSiteHandler::OnPosRectChange */ ,
    (void *)-1 /* IClientSiteHandler::GoInPlaceActivate */ ,
    (void *)-1 /* IClientSiteHandler::GoInPlace */ ,
    (void *)-1 /* IClientSiteHandler::UndoPlace */
};

const CInterfaceStubVtbl _IClientSiteHandlerStubVtbl =
{
    &IID_IClientSiteHandler,
    &IClientSiteHandler_ServerInfo,
    27,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

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
            HACCEL_UserSize
            ,HACCEL_UserMarshal
            ,HACCEL_UserUnmarshal
            ,HACCEL_UserFree
            },
            {
            HMENU_UserSize
            ,HMENU_UserMarshal
            ,HMENU_UserUnmarshal
            ,HMENU_UserFree
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

	/* Procedure RunAndInitialize */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* 0 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvRun */

/* 12 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pOutSrvRun */

/* 18 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 24 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RunAndDoVerb */

/* 30 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 32 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 34 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 36 */	NdrFcShort( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvRun */

/* 42 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 46 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pOutSrvRun */

/* 48 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 52 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 54 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoVerb */

/* 60 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 62 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvRun */

/* 72 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 76 */	NdrFcShort( 0xb2 ),	/* Type Offset=178 */

	/* Parameter pOutSrvRun */

/* 78 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 80 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 82 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SaveObject */


	/* Procedure CloseAndRelease */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 92 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 94 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 96 */	NdrFcShort( 0x8 ),	/* 8 */
/* 98 */	NdrFcShort( 0x8 ),	/* 8 */
/* 100 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwId */


	/* Parameter dwClose */

/* 102 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemotePrivQueryInterface */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 116 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 118 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 120 */	NdrFcShort( 0x28 ),	/* 40 */
/* 122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 124 */	0x5,		/* 5 */
			0x4,		/* 4 */

	/* Parameter dwId */

/* 126 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter riidResult */

/* 132 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 136 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Parameter ppvResult */

/* 138 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 142 */	NdrFcShort( 0x154 ),	/* Type Offset=340 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrivAddRef */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 152 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 154 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwId */

/* 162 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 168 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 170 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure PrivRelease */

/* 174 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 176 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 178 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 184 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwId */

/* 186 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetMoniker */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 200 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 204 */	NdrFcShort( 0x18 ),	/* 24 */
/* 206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 208 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter dwId */

/* 210 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwAssign */

/* 216 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwWhichMoniker */

/* 222 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppmk */

/* 228 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 230 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 232 */	NdrFcShort( 0x15e ),	/* Type Offset=350 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetContainer */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 242 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 244 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 250 */	0x5,		/* 5 */
			0x3,		/* 3 */

	/* Parameter dwId */

/* 252 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppContainer */

/* 258 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 262 */	NdrFcShort( 0x162 ),	/* Type Offset=354 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ShowObject */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 272 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 274 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 280 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwId */

/* 282 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 288 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 290 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnShowWindow */

/* 294 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 296 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 298 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 300 */	NdrFcShort( 0x10 ),	/* 16 */
/* 302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 304 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter dwId */

/* 306 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fShow */

/* 312 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 314 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 318 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RequestNewObjectLayout */

/* 324 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 326 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 328 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 334 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter dwId */

/* 336 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 342 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindow */

/* 348 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* 108 */
/* 350 */	NdrFcLong( 0x20000000 ),	/* 536870912 */
/* 354 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 356 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x8 ),	/* 8 */
/* 362 */	0x5,		/* 5 */
			0x2,		/* 2 */

	/* Parameter phwnd */

/* 364 */	NdrFcShort( 0x2113 ),	/* 8467 */
#ifndef _ALPHA_
/* 366 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 368 */	NdrFcShort( 0x16e ),	/* Type Offset=366 */

	/* Return value */

/* 370 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 372 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ContextSensitiveHelp */

/* 376 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 378 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 384 */	NdrFcShort( 0x8 ),	/* 8 */
/* 386 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fEnterMode */

/* 388 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 390 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 394 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 396 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CanInPlaceActivate */

/* 400 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 402 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 412 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 414 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceActivate */

/* 418 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 420 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 430 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 432 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 434 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIActivate */

/* 436 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 438 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 446 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 448 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 450 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowContext */

/* 454 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 456 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x38 ),	/* 56 */
/* 464 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter ppFrame */

/* 466 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 468 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 470 */	NdrFcShort( 0x178 ),	/* Type Offset=376 */

	/* Parameter ppDoc */

/* 472 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 474 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 476 */	NdrFcShort( 0x18e ),	/* Type Offset=398 */

	/* Parameter lprcPosRect */

/* 478 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 480 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 482 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter lprcClipRect */

/* 484 */	NdrFcShort( 0x4112 ),	/* 16658 */
#ifndef _ALPHA_
/* 486 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 488 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Parameter lpFrameInfo */

/* 490 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 492 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 494 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Return value */

/* 496 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 498 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Scroll */

/* 502 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 504 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 506 */	NdrFcShort( 0x10 ),	/* x86, MIPS Stack size/offset = 16 */
#else
			NdrFcShort( 0x14 ),	/* PPC Stack size/offset = 20 */
#endif
#else
			NdrFcShort( 0x10 ),	/* MIPS Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 508 */	NdrFcShort( 0x10 ),	/* 16 */
/* 510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 512 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter scrollExtant */

/* 514 */	NdrFcShort( 0x8a ),	/* 138 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 516 */	NdrFcShort( 0x4 ),	/* x86, MIPS Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* PPC Stack size/offset = 8 */
#endif
#else
			NdrFcShort( 0x4 ),	/* MIPS Stack size/offset = 4 */
#endif
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 518 */	NdrFcShort( 0x78 ),	/* Type Offset=120 */

	/* Return value */

/* 520 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
#if !defined(_MIPS_)
#ifndef _PPC_
/* 522 */	NdrFcShort( 0xc ),	/* x86, MIPS Stack size/offset = 12 */
#else
			NdrFcShort( 0x10 ),	/* PPC Stack size/offset = 16 */
#endif
#else
			NdrFcShort( 0xc ),	/* MIPS Stack size/offset = 12 */
#endif
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnUIDeactivate */

/* 526 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 528 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 530 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter fUndoable */

/* 538 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 540 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 544 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 546 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInPlaceDeactivate */

/* 550 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 552 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 560 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 562 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 564 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DiscardUndoState */

/* 568 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 570 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 576 */	NdrFcShort( 0x8 ),	/* 8 */
/* 578 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 580 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 582 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeactivateAndUndo */

/* 586 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 588 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 596 */	0x4,		/* 4 */
			0x1,		/* 1 */

	/* Return value */

/* 598 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 600 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPosRectChange */

/* 604 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 606 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 608 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 610 */	NdrFcShort( 0x18 ),	/* 24 */
/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 614 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter lprcPosRect */

/* 616 */	NdrFcShort( 0x10a ),	/* 266 */
#ifndef _ALPHA_
/* 618 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 620 */	NdrFcShort( 0x96 ),	/* Type Offset=150 */

	/* Return value */

/* 622 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 624 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoInPlaceActivate */

/* 628 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 630 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvInPlace */

/* 640 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 642 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 644 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter pOutSrvInPlace */

/* 646 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 648 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 650 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 652 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 654 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoInPlace */

/* 658 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 660 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x8 ),	/* 8 */
/* 668 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvInPlace */

/* 670 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 672 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 674 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter pOutSrvInPlace */

/* 676 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 678 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 680 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 682 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 684 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UndoPlace */

/* 688 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 690 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 698 */	0x7,		/* 7 */
			0x3,		/* 3 */

	/* Parameter pInSrvInPlace */

/* 700 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 702 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 704 */	NdrFcShort( 0x1ee ),	/* Type Offset=494 */

	/* Parameter pOutSrvInPlace */

/* 706 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 708 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 710 */	NdrFcShort( 0x204 ),	/* Type Offset=516 */

	/* Return value */

/* 712 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 714 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 716 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (178) */
/*  4 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  6 */	NdrFcLong( 0xf ),	/* 15 */
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
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 24 */	NdrFcLong( 0x11b ),	/* 283 */
/* 28 */	NdrFcShort( 0x0 ),	/* 0 */
/* 30 */	NdrFcShort( 0x0 ),	/* 0 */
/* 32 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 34 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 36 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 38 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 40 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 42 */	NdrFcLong( 0xb ),	/* 11 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 52 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 54 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 56 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 58 */	
			0x12, 0x0,	/* FC_UP */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 64 */	NdrFcShort( 0x4 ),	/* 4 */
/* 66 */	NdrFcShort( 0x2 ),	/* 2 */
/* 68 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 72 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32688) */
/* 74 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 78 */	NdrFcShort( 0xffff8008 ),	/* Offset= -32760 (-32682) */
/* 80 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (79) */
/* 82 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	NdrFcShort( 0x4 ),	/* 4 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (58) */
/* 92 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 94 */	NdrFcLong( 0x10f ),	/* 271 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 106 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 108 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 110 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x4 ),	/* 4 */
/* 116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 118 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (58) */
/* 120 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 124 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 126 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 128 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 130 */	NdrFcShort( 0x1c ),	/* 28 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x0 ),	/* Offset= 0 (134) */
/* 136 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 138 */	NdrFcShort( 0xffffffe4 ),	/* Offset= -28 (110) */
/* 140 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 142 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 144 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 146 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (120) */
/* 148 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 150 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 152 */	NdrFcShort( 0x10 ),	/* 16 */
/* 154 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 160 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 166 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 170 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 172 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 174 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (160) */
			0x5b,		/* FC_END */
/* 178 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0x44 ),	/* 68 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x24 ),	/* Offset= 36 (220) */
/* 186 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 188 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff47 ),	/* Offset= -185 (4) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 192 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff55 ),	/* Offset= -171 (22) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 196 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff63 ),	/* Offset= -157 (40) */
			0x8,		/* FC_LONG */
/* 200 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 202 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 204 */	NdrFcShort( 0xffffff86 ),	/* Offset= -122 (82) */
/* 206 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 208 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 210 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 212 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 214 */	NdrFcShort( 0xffffff86 ),	/* Offset= -122 (92) */
/* 216 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 218 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffffffa2 ),	/* Offset= -94 (128) */
/* 224 */	
			0x12, 0x0,	/* FC_UP */
/* 226 */	NdrFcShort( 0xffffffb4 ),	/* Offset= -76 (150) */
/* 228 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 230 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 232 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 234 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 236 */	
			0x12, 0x0,	/* FC_UP */
/* 238 */	NdrFcShort( 0xffffffb8 ),	/* Offset= -72 (166) */
/* 240 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x13, 0x0,	/* FC_OP */
/* 246 */	NdrFcShort( 0x38 ),	/* Offset= 56 (302) */
/* 248 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 250 */	NdrFcLong( 0x112 ),	/* 274 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 260 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 262 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 264 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 266 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 268 */	NdrFcLong( 0x10e ),	/* 270 */
/* 272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 276 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 278 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 280 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 282 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0x10a ),	/* 266 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 296 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 298 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 300 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 302 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 304 */	NdrFcShort( 0x2c ),	/* 44 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x18 ),	/* Offset= 24 (332) */
/* 310 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 312 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffbf ),	/* Offset= -65 (248) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 316 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcd ),	/* Offset= -51 (266) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 320 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdb ),	/* Offset= -37 (284) */
			0x8,		/* FC_LONG */
/* 324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 326 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 332 */	
			0x13, 0x0,	/* FC_OP */
/* 334 */	NdrFcShort( 0xffffff58 ),	/* Offset= -168 (166) */
/* 336 */	
			0x11, 0x0,	/* FC_RP */
/* 338 */	NdrFcShort( 0xffffff54 ),	/* Offset= -172 (166) */
/* 340 */	
			0x11, 0x10,	/* FC_RP */
/* 342 */	NdrFcShort( 0x2 ),	/* Offset= 2 (344) */
/* 344 */	
			0x2f,		/* FC_IP */
			0x5c,		/* FC_PAD */
/* 346 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 348 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 350 */	
			0x11, 0x10,	/* FC_RP */
/* 352 */	NdrFcShort( 0xfffffea4 ),	/* Offset= -348 (4) */
/* 354 */	
			0x11, 0x10,	/* FC_RP */
/* 356 */	NdrFcShort( 0xfffffeb2 ),	/* Offset= -334 (22) */
/* 358 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 360 */	NdrFcShort( 0x6 ),	/* Offset= 6 (366) */
/* 362 */	
			0x13, 0x0,	/* FC_OP */
/* 364 */	NdrFcShort( 0xfffffed2 ),	/* Offset= -302 (62) */
/* 366 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x4 ),	/* 4 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (362) */
/* 376 */	
			0x11, 0x10,	/* FC_RP */
/* 378 */	NdrFcShort( 0x2 ),	/* Offset= 2 (380) */
/* 380 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 382 */	NdrFcLong( 0x116 ),	/* 278 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 390 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 396 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 398 */	
			0x11, 0x10,	/* FC_RP */
/* 400 */	NdrFcShort( 0x2 ),	/* Offset= 2 (402) */
/* 402 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 404 */	NdrFcLong( 0x115 ),	/* 277 */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 414 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 416 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 418 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 420 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 422 */	NdrFcShort( 0xfffffef0 ),	/* Offset= -272 (150) */
/* 424 */	
			0x11, 0x0,	/* FC_RP */
/* 426 */	NdrFcShort( 0x16 ),	/* Offset= 22 (448) */
/* 428 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 432 */	NdrFcShort( 0x4 ),	/* 4 */
/* 434 */	NdrFcShort( 0x0 ),	/* 0 */
/* 436 */	NdrFcShort( 0xffffffb6 ),	/* Offset= -74 (362) */
/* 438 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 442 */	NdrFcShort( 0x4 ),	/* 4 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0xffffffac ),	/* Offset= -84 (362) */
/* 448 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 450 */	NdrFcShort( 0x14 ),	/* 20 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x0 ),	/* Offset= 0 (454) */
/* 456 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 458 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 460 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (428) */
/* 462 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 464 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (438) */
/* 466 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 468 */	
			0x11, 0x0,	/* FC_RP */
/* 470 */	NdrFcShort( 0xfffffec0 ),	/* Offset= -320 (150) */
/* 472 */	
			0x11, 0x0,	/* FC_RP */
/* 474 */	NdrFcShort( 0x14 ),	/* Offset= 20 (494) */
/* 476 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 478 */	NdrFcLong( 0x113 ),	/* 275 */
/* 482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 486 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 488 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 490 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 492 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 494 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 496 */	NdrFcShort( 0x20 ),	/* 32 */
/* 498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 500 */	NdrFcShort( 0x10 ),	/* Offset= 16 (516) */
/* 502 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 504 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 506 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 508 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe7b ),	/* Offset= -389 (120) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 512 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdb ),	/* Offset= -37 (476) */
			0x5b,		/* FC_END */
/* 516 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 518 */	NdrFcShort( 0x2 ),	/* Offset= 2 (520) */
/* 520 */	
			0x13, 0x0,	/* FC_OP */
/* 522 */	NdrFcShort( 0x26 ),	/* Offset= 38 (560) */
/* 524 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x4 ),	/* 4 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0xffffff56 ),	/* Offset= -170 (362) */
/* 534 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 536 */	NdrFcShort( 0x2 ),	/* 2 */
/* 538 */	NdrFcShort( 0x4 ),	/* 4 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 542 */	NdrFcShort( 0xffffff4c ),	/* Offset= -180 (362) */
/* 544 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 546 */	NdrFcShort( 0x18 ),	/* 24 */
/* 548 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 550 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 552 */	NdrFcShort( 0x18 ),	/* 24 */
/* 554 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 556 */	NdrFcShort( 0xfffffff4 ),	/* Offset= -12 (544) */
/* 558 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x84 ),	/* 132 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x30 ),	/* Offset= 48 (614) */
/* 568 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 570 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 572 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffcf ),	/* Offset= -49 (524) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 576 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff3b ),	/* Offset= -197 (380) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 580 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff4d ),	/* Offset= -179 (402) */
			0x36,		/* FC_POINTER */
/* 584 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 586 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 588 */	NdrFcShort( 0xfffffe4a ),	/* Offset= -438 (150) */
/* 590 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 592 */	NdrFcShort( 0xfffffe46 ),	/* Offset= -442 (150) */
/* 594 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 596 */	NdrFcShort( 0xffffff6c ),	/* Offset= -148 (448) */
/* 598 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 600 */	NdrFcShort( 0xffffffbe ),	/* Offset= -66 (534) */
/* 602 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 604 */	NdrFcShort( 0xffffffca ),	/* Offset= -54 (550) */
/* 606 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 608 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 610 */	NdrFcShort( 0xfffffe16 ),	/* Offset= -490 (120) */
/* 612 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 614 */	
			0x13, 0x0,	/* FC_OP */
/* 616 */	NdrFcShort( 0xfffffe2e ),	/* Offset= -466 (150) */
/* 618 */	
			0x13, 0x0,	/* FC_OP */
/* 620 */	NdrFcShort( 0xfffffe2a ),	/* Offset= -470 (150) */
/* 622 */	
			0x13, 0x0,	/* FC_OP */
/* 624 */	NdrFcShort( 0xffffff50 ),	/* Offset= -176 (448) */
/* 626 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 628 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

const CInterfaceProxyVtbl * _srvhdl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IServerHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IClientSiteHandlerProxyVtbl,
    0
};

const CInterfaceStubVtbl * _srvhdl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IServerHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &_IClientSiteHandlerStubVtbl,
    0
};

PCInterfaceName const _srvhdl_InterfaceNamesList[] = 
{
    "IServerHandler",
    "IClientSiteHandler",
    0
};


#define _srvhdl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _srvhdl, pIID, n)

int __stdcall _srvhdl_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _srvhdl, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _srvhdl, 2, *pIndex )
    
}

const ExtendedProxyFileInfo srvhdl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _srvhdl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _srvhdl_StubVtblList,
    (const PCInterfaceName * ) & _srvhdl_InterfaceNamesList,
    0, // no delegation
    & _srvhdl_IID_Lookup, 
    2,
    2
};
