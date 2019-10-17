/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Thu Oct 17 18:16:07 2019
 */
/* Compiler settings for ..\getif.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

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

handle_t any_handle;


static const RPC_CLIENT_INTERFACE IInterfaceFromWindowProp___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0xD0B6FA10,0xE69E,0x101A,{0x88,0xA5,0x02,0x60,0x8C,0x4D,0x1A,0x7F}},{0,1}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE _IInterfaceFromWindowProp_ClientIfHandle = (RPC_IF_HANDLE)& IInterfaceFromWindowProp___RpcClientInterface;

extern const MIDL_STUB_DESC IInterfaceFromWindowProp_StubDesc;

static RPC_BINDING_HANDLE IInterfaceFromWindowProp__MIDL_AutoBindHandle;


HRESULT _RemGetInterfaceFromWindowProp( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *pguidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [in] */ const GUID __RPC_FAR *riid,
    /* [out] */ InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk,
    /* [string][in] */ WCHAR __RPC_FAR *pwszPropertyName,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&IInterfaceFromWindowProp_StubDesc,
                          0);
            
            
            _Handle = hRpc;
            
            
            _StubMsg.BufferLength = 0U + 0U + 11U + 7U + 0U + 14U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)pguidThreadId,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)riid,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            NdrConformantStringBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR *)pwszPropertyName,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[60] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)pguidThreadId,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = hWnd;
            
            *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++ = hApt;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)riid,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            NdrConformantStringMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                         (unsigned char __RPC_FAR *)pwszPropertyName,
                                         (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[60] );
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
            
            NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR * __RPC_FAR *)&ppIFDunk,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                  (unsigned char)0 );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *prpcstat = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )prpcstat,( unsigned long __RPC_FAR * )prpcstat,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


HRESULT _RemPrivDragDrop( 
    /* [in] */ handle_t hRpc,
    /* [in] */ const GUID __RPC_FAR *guidThreadId,
    /* [in] */ DWORD hWnd,
    /* [in] */ HAPT hApt,
    /* [unique][in] */ InterfaceData __RPC_FAR *pIFDDataObject,
    /* [in] */ DWORD dop,
    /* [in] */ DWORD grfKeyState,
    /* [in] */ POINTL pt,
    /* [out][in] */ DWORD __RPC_FAR *pdwEffect,
    /* [out] */ HRESULT __RPC_FAR *phrDragOp,
    /* [in] */ DWORD dwSmId,
    /* [in] */ DWORD hwndSource,
    /* [fault_status][comm_status][out] */ error_status_t __RPC_FAR *prpcstat)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    HRESULT _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    RPC_STATUS _Status;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    RpcTryExcept
        {
        RpcTryFinally
            {
            NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&IInterfaceFromWindowProp_StubDesc,
                          1);
            
            
            _Handle = hRpc;
            
            
            _StubMsg.BufferLength = 0U + 0U + 11U + 7U + 7U + 11U + 7U + 0U + 11U + 7U + 7U;
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)guidThreadId,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                  (unsigned char __RPC_FAR *)pIFDDataObject,
                                  (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
            
            NdrSimpleStructBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR *)&pt,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
            
            NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)guidThreadId,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[10] );
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = hWnd;
            
            *(( HAPT __RPC_FAR * )_StubMsg.Buffer)++ = hApt;
            
            NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                (unsigned char __RPC_FAR *)pIFDDataObject,
                                (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
            
            _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dop;
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = grfKeyState;
            
            NdrSimpleStructMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                     (unsigned char __RPC_FAR *)&pt,
                                     (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwEffect;
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwSmId;
            
            *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = hwndSource;
            
            NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
            
            if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[28] );
            
            *pdwEffect = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            *phrDragOp = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            *prpcstat = *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++;
            
            _RetVal = *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++;
            
            }
        RpcFinally
            {
            NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
            
            }
        RpcEndFinally
        
        }
    RpcExcept( 1 )
        {
        if(_Status = NdrMapCommAndFaultStatus(( PMIDL_STUB_MESSAGE  )&_StubMsg,( unsigned long __RPC_FAR * )prpcstat,( unsigned long __RPC_FAR * )prpcstat,RpcExceptionCode()))
            {
            RpcRaiseException(_Status);
            }
        }
    RpcEndExcept
    return _RetVal;
}


static const MIDL_STUB_DESC IInterfaceFromWindowProp_StubDesc = 
    {
    (void __RPC_FAR *)& IInterfaceFromWindowProp___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &any_handle,
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
