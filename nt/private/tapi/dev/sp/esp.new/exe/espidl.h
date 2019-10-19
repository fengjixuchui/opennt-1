/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 01:06:52 2019
 */
/* Compiler settings for espidl.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __espidl_h__
#define __espidl_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __esp_INTERFACE_DEFINED__
#define __esp_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: esp
 * at Sat Oct 19 01:06:52 2019
 * using MIDL 3.00.44
 ****************************************/
/* [implicit_handle][unique][ms_union][version][uuid] */ 


long ESPAttach( 
    /* [in] */ long lProcessID,
    /* [out] */ long __RPC_FAR *phShutdownEvent,
    /* [out] */ long __RPC_FAR *phDebugOutputEvent,
    /* [out] */ long __RPC_FAR *phWidgetEventsEvent);

void ESPSetOptions( 
    /* [in] */ long lDebugOptions,
    /* [in] */ long lCompletionMode);

void ESPCompleteRequest( 
    /* [in] */ long lAsyncReqInfo,
    /* [in] */ long lResult);

long ESPEvent( 
    /* [in] */ long htDevice,
    /* [in] */ long htCall,
    /* [in] */ long dwMsg,
    /* [in] */ long dwParam1,
    /* [in] */ long dwParam2,
    /* [in] */ long dwParam3);

void ESPGetDebugOutput( 
    /* [size_is][length_is][out] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [out][in] */ long __RPC_FAR *plSize);

void ESPGetWidgetEvents( 
    /* [size_is][length_is][out] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [out][in] */ long __RPC_FAR *plSize);

long ESPStartPBXThread( 
    /* [size_is][length_is][in] */ unsigned char __RPC_FAR pBuffer[  ],
    /* [in] */ long lSize);

long ESPStopPBXThread( 
    /* [in] */ long dummy);


extern handle_t hEsp;


extern RPC_IF_HANDLE esp_ClientIfHandle;
extern RPC_IF_HANDLE esp_ServerIfHandle;
#endif /* __esp_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
