/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 05:05:20 2019
 */
/* Compiler settings for ..\getif.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "getif.h"

#define TYPE_FORMAT_STRING_SIZE   83                                
#define PROC_FORMAT_STRING_SIZE   69                                

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

/* Standard interface: IInterfaceFromWindowProp, ver. 0.1,
   GUID={0xD0B6FA10,0xE69E,0x101A,{0x88,0xA5,0x02,0x60,0x8C,0x4D,0x1A,0x7F}} */


extern RPC_DISPATCH_TABLE IInterfaceFromWindowProp_DispatchTable;

static const RPC_SERVER_INTERFACE IInterfaceFromWindowProp___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xD0B6FA10,0xE69E,0x101A,{0x88,0xA5,0x02,0x60,0x8C,0x4D,0x1A,0x7F}},{0,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IInterfaceFromWindowProp_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IInterfaceFromWindowProp_ServerIfHandle = (RPC_IF_HANDLE)& IInterfaceFromWindowProp___RpcServerInterface;

extern const MIDL_STUB_DESC IInterfaceFromWindowProp_StubDesc;

void __RPC_STUB
IInterfaceFromWindowProp_RemGetInterfaceFromWindowProp(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M2;
    error_status_t _M3;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    HAPT hApt;
    handle_t hRpc;
    DWORD hWnd;
    const GUID __RPC_FAR *pguidThreadId;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *pwszPropertyName;
    const GUID __RPC_FAR *riid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IInterfaceFromWindowProp_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    pguidThreadId = 0;
    riid = 0;
    ppIFDunk = 0;
    pwszPropertyName = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&pguidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        hWnd = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        hApt = *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&riid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPropertyName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[60],
                                       (unsigned char)0 );
        
        ppIFDunk = &_M2;
        _M2 = 0;
        prpcstat = &_M3;
        
        _RetVal = RemGetInterfaceFromWindowProp(
                                        hRpc,
                                        pguidThreadId,
                                        hWnd,
                                        hApt,
                                        riid,
                                        ppIFDunk,
                                        pwszPropertyName,
                                        prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFDunk,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFDunk,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFDunk,
                        &__MIDL_TypeFormatString.Format[22] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IInterfaceFromWindowProp_RemPrivDragDrop(
    PRPC_MESSAGE _pRpcMessage )
{
    HRESULT _M4;
    error_status_t _M5;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_pt;
    DWORD dop;
    DWORD dwSmId;
    DWORD grfKeyState;
    const GUID __RPC_FAR *guidThreadId;
    HAPT hApt;
    handle_t hRpc;
    DWORD hWnd;
    DWORD hwndSource;
    InterfaceData __RPC_FAR *pIFDDataObject;
    DWORD __RPC_FAR *pdwEffect;
    HRESULT __RPC_FAR *phrDragOp;
    error_status_t __RPC_FAR *prpcstat;
    POINTL pt;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IInterfaceFromWindowProp_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    guidThreadId = 0;
    pIFDDataObject = 0;
    _p_pt = &pt;
    MIDL_memset(
               _p_pt,
               0,
               sizeof( POINTL  ));
    pdwEffect = 0;
    phrDragOp = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        hWnd = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        hApt = *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDDataObject,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dop = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        grfKeyState = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_pt,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66],
                                   (unsigned char)0 );
        
        pdwEffect = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        dwSmId = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        hwndSource = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        phrDragOp = &_M4;
        prpcstat = &_M5;
        
        _RetVal = RemPrivDragDrop(
                          hRpc,
                          guidThreadId,
                          hWnd,
                          hApt,
                          pIFDDataObject,
                          dop,
                          grfKeyState,
                          pt,
                          pdwEffect,
                          phrDragOp,
                          dwSmId,
                          hwndSource,
                          prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwEffect;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = *phrDragOp;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDDataObject,
                        &__MIDL_TypeFormatString.Format[26] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC IInterfaceFromWindowProp_StubDesc = 
    {
    (void __RPC_FAR *)& IInterfaceFromWindowProp___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    0,
    0,
    0,
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

static RPC_DISPATCH_FUNCTION IInterfaceFromWindowProp_table[] =
    {
    IInterfaceFromWindowProp_RemGetInterfaceFromWindowProp,
    IInterfaceFromWindowProp_RemPrivDragDrop,
    0
    };
RPC_DISPATCH_TABLE IInterfaceFromWindowProp_DispatchTable = 
    {
    2,
    IInterfaceFromWindowProp_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/*  2 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  8 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 14 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 18 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 22 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 26 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 34 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 40 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 42 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x2,		/* x86, MIPS & PPC Stack size = 2 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 50 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 52 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 54 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x4e ),	/* Type Offset=78 */
/* 58 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 64 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 66 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

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
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	
			0x12, 0x0,	/* FC_UP */
/* 28 */	NdrFcShort( 0x10 ),	/* Offset= 16 (44) */
/* 30 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 32 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 34 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x8,		/* 8 */
			0x0,		/*  */
/* 40 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 42 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 44 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 46 */	NdrFcShort( 0x404 ),	/* 1028 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x0 ),	/* Offset= 0 (50) */
/* 52 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 54 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe7 ),	/* Offset= -25 (30) */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 60 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 64 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 68 */	NdrFcShort( 0x8 ),	/* 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 72 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 74 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 76 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
