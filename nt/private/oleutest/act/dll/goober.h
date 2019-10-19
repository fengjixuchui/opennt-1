/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:56:35 2019
 */
/* Compiler settings for goober.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"
#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __goober_h__
#define __goober_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IGoober_FWD_DEFINED__
#define __IGoober_FWD_DEFINED__
typedef interface IGoober IGoober;
#endif 	/* __IGoober_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IGoober_INTERFACE_DEFINED__
#define __IGoober_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: IGoober
 * at Sat Oct 19 00:56:35 2019
 * using MIDL 3.00.44
 ****************************************/
/* [object][unique][version][uuid] */ 



EXTERN_C const IID IID_IGoober;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    interface IGoober : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Ping( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGooberVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGoober __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGoober __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGoober __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Ping )( 
            IGoober __RPC_FAR * This);
        
        END_INTERFACE
    } IGooberVtbl;

    interface IGoober
    {
        CONST_VTBL struct IGooberVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGoober_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGoober_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGoober_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGoober_Ping(This)	\
    (This)->lpVtbl -> Ping(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IGoober_Ping_Proxy( 
    IGoober __RPC_FAR * This);


void __RPC_STUB IGoober_Ping_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGoober_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
