/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Oct 13 04:21:21 2019
 */
/* Compiler settings for ndeapi.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "ndeapi.h"

#define TYPE_FORMAT_STRING_SIZE   185                               
#define PROC_FORMAT_STRING_SIZE   277                               

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

/* Standard interface: nddeapi, ver. 1.2,
   GUID={0x2F5F3220,0xC126,0x1076,{0xB5,0x49,0x07,0x4D,0x07,0x86,0x19,0xDA}} */


extern RPC_DISPATCH_TABLE nddeapi_DispatchTable;

static const RPC_SERVER_INTERFACE nddeapi___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x2F5F3220,0xC126,0x1076,{0xB5,0x49,0x07,0x4D,0x07,0x86,0x19,0xDA}},{1,2}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &nddeapi_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE nddeapi_ServerIfHandle = (RPC_IF_HANDLE)& nddeapi___RpcServerInterface;

extern const MIDL_STUB_DESC nddeapi_StubDesc;

void __RPC_STUB
nddeapi_wwNDdeShareAddW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long atl;
    unsigned long cBufSize;
    unsigned long itl;
    byte __RPC_FAR *lpBuffer;
    unsigned long nLevel;
    byte __RPC_FAR *pat;
    byte __RPC_FAR *pit;
    byte __RPC_FAR *psd;
    byte __RPC_FAR *psn;
    unsigned long sdl;
    unsigned long snl;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpBuffer = 0;
    psn = 0;
    pat = 0;
    psd = 0;
    pit = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[4],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&psn,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[22],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        snl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&pat,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        atl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&psd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[54],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        sdl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&pit,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[72],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        itl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeShareAddW(
                          nLevel,
                          lpBuffer,
                          cBufSize,
                          psn,
                          snl,
                          pat,
                          atl,
                          psd,
                          sdl,
                          pit,
                          itl);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = cBufSize;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = cBufSize;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpBuffer,
                        &__MIDL_TypeFormatString.Format[0] );
        
        _StubMsg.MaxCount = snl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = snl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)psn,
                        &__MIDL_TypeFormatString.Format[18] );
        
        _StubMsg.MaxCount = atl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = atl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pat,
                        &__MIDL_TypeFormatString.Format[36] );
        
        _StubMsg.MaxCount = itl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = itl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pit,
                        &__MIDL_TypeFormatString.Format[68] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareDelA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned char __RPC_FAR *lpszShareName;
    unsigned long wReserved;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        wReserved = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeShareDelA(lpszShareName,wReserved);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareDelW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    wchar_t __RPC_FAR *lpszShareName;
    unsigned long wReserved;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        wReserved = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeShareDelW(lpszShareName,wReserved);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeGetShareSecurityA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M64;
    unsigned long _M65;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long bRemoteCall;
    unsigned long cbsd;
    unsigned long __RPC_FAR *lpcbsdRequired;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned char __RPC_FAR *lpszShareName;
    byte __RPC_FAR *psd;
    unsigned long si;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    psd = 0;
    lpcbsdRequired = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[50] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        si = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&psd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cbsd = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        bRemoteCall = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpcbsdRequired = &_M64;
        lpnSizeToReturn = &_M65;
        
        _RetVal = wwNDdeGetShareSecurityA(
                                  lpszShareName,
                                  si,
                                  psd,
                                  cbsd,
                                  bRemoteCall,
                                  lpcbsdRequired,
                                  lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U;
        _StubMsg.MaxCount = cbsd;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)psd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbsd;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)psd,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbsdRequired;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeGetShareSecurityW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M66;
    unsigned long _M67;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long bRemoteCall;
    unsigned long cbsd;
    unsigned long __RPC_FAR *lpcbsdRequired;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    wchar_t __RPC_FAR *lpszShareName;
    byte __RPC_FAR *psd;
    unsigned long si;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    psd = 0;
    lpcbsdRequired = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[74] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        si = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&psd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cbsd = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        bRemoteCall = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpcbsdRequired = &_M66;
        lpnSizeToReturn = &_M67;
        
        _RetVal = wwNDdeGetShareSecurityW(
                                  lpszShareName,
                                  si,
                                  psd,
                                  cbsd,
                                  bRemoteCall,
                                  lpcbsdRequired,
                                  lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U;
        _StubMsg.MaxCount = cbsd;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)psd,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cbsd;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)psd,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbsdRequired;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeSetShareSecurityA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned char __RPC_FAR *lpszShareName;
    byte __RPC_FAR *psd;
    unsigned long sdl;
    unsigned long si;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    psd = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        si = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&psd,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[116],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        sdl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeSetShareSecurityA(
                                  lpszShareName,
                                  si,
                                  psd,
                                  sdl);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = sdl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = sdl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)psd,
                        &__MIDL_TypeFormatString.Format[112] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeSetShareSecurityW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    wchar_t __RPC_FAR *lpszShareName;
    byte __RPC_FAR *psd;
    unsigned long sdl;
    unsigned long si;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    psd = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[112] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        si = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&psd,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[116],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        sdl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeSetShareSecurityW(
                                  lpszShareName,
                                  si,
                                  psd,
                                  sdl);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = sdl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = sdl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)psd,
                        &__MIDL_TypeFormatString.Format[112] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareEnumA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M68;
    unsigned long _M69;
    unsigned long _M70;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long cBufSize;
    byte __RPC_FAR *lpBuffer;
    unsigned long __RPC_FAR *lpcbTotalAvailable;
    unsigned long __RPC_FAR *lpnEntriesRead;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned long nLevel;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpBuffer = 0;
    lpnEntriesRead = 0;
    lpcbTotalAvailable = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126] );
        
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpnEntriesRead = &_M68;
        lpcbTotalAvailable = &_M69;
        lpnSizeToReturn = &_M70;
        
        _RetVal = wwNDdeShareEnumA(
                           nLevel,
                           lpBuffer,
                           cBufSize,
                           lpnEntriesRead,
                           lpcbTotalAvailable,
                           lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U + 7U;
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpBuffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnEntriesRead;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbTotalAvailable;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareEnumW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M71;
    unsigned long _M72;
    unsigned long _M73;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long cBufSize;
    byte __RPC_FAR *lpBuffer;
    unsigned long __RPC_FAR *lpcbTotalAvailable;
    unsigned long __RPC_FAR *lpnEntriesRead;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned long nLevel;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpBuffer = 0;
    lpnEntriesRead = 0;
    lpcbTotalAvailable = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126] );
        
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpnEntriesRead = &_M71;
        lpcbTotalAvailable = &_M72;
        lpnSizeToReturn = &_M73;
        
        _RetVal = wwNDdeShareEnumW(
                           nLevel,
                           lpBuffer,
                           cBufSize,
                           lpnEntriesRead,
                           lpcbTotalAvailable,
                           lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U + 7U;
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpBuffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnEntriesRead;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbTotalAvailable;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareGetInfoW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M74;
    unsigned short _M75;
    unsigned long _M76;
    unsigned long _M77;
    unsigned long _M78;
    unsigned long _M79;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long bRemoteCall;
    unsigned long cBufSize;
    byte __RPC_FAR *lpBuffer;
    unsigned long __RPC_FAR *lpnAtOffset;
    unsigned long __RPC_FAR *lpnItOffset;
    unsigned short __RPC_FAR *lpnItems;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned long __RPC_FAR *lpnSnOffset;
    unsigned long __RPC_FAR *lpnTotalAvailable;
    wchar_t __RPC_FAR *lpszShareName;
    unsigned long nLevel;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    lpBuffer = 0;
    lpnTotalAvailable = 0;
    lpnItems = 0;
    lpnSizeToReturn = 0;
    lpnSnOffset = 0;
    lpnAtOffset = 0;
    lpnItOffset = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[148] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        bRemoteCall = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpnTotalAvailable = &_M74;
        lpnItems = &_M75;
        lpnSizeToReturn = &_M76;
        lpnSnOffset = &_M77;
        lpnAtOffset = &_M78;
        lpnItOffset = &_M79;
        
        _RetVal = wwNDdeShareGetInfoW(
                              lpszShareName,
                              nLevel,
                              lpBuffer,
                              cBufSize,
                              lpnTotalAvailable,
                              lpnItems,
                              bRemoteCall,
                              lpnSizeToReturn,
                              lpnSnOffset,
                              lpnAtOffset,
                              lpnItOffset);
        
        _StubMsg.BufferLength = 8U + 11U + 4U + 10U + 7U + 7U + 7U + 7U;
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpBuffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[94] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnTotalAvailable;
        
        *(( unsigned short __RPC_FAR * )_StubMsg.Buffer)++ = *lpnItems;
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSnOffset;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnAtOffset;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnItOffset;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeShareSetInfoW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long atl;
    unsigned long cBufSize;
    unsigned long itl;
    byte __RPC_FAR *lpBuffer;
    wchar_t __RPC_FAR *lpszShareName;
    unsigned long nLevel;
    byte __RPC_FAR *pat;
    byte __RPC_FAR *pit;
    byte __RPC_FAR *psn;
    unsigned short sParmNum;
    unsigned long snl;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    lpBuffer = 0;
    psn = 0;
    pat = 0;
    pit = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[188] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[116],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        sParmNum = *(( unsigned short __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&psn,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[40],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        snl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&pat,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[152],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        atl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrConformantVaryingArrayUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                             (unsigned char __RPC_FAR * __RPC_FAR *)&pit,
                                             (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[72],
                                             (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        itl = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeShareSetInfoW(
                              lpszShareName,
                              nLevel,
                              lpBuffer,
                              cBufSize,
                              sParmNum,
                              psn,
                              snl,
                              pat,
                              atl,
                              pit,
                              itl);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = cBufSize;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = cBufSize;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)lpBuffer,
                        &__MIDL_TypeFormatString.Format[112] );
        
        _StubMsg.MaxCount = snl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = snl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)psn,
                        &__MIDL_TypeFormatString.Format[36] );
        
        _StubMsg.MaxCount = atl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = atl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pat,
                        &__MIDL_TypeFormatString.Format[148] );
        
        _StubMsg.MaxCount = itl;
        _StubMsg.Offset = 0;
        _StubMsg.ActualCount = itl;
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pit,
                        &__MIDL_TypeFormatString.Format[68] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeSetTrustedShareA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long dwOptions;
    unsigned char __RPC_FAR *lpszShareName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[34] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwOptions = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeSetTrustedShareA(lpszShareName,dwOptions);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeSetTrustedShareW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long dwOptions;
    wchar_t __RPC_FAR *lpszShareName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[42] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwOptions = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        
        _RetVal = wwNDdeSetTrustedShareW(lpszShareName,dwOptions);
        
        _StubMsg.BufferLength = 4U;
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeGetTrustedShareA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M80;
    unsigned long _M81;
    unsigned long _M82;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long __RPC_FAR *lpdwOptions;
    unsigned long __RPC_FAR *lpdwShareModId0;
    unsigned long __RPC_FAR *lpdwShareModId1;
    unsigned char __RPC_FAR *lpszShareName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    lpdwOptions = 0;
    lpdwShareModId0 = 0;
    lpdwShareModId1 = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[222] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[88],
                                       (unsigned char)0 );
        
        lpdwOptions = &_M80;
        lpdwShareModId0 = &_M81;
        lpdwShareModId1 = &_M82;
        
        _RetVal = wwNDdeGetTrustedShareA(
                                 lpszShareName,
                                 lpdwOptions,
                                 lpdwShareModId0,
                                 lpdwShareModId1);
        
        _StubMsg.BufferLength = 4U + 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwOptions;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwShareModId0;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwShareModId1;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeGetTrustedShareW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M83;
    unsigned long _M84;
    unsigned long _M85;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long __RPC_FAR *lpdwOptions;
    unsigned long __RPC_FAR *lpdwShareModId0;
    unsigned long __RPC_FAR *lpdwShareModId1;
    wchar_t __RPC_FAR *lpszShareName;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpszShareName = 0;
    lpdwOptions = 0;
    lpdwShareModId0 = 0;
    lpdwShareModId1 = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[240] );
        
        NdrConformantStringUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&lpszShareName,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[92],
                                       (unsigned char)0 );
        
        lpdwOptions = &_M83;
        lpdwShareModId0 = &_M84;
        lpdwShareModId1 = &_M85;
        
        _RetVal = wwNDdeGetTrustedShareW(
                                 lpszShareName,
                                 lpdwOptions,
                                 lpdwShareModId0,
                                 lpdwShareModId1);
        
        _StubMsg.BufferLength = 4U + 4U + 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwOptions;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwShareModId0;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpdwShareModId1;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeTrustedShareEnumA(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M86;
    unsigned long _M87;
    unsigned long _M88;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long cBufSize;
    byte __RPC_FAR *lpBuffer;
    unsigned long __RPC_FAR *lpcbTotalAvailable;
    unsigned long __RPC_FAR *lpnEntriesRead;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned long nLevel;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpBuffer = 0;
    lpnEntriesRead = 0;
    lpcbTotalAvailable = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126] );
        
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpnEntriesRead = &_M86;
        lpcbTotalAvailable = &_M87;
        lpnSizeToReturn = &_M88;
        
        _RetVal = wwNDdeTrustedShareEnumA(
                                  nLevel,
                                  lpBuffer,
                                  cBufSize,
                                  lpnEntriesRead,
                                  lpcbTotalAvailable,
                                  lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U + 7U;
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpBuffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnEntriesRead;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbTotalAvailable;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeTrustedShareEnumW(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _M89;
    unsigned long _M90;
    unsigned long _M91;
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long cBufSize;
    byte __RPC_FAR *lpBuffer;
    unsigned long __RPC_FAR *lpcbTotalAvailable;
    unsigned long __RPC_FAR *lpnEntriesRead;
    unsigned long __RPC_FAR *lpnSizeToReturn;
    unsigned long nLevel;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpBuffer = 0;
    lpnEntriesRead = 0;
    lpcbTotalAvailable = 0;
    lpnSizeToReturn = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126] );
        
        nLevel = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        cBufSize = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        lpnEntriesRead = &_M89;
        lpcbTotalAvailable = &_M90;
        lpnSizeToReturn = &_M91;
        
        _RetVal = wwNDdeTrustedShareEnumW(
                                  nLevel,
                                  lpBuffer,
                                  cBufSize,
                                  lpnEntriesRead,
                                  lpcbTotalAvailable,
                                  lpnSizeToReturn);
        
        _StubMsg.BufferLength = 8U + 11U + 7U + 7U + 7U;
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpBuffer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = cBufSize;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpBuffer,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnEntriesRead;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpcbTotalAvailable;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *lpnSizeToReturn;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
nddeapi_wwNDdeSpecialCommand(
    PRPC_MESSAGE _pRpcMessage )
{
    unsigned long _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    unsigned long command;
    byte __RPC_FAR *lpDataIn;
    byte __RPC_FAR *lpDataOut;
    unsigned long nBytesDataIn;
    unsigned long __RPC_FAR *nOutBufSize;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &nddeapi_StubDesc);
    
    lpDataIn = 0;
    lpDataOut = 0;
    nOutBufSize = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[258] );
        
        command = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDataIn,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        nBytesDataIn = *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDataOut,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        nOutBufSize = ( unsigned long __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( unsigned long  );
        
        
        _RetVal = wwNDdeSpecialCommand(
                               command,
                               lpDataIn,
                               nBytesDataIn,
                               lpDataOut,
                               nOutBufSize);
        
        _StubMsg.BufferLength = 8U + 16U + 11U + 7U;
        _StubMsg.MaxCount = nBytesDataIn;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpDataIn,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.MaxCount = nOutBufSize ? *nOutBufSize : 0;
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)lpDataOut,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        _StubMsg.MaxCount = nBytesDataIn;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpDataIn,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[130] );
        
        _StubMsg.MaxCount = nOutBufSize ? *nOutBufSize : 0;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)lpDataOut,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[166] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = *nOutBufSize;
        
        *(( unsigned long __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}


static const MIDL_STUB_DESC nddeapi_StubDesc = 
    {
    (void __RPC_FAR *)& nddeapi___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION nddeapi_table[] =
    {
    nddeapi_wwNDdeShareAddW,
    nddeapi_wwNDdeShareDelA,
    nddeapi_wwNDdeShareDelW,
    nddeapi_wwNDdeGetShareSecurityA,
    nddeapi_wwNDdeGetShareSecurityW,
    nddeapi_wwNDdeSetShareSecurityA,
    nddeapi_wwNDdeSetShareSecurityW,
    nddeapi_wwNDdeShareEnumA,
    nddeapi_wwNDdeShareEnumW,
    nddeapi_wwNDdeShareGetInfoW,
    nddeapi_wwNDdeShareSetInfoW,
    nddeapi_wwNDdeSetTrustedShareA,
    nddeapi_wwNDdeSetTrustedShareW,
    nddeapi_wwNDdeGetTrustedShareA,
    nddeapi_wwNDdeGetTrustedShareW,
    nddeapi_wwNDdeTrustedShareEnumA,
    nddeapi_wwNDdeTrustedShareEnumW,
    nddeapi_wwNDdeSpecialCommand,
    0
    };
RPC_DISPATCH_TABLE nddeapi_DispatchTable = 
    {
    18,
    nddeapi_table
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
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/*  4 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/*  6 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/*  8 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 10 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x36 ),	/* Type Offset=54 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 30 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 32 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 34 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 36 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 40 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 42 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 44 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 46 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 48 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 50 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 52 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 54 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 56 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 64 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 66 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 68 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 70 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 72 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 74 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 78 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 80 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 92 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 96 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 98 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 100 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 102 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 108 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 110 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 120 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 122 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 124 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 126 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 128 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 132 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 134 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 136 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 138 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 142 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 144 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 146 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 150 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 152 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 154 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x5e ),	/* Type Offset=94 */
/* 158 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 162 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 164 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 166 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */
/* 168 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 170 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 174 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 176 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 178 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 180 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 182 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 184 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 186 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 188 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 192 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 194 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 196 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */
/* 198 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 200 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x6,		/* FC_SHORT */
/* 202 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 204 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */
/* 206 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 208 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 210 */	NdrFcShort( 0x94 ),	/* Type Offset=148 */
/* 212 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 214 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 216 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 218 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 220 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 222 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 224 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */
/* 226 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 228 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 230 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 232 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 234 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 236 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 238 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 240 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0x5a ),	/* Type Offset=90 */
/* 244 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 246 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 248 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 250 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 252 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 254 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */
/* 256 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 258 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 260 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 262 */	NdrFcShort( 0x82 ),	/* Type Offset=130 */
/* 264 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 266 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */
/* 270 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 272 */	NdrFcShort( 0xb4 ),	/* Type Offset=180 */
/* 274 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

			0x0
        }
    };

static const MIDL_TYPE_FORMAT_STRING __MIDL_TypeFormatString =
    {
        0,
        {
			0x11, 0x0,	/* FC_RP */
/*  2 */	NdrFcShort( 0x2 ),	/* Offset= 2 (4) */
/*  4 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/*  6 */	NdrFcShort( 0x1 ),	/* 1 */
/*  8 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 10 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 12 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 16 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0x0,	/* FC_RP */
/* 20 */	NdrFcShort( 0x2 ),	/* Offset= 2 (22) */
/* 22 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 24 */	NdrFcShort( 0x1 ),	/* 1 */
/* 26 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 28 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 30 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 34 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 36 */	
			0x11, 0x0,	/* FC_RP */
/* 38 */	NdrFcShort( 0x2 ),	/* Offset= 2 (40) */
/* 40 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x1 ),	/* 1 */
/* 44 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 46 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 48 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 52 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 54 */	
			0x12, 0x0,	/* FC_UP */
/* 56 */	NdrFcShort( 0x2 ),	/* Offset= 2 (58) */
/* 58 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 60 */	NdrFcShort( 0x1 ),	/* 1 */
/* 62 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 64 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 66 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 68 */	
			0x11, 0x0,	/* FC_RP */
/* 70 */	NdrFcShort( 0x2 ),	/* Offset= 2 (72) */
/* 72 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 74 */	NdrFcShort( 0x1 ),	/* 1 */
/* 76 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 78 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 80 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 82 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 84 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 86 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 88 */	
			0x22,		/* FC_C_CSTRING */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x12, 0x0,	/* FC_UP */
/* 96 */	NdrFcShort( 0x2 ),	/* Offset= 2 (98) */
/* 98 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 100 */	NdrFcShort( 0x1 ),	/* 1 */
/* 102 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 108 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 110 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 112 */	
			0x11, 0x0,	/* FC_RP */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 118 */	NdrFcShort( 0x1 ),	/* 1 */
/* 120 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 122 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 124 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 126 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 128 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 130 */	
			0x12, 0x0,	/* FC_UP */
/* 132 */	NdrFcShort( 0x2 ),	/* Offset= 2 (134) */
/* 134 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 136 */	NdrFcShort( 0x1 ),	/* 1 */
/* 138 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 142 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 144 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 146 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x11, 0x0,	/* FC_RP */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x1c,		/* FC_CVARRAY */
			0x0,		/* 0 */
/* 154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 156 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 160 */	0x29,		/* 41 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 162 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 164 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 166 */	
			0x12, 0x0,	/* FC_UP */
/* 168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (170) */
/* 170 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 174 */	0x29,		/* 41 */
			0x54,		/* FC_DEREFERENCE */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 178 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 180 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 182 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */

			0x0
        }
    };
