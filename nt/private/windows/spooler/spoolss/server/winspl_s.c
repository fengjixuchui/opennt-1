/* this ALWAYS GENERATED file contains the RPC server stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:10:27 2019
 */
/* Compiler settings for winspl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref bounds_check stub_data 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#include "winspl.h"

#define TYPE_FORMAT_STRING_SIZE   1927                              
#define PROC_FORMAT_STRING_SIZE   3573                              

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

/* Standard interface: winspool, ver. 1.0,
   GUID={0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}} */


extern const MIDL_SERVER_INFO winspool_ServerInfo;
static RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "mscn_np", (unsigned char *) "\\pipe\\spoolss"}
    };


extern RPC_DISPATCH_TABLE winspool_DispatchTable;

static const RPC_SERVER_INTERFACE winspool___RpcServerInterface =
    {
    sizeof(RPC_SERVER_INTERFACE),
    {{0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    &winspool_DispatchTable,
    1,
    __RpcProtseqEndpoint,
    0,
    &winspool_ServerInfo,
    0
    };
RPC_IF_HANDLE winspool_ServerIfHandle = (RPC_IF_HANDLE)& winspool___RpcServerInterface;

extern const MIDL_STUB_DESC winspool_StubDesc;

void __RPC_STUB
winspool_RpcRouterReplyPrinterEx(
    PRPC_MESSAGE _pRpcMessage )
{
    RPC_V2_UREPLY_PRINTER Reply;
    DWORD _M194;
    DWORD _RetVal;
    MIDL_STUB_MESSAGE _StubMsg;
    void __RPC_FAR *_p_Reply;
    DWORD dwColor;
    DWORD dwReplyType;
    DWORD fdwFlags;
    NDR_SCONTEXT hNotify;
    PDWORD pdwResult;
    RPC_STATUS _Status;
    
    ((void)(_Status));
    NdrServerInitializeNew(
                          _pRpcMessage,
                          &_StubMsg,
                          &winspool_StubDesc);
    
    pdwResult = 0;
    _p_Reply = &Reply;
    MIDL_memset(
               _p_Reply,
               0,
               sizeof( RPC_V2_UREPLY_PRINTER  ));
    RpcTryFinally
        {
        RpcTryExcept
            {
            if ( (_pRpcMessage->DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
                NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[3174] );
            
            hNotify = NdrServerContextUnmarshall(( PMIDL_STUB_MESSAGE  )&_StubMsg);
            
            dwColor = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            fdwFlags = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            dwReplyType = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
            
            NdrNonEncapsulatedUnionUnmarshall( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                               (unsigned char __RPC_FAR * __RPC_FAR *)&_p_Reply,
                                               (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1810],
                                               (unsigned char)0 );
            
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
        pdwResult = &_M194;
        
        _RetVal = RpcRouterReplyPrinterEx(
                                  ( PRINTER_HANDLE  )*NDRSContextValue(hNotify),
                                  dwColor,
                                  fdwFlags,
                                  pdwResult,
                                  dwReplyType,
                                  Reply);
        
        _StubMsg.BufferLength = 4U + 4U;
        _pRpcMessage->BufferLength = _StubMsg.BufferLength;
        
        _Status = I_RpcGetBuffer( _pRpcMessage ); 
        if ( _Status )
            RpcRaiseException( _Status );
        
        _StubMsg.Buffer = (unsigned char __RPC_FAR *) _pRpcMessage->Buffer;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = *pdwResult;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = _RetVal;
        
        }
    RpcFinally
        {
        _StubMsg.MaxCount = dwReplyType;
        
        NdrNonEncapsulatedUnionFree( &_StubMsg,
                                     (unsigned char __RPC_FAR *)&Reply,
                                     &__MIDL_TypeFormatString.Format[1810] );
        
        }
    RpcEndFinally
    _pRpcMessage->BufferLength = 
        (unsigned int)((long)_StubMsg.Buffer - (long)_pRpcMessage->Buffer);
    
}

extern const NDR_RUNDOWN RundownRoutines[];
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void __RPC_FAR *)& winspool___RpcServerInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    0,
    RundownRoutines,
    0,
    ExprEvalRoutines,
    0,
    __MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
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

static RPC_DISPATCH_FUNCTION winspool_table[] =
    {
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    winspool_RpcRouterReplyPrinterEx,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    NdrServerCall2,
    0
    };
RPC_DISPATCH_TABLE winspool_DispatchTable = 
    {
    74,
    winspool_table
    };

static const SERVER_ROUTINE winspool_ServerRoutineTable[] = 
    {
    (SERVER_ROUTINE)RpcEnumPrinters,
    (SERVER_ROUTINE)RpcOpenPrinter,
    (SERVER_ROUTINE)RpcSetJob,
    (SERVER_ROUTINE)RpcGetJob,
    (SERVER_ROUTINE)RpcEnumJobs,
    (SERVER_ROUTINE)RpcAddPrinter,
    (SERVER_ROUTINE)RpcDeletePrinter,
    (SERVER_ROUTINE)RpcSetPrinter,
    (SERVER_ROUTINE)RpcGetPrinter,
    (SERVER_ROUTINE)RpcAddPrinterDriver,
    (SERVER_ROUTINE)RpcEnumPrinterDrivers,
    (SERVER_ROUTINE)RpcGetPrinterDriver,
    (SERVER_ROUTINE)RpcGetPrinterDriverDirectory,
    (SERVER_ROUTINE)RpcDeletePrinterDriver,
    (SERVER_ROUTINE)RpcAddPrintProcessor,
    (SERVER_ROUTINE)RpcEnumPrintProcessors,
    (SERVER_ROUTINE)RpcGetPrintProcessorDirectory,
    (SERVER_ROUTINE)RpcStartDocPrinter,
    (SERVER_ROUTINE)RpcStartPagePrinter,
    (SERVER_ROUTINE)RpcWritePrinter,
    (SERVER_ROUTINE)RpcEndPagePrinter,
    (SERVER_ROUTINE)RpcAbortPrinter,
    (SERVER_ROUTINE)RpcReadPrinter,
    (SERVER_ROUTINE)RpcEndDocPrinter,
    (SERVER_ROUTINE)RpcAddJob,
    (SERVER_ROUTINE)RpcScheduleJob,
    (SERVER_ROUTINE)RpcGetPrinterData,
    (SERVER_ROUTINE)RpcSetPrinterData,
    (SERVER_ROUTINE)RpcWaitForPrinterChange,
    (SERVER_ROUTINE)RpcClosePrinter,
    (SERVER_ROUTINE)RpcAddForm,
    (SERVER_ROUTINE)RpcDeleteForm,
    (SERVER_ROUTINE)RpcGetForm,
    (SERVER_ROUTINE)RpcSetForm,
    (SERVER_ROUTINE)RpcEnumForms,
    (SERVER_ROUTINE)RpcEnumPorts,
    (SERVER_ROUTINE)RpcEnumMonitors,
    (SERVER_ROUTINE)RpcAddPort,
    (SERVER_ROUTINE)RpcConfigurePort,
    (SERVER_ROUTINE)RpcDeletePort,
    (SERVER_ROUTINE)RpcCreatePrinterIC,
    (SERVER_ROUTINE)RpcPlayGdiScriptOnPrinterIC,
    (SERVER_ROUTINE)RpcDeletePrinterIC,
    (SERVER_ROUTINE)RpcAddPrinterConnection,
    (SERVER_ROUTINE)RpcDeletePrinterConnection,
    (SERVER_ROUTINE)RpcPrinterMessageBox,
    (SERVER_ROUTINE)RpcAddMonitor,
    (SERVER_ROUTINE)RpcDeleteMonitor,
    (SERVER_ROUTINE)RpcDeletePrintProcessor,
    (SERVER_ROUTINE)RpcAddPrintProvidor,
    (SERVER_ROUTINE)RpcDeletePrintProvidor,
    (SERVER_ROUTINE)RpcEnumPrintProcessorDatatypes,
    (SERVER_ROUTINE)RpcResetPrinter,
    (SERVER_ROUTINE)RpcGetPrinterDriver2,
    (SERVER_ROUTINE)RpcClientFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)RpcFindNextPrinterChangeNotification,
    (SERVER_ROUTINE)RpcFindClosePrinterChangeNotification,
    (SERVER_ROUTINE)RpcRouterFindFirstPrinterChangeNotificationOld,
    (SERVER_ROUTINE)RpcReplyOpenPrinter,
    (SERVER_ROUTINE)RpcRouterReplyPrinter,
    (SERVER_ROUTINE)RpcReplyClosePrinter,
    (SERVER_ROUTINE)RpcAddPortEx,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotification,
    (SERVER_ROUTINE)RpcSpoolerInit,
    (SERVER_ROUTINE)RpcResetPrinterEx,
    (SERVER_ROUTINE)RpcRemoteFindFirstPrinterChangeNotificationEx,
    (SERVER_ROUTINE)RpcRouterReplyPrinterEx,
    (SERVER_ROUTINE)RpcRouterRefreshPrinterChangeNotification,
    (SERVER_ROUTINE)RpcSetAllocFailCount,
    (SERVER_ROUTINE)RpcOpenPrinterEx,
    (SERVER_ROUTINE)RpcAddPrinterEx,
    (SERVER_ROUTINE)RpcSetPort,
    (SERVER_ROUTINE)RpcEnumPrinterData,
    (SERVER_ROUTINE)RpcDeletePrinterData
    };

static const unsigned short winspool_FormatStringOffsetTable[] = 
    {
    0,
    66,
    120,
    168,
    228,
    300,
    354,
    384,
    438,
    492,
    528,
    594,
    654,
    714,
    756,
    804,
    870,
    930,
    972,
    1002,
    1050,
    1080,
    1110,
    1158,
    1188,
    1242,
    1278,
    1338,
    1392,
    1434,
    1464,
    1500,
    1536,
    1596,
    1638,
    1698,
    1758,
    1818,
    1860,
    1902,
    1944,
    1986,
    2046,
    2076,
    2106,
    2136,
    2196,
    2232,
    2274,
    2316,
    2352,
    2394,
    2460,
    2502,
    2586,
    2646,
    2700,
    2730,
    2784,
    2844,
    2892,
    2922,
    2970,
    3036,
    3066,
    3114,
    3174,
    3194,
    3242,
    3296,
    3356,
    3416,
    3458,
    3536
    };

static const MIDL_SERVER_INFO winspool_ServerInfo = 
    {
    &winspool_StubDesc,
    winspool_ServerRoutineTable,
    __MIDL_ProcFormatString.Format,
    winspool_FormatStringOffsetTable,
    0,
    0,
    0,
    0
    };

static const NDR_RUNDOWN RundownRoutines[] = 
    {
    PRINTER_HANDLE_rundown
    ,GDI_HANDLE_rundown
    };


static void __RPC_USER winspool_RPC_V2_NOTIFY_INFO_DATAExprEval_0000( PMIDL_STUB_MESSAGE pStubMsg )
{
    RPC_V2_NOTIFY_INFO_DATA __RPC_FAR *pS	=	( RPC_V2_NOTIFY_INFO_DATA __RPC_FAR * )(pStubMsg->StackTop - 12);
    
    pStubMsg->Offset = 0;
    pStubMsg->MaxCount = pS->Reserved & 0xffff;
}

static const EXPR_EVAL ExprEvalRoutines[] = 
    {
    winspool_RPC_V2_NOTIFY_INFO_DATAExprEval_0000
    };


#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need a Windows NT 4.0 or later to run this stub
#endif


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure RpcEnumPrinters */

			0x0,		/* 0 */
			0x40,		/* 64 */
/*  2 */	NdrFcShort( 0x0 ),	/* 0 */
#ifndef _ALPHA_
/*  4 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/*  6 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/*  8 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 10 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 12 */	NdrFcShort( 0x18 ),	/* 24 */
/* 14 */	NdrFcShort( 0x18 ),	/* 24 */
/* 16 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter Flags */

/* 18 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 20 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 22 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Name */

/* 24 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 26 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 28 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 30 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 32 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinterEnum */

/* 36 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 38 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 40 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 42 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 46 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 48 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 50 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 52 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 54 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 56 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 58 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 60 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 62 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinter */

/* 66 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 68 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 70 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 72 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 74 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 76 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 78 */	NdrFcShort( 0x8 ),	/* 8 */
/* 80 */	NdrFcShort( 0x20 ),	/* 32 */
/* 82 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter pPrinterName */

/* 84 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 86 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 88 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pHandle */

/* 90 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 92 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 94 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pDatatype */

/* 96 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 100 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pDevMode */

/* 102 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 106 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter AccessRequired */

/* 108 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 110 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 116 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetJob */

/* 120 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 122 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 124 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 126 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 128 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 130 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 132 */	NdrFcShort( 0x28 ),	/* 40 */
/* 134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 136 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hPrinter */

/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 140 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 142 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter JobId */

/* 144 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 146 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJobContainer */

/* 150 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 152 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 154 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter Command */

/* 156 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 158 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 164 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetJob */

/* 168 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 170 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 174 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 176 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 178 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 180 */	NdrFcShort( 0x30 ),	/* 48 */
/* 182 */	NdrFcShort( 0x10 ),	/* 16 */
/* 184 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 186 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 188 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 190 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter JobId */

/* 192 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 194 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 198 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 200 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 204 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 208 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 210 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 212 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 216 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 218 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 222 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumJobs */

/* 228 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 230 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 232 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 234 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 236 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 238 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 240 */	NdrFcShort( 0x38 ),	/* 56 */
/* 242 */	NdrFcShort( 0x18 ),	/* 24 */
/* 244 */	0x7,		/* 7 */
			0x9,		/* 9 */

	/* Parameter hPrinter */

/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 248 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 250 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter FirstJob */

/* 252 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 254 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter NoJobs */

/* 258 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 260 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter Level */

/* 264 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 266 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pJob */

/* 270 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 272 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 274 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Parameter cbBuf */

/* 276 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 278 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 282 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 284 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 288 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 290 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 294 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 296 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinter */

/* 300 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 302 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 306 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 308 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 310 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x20 ),	/* 32 */
/* 316 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter pName */

/* 318 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 320 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 322 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPrinterContainer */

/* 324 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 326 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 328 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Parameter pDevModeContainer */

/* 330 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 332 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 334 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pSecurityContainer */

/* 336 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 338 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 340 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pHandle */

/* 342 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 344 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 346 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 350 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinter */

/* 354 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 356 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 358 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 360 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 362 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 364 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 366 */	NdrFcShort( 0x18 ),	/* 24 */
/* 368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 370 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 372 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 374 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 376 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 378 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinter */

/* 384 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 386 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 388 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 390 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 392 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 394 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 396 */	NdrFcShort( 0x20 ),	/* 32 */
/* 398 */	NdrFcShort( 0x8 ),	/* 8 */
/* 400 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 404 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 406 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pPrinterContainer */

/* 408 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 412 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Parameter pDevModeContainer */

/* 414 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 416 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 418 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pSecurityContainer */

/* 420 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 422 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 424 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter Command */

/* 426 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 428 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 434 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinter */

/* 438 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 440 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 442 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 444 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 446 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 448 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 450 */	NdrFcShort( 0x28 ),	/* 40 */
/* 452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 454 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 456 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 458 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 460 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter Level */

/* 462 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 464 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrinter */

/* 468 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 472 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter cbBuf */

/* 474 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 476 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 480 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 482 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 486 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 488 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterDriver */

/* 492 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 494 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 496 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 498 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 500 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 502 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 508 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter pName */

/* 510 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 512 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 514 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pDriverContainer */

/* 516 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 518 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 520 */	NdrFcShort( 0x428 ),	/* Type Offset=1064 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 524 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterDrivers */

/* 528 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 530 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 532 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 534 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 536 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 538 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 540 */	NdrFcShort( 0x10 ),	/* 16 */
/* 542 */	NdrFcShort( 0x18 ),	/* 24 */
/* 544 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter pName */

/* 546 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 548 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 550 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 552 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 554 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 556 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 558 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 560 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 562 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDrivers */

/* 564 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 566 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 568 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 570 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 572 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 576 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 578 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 582 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 584 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 590 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver */

/* 594 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 596 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 598 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 600 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 602 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 604 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 606 */	NdrFcShort( 0x28 ),	/* 40 */
/* 608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 610 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 612 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 616 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pEnvironment */

/* 618 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 620 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 622 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 624 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 626 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 630 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 634 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 636 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 638 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 642 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 644 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 648 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriverDirectory */

/* 654 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 656 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 658 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 660 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 662 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 664 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 666 */	NdrFcShort( 0x10 ),	/* 16 */
/* 668 */	NdrFcShort( 0x10 ),	/* 16 */
/* 670 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pName */

/* 672 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 676 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 678 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 680 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 682 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 684 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 686 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriverDirectory */

/* 690 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 694 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 696 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 698 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 700 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 702 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 704 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 708 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 710 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterDriver */

/* 714 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 716 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 718 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 720 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 724 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 730 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pName */

/* 732 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 734 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 736 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 738 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 740 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 742 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter pDriverName */

/* 744 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 748 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 750 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 752 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 754 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProcessor */

/* 756 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 758 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 760 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 762 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 764 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 766 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 772 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pName */

/* 774 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 776 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 778 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 780 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 784 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter pPathName */

/* 786 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 788 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 790 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter pPrintProcessorName */

/* 792 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 794 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 796 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 798 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 800 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessors */

/* 804 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 806 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 808 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 810 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 812 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 814 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 816 */	NdrFcShort( 0x10 ),	/* 16 */
/* 818 */	NdrFcShort( 0x18 ),	/* 24 */
/* 820 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter pName */

/* 822 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 824 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 826 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 828 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 830 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 832 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 834 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorInfo */

/* 840 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 842 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 844 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 846 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 848 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 852 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 854 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 858 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 860 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 864 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 866 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrintProcessorDirectory */

/* 870 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 872 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 874 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 876 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 878 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 880 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 882 */	NdrFcShort( 0x10 ),	/* 16 */
/* 884 */	NdrFcShort( 0x10 ),	/* 16 */
/* 886 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pName */

/* 888 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 890 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 892 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 894 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 896 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 898 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 900 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 902 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 904 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPrintProcessorDirectory */

/* 906 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 908 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 910 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 912 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 914 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 918 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 920 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 926 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartDocPrinter */

/* 930 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 932 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 934 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 936 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 938 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 940 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 942 */	NdrFcShort( 0x18 ),	/* 24 */
/* 944 */	NdrFcShort( 0x10 ),	/* 16 */
/* 946 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hPrinter */

/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 950 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 952 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pDocInfoContainer */

/* 954 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 956 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 958 */	NdrFcShort( 0x480 ),	/* Type Offset=1152 */

	/* Parameter pJobId */

/* 960 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 962 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 966 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 968 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcStartPagePrinter */

/* 972 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 974 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 976 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 978 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 980 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 982 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 984 */	NdrFcShort( 0x18 ),	/* 24 */
/* 986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 988 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 994 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 998 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWritePrinter */

/* 1002 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1004 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 1006 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1008 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1010 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1012 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1014 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1016 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1018 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hPrinter */

/* 1020 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1022 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1024 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pBuf */

/* 1026 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1028 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1030 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Parameter cbBuf */

/* 1032 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1034 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcWritten */

/* 1038 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1040 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1044 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1046 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1048 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndPagePrinter */

/* 1050 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1052 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 1054 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1056 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1058 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1060 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1062 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1066 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 1068 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1070 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1072 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 1074 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1076 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1078 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAbortPrinter */

/* 1080 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1082 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 1084 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1086 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1088 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1090 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1092 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1096 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 1098 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1100 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1102 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 1104 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1106 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReadPrinter */

/* 1110 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1112 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 1114 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1116 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1118 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1120 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1122 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1124 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1126 */	0x5,		/* 5 */
			0x5,		/* 5 */

	/* Parameter hPrinter */

/* 1128 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1130 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1132 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pBuf */

/* 1134 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1136 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1138 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Parameter cbBuf */

/* 1140 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1142 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcNoBytesRead */

/* 1146 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1148 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEndDocPrinter */

/* 1158 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1160 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 1162 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1164 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1166 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1168 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1174 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1178 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1180 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 1182 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1184 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddJob */

/* 1188 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1190 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 1192 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1194 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1196 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1198 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1200 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1202 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1204 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 1206 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1208 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1210 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter Level */

/* 1212 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1214 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pAddJob */

/* 1218 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1220 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1222 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter cbBuf */

/* 1224 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1226 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1228 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1230 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1232 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1238 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcScheduleJob */

/* 1242 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1244 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 1246 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1250 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1254 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1258 */	0x4,		/* 4 */
			0x3,		/* 3 */

	/* Parameter hPrinter */

/* 1260 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1262 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1264 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter JobId */

/* 1266 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1268 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1272 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1274 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterData */

/* 1278 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1280 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 1282 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1284 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1286 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1288 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1290 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1292 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1294 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 1296 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1300 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValueName */

/* 1302 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1304 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1306 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter pType */

/* 1308 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1310 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1314 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 1316 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1318 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter nSize */

/* 1320 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1322 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1326 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1328 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1332 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1334 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPrinterData */

/* 1338 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1340 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1342 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1350 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1354 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1358 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1360 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValueName */

/* 1362 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1364 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1366 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter Type */

/* 1368 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1370 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 1374 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1376 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1378 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter cbData */

/* 1380 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1382 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1386 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1388 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcWaitForPrinterChange */

/* 1392 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1394 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 1396 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1398 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1400 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1402 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1406 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1408 */	0x4,		/* 4 */
			0x4,		/* 4 */

	/* Parameter hPrinter */

/* 1410 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1412 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1414 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter Flags */

/* 1416 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1418 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pFlags */

/* 1422 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1424 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1428 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1430 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClosePrinter */

/* 1434 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1436 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 1438 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1440 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 1442 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1444 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1446 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1448 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1450 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter phPrinter */

/* 1452 */	NdrFcShort( 0x118 ),	/* 280 */
#ifndef _ALPHA_
/* 1454 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1456 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */

	/* Return value */

/* 1458 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1460 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddForm */

/* 1464 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1466 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 1468 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1470 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1472 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1474 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1476 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1478 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1480 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter hPrinter */

/* 1482 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1484 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1486 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pFormInfoContainer */

/* 1488 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1490 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1492 */	NdrFcShort( 0x4f2 ),	/* Type Offset=1266 */

	/* Return value */

/* 1494 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1496 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteForm */

/* 1500 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1502 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1506 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1508 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1510 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1512 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1516 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter hPrinter */

/* 1518 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1520 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1522 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pFormName */

/* 1524 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1526 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1528 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 1530 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1532 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetForm */

/* 1536 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1538 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 1540 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1542 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1544 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1550 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1552 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 1554 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1556 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1558 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pFormName */

/* 1560 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1562 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1564 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter Level */

/* 1566 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1568 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1572 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1574 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1576 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 1578 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1580 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1584 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1586 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1592 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetForm */

/* 1596 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1598 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 1600 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1602 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1604 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1606 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1608 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1612 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hPrinter */

/* 1614 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1616 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1618 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pFormName */

/* 1620 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1622 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1624 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter pFormInfoContainer */

/* 1626 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1628 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1630 */	NdrFcShort( 0x4f2 ),	/* Type Offset=1266 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1634 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumForms */

/* 1638 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1640 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 1642 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1644 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1646 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1648 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1650 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1652 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1654 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 1656 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1658 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1660 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter Level */

/* 1662 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1664 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1666 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pForm */

/* 1668 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1670 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1672 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter cbBuf */

/* 1674 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1676 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1680 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1682 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1684 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1686 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1688 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1692 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1694 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPorts */

/* 1698 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1700 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 1702 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1704 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1706 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1708 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1712 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1714 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pName */

/* 1716 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1718 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1720 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 1722 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1724 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPort */

/* 1728 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1730 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1732 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter cbBuf */

/* 1734 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1736 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1738 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1740 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1742 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1746 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1748 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1752 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1754 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumMonitors */

/* 1758 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1760 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 1762 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1764 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1766 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1768 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1770 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1772 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1774 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter pName */

/* 1776 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1778 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1780 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 1782 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1784 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitor */

/* 1788 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 1790 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1792 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */

	/* Parameter cbBuf */

/* 1794 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1796 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 1800 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1802 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 1806 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 1808 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1814 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPort */

/* 1818 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1820 */	NdrFcShort( 0x25 ),	/* 37 */
#ifndef _ALPHA_
/* 1822 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1824 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1826 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1828 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1834 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pName */

/* 1836 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1838 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1840 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter hWnd */

/* 1842 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1844 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pMonitorName */

/* 1848 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1850 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1852 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 1854 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcConfigurePort */

/* 1860 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1862 */	NdrFcShort( 0x26 ),	/* 38 */
#ifndef _ALPHA_
/* 1864 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1866 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1868 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1870 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1876 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pName */

/* 1878 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1880 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1882 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter hWnd */

/* 1884 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1886 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1888 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPortName */

/* 1890 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1892 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1894 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 1896 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1898 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePort */

/* 1902 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1904 */	NdrFcShort( 0x27 ),	/* 39 */
#ifndef _ALPHA_
/* 1906 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1908 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1910 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1912 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1916 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1918 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pName */

/* 1920 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 1922 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1924 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter hWnd */

/* 1926 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1930 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pPortName */

/* 1932 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1934 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1936 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 1938 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1940 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcCreatePrinterIC */

/* 1944 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1946 */	NdrFcShort( 0x28 ),	/* 40 */
#ifndef _ALPHA_
/* 1948 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1950 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1952 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1954 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1956 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1958 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1960 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hPrinter */

/* 1962 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 1964 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1966 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pHandle */

/* 1968 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 1970 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 1972 */	NdrFcShort( 0x504 ),	/* Type Offset=1284 */

	/* Parameter pDevModeContainer */

/* 1974 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 1976 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1978 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Return value */

/* 1980 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 1982 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPlayGdiScriptOnPrinterIC */

/* 1986 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1988 */	NdrFcShort( 0x29 ),	/* 41 */
#ifndef _ALPHA_
/* 1990 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1992 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1994 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1996 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1998 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	0x7,		/* 7 */
			0x7,		/* 7 */

	/* Parameter hPrinterIC */

/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2006 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2008 */	NdrFcShort( 0x508 ),	/* Type Offset=1288 */

	/* Parameter pIn */

/* 2010 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2012 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2014 */	NdrFcShort( 0x492 ),	/* Type Offset=1170 */

	/* Parameter cIn */

/* 2016 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2018 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOut */

/* 2022 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 2024 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2026 */	NdrFcShort( 0x8 ),	/* Type Offset=8 */

	/* Parameter cOut */

/* 2028 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2030 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ul */

/* 2034 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2036 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2040 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2042 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterIC */

/* 2046 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2048 */	NdrFcShort( 0x2a ),	/* 42 */
#ifndef _ALPHA_
/* 2050 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2052 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 2054 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2056 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 2058 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2060 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2062 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter phPrinterIC */

/* 2064 */	NdrFcShort( 0x118 ),	/* 280 */
#ifndef _ALPHA_
/* 2066 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2068 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */

	/* Return value */

/* 2070 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2072 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterConnection */

/* 2076 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2078 */	NdrFcShort( 0x2b ),	/* 43 */
#ifndef _ALPHA_
/* 2080 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2082 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2084 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2086 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2090 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2092 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pName */

/* 2094 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2096 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2098 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2100 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2102 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2104 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterConnection */

/* 2106 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2108 */	NdrFcShort( 0x2c ),	/* 44 */
#ifndef _ALPHA_
/* 2110 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2112 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2114 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2116 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2122 */	0x6,		/* 6 */
			0x2,		/* 2 */

	/* Parameter pName */

/* 2124 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2126 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2128 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2130 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2132 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcPrinterMessageBox */

/* 2136 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2138 */	NdrFcShort( 0x2d ),	/* 45 */
#ifndef _ALPHA_
/* 2140 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2142 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2144 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2146 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2148 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2150 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2152 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 2154 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2156 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2158 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter Error */

/* 2160 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2162 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hWnd */

/* 2166 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2168 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pText */

/* 2172 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2174 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2176 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pCaption */

/* 2178 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2180 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2182 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter dwType */

/* 2184 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2186 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2190 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2192 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddMonitor */

/* 2196 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2198 */	NdrFcShort( 0x2e ),	/* 46 */
#ifndef _ALPHA_
/* 2200 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2202 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2204 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2206 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2212 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter Name */

/* 2214 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2216 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2218 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pMonitorContainer */

/* 2220 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2222 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2224 */	NdrFcShort( 0x536 ),	/* Type Offset=1334 */

	/* Return value */

/* 2226 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2228 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeleteMonitor */

/* 2232 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2234 */	NdrFcShort( 0x2f ),	/* 47 */
#ifndef _ALPHA_
/* 2236 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2238 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2240 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2242 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2248 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter Name */

/* 2250 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2252 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2254 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 2256 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2258 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2260 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pMonitorName */

/* 2262 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2264 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2266 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2270 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProcessor */

/* 2274 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2276 */	NdrFcShort( 0x30 ),	/* 48 */
#ifndef _ALPHA_
/* 2278 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2280 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2282 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2284 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2290 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter Name */

/* 2292 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2294 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2296 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 2298 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2300 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2302 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPrintProcessorName */

/* 2304 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2306 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2308 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2310 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2312 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrintProvidor */

/* 2316 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2318 */	NdrFcShort( 0x31 ),	/* 49 */
#ifndef _ALPHA_
/* 2320 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2322 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2324 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2326 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2332 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter Name */

/* 2334 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2336 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2338 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pProvidorContainer */

/* 2340 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2342 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2344 */	NdrFcShort( 0x55c ),	/* Type Offset=1372 */

	/* Return value */

/* 2346 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2348 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrintProvidor */

/* 2352 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2354 */	NdrFcShort( 0x32 ),	/* 50 */
#ifndef _ALPHA_
/* 2356 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2358 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2360 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2362 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2368 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter Name */

/* 2370 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2372 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2374 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pEnvironment */

/* 2376 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2378 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2380 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPrintProvidorName */

/* 2382 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2384 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2386 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2390 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrintProcessorDatatypes */

/* 2394 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2396 */	NdrFcShort( 0x33 ),	/* 51 */
#ifndef _ALPHA_
/* 2398 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2400 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2402 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2404 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2406 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2408 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2410 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter pName */

/* 2412 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2414 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2416 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPrintProcessorName */

/* 2418 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2420 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2422 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 2424 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2426 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDatatypes */

/* 2430 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 2432 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2434 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 2436 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2438 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2442 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2444 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcReturned */

/* 2448 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2450 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2452 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2454 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2456 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinter */

/* 2460 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2462 */	NdrFcShort( 0x34 ),	/* 52 */
#ifndef _ALPHA_
/* 2464 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2466 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2468 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2470 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2472 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2476 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter hPrinter */

/* 2478 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2480 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2482 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pDatatype */

/* 2484 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2486 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2488 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pDevMode */

/* 2490 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2492 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2494 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Return value */

/* 2496 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2498 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcGetPrinterDriver2 */

/* 2502 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2504 */	NdrFcShort( 0x35 ),	/* 53 */
#ifndef _ALPHA_
/* 2506 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 2508 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2510 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2512 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2514 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2516 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2518 */	0x7,		/* 7 */
			0xb,		/* 11 */

	/* Parameter hPrinter */

/* 2520 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2522 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2524 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pEnvironment */

/* 2526 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2528 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2530 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter Level */

/* 2532 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2534 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2536 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pDriver */

/* 2538 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 2540 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2542 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Parameter cbBuf */

/* 2544 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2546 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbNeeded */

/* 2550 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2552 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMajorVersion */

/* 2556 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2558 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwClientMinorVersion */

/* 2562 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2564 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2566 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMaxVersion */

/* 2568 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2570 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwServerMinVersion */

/* 2574 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2576 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 2578 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2580 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2582 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 2584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcClientFindFirstPrinterChangeNotification */

/* 2586 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2588 */	NdrFcShort( 0x36 ),	/* 54 */
#ifndef _ALPHA_
/* 2590 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2592 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2594 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2596 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2598 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2600 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2602 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 2604 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2606 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2608 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 2610 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2612 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 2616 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2618 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2620 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwPID */

/* 2622 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2624 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 2628 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2630 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2632 */	NdrFcShort( 0x56a ),	/* Type Offset=1386 */

	/* Parameter pdwEvent */

/* 2634 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2636 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2640 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2642 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFindNextPrinterChangeNotification */

/* 2646 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2648 */	NdrFcShort( 0x37 ),	/* 55 */
#ifndef _ALPHA_
/* 2650 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2652 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2654 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2656 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2658 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2660 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2662 */	0x7,		/* 7 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2666 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2668 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 2670 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2672 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2674 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pdwChange */

/* 2676 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 2678 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 2682 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2684 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2686 */	NdrFcShort( 0x56a ),	/* Type Offset=1386 */

	/* Parameter ppInfo */

/* 2688 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 2690 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2692 */	NdrFcShort( 0x5c8 ),	/* Type Offset=1480 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2696 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcFindClosePrinterChangeNotification */

/* 2700 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2702 */	NdrFcShort( 0x38 ),	/* 56 */
#ifndef _ALPHA_
/* 2704 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2706 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2708 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2710 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2712 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2716 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter hPrinter */

/* 2718 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2720 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2722 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Return value */

/* 2724 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2726 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterFindFirstPrinterChangeNotificationOld */

/* 2730 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2732 */	NdrFcShort( 0x39 ),	/* 57 */
#ifndef _ALPHA_
/* 2734 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2736 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2738 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2740 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2742 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2746 */	0x6,		/* 6 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 2748 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2750 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2752 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 2754 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2756 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 2760 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2762 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 2766 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2768 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2770 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter dwPrinterLocal */

/* 2772 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2774 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2778 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2780 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2782 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyOpenPrinter */

/* 2784 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2786 */	NdrFcShort( 0x3a ),	/* 58 */
#ifndef _ALPHA_
/* 2788 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 2790 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2792 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2794 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2796 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2798 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2800 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter pMachine */

/* 2802 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2804 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2806 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Parameter phPrinterNotify */

/* 2808 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 2810 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2812 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter dwPrinterRemote */

/* 2814 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2816 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwType */

/* 2820 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2822 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 2826 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2828 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 2832 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2834 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2836 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */

	/* Return value */

/* 2838 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2840 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 2842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRouterReplyPrinter */

/* 2844 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2846 */	NdrFcShort( 0x3b ),	/* 59 */
#ifndef _ALPHA_
/* 2848 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2850 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2852 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2854 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2856 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2860 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hNotify */

/* 2862 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2864 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2866 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 2868 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2870 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 2874 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2876 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 2880 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2882 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2884 */	NdrFcShort( 0x664 ),	/* Type Offset=1636 */

	/* Return value */

/* 2886 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2888 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcReplyClosePrinter */

/* 2892 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2894 */	NdrFcShort( 0x3c ),	/* 60 */
#ifndef _ALPHA_
/* 2896 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2898 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 2900 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2902 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2904 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2906 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2908 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter phNotify */

/* 2910 */	NdrFcShort( 0x118 ),	/* 280 */
#ifndef _ALPHA_
/* 2912 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2914 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */

	/* Return value */

/* 2916 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2918 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPortEx */

/* 2922 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2924 */	NdrFcShort( 0x3d ),	/* 61 */
#ifndef _ALPHA_
/* 2926 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 2928 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 2930 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2932 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 2934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2936 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2938 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter pName */

/* 2940 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 2942 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2944 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPortContainer */

/* 2946 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2948 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2950 */	NdrFcShort( 0x700 ),	/* Type Offset=1792 */

	/* Parameter pPortVarContainer */

/* 2952 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2954 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 2956 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pMonitorName */

/* 2958 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 2960 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2962 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 2964 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 2966 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotification */

/* 2970 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2972 */	NdrFcShort( 0x3e ),	/* 62 */
#ifndef _ALPHA_
/* 2974 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 2976 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2978 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2980 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2982 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2986 */	0x7,		/* 7 */
			0x8,		/* 8 */

	/* Parameter hPrinter */

/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 2990 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2992 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 2994 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2996 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 2998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3000 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3002 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3006 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3008 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3010 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter dwPrinterLocal */

/* 3012 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3014 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbBuffer */

/* 3018 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3020 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pBuffer */

/* 3024 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 3026 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3028 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */

	/* Return value */

/* 3030 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3032 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3034 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSpoolerInit */

/* 3036 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3038 */	NdrFcShort( 0x3f ),	/* 63 */
#ifndef _ALPHA_
/* 3040 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3042 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 3044 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3046 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3048 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3052 */	0x4,		/* 4 */
			0x2,		/* 2 */

	/* Parameter pName */

/* 3054 */	NdrFcShort( 0x148 ),	/* 328 */
#ifndef _ALPHA_
/* 3056 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3058 */	0x5,		/* FC_WCHAR */
			0x0,		/* 0 */

	/* Return value */

/* 3060 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3062 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3064 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcResetPrinterEx */

/* 3066 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3068 */	NdrFcShort( 0x40 ),	/* 64 */
#ifndef _ALPHA_
/* 3070 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3072 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3074 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3076 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3078 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3080 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3082 */	0x6,		/* 6 */
			0x5,		/* 5 */

	/* Parameter hPrinter */

/* 3084 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3086 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3088 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pDatatype */

/* 3090 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3092 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3094 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pDevMode */

/* 3096 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3098 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3100 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter dwFlags */

/* 3102 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3104 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3108 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3110 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcRemoteFindFirstPrinterChangeNotificationEx */

/* 3114 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3116 */	NdrFcShort( 0x41 ),	/* 65 */
#ifndef _ALPHA_
/* 3118 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3120 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3122 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3124 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3126 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3128 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3130 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter hPrinter */

/* 3132 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3134 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3136 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter fdwFlags */

/* 3138 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3140 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter fdwOptions */

/* 3144 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3146 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszLocalMachine */

/* 3150 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3152 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3154 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter dwPrinterLocal */

/* 3156 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3158 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3162 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3164 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3166 */	NdrFcShort( 0x56a ),	/* Type Offset=1386 */

	/* Return value */

/* 3168 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3170 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */
/* 3174 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 3176 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 3178 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 3180 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 3182 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 3184 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 3186 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 3188 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 3190 */	NdrFcShort( 0x712 ),	/* Type Offset=1810 */
/* 3192 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */

	/* Procedure RpcRouterRefreshPrinterChangeNotification */

/* 3194 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3196 */	NdrFcShort( 0x43 ),	/* 67 */
#ifndef _ALPHA_
/* 3198 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3200 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3202 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3204 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3206 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3210 */	0x7,		/* 7 */
			0x5,		/* 5 */

	/* Parameter hPrinter */

/* 3212 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3214 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3216 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter dwColor */

/* 3218 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3220 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pOptions */

/* 3224 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3226 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3228 */	NdrFcShort( 0x56a ),	/* Type Offset=1386 */

	/* Parameter ppInfo */

/* 3230 */	NdrFcShort( 0x2013 ),	/* 8211 */
#ifndef _ALPHA_
/* 3232 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3234 */	NdrFcShort( 0x5c8 ),	/* Type Offset=1480 */

	/* Return value */

/* 3236 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3238 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetAllocFailCount */

/* 3242 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3244 */	NdrFcShort( 0x44 ),	/* 68 */
#ifndef _ALPHA_
/* 3246 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3248 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3250 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3252 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3254 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3256 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3258 */	0x4,		/* 4 */
			0x6,		/* 6 */

	/* Parameter hPrinter */

/* 3260 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3262 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3264 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter dwFailCount */

/* 3266 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3268 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpdwAllocCount */

/* 3272 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3274 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpdwFreeCount */

/* 3278 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3280 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lpdwFailCountHit */

/* 3284 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3286 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3290 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3292 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcOpenPrinterEx */

/* 3296 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3298 */	NdrFcShort( 0x45 ),	/* 69 */
#ifndef _ALPHA_
/* 3300 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3302 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 3304 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3306 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3310 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3312 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter pPrinterName */

/* 3314 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3316 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3318 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pHandle */

/* 3320 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 3322 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3324 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Parameter pDatatype */

/* 3326 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3328 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3330 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pDevMode */

/* 3332 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3334 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3336 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter AccessRequired */

/* 3338 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3340 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pClientInfo */

/* 3344 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3346 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3348 */	NdrFcShort( 0x75c ),	/* Type Offset=1884 */

	/* Return value */

/* 3350 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3352 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcAddPrinterEx */

/* 3356 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3358 */	NdrFcShort( 0x46 ),	/* 70 */
#ifndef _ALPHA_
/* 3360 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3362 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 3364 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3366 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3370 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3372 */	0x6,		/* 6 */
			0x7,		/* 7 */

	/* Parameter pName */

/* 3374 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3376 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3378 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPrinterContainer */

/* 3380 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3382 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3384 */	NdrFcShort( 0x310 ),	/* Type Offset=784 */

	/* Parameter pDevModeContainer */

/* 3386 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3388 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3390 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pSecurityContainer */

/* 3392 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3394 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3396 */	NdrFcShort( 0x2c ),	/* Type Offset=44 */

	/* Parameter pClientInfo */

/* 3398 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3400 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3402 */	NdrFcShort( 0x75c ),	/* Type Offset=1884 */

	/* Parameter pHandle */

/* 3404 */	NdrFcShort( 0x110 ),	/* 272 */
#ifndef _ALPHA_
/* 3406 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3408 */	NdrFcShort( 0x1a ),	/* Type Offset=26 */

	/* Return value */

/* 3410 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3412 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcSetPort */

/* 3416 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3418 */	NdrFcShort( 0x47 ),	/* 71 */
#ifndef _ALPHA_
/* 3420 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3422 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 3424 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3426 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3432 */	0x6,		/* 6 */
			0x4,		/* 4 */

	/* Parameter pName */

/* 3434 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3436 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3438 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPortName */

/* 3440 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 3442 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3444 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */

	/* Parameter pPortContainer */

/* 3446 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3448 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3450 */	NdrFcShort( 0x700 ),	/* Type Offset=1792 */

	/* Return value */

/* 3452 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3454 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcEnumPrinterData */

/* 3458 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3460 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3462 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 3464 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3466 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3468 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3470 */	NdrFcShort( 0x30 ),	/* 48 */
/* 3472 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3474 */	0x5,		/* 5 */
			0xa,		/* 10 */

	/* Parameter hPrinter */

/* 3476 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3478 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3480 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter dwIndex */

/* 3482 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3484 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3486 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pValueName */

/* 3488 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 3490 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3492 */	NdrFcShort( 0x76e ),	/* Type Offset=1902 */

	/* Parameter cbValueName */

/* 3494 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3496 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3498 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbValueName */

/* 3500 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3502 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 3504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 3506 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3508 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 3510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pData */

/* 3512 */	NdrFcShort( 0x113 ),	/* 275 */
#ifndef _ALPHA_
/* 3514 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 3516 */	NdrFcShort( 0x77c ),	/* Type Offset=1916 */

	/* Parameter cbData */

/* 3518 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 3520 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 3522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 3524 */	NdrFcShort( 0x2150 ),	/* 8528 */
#ifndef _ALPHA_
/* 3526 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 3528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3530 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3532 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 3534 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure RpcDeletePrinterData */

/* 3536 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 3538 */	NdrFcShort( 0x49 ),	/* 73 */
#ifndef _ALPHA_
/* 3540 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 3542 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 3544 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3546 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 3548 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3550 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3552 */	0x6,		/* 6 */
			0x3,		/* 3 */

	/* Parameter hPrinter */

/* 3554 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 3556 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 3558 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter pValueName */

/* 3560 */	NdrFcShort( 0x10b ),	/* 267 */
#ifndef _ALPHA_
/* 3562 */	NdrFcShort( 0x4 ),	/* x86, MIPS, PPC Stack size/offset = 4 */
#else
			NdrFcShort( 0x8 ),	/* Alpha Stack size/offset = 8 */
#endif
/* 3564 */	NdrFcShort( 0x438 ),	/* Type Offset=1080 */

	/* Return value */

/* 3566 */	NdrFcShort( 0x70 ),	/* 112 */
#ifndef _ALPHA_
/* 3568 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 3570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

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
/*  6 */	NdrFcShort( 0x2 ),	/* Offset= 2 (8) */
/*  8 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 10 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 14 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 16 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 18 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 28 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 30 */	
			0x11, 0x0,	/* FC_RP */
/* 32 */	NdrFcShort( 0xc ),	/* Offset= 12 (44) */
/* 34 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 36 */	NdrFcShort( 0x1 ),	/* 1 */
/* 38 */	0x18,		/* 24 */
			0x0,		/*  */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 44 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 46 */	NdrFcShort( 0x8 ),	/* 8 */
/* 48 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 50 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 52 */	NdrFcShort( 0x4 ),	/* 4 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	0x12, 0x0,	/* FC_UP */
/* 58 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (34) */
/* 60 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 62 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 64 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 66 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 68 */	
			0x12, 0x0,	/* FC_UP */
/* 70 */	NdrFcShort( 0x11e ),	/* Offset= 286 (356) */
/* 72 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 74 */	0x8,		/* 8 */
			0x0,		/*  */
/* 76 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 78 */	NdrFcShort( 0x2 ),	/* Offset= 2 (80) */
/* 80 */	NdrFcShort( 0x4 ),	/* 4 */
/* 82 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 84 */	NdrFcLong( 0x1 ),	/* 1 */
/* 88 */	NdrFcShort( 0x10 ),	/* Offset= 16 (104) */
/* 90 */	NdrFcLong( 0x2 ),	/* 2 */
/* 94 */	NdrFcShort( 0x70 ),	/* Offset= 112 (206) */
/* 96 */	NdrFcLong( 0x3 ),	/* 3 */
/* 100 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (344) */
/* 102 */	NdrFcShort( 0x0 ),	/* Offset= 0 (102) */
/* 104 */	
			0x12, 0x0,	/* FC_UP */
/* 106 */	NdrFcShort( 0x10 ),	/* Offset= 16 (122) */
/* 108 */	
			0x15,		/* FC_STRUCT */
			0x1,		/* 1 */
/* 110 */	NdrFcShort( 0x10 ),	/* 16 */
/* 112 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 114 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 116 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 118 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 120 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 122 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 124 */	NdrFcShort( 0x40 ),	/* 64 */
/* 126 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 128 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 132 */	NdrFcShort( 0x4 ),	/* 4 */
/* 134 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 136 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 144 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 146 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 148 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 150 */	NdrFcShort( 0xc ),	/* 12 */
/* 152 */	NdrFcShort( 0xc ),	/* 12 */
/* 154 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 156 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 158 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 160 */	NdrFcShort( 0x10 ),	/* 16 */
/* 162 */	NdrFcShort( 0x10 ),	/* 16 */
/* 164 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 166 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 168 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 170 */	NdrFcShort( 0x14 ),	/* 20 */
/* 172 */	NdrFcShort( 0x14 ),	/* 20 */
/* 174 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 182 */	NdrFcShort( 0x18 ),	/* 24 */
/* 184 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 186 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 188 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 190 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 192 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 194 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 196 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 198 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 200 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 202 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffa1 ),	/* Offset= -95 (108) */
			0x5b,		/* FC_END */
/* 206 */	
			0x12, 0x0,	/* FC_UP */
/* 208 */	NdrFcShort( 0x2 ),	/* Offset= 2 (210) */
/* 210 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 212 */	NdrFcShort( 0x68 ),	/* 104 */
/* 214 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 216 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 218 */	NdrFcShort( 0x4 ),	/* 4 */
/* 220 */	NdrFcShort( 0x4 ),	/* 4 */
/* 222 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 224 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 226 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 232 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 234 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 236 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 238 */	NdrFcShort( 0xc ),	/* 12 */
/* 240 */	NdrFcShort( 0xc ),	/* 12 */
/* 242 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 244 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 246 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 248 */	NdrFcShort( 0x10 ),	/* 16 */
/* 250 */	NdrFcShort( 0x10 ),	/* 16 */
/* 252 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 254 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 256 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 258 */	NdrFcShort( 0x14 ),	/* 20 */
/* 260 */	NdrFcShort( 0x14 ),	/* 20 */
/* 262 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 264 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 266 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 268 */	NdrFcShort( 0x18 ),	/* 24 */
/* 270 */	NdrFcShort( 0x18 ),	/* 24 */
/* 272 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 274 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 276 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 278 */	NdrFcShort( 0x1c ),	/* 28 */
/* 280 */	NdrFcShort( 0x1c ),	/* 28 */
/* 282 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 284 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 286 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 288 */	NdrFcShort( 0x20 ),	/* 32 */
/* 290 */	NdrFcShort( 0x20 ),	/* 32 */
/* 292 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 294 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 296 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 298 */	NdrFcShort( 0x24 ),	/* 36 */
/* 300 */	NdrFcShort( 0x24 ),	/* 36 */
/* 302 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 304 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 306 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 308 */	NdrFcShort( 0x2c ),	/* 44 */
/* 310 */	NdrFcShort( 0x2c ),	/* 44 */
/* 312 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 314 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 316 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 318 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 320 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 322 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 324 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 326 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 328 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 330 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 332 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 334 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 336 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 338 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff19 ),	/* Offset= -231 (108) */
			0x8,		/* FC_LONG */
/* 342 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 344 */	
			0x12, 0x0,	/* FC_UP */
/* 346 */	NdrFcShort( 0x2 ),	/* Offset= 2 (348) */
/* 348 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 350 */	NdrFcShort( 0xc ),	/* 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 354 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 356 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* Offset= 0 (362) */
/* 364 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 366 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffed9 ),	/* Offset= -295 (72) */
			0x5b,		/* FC_END */
/* 370 */	
			0x12, 0x0,	/* FC_UP */
/* 372 */	NdrFcShort( 0x2 ),	/* Offset= 2 (374) */
/* 374 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 378 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 382 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 384 */	
			0x11, 0x0,	/* FC_RP */
/* 386 */	NdrFcShort( 0x18e ),	/* Offset= 398 (784) */
/* 388 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 390 */	0x8,		/* 8 */
			0x0,		/*  */
/* 392 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 394 */	NdrFcShort( 0x2 ),	/* Offset= 2 (396) */
/* 396 */	NdrFcShort( 0x4 ),	/* 4 */
/* 398 */	NdrFcShort( 0x3007 ),	/* 12295 */
/* 400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x28 ),	/* Offset= 40 (444) */
/* 406 */	NdrFcLong( 0x1 ),	/* 1 */
/* 410 */	NdrFcShort( 0x64 ),	/* Offset= 100 (510) */
/* 412 */	NdrFcLong( 0x2 ),	/* 2 */
/* 416 */	NdrFcShort( 0x8c ),	/* Offset= 140 (556) */
/* 418 */	NdrFcLong( 0x3 ),	/* 3 */
/* 422 */	NdrFcShort( 0x116 ),	/* Offset= 278 (700) */
/* 424 */	NdrFcLong( 0x4 ),	/* 4 */
/* 428 */	NdrFcShort( 0x11a ),	/* Offset= 282 (710) */
/* 430 */	NdrFcLong( 0x5 ),	/* 5 */
/* 434 */	NdrFcShort( 0x138 ),	/* Offset= 312 (746) */
/* 436 */	NdrFcLong( 0x6 ),	/* 6 */
/* 440 */	NdrFcShort( 0x104 ),	/* Offset= 260 (700) */
/* 442 */	NdrFcShort( 0x0 ),	/* Offset= 0 (442) */
/* 444 */	
			0x12, 0x0,	/* FC_UP */
/* 446 */	NdrFcShort( 0x2 ),	/* Offset= 2 (448) */
/* 448 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 450 */	NdrFcShort( 0x7c ),	/* 124 */
/* 452 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 454 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 460 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 462 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 464 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 466 */	NdrFcShort( 0x4 ),	/* 4 */
/* 468 */	NdrFcShort( 0x4 ),	/* 4 */
/* 470 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 472 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 476 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 478 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 480 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 482 */	NdrFcShort( 0xfffffe8a ),	/* Offset= -374 (108) */
/* 484 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 486 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 488 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 490 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 492 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 494 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 496 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 498 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 500 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 502 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 504 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 506 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 508 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 510 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 512 */	NdrFcShort( 0x2 ),	/* Offset= 2 (514) */
/* 514 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 516 */	NdrFcShort( 0x10 ),	/* 16 */
/* 518 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 520 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 522 */	NdrFcShort( 0x4 ),	/* 4 */
/* 524 */	NdrFcShort( 0x4 ),	/* 4 */
/* 526 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 528 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 530 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 532 */	NdrFcShort( 0x8 ),	/* 8 */
/* 534 */	NdrFcShort( 0x8 ),	/* 8 */
/* 536 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 538 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 540 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 542 */	NdrFcShort( 0xc ),	/* 12 */
/* 544 */	NdrFcShort( 0xc ),	/* 12 */
/* 546 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 548 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 550 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 552 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 554 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 556 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 558 */	NdrFcShort( 0x2 ),	/* Offset= 2 (560) */
/* 560 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 562 */	NdrFcShort( 0x54 ),	/* 84 */
/* 564 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 566 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 572 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 574 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 576 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 580 */	NdrFcShort( 0x4 ),	/* 4 */
/* 582 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 584 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 586 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 588 */	NdrFcShort( 0x8 ),	/* 8 */
/* 590 */	NdrFcShort( 0x8 ),	/* 8 */
/* 592 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 594 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 596 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 598 */	NdrFcShort( 0xc ),	/* 12 */
/* 600 */	NdrFcShort( 0xc ),	/* 12 */
/* 602 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 604 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 606 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 610 */	NdrFcShort( 0x10 ),	/* 16 */
/* 612 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 614 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 616 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 618 */	NdrFcShort( 0x14 ),	/* 20 */
/* 620 */	NdrFcShort( 0x14 ),	/* 20 */
/* 622 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 624 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 626 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 628 */	NdrFcShort( 0x18 ),	/* 24 */
/* 630 */	NdrFcShort( 0x18 ),	/* 24 */
/* 632 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 634 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 636 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 638 */	NdrFcShort( 0x20 ),	/* 32 */
/* 640 */	NdrFcShort( 0x20 ),	/* 32 */
/* 642 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 644 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 646 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 648 */	NdrFcShort( 0x24 ),	/* 36 */
/* 650 */	NdrFcShort( 0x24 ),	/* 36 */
/* 652 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 654 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 656 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 658 */	NdrFcShort( 0x28 ),	/* 40 */
/* 660 */	NdrFcShort( 0x28 ),	/* 40 */
/* 662 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 664 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 666 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 668 */	NdrFcShort( 0x2c ),	/* 44 */
/* 670 */	NdrFcShort( 0x2c ),	/* 44 */
/* 672 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 674 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 676 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 678 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 680 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 682 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 684 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 686 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 688 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 690 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 692 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 694 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 696 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 698 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 700 */	
			0x12, 0x0,	/* FC_UP */
/* 702 */	NdrFcShort( 0x2 ),	/* Offset= 2 (704) */
/* 704 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 708 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 710 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 712 */	NdrFcShort( 0x2 ),	/* Offset= 2 (714) */
/* 714 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0xc ),	/* 12 */
/* 718 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 726 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 728 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 730 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 732 */	NdrFcShort( 0x4 ),	/* 4 */
/* 734 */	NdrFcShort( 0x4 ),	/* 4 */
/* 736 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 738 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 740 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 742 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 744 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 746 */	
			0x12, 0x0,	/* FC_UP */
/* 748 */	NdrFcShort( 0x2 ),	/* Offset= 2 (750) */
/* 750 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 752 */	NdrFcShort( 0x14 ),	/* 20 */
/* 754 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 756 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 764 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 766 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 770 */	NdrFcShort( 0x4 ),	/* 4 */
/* 772 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 774 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 776 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 778 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 780 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 782 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 784 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* Offset= 0 (790) */
/* 792 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 794 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffe69 ),	/* Offset= -407 (388) */
			0x5b,		/* FC_END */
/* 798 */	
			0x12, 0x0,	/* FC_UP */
/* 800 */	NdrFcShort( 0x2 ),	/* Offset= 2 (802) */
/* 802 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 806 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 808 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 810 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 812 */	
			0x11, 0x0,	/* FC_RP */
/* 814 */	NdrFcShort( 0xfa ),	/* Offset= 250 (1064) */
/* 816 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 818 */	0x8,		/* 8 */
			0x0,		/*  */
/* 820 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 822 */	NdrFcShort( 0x2 ),	/* Offset= 2 (824) */
/* 824 */	NdrFcShort( 0x4 ),	/* 4 */
/* 826 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 828 */	NdrFcLong( 0x1 ),	/* 1 */
/* 832 */	NdrFcShort( 0x10 ),	/* Offset= 16 (848) */
/* 834 */	NdrFcLong( 0x2 ),	/* 2 */
/* 838 */	NdrFcShort( 0x22 ),	/* Offset= 34 (872) */
/* 840 */	NdrFcLong( 0x3 ),	/* 3 */
/* 844 */	NdrFcShort( 0x60 ),	/* Offset= 96 (940) */
/* 846 */	NdrFcShort( 0x0 ),	/* Offset= 0 (846) */
/* 848 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 850 */	NdrFcShort( 0x2 ),	/* Offset= 2 (852) */
/* 852 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 856 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 858 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 866 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 868 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 872 */	
			0x12, 0x0,	/* FC_UP */
/* 874 */	NdrFcShort( 0x2 ),	/* Offset= 2 (876) */
/* 876 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 878 */	NdrFcShort( 0x18 ),	/* 24 */
/* 880 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 882 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 884 */	NdrFcShort( 0x4 ),	/* 4 */
/* 886 */	NdrFcShort( 0x4 ),	/* 4 */
/* 888 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 890 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 898 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 900 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 902 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 904 */	NdrFcShort( 0xc ),	/* 12 */
/* 906 */	NdrFcShort( 0xc ),	/* 12 */
/* 908 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 910 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 912 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 914 */	NdrFcShort( 0x10 ),	/* 16 */
/* 916 */	NdrFcShort( 0x10 ),	/* 16 */
/* 918 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 920 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 924 */	NdrFcShort( 0x14 ),	/* 20 */
/* 926 */	NdrFcShort( 0x14 ),	/* 20 */
/* 928 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 930 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 932 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 934 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 936 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 938 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 940 */	
			0x12, 0x0,	/* FC_UP */
/* 942 */	NdrFcShort( 0xc ),	/* Offset= 12 (954) */
/* 944 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 946 */	NdrFcShort( 0x2 ),	/* 2 */
/* 948 */	0x18,		/* 24 */
			0x0,		/*  */
/* 950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 952 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 954 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 956 */	NdrFcShort( 0x2c ),	/* 44 */
/* 958 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 960 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	NdrFcShort( 0x4 ),	/* 4 */
/* 966 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 968 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 970 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 972 */	NdrFcShort( 0x8 ),	/* 8 */
/* 974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 976 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 978 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 980 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 982 */	NdrFcShort( 0xc ),	/* 12 */
/* 984 */	NdrFcShort( 0xc ),	/* 12 */
/* 986 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 988 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 990 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 994 */	NdrFcShort( 0x10 ),	/* 16 */
/* 996 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 998 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1000 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1002 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1004 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1006 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1008 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1010 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1012 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1014 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1016 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1018 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1020 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1022 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1024 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1026 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1028 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1030 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1032 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1034 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1036 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1038 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1040 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1042 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1044 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1046 */	0x12, 0x0,	/* FC_UP */
/* 1048 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (944) */
/* 1050 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1052 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1054 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1056 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1058 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1062 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1064 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1070 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1070) */
/* 1072 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1074 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffefd ),	/* Offset= -259 (816) */
			0x5b,		/* FC_END */
/* 1078 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1080 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1082 */	
			0x11, 0x0,	/* FC_RP */
/* 1084 */	NdrFcShort( 0x44 ),	/* Offset= 68 (1152) */
/* 1086 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1088 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1090 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1092 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1094) */
/* 1094 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1096 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1098 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1102 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1106) */
/* 1104 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1104) */
/* 1106 */	
			0x12, 0x0,	/* FC_UP */
/* 1108 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1110) */
/* 1110 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1112 */	NdrFcShort( 0xc ),	/* 12 */
/* 1114 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1116 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1122 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1124 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1126 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1128 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1130 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1132 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1134 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1136 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1144 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1146 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1148 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1150 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1152 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1154 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1158) */
/* 1160 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1162 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb3 ),	/* Offset= -77 (1086) */
			0x5b,		/* FC_END */
/* 1166 */	
			0x11, 0x0,	/* FC_RP */
/* 1168 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1170) */
/* 1170 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1172 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1174 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1176 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1178 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1180 */	
			0x11, 0x0,	/* FC_RP */
/* 1182 */	NdrFcShort( 0xfffffb6a ),	/* Offset= -1174 (8) */
/* 1184 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1186 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1188) */
/* 1188 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 1190 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1192 */	
			0x11, 0x0,	/* FC_RP */
/* 1194 */	NdrFcShort( 0x48 ),	/* Offset= 72 (1266) */
/* 1196 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1198 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1200 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1202 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1204) */
/* 1204 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1206 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1208 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1212 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1216) */
/* 1214 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1214) */
/* 1216 */	
			0x12, 0x0,	/* FC_UP */
/* 1218 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1238) */
/* 1220 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1224 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1226 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1228 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1230 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1234 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1236 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1238 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1240 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1242 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1244 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1246 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1248 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1250 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1254 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1256 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1258 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd9 ),	/* Offset= -39 (1220) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1262 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdd ),	/* Offset= -35 (1228) */
			0x5b,		/* FC_END */
/* 1266 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1272) */
/* 1274 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1276 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffaf ),	/* Offset= -81 (1196) */
			0x5b,		/* FC_END */
/* 1280 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1282 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1284) */
/* 1284 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 1286 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1288 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 1290 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1292 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1294 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1296) */
/* 1296 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 1298 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1300 */	
			0x11, 0x0,	/* FC_RP */
/* 1302 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1334) */
/* 1304 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1306 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1308 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1310 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1312) */
/* 1312 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1314 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 1316 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1320 */	NdrFcShort( 0xa ),	/* Offset= 10 (1330) */
/* 1322 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1326 */	NdrFcShort( 0xffffff24 ),	/* Offset= -220 (1106) */
/* 1328 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1328) */
/* 1330 */	
			0x12, 0x0,	/* FC_UP */
/* 1332 */	NdrFcShort( 0xfffffe20 ),	/* Offset= -480 (852) */
/* 1334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1336 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1340) */
/* 1342 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1344 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd7 ),	/* Offset= -41 (1304) */
			0x5b,		/* FC_END */
/* 1348 */	
			0x11, 0x0,	/* FC_RP */
/* 1350 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1372) */
/* 1352 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1354 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1356 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1358 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1360) */
/* 1360 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1362 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1364 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1368 */	NdrFcShort( 0xfffffefa ),	/* Offset= -262 (1106) */
/* 1370 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1370) */
/* 1372 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1378) */
/* 1380 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1382 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe1 ),	/* Offset= -31 (1352) */
			0x5b,		/* FC_END */
/* 1386 */	
			0x12, 0x0,	/* FC_UP */
/* 1388 */	NdrFcShort( 0x46 ),	/* Offset= 70 (1458) */
/* 1390 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1392 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1394 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1396 */	NdrFcShort( 0xc ),	/* 12 */
/* 1398 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1400 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1402 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1404 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1406 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1408 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1412 */	0x12, 0x0,	/* FC_UP */
/* 1414 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1390) */
/* 1416 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1418 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1420 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1422 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1424 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1426 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1428 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1430 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1434 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1436 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1438 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1444 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1446 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1448 */	0x12, 0x0,	/* FC_UP */
/* 1450 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (1390) */
/* 1452 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1454 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (1400) */
			0x5b,		/* FC_END */
/* 1458 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1460 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1462 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1464 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1466 */	NdrFcShort( 0xc ),	/* 12 */
/* 1468 */	NdrFcShort( 0xc ),	/* 12 */
/* 1470 */	0x12, 0x0,	/* FC_UP */
/* 1472 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1426) */
/* 1474 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1476 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1478 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1480 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] */
/* 1482 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1484) */
/* 1484 */	
			0x12, 0x0,	/* FC_UP */
/* 1486 */	NdrFcShort( 0x8a ),	/* Offset= 138 (1624) */
/* 1488 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1490 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1496) */
/* 1496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1498 */	NdrFcShort( 0x3005 ),	/* 12293 */
/* 1500 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1504 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1542) */
/* 1506 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1510 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1562) */
/* 1512 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1516 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1568) */
/* 1518 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1522 */	NdrFcShort( 0xfffffa3a ),	/* Offset= -1478 (44) */
/* 1524 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1528 */	NdrFcShort( 0xfffffa34 ),	/* Offset= -1484 (44) */
/* 1530 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1529) */
/* 1532 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1534 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1536 */	0x18,		/* 24 */
			0x55,		/* FC_DIV_2 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1542 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1546 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1548 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1550 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1552 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1554 */	0x12, 0x0,	/* FC_UP */
/* 1556 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1532) */
/* 1558 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1560 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1562 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1566 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1568 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1572 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1574 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1576 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1578 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1580 */	0x12, 0x0,	/* FC_UP */
/* 1582 */	NdrFcShort( 0xfffffa3e ),	/* Offset= -1474 (108) */
/* 1584 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1586 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1588 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1590 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1594 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1594) */
/* 1596 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1598 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1600 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1602 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff8d ),	/* Offset= -115 (1488) */
			0x5b,		/* FC_END */
/* 1606 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1612 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1614 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1618 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1620 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1588) */
/* 1622 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1624 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1626 */	NdrFcShort( 0xc ),	/* 12 */
/* 1628 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (1606) */
/* 1630 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1630) */
/* 1632 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1634 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1636 */	
			0x12, 0x0,	/* FC_UP */
/* 1638 */	NdrFcShort( 0xfffffe2c ),	/* Offset= -468 (1170) */
/* 1640 */	
			0x11, 0x0,	/* FC_RP */
/* 1642 */	NdrFcShort( 0x96 ),	/* Offset= 150 (1792) */
/* 1644 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1646 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1648 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1650 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1652) */
/* 1652 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1654 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 1656 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1660 */	NdrFcShort( 0xfffffeb6 ),	/* Offset= -330 (1330) */
/* 1662 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1666 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1682) */
/* 1668 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1672 */	NdrFcShort( 0x3a ),	/* Offset= 58 (1730) */
/* 1674 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1678 */	NdrFcShort( 0x4e ),	/* Offset= 78 (1756) */
/* 1680 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1680) */
/* 1682 */	
			0x12, 0x0,	/* FC_UP */
/* 1684 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1686) */
/* 1686 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1688 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1690 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1692 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1700 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1702 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1704 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1706 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1708 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1710 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1712 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1718 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1720 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1722 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1724 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1726 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1728 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1730 */	
			0x12, 0x0,	/* FC_UP */
/* 1732 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1734) */
/* 1734 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1736 */	NdrFcShort( 0xc ),	/* 12 */
/* 1738 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1740 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1742 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1746 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1748 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1750 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1752 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1754 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1756 */	
			0x12, 0x0,	/* FC_UP */
/* 1758 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1760) */
/* 1760 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1762 */	NdrFcShort( 0xc ),	/* 12 */
/* 1764 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1766 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1774 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1776 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1782 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1784 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1786 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1788 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1790 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1792 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1794 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1798) */
/* 1800 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1802 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff61 ),	/* Offset= -159 (1644) */
			0x5b,		/* FC_END */
/* 1806 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1808 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1810 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1812 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1814 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1818) */
/* 1818 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1820 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1826 */	NdrFcShort( 0xfffffeaa ),	/* Offset= -342 (1484) */
/* 1828 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1827) */
/* 1830 */	
			0x11, 0x0,	/* FC_RP */
/* 1832 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1884) */
/* 1834 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1836 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1838 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1840 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1842) */
/* 1842 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1844 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1846 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1850 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1854) */
/* 1852 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1851) */
/* 1854 */	
			0x12, 0x0,	/* FC_UP */
/* 1856 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1858) */
/* 1858 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1860 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1864 */	NdrFcShort( 0xc ),	/* Offset= 12 (1876) */
/* 1866 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1868 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1870 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1872 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1874 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1876 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1878 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1880 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1882 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1884 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1890) */
/* 1892 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1894 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc3 ),	/* Offset= -61 (1834) */
			0x5b,		/* FC_END */
/* 1898 */	
			0x11, 0x0,	/* FC_RP */
/* 1900 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1902) */
/* 1902 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1904 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1906 */	0x28,		/* 40 */
			0x55,		/* FC_DIV_2 */
#ifndef _ALPHA_
/* 1908 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1910 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1912 */	
			0x11, 0x0,	/* FC_RP */
/* 1914 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1916) */
/* 1916 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1918 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1920 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1922 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1924 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
