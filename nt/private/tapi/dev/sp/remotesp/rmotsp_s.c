/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 09:27:44 2019
 */
/* Compiler settings for rmotsp.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "rmotsp.h"

#define TYPE_FORMAT_STRING_SIZE   35                                
#define PROC_FORMAT_STRING_SIZE   25                                

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

/* Standard interface: remotesp, ver. 1.0,
   GUID={0x2F5F6521,0xCA47,0x1068,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDB}} */


extern RPC_DISPATCH_TABLE remotesp_DispatchTable;

static const RPC_SERVER_INTERFACE remotesp___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x2F5F6521,0xCA47,0x1068,{0xB3,0x19,0x00,0xDD,0x01,0x06,0x62,0xDB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &remotesp_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE remotesp_ServerIfHandle = (RPC_IF_HANDLE)& remotesp___RpcServerInterface;

extern const MIDL_STUB_DESC remotesp_StubDesc;

void __RPC_STUB
remotesp_RemoteSPAttach(
    PRPC_MESSAGE _pRpcMessage )
{
    long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT pphContext;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &remotesp_StubDesc);
    
    pphContext = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
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
        pphContext = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        
        _RetVal = RemoteSPAttach(( PCONTEXT_HANDLE_TYPE2 __RPC_FAR * )NDRSContextValue(pphContext));
        
        _StubMsg.BufferLength = 20U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )pphContext,
                            ( NDR_RUNDOWN  )PCONTEXT_HANDLE_TYPE2_rundown);
        
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
remotesp_RemoteSPEventProc(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    long lSize;
    unsigned char ( __RPC_FAR *pBuffer )[  ];
    NDR_SCONTEXT phContext;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &remotesp_StubDesc);
    
    pBuffer = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[6] );
            
            phContext = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                                 (unsigned char __RPC_FAR * __RPC_FAR *)&pBuffer,
                                                 (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[12],
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
        
        RemoteSPEventProc(
                     ( PCONTEXT_HANDLE_TYPE2  )*NDRSContextValue(phContext),
                     *pBuffer,
                     lSize);
        
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
remotesp_RemoteSPDetach(
    PRPC_MESSAGE _pRpcMessage )
{
    MIDL_STUB_MESSAGE _StubMsg;
    NDR_SCONTEXT pphContext;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &remotesp_StubDesc);
    
    pphContext = 0;
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[18] );
            
            pphContext = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
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
        
        RemoteSPDetach(( PCONTEXT_HANDLE_TYPE2 __RPC_FAR * )NDRSContextValue(pphContext));
        
        _StubMsg.BufferLength = 20U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )pphContext,
                            ( NDR_RUNDOWN  )PCONTEXT_HANDLE_TYPE2_rundown);
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC remotesp_StubDesc = 
    {
    (void __RPC_FAR *)& remotesp___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION remotesp_table[] =
    {
    remotesp_RemoteSPAttach,
    remotesp_RemoteSPEventProc,
    remotesp_RemoteSPDetach,
    0
    };
RPC_DISPATCH_TABLE remotesp_DispatchTable = 
    {
    3,
    remotesp_table
    };

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
			
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  2 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  4 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  6 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  8 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0xc ),	/* Type Offset=12 */
/* 14 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 18 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 20 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 22 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/*  6 */	0x0,		/* 0 */
			0x0,		/* 0 */
/*  8 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 10 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 12 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 14 */	NdrFcShort( 0x1 ),	/* 1 */
/* 16 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 18 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 20 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 22 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 24 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 26 */	
			0x11, 0x0,	/* FC_RP */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 32 */	0x0,		/* 0 */
			0x0,		/* 0 */

			0x0
        }
    };
