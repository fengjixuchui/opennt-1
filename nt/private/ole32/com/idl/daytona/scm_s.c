/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:37 2020
 */
/* Compiler settings for ..\scm.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "scm.h"

#define TYPE_FORMAT_STRING_SIZE   219                               
#define PROC_FORMAT_STRING_SIZE   211                               

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

/* Standard interface: ISCM, ver. 0.2,
   GUID={0x5C0EB535,0xBF9F,0x101A,{0x88,0x18,0x02,0x60,0x8C,0x4D,0x23,0x59}} */


extern RPC_DISPATCH_TABLE ISCM_DispatchTable;

static const RPC_SERVER_INTERFACE ISCM___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x5C0EB535,0xBF9F,0x101A,{0x88,0x18,0x02,0x60,0x8C,0x4D,0x23,0x59}},{0,2}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &ISCM_DispatchTable,
    0,
    0,
    0,
    0,
    0
    };
RPC_IF_HANDLE ISCM_ServerIfHandle = (RPC_IF_HANDLE)& ISCM___RpcServerInterface;

extern const MIDL_STUB_DESC ISCM_StubDesc;

void __RPC_STUB
ISCM_StartObjectService(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M30;
    WCHAR __RPC_FAR *_M31;
    error_status_t _M32;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwCtrl;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    WCHAR __RPC_FAR *lpDesktop;
    DWORD __RPC_FAR *pdwDllServerType;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFDClassObj;
    WCHAR __RPC_FAR *__RPC_FAR *ppwszDllToLoad;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *pwszServer;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    lpDesktop = 0;
    guidThreadId = 0;
    rclsid = 0;
    pwszServer = 0;
    ppIFDClassObj = 0;
    pdwDllServerType = 0;
    ppwszDllToLoad = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDesktop,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        dwCtrl = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszServer,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        pdwDllServerType = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        ppIFDClassObj = &_M30;
        _M30 = 0;
        ppwszDllToLoad = &_M31;
        _M31 = 0;
        prpcstat = &_M32;
        
        _RetVal = StartObjectService(
                             hRpc,
                             lpDesktop,
                             guidThreadId,
                             rclsid,
                             dwCtrl,
                             pwszServer,
                             ppIFDClassObj,
                             pdwDllServerType,
                             ppwszDllToLoad,
                             prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 21U + 10U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFDClassObj,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppwszDllToLoad,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFDClassObj,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwDllServerType;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppwszDllToLoad,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFDClassObj,
                        &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppwszDllToLoad,
                        &__MIDL_TypeFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_SvcActivateObject(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M33;
    WCHAR __RPC_FAR *_M34;
    error_status_t _M35;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwHash;
    DWORD dwOptions;
    DWORD dwTIDCaller;
    DWORD grfMode;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    WCHAR __RPC_FAR *lpDesktop;
    InterfaceData __RPC_FAR *pIFDstg;
    DWORD __RPC_FAR *pdwDllServerType;
    DWORD __RPC_FAR *pdwTIDCallee;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath;
    WCHAR __RPC_FAR *pwszPath;
    WCHAR __RPC_FAR *pwszProtseq;
    WCHAR __RPC_FAR *pwszServerAddress;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    lpDesktop = 0;
    pwszProtseq = 0;
    guidThreadId = 0;
    rclsid = 0;
    pwszPath = 0;
    pIFDstg = 0;
    ppIFDunk = 0;
    pdwDllServerType = 0;
    pwszDllPath = 0;
    pwszServerAddress = 0;
    pdwTIDCallee = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[38] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDesktop,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszProtseq,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        dwOptions = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        grfMode = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwHash = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDstg,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[30],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        pdwDllServerType = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszServerAddress,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwTIDCaller = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        pdwTIDCallee = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        ppIFDunk = &_M33;
        _M33 = 0;
        pwszDllPath = &_M34;
        _M34 = 0;
        prpcstat = &_M35;
        
        _RetVal = SvcActivateObject(
                            hRpc,
                            lpDesktop,
                            pwszProtseq,
                            guidThreadId,
                            rclsid,
                            dwOptions,
                            grfMode,
                            dwHash,
                            pwszPath,
                            pIFDstg,
                            ppIFDunk,
                            pdwDllServerType,
                            pwszDllPath,
                            pwszServerAddress,
                            dwTIDCaller,
                            pdwTIDCallee,
                            prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 21U + 10U + 7U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFDunk,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pwszDllPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFDunk,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwDllServerType;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pwszDllPath,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwTIDCallee;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDstg,
                        &__MIDL_TypeFormatString.Format[30] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFDunk,
                        &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pwszDllPath,
                        &__MIDL_TypeFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_SvcCreateActivateObject(
    PRPC_MESSAGE _pRpcMessage )
{
    InterfaceData __RPC_FAR *_M36;
    WCHAR __RPC_FAR *_M37;
    error_status_t _M38;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwMode;
    DWORD dwOptions;
    DWORD dwTIDCaller;
    const GUID __RPC_FAR *guidThreadId;
    handle_t hRpc;
    WCHAR __RPC_FAR *lpDesktop;
    InterfaceData __RPC_FAR *pIFDstg;
    DWORD __RPC_FAR *pdwDllServerType;
    DWORD __RPC_FAR *pdwTIDCallee;
    InterfaceData __RPC_FAR *__RPC_FAR *ppIFDunk;
    error_status_t __RPC_FAR *prpcstat;
    WCHAR __RPC_FAR *__RPC_FAR *pwszDllPath;
    WCHAR __RPC_FAR *pwszNewName;
    WCHAR __RPC_FAR *pwszPath;
    WCHAR __RPC_FAR *pwszProtseq;
    WCHAR __RPC_FAR *pwszServerAddress;
    const GUID __RPC_FAR *rclsid;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    lpDesktop = 0;
    pwszProtseq = 0;
    guidThreadId = 0;
    rclsid = 0;
    pwszPath = 0;
    pIFDstg = 0;
    pwszNewName = 0;
    ppIFDunk = 0;
    pdwDllServerType = 0;
    pwszDllPath = 0;
    pwszServerAddress = 0;
    pdwTIDCallee = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[98] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDesktop,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszProtseq,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&guidThreadId,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        NdrSimpleStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                   (unsigned char __RPC_FAR * __RPC_FAR *)&rclsid,
                                   (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[14],
                                   (unsigned char)0 );
        
        dwOptions = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        dwMode = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pIFDstg,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[30],
                              (unsigned char)0 );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszNewName,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        pdwDllServerType = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&pwszServerAddress,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        dwTIDCaller = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        pdwTIDCallee = ( DWORD __RPC_FAR * )_StubMsg.Buffer;
        _StubMsg.Buffer += sizeof( DWORD  );
        
        ppIFDunk = &_M36;
        _M36 = 0;
        pwszDllPath = &_M37;
        _M37 = 0;
        prpcstat = &_M38;
        
        _RetVal = SvcCreateActivateObject(
                                  hRpc,
                                  lpDesktop,
                                  pwszProtseq,
                                  guidThreadId,
                                  rclsid,
                                  dwOptions,
                                  dwMode,
                                  pwszPath,
                                  pIFDstg,
                                  pwszNewName,
                                  ppIFDunk,
                                  pdwDllServerType,
                                  pwszDllPath,
                                  pwszServerAddress,
                                  dwTIDCaller,
                                  pdwTIDCallee,
                                  prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 21U + 10U + 7U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppIFDunk,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)pwszDllPath,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppIFDunk,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[26] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwDllServerType;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)pwszDllPath,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[66] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwTIDCallee;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pIFDstg,
                        &__MIDL_TypeFormatString.Format[30] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppIFDunk,
                        &__MIDL_TypeFormatString.Format[26] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pwszDllPath,
                        &__MIDL_TypeFormatString.Format[66] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_ObjectServerStarted(
    PRPC_MESSAGE _pRpcMessage )
{
    RegOutput __RPC_FAR *_M39;
    error_status_t _M40;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hRpc;
    WCHAR __RPC_FAR *lpDesktop;
    RegOutput __RPC_FAR *__RPC_FAR *ppregout;
    RegInput __RPC_FAR *pregin;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    lpDesktop = 0;
    pregin = 0;
    ppregout = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[160] );
        
        NdrPointerUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR * __RPC_FAR *)&lpDesktop,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[0],
                              (unsigned char)0 );
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&pregin,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[116],
                                       (unsigned char)0 );
        
        ppregout = &_M39;
        _M39 = 0;
        prpcstat = &_M40;
        
        _RetVal = ObjectServerStarted(
                              hRpc,
                              lpDesktop,
                              pregin,
                              ppregout,
                              prpcstat);
        
        _StubMsg.BufferLength = 4U + 11U + 7U;
        NdrPointerBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                              (unsigned char __RPC_FAR *)ppregout,
                              (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.BufferLength += 16;
        
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        NdrPointerMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                            (unsigned char __RPC_FAR *)ppregout,
                            (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[144] );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *)(((long)_StubMsg.Buffer + 3) & ~ 0x3);
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( HRESULT __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)pregin,
                        &__MIDL_TypeFormatString.Format[74] );
        
        NdrPointerFree( &_StubMsg,
                        (unsigned char __RPC_FAR *)ppregout,
                        &__MIDL_TypeFormatString.Format[144] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_StopServer(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M41;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hRpc;
    RevokeClasses __RPC_FAR *prevcls;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    prevcls = 0;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[180] );
        
        NdrConformantStructUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                       (unsigned char __RPC_FAR * __RPC_FAR *)&prevcls,
                                       (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[210],
                                       (unsigned char)0 );
        
        prpcstat = &_M41;
        
        StopServer(
              hRpc,
              prevcls,
              prpcstat);
        
        _StubMsg.BufferLength = 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_ScmSetInfoLevel(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M42;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    DWORD dwNewFlags;
    handle_t hRpc;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[192] );
        
        dwNewFlags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        prpcstat = &_M42;
        
        _RetVal = ScmSetInfoLevel(
                          hRpc,
                          dwNewFlags,
                          prpcstat);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( error_status_t __RPC_FAR * )_StubMsg.Buffer)++ = *prpcstat;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

