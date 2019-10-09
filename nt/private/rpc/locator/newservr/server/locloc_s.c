/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 21:51:24 2019
 */
/* Compiler settings for loctoloc.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "loctoloc.h"

#define TYPE_FORMAT_STRING_SIZE   233                               
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

/* Standard interface: LocToLoc, ver. 1.0,
   GUID={0xe33c0cc4,0x0482,0x101a,{0xbc,0x0c,0x02,0x60,0x8c,0x6b,0xa2,0x18}} */


extern RPC_DISPATCH_TABLE LocToLoc_DispatchTable;

static const RPC_SERVER_INTERFACE LocToLoc___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0xe33c0cc4,0x0482,0x101a,{0xbc,0x0c,0x02,0x60,0x8c,0x6b,0xa2,0x18}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &LocToLoc_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE LocToLoc_ServerIfHandle = (RPC_IF_HANDLE)& LocToLoc___RpcServerInterface;

extern const MIDL_STUB_DESC LocToLoc_StubDesc;

void __RPC_STUB
LocToLoc_I_nsi_lookup_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M4;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED32 binding_max_count;
    STRING_T entry_name;
    UNSIGNED32 entry_name_syntax;
    handle_t hrpcPrimaryLocatorHndl;
    UNSIGNED32 ignore;
    NDR_SCONTEXT import_context;
    NSI_SYNTAX_ID_T __RPC_FAR *interfaceid;
    NSI_UUID_P_T obj_uuid;
    UNSIGNED16 __RPC_FAR *status;
    NSI_SYNTAX_ID_T __RPC_FAR *xfersyntax;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hrpcPrimaryLocatorHndl = _pRpcMessage->Handle;
    entry_name = 0;
    interfaceid = 0;
    xfersyntax = 0;
    obj_uuid = 0;
    import_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        entry_name_syntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&entry_name,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&interfaceid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&xfersyntax,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&obj_uuid,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[48],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        binding_max_count = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        ignore = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        import_context = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M4;
        
        I_nsi_lookup_begin(
                      hrpcPrimaryLocatorHndl,
                      entry_name_syntax,
                      entry_name,
                      interfaceid,
                      xfersyntax,
                      obj_uuid,
                      binding_max_count,
                      ignore,
                      ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(import_context),
                      status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )import_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_lookup_done(
    PRPC_MESSAGE _pRpcMessage )
{
    UNSIGNED16 _M5;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hrpcPrimaryLocatorHndl;
    NDR_SCONTEXT import_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hrpcPrimaryLocatorHndl = _pRpcMessage->Handle;
    import_context = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34] );
        
        import_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M5;
        
        I_nsi_lookup_done(
                     hrpcPrimaryLocatorHndl,
                     ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(import_context),
                     status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )import_context,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_lookup_next(
    PRPC_MESSAGE _pRpcMessage )
{
    NSI_BINDING_VECTOR_P_T _M6;
    UNSIGNED16 _M7;
    MIDL_STUB_MESSAGE _StubMsg;
    NSI_BINDING_VECTOR_P_T __RPC_FAR *binding_vector;
    handle_t hrpcPrimaryLocatorHndl;
    NDR_SCONTEXT import_context;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hrpcPrimaryLocatorHndl = _pRpcMessage->Handle;
    binding_vector = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[46] );
        
        import_context = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        binding_vector = &_M6;
        _M6 = 0;
        status = &_M7;
        
        I_nsi_lookup_next(
                     hrpcPrimaryLocatorHndl,
                     ( NSI_NS_HANDLE_T  )*NDRSContextValue(import_context),
                     binding_vector,
                     status);
        
        _StubMsg.BufferLength = 4U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)binding_vector,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[76] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)binding_vector,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[76] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)binding_vector,
                        &__MIDL_TypeFormatString.Format[76] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_entry_object_inq_next(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT InqContext;
    NSI_UUID_VECTOR_P_T _M8;
    UNSIGNED16 _M9;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hrpcPrimaryLoctorHndl;
    UNSIGNED16 __RPC_FAR *status;
    NSI_UUID_VECTOR_P_T __RPC_FAR *uuid_vec;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hrpcPrimaryLoctorHndl = _pRpcMessage->Handle;
    uuid_vec = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[62] );
        
        InqContext = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        uuid_vec = &_M8;
        _M8 = 0;
        status = &_M9;
        
        I_nsi_entry_object_inq_next(
                               hrpcPrimaryLoctorHndl,
                               ( NSI_NS_HANDLE_T  )*NDRSContextValue(InqContext),
                               uuid_vec,
                               status);
        
        _StubMsg.BufferLength = 4U + 5U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)uuid_vec,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166] );
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)uuid_vec,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 1) & ~ 0x1);
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)uuid_vec,
                        &__MIDL_TypeFormatString.Format[166] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_ping_locator(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M10;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hLocatortoPing;
    error_status_t __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hLocatortoPing = _pRpcMessage->Handle;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[78] );
        
        status = &_M10;
        
        I_nsi_ping_locator(hLocatortoPing,status);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_entry_object_inq_done(
    PRPC_MESSAGE _pRpcMessage )
{
    NDR_SCONTEXT InqContext;
    UNSIGNED16 _M11;
    MIDL_STUB_MESSAGE _StubMsg;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    InqContext = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[86] );
        
        InqContext = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
        
        status = &_M11;
        
        I_nsi_entry_object_inq_done(( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(InqContext),status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )InqContext,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
LocToLoc_I_nsi_entry_object_inq_begin(
    PRPC_MESSAGE _pRpcMessage )
{
    STRING_T EntryName;
    UNSIGNED32 EntryNameSyntax;
    NDR_SCONTEXT InqContext;
    UNSIGNED16 _M12;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hrpcPrimaryLocatorHndl;
    UNSIGNED16 __RPC_FAR *status;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &LocToLoc_StubDesc);
    
    hrpcPrimaryLocatorHndl = _pRpcMessage->Handle;
    EntryName = 0;
    InqContext = 0;
    status = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[96] );
        
        EntryNameSyntax = *(( UNSIGNED32 __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&EntryName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        InqContext = NDRSContextUnmarshall( (char *)0, _pRpcMessage->DataRepresentation ); 
        
        status = &_M12;
        
        I_nsi_entry_object_inq_begin(
                                hrpcPrimaryLocatorHndl,
                                EntryNameSyntax,
                                EntryName,
                                ( NSI_NS_HANDLE_T __RPC_FAR * )NDRSContextValue(InqContext),
                                status);
        
        _StubMsg.BufferLength = 20U + 2U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrServerContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_SCONTEXT  )InqContext,
                            ( NDR_RUNDOWN  )NSI_NS_HANDLE_T_rundown);
        
        *(( UNSIGNED16 __RPC_FAR * )_StubMsg.Buffer)++ = *status;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC LocToLoc_StubDesc = 
    {
    (void __RPC_FAR *)& LocToLoc___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION LocToLoc_table[] =
    {
    LocToLoc_I_nsi_lookup_begin,
    LocToLoc_I_nsi_lookup_done,
    LocToLoc_I_nsi_lookup_next,
    LocToLoc_I_nsi_entry_object_inq_next,
    LocToLoc_I_nsi_ping_locator,
    LocToLoc_I_nsi_entry_object_inq_done,
    LocToLoc_I_nsi_entry_object_inq_begin,
    0
    };
RPC_DISPATCH_TABLE LocToLoc_DispatchTable = 
    {
    7,
    LocToLoc_table
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
/*  2 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  4 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  6 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  8 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 12 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 14 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 16 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */
/* 20 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 22 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 24 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x34 ),	/* Type Offset=52 */
/* 28 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 32 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 34 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 36 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 38 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 40 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 44 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x4c ),	/* Type Offset=76 */
/* 56 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 60 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 64 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x48 ),	/* Type Offset=72 */
/* 68 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */
/* 72 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 74 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 76 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 80 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */
/* 84 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 88 */	NdrFcShort( 0xd8 ),	/* Type Offset=216 */
/* 90 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 92 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 94 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 96 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 98 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 100 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 102 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 104 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0xe0 ),	/* Type Offset=224 */
/* 108 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */
/* 112 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  2 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/*  4 */	
			0x12, 0x0,	/* FC_UP */
/*  6 */	NdrFcShort( 0x1c ),	/* Offset= 28 (34) */
/*  8 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 10 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 14 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 16 */	NdrFcShort( 0x10 ),	/* 16 */
/* 18 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 20 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 22 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffff1 ),	/* Offset= -15 (8) */
			0x5b,		/* FC_END */
/* 26 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 28 */	NdrFcShort( 0x4 ),	/* 4 */
/* 30 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 32 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 34 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 36 */	NdrFcShort( 0x14 ),	/* 20 */
/* 38 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 40 */	NdrFcShort( 0xffffffe6 ),	/* Offset= -26 (14) */
/* 42 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 44 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (26) */
/* 46 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 48 */	
			0x12, 0x0,	/* FC_UP */
/* 50 */	NdrFcShort( 0xffffffdc ),	/* Offset= -36 (14) */
/* 52 */	
			0x11, 0x0,	/* FC_RP */
/* 54 */	NdrFcShort( 0x2 ),	/* Offset= 2 (56) */
/* 56 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 58 */	0x0,		/* 0 */
			0x8,		/* 8 */
/* 60 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 62 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 64 */	
			0x11, 0x0,	/* FC_RP */
/* 66 */	NdrFcShort( 0x2 ),	/* Offset= 2 (68) */
/* 68 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 70 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 72 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 74 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 76 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	
			0x12, 0x0,	/* FC_UP */
/* 82 */	NdrFcShort( 0x30 ),	/* Offset= 48 (130) */
/* 84 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 86 */	NdrFcShort( 0xc ),	/* 12 */
/* 88 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 98 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 100 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 106 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 108 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 110 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 112 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 116 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0xc ),	/* 12 */
/* 120 */	0x8,		/* 8 */
			0x0,		/*  */
/* 122 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 124 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 126 */	NdrFcShort( 0xffffffd6 ),	/* Offset= -42 (84) */
/* 128 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 130 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (116) */
/* 136 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 140 */	NdrFcShort( 0xc ),	/* 12 */
/* 142 */	NdrFcShort( 0x4 ),	/* 4 */
/* 144 */	NdrFcShort( 0x2 ),	/* 2 */
/* 146 */	NdrFcShort( 0x4 ),	/* 4 */
/* 148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 150 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 152 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 154 */	NdrFcShort( 0xc ),	/* 12 */
/* 156 */	NdrFcShort( 0xc ),	/* 12 */
/* 158 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 160 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 162 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 164 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 166 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (170) */
/* 170 */	
			0x12, 0x0,	/* FC_UP */
/* 172 */	NdrFcShort( 0xc ),	/* Offset= 12 (184) */
/* 174 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	0x8,		/* 8 */
			0x0,		/*  */
/* 180 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 182 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 184 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 186 */	NdrFcShort( 0x4 ),	/* 4 */
/* 188 */	NdrFcShort( 0xfffffff2 ),	/* Offset= -14 (174) */
/* 190 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 192 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 194 */	NdrFcShort( 0x4 ),	/* 4 */
/* 196 */	NdrFcShort( 0x4 ),	/* 4 */
/* 198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 200 */	NdrFcShort( 0x4 ),	/* 4 */
/* 202 */	NdrFcShort( 0x4 ),	/* 4 */
/* 204 */	0x12, 0x0,	/* FC_UP */
/* 206 */	NdrFcShort( 0xffffff40 ),	/* Offset= -192 (14) */
/* 208 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 210 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 212 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 214 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x11, 0x0,	/* FC_RP */
/* 218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (220) */
/* 220 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 222 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 224 */	
			0x11, 0x0,	/* FC_RP */
/* 226 */	NdrFcShort( 0x2 ),	/* Offset= 2 (228) */
/* 228 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 230 */	0x0,		/* 0 */
			0x3,		/* 3 */

			0x0
        }
    };
