/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 3.00.44 */
/* at Sun Mar 15 01:24:34 2020
 */
/* Compiler settings for ..\iface.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation 
*/
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __iface_h__
#define __iface_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __XmitDefs_INTERFACE_DEFINED__
#define __XmitDefs_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: XmitDefs
 * at Sun Mar 15 01:24:34 2020
 * using MIDL 3.00.44
 ****************************************/
/* [auto_handle][unique][version][uuid] */ 


#ifndef OID_DEFINED
#define OID_DEFINED
typedef GUID OID;

#endif // OID_DEFINED
typedef DWORD HAPT;

typedef /* [context_handle] */ void __RPC_FAR *POBJCTX;

typedef POBJCTX __RPC_FAR *PPOBJCTX;

typedef struct  tagNDRCONTEXT
    {
    long type;
    char guid[ 16 ];
    }	NDRCONTEXT;

typedef struct  tagSChannelDataHdr
    {
    ULONG ulDataSize;
    DWORD dwFlags;
    HAPT aptServer;
    }	SChannelDataHdr;

typedef 
enum tagCHNLFLAGS
    {	CHNLFLAGS_TABLE	= 0xff,
	CHNLFLAGS_NONE	= 0x100,
	CHNLFLAGS_ENDPNT	= 0x200,
	CHNLFLAGS_CTXHDL	= 0x400,
	CHNLFLAGS_MSHLTRANSFERED	= 0x800
    }	CHNLFLAGS;

typedef struct  tagSHandlerDataHdr
    {
    DWORD dwflags;
    GUID iid;
    }	SHandlerDataHdr;

typedef 
enum tagHDLRFLAGS
    {	HDLRFLAGS_TABLE	= 0xff,
	HDLRFLAGS_STDRPCCHNL	= 0x100,
	HDLRFLAGS_EXTENSION	= 0x200
    }	HDLRFLAGS;

typedef struct  tagSIdentityDataHdr
    {
    DWORD dwflags;
    GUID ObjectID;
    }	SIdentityDataHdr;

typedef 
enum tagIDENFLAGS
    {	IDENFLAGS_TABLE	= 0xff,
	IDENFLAGS_STDMARSHAL	= 0x100,
	IDENFLAGS_EXTENSION	= 0x200
    }	IDENFLAGS;

typedef struct  tagSMiApiDataHdr
    {
    DWORD dwflags;
    }	SMiApiDataHdr;

typedef 
enum tagMIAPIFLAGS
    {	MIAPIFLAGS_TABLE	= 0xff,
	MIAPIFLAGS_RELEASED	= 0x100,
	MIAPIFLAGS_STDIDENTITY	= 0x200,
	MIAPIFLAGS_EXTENSION	= 0x400,
	MIAPIFLAGS_IPFM	= 0x800
    }	MIAPIFLAGS;

typedef struct  tagSEndPoint
    {
    ULONG ulStrLen;
    /* [size_is] */ WCHAR awszEndPoint[ 1 ];
    }	SEndPoint;

typedef struct  tagInterfaceData
    {
    ULONG ulCntData;
    /* [length_is] */ BYTE abData[ 1024 ];
    }	InterfaceData;

typedef /* [unique] */ InterfaceData __RPC_FAR *PInterfaceData;

//  BUGBUG: until the length_is midl option is fixed, we have a
//       different computation for the size of the IFD.
#define IFD_SIZE(pIFD) (sizeof(InterfaceData) + pIFD->ulCntData - 1024)


extern RPC_IF_HANDLE XmitDefs_ClientIfHandle;
extern RPC_IF_HANDLE XmitDefs_ServerIfHandle;
#endif /* __XmitDefs_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