void __RPC_STUB
ISCM_UpdateShrdTbls(
    PRPC_MESSAGE _pRpcMessage )
{
    error_status_t _M43;
    HRESULT _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    handle_t hRpc;
    error_status_t __RPC_FAR *prpcstat;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &ISCM_StubDesc);
    
    hRpc = _pRpcMessage->Handle;
    prpcstat = 0;
    RpcTryFinally
        {
        if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[202] );
        
        prpcstat = &_M43;
        
        _RetVal = UpdateShrdTbls(hRpc,prpcstat);
        
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


static const MIDL_STUB_DESC ISCM_StubDesc = 
    {
    (void __RPC_FAR *)& ISCM___RpcServerInterface,
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

static RPC_DISPATCH_FUNCTION ISCM_table[] =
    {
    ISCM_StartObjectService,
    ISCM_SvcActivateObject,
    ISCM_SvcCreateActivateObject,
    ISCM_ObjectServerStarted,
    ISCM_StopServer,
    ISCM_ScmSetInfoLevel,
    ISCM_UpdateShrdTbls,
    0
    };
RPC_DISPATCH_TABLE ISCM_DispatchTable = 
    {
    7,
    ISCM_table
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
/*  8 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 10 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 12 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 14 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 16 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 18 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 20 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 24 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 26 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 28 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 30 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 32 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 34 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 36 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 38 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 40 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 42 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 44 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 46 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 52 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 56 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 58 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 60 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 62 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 64 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 66 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 68 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 70 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 72 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 74 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 76 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 78 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 80 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 82 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 84 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 86 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 88 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 90 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 92 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 94 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
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
/* 102 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 104 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 106 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 108 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 110 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 114 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 124 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 126 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 128 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 130 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 132 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 134 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */
/* 136 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 138 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 140 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 142 */	NdrFcShort( 0x42 ),	/* Type Offset=66 */
/* 144 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 146 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 148 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 150 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 152 */	NdrFcShort( 0x3e ),	/* Type Offset=62 */
/* 154 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 158 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 160 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 162 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 164 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 168 */	NdrFcShort( 0x4a ),	/* Type Offset=74 */
/* 170 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 172 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */
/* 174 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 176 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 178 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 180 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 182 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 184 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */
/* 186 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 188 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 190 */	0x5b,		/* FC_END */
			0x5c,		/* FC_PAD */
/* 192 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 194 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 196 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 198 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 200 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 202 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0xf,		/* FC_IGNORE */
/* 204 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 206 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */
/* 208 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

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
			0x11, 0x0,	/* FC_RP */
/*  6 */	NdrFcShort( 0x8 ),	/* Offset= 8 (14) */
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
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 28 */	NdrFcShort( 0x2 ),	/* Offset= 2 (30) */
/* 30 */	
			0x12, 0x0,	/* FC_UP */
/* 32 */	NdrFcShort( 0x10 ),	/* Offset= 16 (48) */
/* 34 */	
			0x1f,		/* FC_SMVARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 38 */	NdrFcShort( 0x400 ),	/* 1024 */
/* 40 */	NdrFcShort( 0x1 ),	/* 1 */
/* 42 */	0x8,		/* 8 */
			0x0,		/*  */
/* 44 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 46 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 48 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 50 */	NdrFcShort( 0x404 ),	/* 1028 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x0 ),	/* Offset= 0 (54) */
/* 56 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 58 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe7 ),	/* Offset= -25 (34) */
			0x5b,		/* FC_END */
/* 62 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 64 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 66 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 68 */	NdrFcShort( 0xffffffbc ),	/* Offset= -68 (0) */
/* 70 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 72 */	0x10,		/* FC_ERROR_STATUS_T */
			0x5c,		/* FC_PAD */
/* 74 */	
			0x11, 0x0,	/* FC_RP */
/* 76 */	NdrFcShort( 0x28 ),	/* Offset= 40 (116) */
/* 78 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 80 */	NdrFcShort( 0x18 ),	/* 24 */
/* 82 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 84 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 86 */	NdrFcShort( 0x10 ),	/* 16 */
/* 88 */	NdrFcShort( 0x10 ),	/* 16 */
/* 90 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 92 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 94 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 96 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffad ),	/* Offset= -83 (14) */
			0x8,		/* FC_LONG */
/* 100 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 102 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 104 */	NdrFcShort( 0x18 ),	/* 24 */
/* 106 */	0x8,		/* 8 */
			0x0,		/*  */
/* 108 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 110 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 112 */	NdrFcShort( 0xffffffde ),	/* Offset= -34 (78) */
/* 114 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 116 */	
			0x18,		/* FC_CPSTRUCT */
			0x3,		/* 3 */
/* 118 */	NdrFcShort( 0x4 ),	/* 4 */
/* 120 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (102) */
/* 122 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 126 */	NdrFcShort( 0x18 ),	/* 24 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 130 */	NdrFcShort( 0x1 ),	/* 1 */
/* 132 */	NdrFcShort( 0x14 ),	/* 20 */
/* 134 */	NdrFcShort( 0x14 ),	/* 20 */
/* 136 */	0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 138 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 142 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 144 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x12, 0x0,	/* FC_UP */
/* 150 */	NdrFcShort( 0x18 ),	/* Offset= 24 (174) */
/* 152 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 160 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 164 */	0x8,		/* 8 */
			0x0,		/*  */
/* 166 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (152) */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 176 */	NdrFcShort( 0x4 ),	/* 4 */
/* 178 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (160) */
/* 180 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 182 */	
			0x11, 0x0,	/* FC_RP */
/* 184 */	NdrFcShort( 0x1a ),	/* Offset= 26 (210) */
/* 186 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 188 */	NdrFcShort( 0x14 ),	/* 20 */
/* 190 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 192 */	NdrFcShort( 0xffffff4e ),	/* Offset= -178 (14) */
/* 194 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 196 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x14 ),	/* 20 */
/* 200 */	0x8,		/* 8 */
			0x0,		/*  */
/* 202 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 204 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 206 */	NdrFcShort( 0xffffffec ),	/* Offset= -20 (186) */
/* 208 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 210 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 214 */	NdrFcShort( 0xffffffee ),	/* Offset= -18 (196) */
/* 216 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };
