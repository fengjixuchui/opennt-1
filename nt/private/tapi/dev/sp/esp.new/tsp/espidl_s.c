/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:46:09 2020
 */
/* Compiler settings for espidl.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "espidl.h"

#define TYPE_FORMAT_STRING_SIZE   37                                
#define PROC_FORMAT_STRING_SIZE   59                                

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

/* Standard interface: esp, ver. 1.0,
   GUID={0x2F5F6521,0xCA47,0x1068,{0xB3,0x1A,0x00,0xDD,0x01,0x06,0x62,0xDB}} */


extern RPC_DISPATCH_TABLE esp_DispatchTable;

static const RPC_SERVER_INTERFACE esp___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x2F5F6521,0xCA47,0x1068,{0xB3,0x1A,0x00,0xDD,0x01,0x06,0x62,0xDB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &esp_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE esp_ServerIfHandle = (RPC_IF_HANDLE)& esp___RpcServerInterface;

extern const MIDL_STUB_DESC esp_StubDesc;

void __RPC_STUB
esp_ESPAttach(
    PRPC_MESSAGE _pRpcMessage )
{
    long _M10;
    long _M11;
    long _M9;
    long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    long lProcessID;
    long __RPC_FAR *phDebugOutputEvent;
    long __RPC_FAR *phShutdownEvent;
    long __RPC_FAR *phWidgetEventsEvent;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    phShutdownEvent = 0;
    phDebugOutputEvent = 0;
    phWidgetEventsEvent = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            lProcessID = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        phShutdownEvent = &_M9;
        phDebugOutputEvent = &_M10;
        phWidgetEventsEvent = &_M11;
        
        _RetVal = ESPAttach(
                    lProcessID,
                    phShutdownEvent,
                    phDebugOutputEvent,
                    phWidgetEventsEvent);
        
        _StubMsg.BufferLength = 4U + 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *phShutdownEvent;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *phDebugOutputEvent;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *phWidgetEventsEvent;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPSetOptions(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    long lCompletionMode;
    long lDebugOptions;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[16] );
            
            lDebugOptions = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            lCompletionMode = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        ESPSetOptions(lDebugOptions,lCompletionMode);
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPCompleteRequest(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    long lAsyncReqInfo;
    long lResult;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[16] );
            
            lAsyncReqInfo = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            lResult = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        ESPCompleteRequest(lAsyncReqInfo,lResult);
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPEvent(
    PRPC_MESSAGE _pRpcMessage )
{
    long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    long dwMsg;
    long dwParam1;
    long dwParam2;
    long dwParam3;
    long htCall;
    long htDevice;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[22] );
            
            htDevice = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            htCall = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwMsg = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwParam1 = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwParam2 = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwParam3 = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = ESPEvent(
                   htDevice,
                   htCall,
                   dwMsg,
                   dwParam1,
                   dwParam2,
                   dwParam3);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPGetDebugOutput(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned char ( __RPC_FAR *pBuffer )[  ];
    long __RPC_FAR *plSize;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    pBuffer = 0;
    plSize = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36] );
            
            plSize = ( long __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( long  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        pBuffer = NdrAllocate(&_StubMsg,*plSize * 1);
        
        ESPGetDebugOutput(*pBuffer,plSize);
        
        _StubMsg.BufferLength = 12U + 11U;
        _StubMsg.MaxCount = plSize ? *plSize : 0;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = plSize ? *plSize : 0;
        
        NdrConformantVaryingArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR *)*pBuffer,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = plSize ? *plSize : 0;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = plSize ? *plSize : 0;
        
        NdrConformantVaryingArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                           (unsigned char __RPC_FAR *)*pBuffer,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *plSize;
        
        }
    RpcFinally
        {
        if ( pBuffer )
            _StubMsg.pfnFree( pBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPGetWidgetEvents(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned char ( __RPC_FAR *pBuffer )[  ];
    long __RPC_FAR *plSize;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    pBuffer = 0;
    plSize = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36] );
            
            plSize = ( long __RPC_FAR * )_StubMsg.Buffer;
            _StubMsg.Buffer += sizeof( long  );
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        pBuffer = NdrAllocate(&_StubMsg,*plSize * 1);
        
        ESPGetWidgetEvents(*pBuffer,plSize);
        
        _StubMsg.BufferLength = 12U + 11U;
        _StubMsg.MaxCount = plSize ? *plSize : 0;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = plSize ? *plSize : 0;
        
        NdrConformantVaryingArrayBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR *)*pBuffer,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = plSize ? *plSize : 0;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = plSize ? *plSize : 0;
        
        NdrConformantVaryingArrayMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                           (unsigned char __RPC_FAR *)*pBuffer,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = *plSize;
        
        }
    RpcFinally
        {
        if ( pBuffer )
            _StubMsg.pfnFree( pBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPStartPBXThread(
    PRPC_MESSAGE _pRpcMessage )
{
    long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    long lSize;
    unsigned char ( __RPC_FAR *pBuffer )[  ];
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    pBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46] );
            
            NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                                 (unsigned char __RPC_FAR * __RPC_FAR *)&pBuffer,
                                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                                 (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            lSize = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = ESPStartPBXThread(*pBuffer,lSize);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        if ( pBuffer )
            _StubMsg.pfnFree( pBuffer );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
esp_ESPStopPBXThread(
    PRPC_MESSAGE _pRpcMessage )
{
    long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    long dummy;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &esp_StubDesc);
    
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[54] );
            
            dummy = *(( long __RPC_FAR * )_StubMsg.Buffer)++;
            
            if(_StubMsg.Buffer > _StubMsg.BufferEnd)
                {
                RpcRaiseException(RPC_X_BAD_STUB_DATA);
                }
            }
        RpcExcept( RPC_BAD_STUB_DATA_EXCEPTION_FILTER )
            {
            RpcRaiseException(RPC_X_BAD_STUB_DATA);
            }
        RpcEndExcept
        
        _RetVal = ESPStopPBXThread(dummy);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC esp_StubDesc = 
    {
    (void __RPC_FAR *)& esp___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION esp_table[] =
    {
    esp_ESPAttach,
    esp_ESPSetOptions,
    esp_ESPCompleteRequest,
    esp_ESPEvent,
    esp_ESPGetDebugOutput,
    esp_ESPGetWidgetEvents,
    esp_ESPStartPBXThread,
    esp_ESPStopPBXThread,
    0
    };
RPC_DISPATCH_TABLE esp_DispatchTable = 
    {
    8,
    esp_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  2 */	
			0x51,		/* FC_OUT_PARAM */
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
/*  8 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 10 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 14 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 22 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 28 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 40 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 44 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 46 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 48 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 50 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 52 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 54 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 56 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

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
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x1 ),	/* 1 */
/*  8 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 10 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 12 */	0x28,		/* 40 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 16 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 30 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 34 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
