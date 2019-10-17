/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:10 2019
 */
/* Compiler settings for ..\objsrv.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "objsrv.h"

#define TYPE_FORMAT_STRING_SIZE   71                                
#define PROC_FORMAT_STRING_SIZE   109                               

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

/* Standard interface: IObjServer, ver. 0.1,
   GUID={0x5C0EB536,0xBF9F,0x101A,{0x88,0x18,0x02,0x60,0x8C,0x4D,0x23,0x59}} */


extern RPC_DISPATCH_TABLE IObjServer_DispatchTable;

static const RPC_SERVER_INTERFACE IObjServer___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x5C0EB536,0xBF9F,0x101A,{0x88,0x18,0x02,0x60,0x8C,0x4D,0x23,0x59}},{0,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IObjServer_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IObjServer_ServerIfHandle = (RPC_IF_HANDLE)& IObjServer___RpcServerInterface;

extern const MIDL_STUB_DESC IObjServer_StubDesc;

void __RPC_STUB
IObjServer_RemCoGetActiveClassObject(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M10;
    error_status_t _M11;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFD;
    error_status_t __RPC_FAR *prpcstat;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IObjServer_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    guidThreadId = 0;
    rclsid = 0;
    ppIFD = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        ppIFD = &_M10;
        _M10 = 0;
        prpcstat = &_M11;
        
        _RetVal = RemCoGetActiveClassObject(
                                    hRpc,
                                    guidThreadId,
                                    rclsid,
                                    ppIFD,
                                    prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFD,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFD,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFD,
                        &__MIDL_TypeFormatString.Format[22] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IObjServer_RemCoActivateObject(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M12;
    error_status_t _M13;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwTIDCaller;
    DWORD grfMode;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    InterfaceData __RPC_FAR *pIFDFromROT;
    InterfaceData __RPC_FAR *pIFDstg;
    DWORD __RPC_FAR *pdwTIDCallee;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFD;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *pwszPath;
    WCHAR __RPC_FAR *pwszProtseq;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IObjServer_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    pwszProtseq = 0;
    guidThreadId = 0;
    rclsid = 0;
    pwszPath = 0;
    pIFDstg = 0;
    pdwTIDCallee = 0;
    ppIFD = 0;
    pIFDFromROT = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[20] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszProtseq,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[62],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        grfMode = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[62],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDstg,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwTIDCaller = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        pdwTIDCallee = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDFromROT,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26],
                              (unsigned char)0 );
        
        ppIFD = &_M12;
        _M12 = 0;
        prpcstat = &_M13;
        
        _RetVal = RemCoActivateObject(
                              hRpc,
                              pwszProtseq,
                              guidThreadId,
                              rclsid,
                              grfMode,
                              pwszPath,
                              pIFDstg,
                              dwTIDCaller,
                              pdwTIDCallee,
                              ppIFD,
                              pIFDFromROT,
                              prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFD,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwTIDCallee;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFD,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDstg,
                        &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFD,
                        &__MIDL_TypeFormatString.Format[22] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDFromROT,
                        &__MIDL_TypeFormatString.Format[26] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IObjServer_RemCoCreateObject(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M14;
    error_status_t _M15;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwTIDCaller;
    DWORD grfMode;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    InterfaceData __RPC_FAR *pIFDstgFrom;
    DWORD __RPC_FAR *pdwTIDCallee;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFD;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *pwszPath;
    WCHAR __RPC_FAR *pwszPathFrom;
    WCHAR __RPC_FAR *pwszProtseq;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IObjServer_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    pwszProtseq = 0;
    guidThreadId = 0;
    rclsid = 0;
    pwszPathFrom = 0;
    pIFDstgFrom = 0;
    pwszPath = 0;
    pdwTIDCallee = 0;
    ppIFD = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[64] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszProtseq,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[62],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10],
                                   (unsigned char)0 );
        
        grfMode = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPathFrom,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[62],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDstgFrom,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[62],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwTIDCaller = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        pdwTIDCallee = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        ppIFD = &_M14;
        _M14 = 0;
        prpcstat = &_M15;
        
        _RetVal = RemCoCreateObject(
                            hRpc,
                            pwszProtseq,
                            guidThreadId,
                            rclsid,
                            grfMode,
                            pwszPathFrom,
                            pIFDstgFrom,
                            pwszPath,
                            dwTIDCaller,
                            pdwTIDCallee,
                            ppIFD,
                            prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFD,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwTIDCallee;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFD,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDstgFrom,
                        &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFD,
                        &__MIDL_TypeFormatString.Format[22] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC IObjServer_StubDesc = 
    {
    (void __RPC_FAR *)& IObjServer___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION IObjServer_table[] =
    {
    IObjServer_RemCoGetActiveClassObject,
    IObjServer_RemCoActivateObject,
    IObjServer_RemCoCreateObject,
    0
    };
RPC_DISPATCH_TABLE IObjServer_DispatchTable = 
    {
    3,
    IObjServer_table
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
/*  6 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 10 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 14 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 18 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 22 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 24 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
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
/* 36 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 44 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 46 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 50 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 52 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 54 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 56 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 58 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 60 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 62 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 70 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 84 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 86 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 88 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 92 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 94 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 96 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 98 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 100 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 102 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 104 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */
/* 106 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 60 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 62 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 64 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 68 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
