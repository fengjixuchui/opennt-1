/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:35 2019
 */
/* Compiler settings for ..\ichnl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "ichnl.h"

#define TYPE_FORMAT_STRING_SIZE   81                                
#define PROC_FORMAT_STRING_SIZE   115                               

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

/* Standard interface: IChannelService, ver. 0.1,
   GUID={0x00000006,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


extern RPC_DISPATCH_TABLE IChannelService_DispatchTable;

static const RPC_SERVER_INTERFACE IChannelService___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x00000006,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}},{0,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &IChannelService_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE IChannelService_ServerIfHandle = (RPC_IF_HANDLE)& IChannelService___RpcServerInterface;

extern const MIDL_STUB_DESC IChannelService_StubDesc;

void __RPC_STUB
IChannelService_ICS_GetContextHdl(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M2;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    SEndPoint __RPC_FAR *caller_bindings;
    handle_t hRpcBind;
    NDR_SCONTEXT ppObjCtx;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    hRpcBind = _pRpcMessage->Handle;
    caller_bindings = 0;
    ppObjCtx = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&caller_bindings,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                       (unsigned char)0 );
        
        ppObjCtx = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        prpcstat = &_M2;
        
        _RetVal = ICS_GetContextHdl(
                            hRpcBind,
                            caller_bindings,
                            ( PPOBJCTX  )NDRSContextValue(ppObjCtx),
                            prpcstat);
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ppObjCtx,
                            ( NDR_RUNDOWN  )POBJCTX_rundown);
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_ReleaseContextHdl(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M3;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT ppObjCtx;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    ppObjCtx = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[16] );
        
        ppObjCtx = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        prpcstat = &_M3;
        
        _RetVal = ICS_ReleaseContextHdl(( PPOBJCTX  )NDRSContextValue(ppObjCtx),prpcstat);
        
        _StubMsg.BufferLength = 20U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )ppObjCtx,
                            ( NDR_RUNDOWN  )POBJCTX_rundown);
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_GetChannelId(
    PRPC_MESSAGE _pRpcMessage )
{
    OID ObjectId;
    DWORD _M4;
    error_status_t _M5;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_ObjectId;
    void __RPC_FAR *_p_logical_thread;
    SEndPoint __RPC_FAR *caller_bindings;
    NDR_SCONTEXT context;
    DWORD __RPC_FAR *dwChannelId;
    DWORD dwClientTID;
    DWORD dwFlags;
    GUID logical_thread;
    error_status_t __RPC_FAR *prpcstat;
    HAPT server;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    context = 0;
    caller_bindings = 0;
    _p_ObjectId = &ObjectId;
    MIDL_memset(
               _p_ObjectId,
               0,
               sizeof( GUID  ));
    _p_logical_thread = &logical_thread;
    MIDL_memset(
               _p_logical_thread,
               0,
               sizeof( GUID  ));
    dwChannelId = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[26] );
        
        context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&caller_bindings,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                       (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_ObjectId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                                   (unsigned char)0 );
        
        dwFlags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        server = *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_logical_thread,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                                   (unsigned char)0 );
        
        dwClientTID = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwChannelId = &_M4;
        prpcstat = &_M5;
        
        _RetVal = ICS_GetChannelId(
                           ( PPOBJCTX  )NDRSContextValue(context),
                           caller_bindings,
                           ObjectId,
                           dwFlags,
                           server,
                           logical_thread,
                           dwClientTID,
                           dwChannelId,
                           prpcstat);
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )context,
                            ( NDR_RUNDOWN  )POBJCTX_rundown);
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *dwChannelId;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_ReleaseChannel(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD ChannelID;
    error_status_t _M6;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_logical_thread;
    BOOL fAsync;
    handle_t hRpcBind;
    GUID logical_thread;
    error_status_t __RPC_FAR *prpcstat;
    ULONG ulMarshalCnt;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    hRpcBind = _pRpcMessage->Handle;
    _p_logical_thread = &logical_thread;
    MIDL_memset(
               _p_logical_thread,
               0,
               sizeof( GUID  ));
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[58] );
        
        ChannelID = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        ulMarshalCnt = *(( ULONG __RPC_FAR * )_StubMsg.Buffer)++;
        
        fAsync = *(( BOOL __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_logical_thread,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                                   (unsigned char)0 );
        
        prpcstat = &_M6;
        
        _RetVal = ICS_ReleaseChannel(
                             hRpcBind,
                             ChannelID,
                             ulMarshalCnt,
                             fAsync,
                             logical_thread,
                             prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_SyncChannelOp(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD ChannelID;
    error_status_t _M7;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_logical_thread;
    DWORD chop;
    handle_t hRpcBind;
    HAPT hapt;
    GUID logical_thread;
    const GUID __RPC_FAR *pguid;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    hRpcBind = _pRpcMessage->Handle;
    _p_logical_thread = &logical_thread;
    MIDL_memset(
               _p_logical_thread,
               0,
               sizeof( GUID  ));
    pguid = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[76] );
        
        ChannelID = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_logical_thread,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                                   (unsigned char)0 );
        
        chop = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        hapt = *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pguid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64],
                              (unsigned char)0 );
        
        prpcstat = &_M7;
        
        _RetVal = ICS_SyncChannelOp(
                            hRpcBind,
                            ChannelID,
                            logical_thread,
                            chop,
                            hapt,
                            pguid,
                            prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_InputSyncChannelOp(
    PRPC_MESSAGE _pRpcMessage )
{
    DWORD ChannelID;
    error_status_t _M8;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_logical_thread;
    DWORD chop;
    handle_t hRpcBind;
    HAPT hapt;
    GUID logical_thread;
    const GUID __RPC_FAR *pguid;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    hRpcBind = _pRpcMessage->Handle;
    _p_logical_thread = &logical_thread;
    MIDL_memset(
               _p_logical_thread,
               0,
               sizeof( GUID  ));
    pguid = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[76] );
        
        ChannelID = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&_p_logical_thread,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                                   (unsigned char)0 );
        
        chop = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        hapt = *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pguid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[64],
                              (unsigned char)0 );
        
        prpcstat = &_M8;
        
        _RetVal = ICS_InputSyncChannelOp(
                                 hRpcBind,
                                 ChannelID,
                                 logical_thread,
                                 chop,
                                 hapt,
                                 pguid,
                                 prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
IChannelService_ICS_RegisterProtseq(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M10;
    SEndPoint __RPC_FAR *_M9;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hRpcBind;
    SEndPoint __RPC_FAR *__RPC_FAR *ppSEndPoint;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *pwszProtseq;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &IChannelService_StubDesc);
    
    hRpcBind = _pRpcMessage->Handle;
    pwszProtseq = 0;
    ppSEndPoint = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pwszProtseq,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[70],
                                       (unsigned char)0 );
        
        ppSEndPoint = &_M9;
        _M9 = 0;
        prpcstat = &_M10;
        
        _RetVal = ICS_RegisterProtseq(
                              hRpcBind,
                              pwszProtseq,
                              ppSEndPoint,
                              prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppSEndPoint,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[72] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppSEndPoint,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[72] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppSEndPoint,
                        &__MIDL_TypeFormatString.Format[72] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC IChannelService_StubDesc = 
    {
    (void __RPC_FAR *)& IChannelService___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION IChannelService_table[] =
    {
    IChannelService_ICS_GetContextHdl,
    IChannelService_ICS_ReleaseContextHdl,
    IChannelService_ICS_GetChannelId,
    IChannelService_ICS_ReleaseChannel,
    IChannelService_ICS_SyncChannelOp,
    IChannelService_ICS_InputSyncChannelOp,
    IChannelService_ICS_RegisterProtseq,
    0
    };
RPC_DISPATCH_TABLE IChannelService_DispatchTable = 
    {
    7,
    IChannelService_table
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
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 10 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 14 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */
/* 20 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 24 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x22 ),	/* Type Offset=34 */
/* 30 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 36 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 44 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 56 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 68 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 70 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 74 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 76 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x4,		/* x86, MIPS & PPC Stack size = 4 */
#else
			0x4,		/* Alpha Stack size = 4 */
#endif
/* 82 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 92 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 96 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 100 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 104 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 108 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 112 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0xc ),	/* Offset= 12 (14) */
/*  4 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  6 */	NdrFcShort( 0x2 ),	/* 2 */
/*  8 */	0x8,		/* 8 */
			0x0,		/*  */
/* 10 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 12 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x4 ),	/* 4 */
/* 18 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (4) */
/* 20 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 22 */	
			0x11, 0x0,	/* FC_RP */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 28 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 30 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 32 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 34 */	
			0x11, 0x0,	/* FC_RP */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 40 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 42 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x10 ),	/* 16 */
/* 52 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 54 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 56 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (42) */
			0x5b,		/* FC_END */
/* 60 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 62 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x12, 0x0,	/* FC_UP */
/* 66 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (48) */
/* 68 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 70 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 72 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 74 */	NdrFcShort( 0x2 ),	/* Offset= 2 (76) */
/* 76 */	
			0x12, 0x0,	/* FC_UP */
/* 78 */	NdrFcShort( 0xffffffc0 ),	/* Offset= -64 (14) */

			0x0
        }
    };
