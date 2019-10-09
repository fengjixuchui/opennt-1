/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Tue Oct 08 23:37:44 2019
 */
/* Compiler settings for ..\multqi.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __multqi_h__
#define __multqi_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "iface.h"
#include "objidl.h"
#include "obase.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __MultiQiTypes_INTERFACE_DEFINED__
#define __MultiQiTypes_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: MultiQiTypes
 * at Tue Oct 08 23:37:44 2019
 * using MIDL 3.00.44
 ****************************************/
/* [unique][local] */ 


typedef struct  _InterfaceInfo
    {
    IID __RPC_FAR *pIID;
    HRESULT hr;
    /* [iid_is] */ IUnknown __RPC_FAR *pIF;
    }	InterfaceInfoBlock;

typedef struct  _rawInterfaceInfo
    {
    IID __RPC_FAR *pIID;
    HRESULT hr;
    MInterfacePointer __RPC_FAR *pIF;
    }	RawInterfaceInfoBlock;



extern RPC_IF_HANDLE MultiQiTypes_ClientIfHandle;
extern RPC_IF_HANDLE MultiQiTypes_ServerIfHandle;
#endif /* __MultiQiTypes_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
