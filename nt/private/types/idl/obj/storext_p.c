/* this ALWAYS GENERATED file contains the proxy stub code */


/* File created by MIDL compiler version 3.00.44 */
/* at Fri Oct 18 23:02:59 2019
 */
/* Compiler settings for storext.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )

#define USE_STUBLESS_PROXY

#include "rpcproxy.h"
#include "storext.h"

#define TYPE_FORMAT_STRING_SIZE   75                                
#define PROC_FORMAT_STRING_SIZE   157                               

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


/* Object interface: IOverlappedCompletion, ver. 0.0,
   GUID={0x521a28f0,0xe40b,0x11ce,{0xb2,0xc9,0x00,0xaa,0x00,0x68,0x09,0x37}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOverlappedCompletion_ServerInfo;

#pragma code_seg(".orpc")
static const unsigned short IOverlappedCompletion_FormatStringOffsetTable[] = 
    {
    0
    };

static const MIDL_SERVER_INFO IOverlappedCompletion_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOverlappedCompletion_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOverlappedCompletion_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOverlappedCompletion_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(4) _IOverlappedCompletionProxyVtbl = 
{
    &IOverlappedCompletion_ProxyInfo,
    &IID_IOverlappedCompletion,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *)-1 /* IOverlappedCompletion::OnComplete */
};

const CInterfaceStubVtbl _IOverlappedCompletionStubVtbl =
{
    &IID_IOverlappedCompletion,
    &IOverlappedCompletion_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISequentialStream, ver. 0.0,
   GUID={0x0c733a30,0x2a1c,0x11ce,{0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d}} */


/* Object interface: IStream, ver. 0.0,
   GUID={0x0000000c,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IOverlappedStream, ver. 0.0,
   GUID={0x49384070,0xe40a,0x11ce,{0xb2,0xc9,0x00,0xaa,0x00,0x68,0x09,0x37}} */


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IOverlappedStream_ServerInfo;

#pragma code_seg(".orpc")
/* [call_as] */ HRESULT STDMETHODCALLTYPE IOverlappedStream_RemoteReadOverlapped_Proxy( 
    IOverlappedStream __RPC_FAR * This,
    /* [size_is][in] */ byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbRead,
    /* [in] */ STGOVERLAPPED __RPC_FAR *lpOverlapped)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpOverlapped);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbRead,
                  ( unsigned char __RPC_FAR * )&lpOverlapped);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOverlappedStream_RemoteReadOverlapped_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOverlappedStream __RPC_FAR *This;
        byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbRead;
        STGOVERLAPPED __RPC_FAR *lpOverlapped;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOverlappedStream __RPC_FAR *This;
        char Pad0[4];
        byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbRead;
        char Pad3[4];
        STGOVERLAPPED __RPC_FAR *lpOverlapped;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOverlappedStream_ReadOverlapped_Stub(
                                                (IOverlappedStream *) pParamStruct->This,
                                                pParamStruct->pv,
                                                pParamStruct->cb,
                                                pParamStruct->pcbRead,
                                                pParamStruct->lpOverlapped);
    
}

/* [call_as] */ HRESULT __stdcall IOverlappedStream_RemoteWriteOverlapped_Proxy( 
    IOverlappedStream __RPC_FAR * This,
    /* [size_is][in] */ byte __RPC_FAR *pv,
    /* [in] */ ULONG cb,
    /* [out] */ ULONG __RPC_FAR *pcbWritten,
    /* [in] */ STGOVERLAPPED __RPC_FAR *lpOverlapped)
{
CLIENT_CALL_RETURN _RetVal;


#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpOverlapped);
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78],
                  vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78],
                  ( unsigned char __RPC_FAR * )&This,
                  ( unsigned char __RPC_FAR * )&pv,
                  ( unsigned char __RPC_FAR * )&cb,
                  ( unsigned char __RPC_FAR * )&pcbWritten,
                  ( unsigned char __RPC_FAR * )&lpOverlapped);
#else
    _RetVal = NdrClientCall2(
                  ( PMIDL_STUB_DESC  )&Object_StubDesc,
                  (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78],
                  ( unsigned char __RPC_FAR * )&This);
#endif
    return ( HRESULT  )_RetVal.Simple;
    
}

void __RPC_API
IOverlappedStream_RemoteWriteOverlapped_Thunk(
    PMIDL_STUB_MESSAGE pStubMsg )
{
    
#ifndef _ALPHA_
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOverlappedStream __RPC_FAR *This;
        byte __RPC_FAR *pv;
        ULONG cb;
        ULONG __RPC_FAR *pcbWritten;
        STGOVERLAPPED __RPC_FAR *lpOverlapped;
        HRESULT _RetVal;
        };
    #pragma pack()
#else
    #pragma pack(4)
    struct _PARAM_STRUCT
        {
        IOverlappedStream __RPC_FAR *This;
        char Pad0[4];
        byte __RPC_FAR *pv;
        char Pad1[4];
        ULONG cb;
        char Pad2[4];
        ULONG __RPC_FAR *pcbWritten;
        char Pad3[4];
        STGOVERLAPPED __RPC_FAR *lpOverlapped;
        char Pad4[4];
        HRESULT _RetVal;
        };
    #pragma pack()
#endif

    struct _PARAM_STRUCT * pParamStruct;

    pParamStruct = (struct _PARAM_STRUCT *) pStubMsg->StackTop;
    
    /* Call the server */
    
    pParamStruct->_RetVal = IOverlappedStream_WriteOverlapped_Stub(
                                                 (IOverlappedStream *) pParamStruct->This,
                                                 pParamStruct->pv,
                                                 pParamStruct->cb,
                                                 pParamStruct->pcbWritten,
                                                 pParamStruct->lpOverlapped);
    
}

extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1];

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

static const unsigned short IOverlappedStream_FormatStringOffsetTable[] = 
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
    36,
    78,
    120
    };

static const STUB_THUNK IOverlappedStream_StubThunkTable[] = 
    {
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
    IOverlappedStream_RemoteReadOverlapped_Thunk,
    IOverlappedStream_RemoteWriteOverlapped_Thunk,
    0
    };

static const MIDL_SERVER_INFO IOverlappedStream_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    __MIDL_ProcFormatString.Format,
    &IOverlappedStream_FormatStringOffsetTable[-3],
    &IOverlappedStream_StubThunkTable[-3],
    0,
    0,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IOverlappedStream_ProxyInfo =
    {
    &Object_StubDesc,
    __MIDL_ProcFormatString.Format,
    &IOverlappedStream_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };

CINTERFACE_PROXY_VTABLE(17) _IOverlappedStreamProxyVtbl = 
{
    &IOverlappedStream_ProxyInfo,
    &IID_IOverlappedStream,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* ISequentialStream_Read_Proxy */ ,
    0 /* ISequentialStream_Write_Proxy */ ,
    0 /* IStream_Seek_Proxy */ ,
    0 /* (void *)-1 /* IStream::SetSize */ ,
    0 /* IStream_CopyTo_Proxy */ ,
    0 /* (void *)-1 /* IStream::Commit */ ,
    0 /* (void *)-1 /* IStream::Revert */ ,
    0 /* (void *)-1 /* IStream::LockRegion */ ,
    0 /* (void *)-1 /* IStream::UnlockRegion */ ,
    0 /* (void *)-1 /* IStream::Stat */ ,
    0 /* (void *)-1 /* IStream::Clone */ ,
    IOverlappedStream_ReadOverlapped_Proxy ,
    IOverlappedStream_WriteOverlapped_Proxy ,
    (void *)-1 /* IOverlappedStream::GetOverlappedResult */
};


static const PRPC_STUB_FUNCTION IOverlappedStream_table[] =
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
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IOverlappedStreamStubVtbl =
{
    &IID_IOverlappedStream,
    &IOverlappedStream_ServerInfo,
    17,
    &IOverlappedStream_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#pragma data_seg(".rdata")

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[1] = 
        {
            
            {
            HEVENT_UserSize
            ,HEVENT_UserMarshal
            ,HEVENT_UserUnmarshal
            ,HEVENT_UserFree
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

	/* Procedure OnComplete */

			0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/*  2 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/*  6 */	NdrFcShort( 0x10 ),	/* 16 */
/*  8 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hr */

/* 12 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbTransferred */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpOverlapped */

/* 24 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 28 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteReadOverlapped */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 38 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x10 ),	/* 16 */
/* 46 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pv */

/* 48 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 52 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter cb */

/* 54 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbRead */

/* 60 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpOverlapped */

/* 66 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 68 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 70 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RemoteWriteOverlapped */

/* 78 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 80 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	NdrFcShort( 0x10 ),	/* 16 */
/* 88 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pv */

/* 90 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 94 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Parameter cb */

/* 96 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbWritten */

/* 102 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpOverlapped */

/* 108 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 112 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOverlappedResult */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x64,		/* 100 */
/* 122 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 130 */	0x7,		/* 7 */
			0x4,		/* 4 */

	/* Parameter lpOverlapped */

/* 132 */	NdrFcShort( 0x11b ),	/* 283 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 136 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */

	/* Parameter plcbTransfer */

/* 138 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fWait */

/* 144 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 150 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x20 ),	/* Offset= 32 (34) */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	0xb4,		/* FC_USER_MARSHAL */
			0x3,		/* 3 */
/*  8 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12 */	NdrFcShort( 0x4 ),	/* 4 */
/* 14 */	NdrFcShort( 0xfffffff6 ),	/* Offset= -10 (4) */
/* 16 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 18 */	NdrFcLong( 0x521a28f0 ),	/* 1377446128 */
/* 22 */	NdrFcShort( 0xffffe40b ),	/* -7157 */
/* 24 */	NdrFcShort( 0x11ce ),	/* 4558 */
/* 26 */	0xb2,		/* 178 */
			0xc9,		/* 201 */
/* 28 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 30 */	0x0,		/* 0 */
			0x68,		/* 104 */
/* 32 */	0x9,		/* 9 */
			0x37,		/* 55 */
/* 34 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 36 */	NdrFcShort( 0x1c ),	/* 28 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x10 ),	/* Offset= 16 (56) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 46 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 48 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (6) */
/* 50 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 52 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (16) */
/* 54 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 56 */	
			0x11, 0x0,	/* FC_RP */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 62 */	NdrFcShort( 0x1 ),	/* 1 */
/* 64 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 66 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 68 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

const CInterfaceProxyVtbl * _storext_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOverlappedStreamProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOverlappedCompletionProxyVtbl,
    0
};

const CInterfaceStubVtbl * _storext_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOverlappedStreamStubVtbl,
    ( CInterfaceStubVtbl *) &_IOverlappedCompletionStubVtbl,
    0
};

PCInterfaceName const _storext_InterfaceNamesList[] = 
{
    "IOverlappedStream",
    "IOverlappedCompletion",
    0
};

const IID *  _storext_BaseIIDList[] = 
{
    &IID_IStream,
    0,
    0
};


#define _storext_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _storext, pIID, n)

int __stdcall _storext_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _storext, 2, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _storext, 2, *pIndex )
    
}

const ExtendedProxyFileInfo storext_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _storext_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _storext_StubVtblList,
    (const PCInterfaceName * ) & _storext_InterfaceNamesList,
    (const IID ** ) & _storext_BaseIIDList,
    & _storext_IID_Lookup, 
    2,
    2
};
