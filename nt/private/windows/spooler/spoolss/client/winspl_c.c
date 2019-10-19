/* this ALWAYS GENERATED file contains the RPC client stubs */


/* File created by MIDL compiler version 3.00.44 */
/* at Sat Oct 19 00:10:26 2019
 */
/* Compiler settings for winspl.idl:
    Oi (OptLev=i0), W1, Zp8, env=Win32, ms_ext, c_ext, oldnames
    error checks: allocation ref 
*/
//@@MIDL_FILE_HEADING(  )

#include <string.h>
#if defined( _ALPHA_ )
#include <stdarg.h>
#endif

#include "winspl.h"

#define TYPE_FORMAT_STRING_SIZE   1947                              
#define PROC_FORMAT_STRING_SIZE   2075                              

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

handle_t winspool_bhandle;

static RPC_PROTSEQ_ENDPOINT __RpcProtseqEndpoint[] = 
    {
    {(unsigned char *) "mscn_np", (unsigned char *) "\\pipe\\spoolss"}
    };


static const RPC_CLIENT_INTERFACE winspool___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x12345678,0x1234,0xABCD,{0xEF,0x00,0x01,0x23,0x45,0x67,0x89,0xAB}},{1,0}},
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    1,
    __RpcProtseqEndpoint,
    0,
    0,
    0
    };
RPC_IF_HANDLE winspool_ClientIfHandle = (RPC_IF_HANDLE)& winspool___RpcClientInterface;

extern const MIDL_STUB_DESC winspool_StubDesc;

static RPC_BINDING_HANDLE winspool__MIDL_AutoBindHandle;


DWORD RpcEnumPrinters( 
    /* [in] */ DWORD Flags,
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pPrinterEnum,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&Flags,
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pPrinterEnum,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[0],
                 ( unsigned char __RPC_FAR * )&Flags);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcOpenPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE __RPC_FAR *pHandle,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pDatatype,
    /* [in] */ LPDEVMODE_CONTAINER pDevMode,
    /* [in] */ DWORD AccessRequired)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,AccessRequired);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&pPrinterName,
                 ( unsigned char __RPC_FAR * )&pHandle,
                 ( unsigned char __RPC_FAR * )&pDatatype,
                 ( unsigned char __RPC_FAR * )&pDevMode,
                 ( unsigned char __RPC_FAR * )&AccessRequired);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[36],
                 ( unsigned char __RPC_FAR * )&pPrinterName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [unique][in] */ LPJOB_CONTAINER pJobContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Command);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&JobId,
                 ( unsigned char __RPC_FAR * )&pJobContainer,
                 ( unsigned char __RPC_FAR * )&Command);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[68],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[94],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[94],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&JobId,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pJob,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[94],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumJobs( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD FirstJob,
    /* [in] */ DWORD NoJobs,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&FirstJob,
                 ( unsigned char __RPC_FAR * )&NoJobs,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pJob,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[126],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinter( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PPRINTER_CONTAINER pPrinterContainer,
    /* [in] */ PDEVMODE_CONTAINER pDevModeContainer,
    /* [in] */ PSECURITY_CONTAINER pSecurityContainer,
    /* [out] */ PRINTER_HANDLE __RPC_FAR *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pPrinterContainer,
                 ( unsigned char __RPC_FAR * )&pDevModeContainer,
                 ( unsigned char __RPC_FAR * )&pSecurityContainer,
                 ( unsigned char __RPC_FAR * )&pHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[164],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[198],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PPRINTER_CONTAINER pPrinterContainer,
    /* [in] */ PDEVMODE_CONTAINER pDevModeContainer,
    /* [in] */ PSECURITY_CONTAINER pSecurityContainer,
    /* [in] */ DWORD Command)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,Command);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pPrinterContainer,
                 ( unsigned char __RPC_FAR * )&pDevModeContainer,
                 ( unsigned char __RPC_FAR * )&pSecurityContainer,
                 ( unsigned char __RPC_FAR * )&Command);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[216],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pPrinter,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[248],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[248],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pPrinter,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[248],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PDRIVER_CONTAINER pDriverContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDriverContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[278],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[278],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pDriverContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[278],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterDrivers( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pDrivers,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pDrivers,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[300],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pDriver,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[338],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriverDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pDriverDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pDriverDirectory,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[372],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterDriver( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [string][in] */ wchar_t __RPC_FAR *pDriverName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDriverName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[406],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[406],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&pDriverName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[406],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [string][in] */ wchar_t __RPC_FAR *pPathName,
    /* [string][in] */ wchar_t __RPC_FAR *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPrintProcessorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[432],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[432],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&pPathName,
                 ( unsigned char __RPC_FAR * )&pPrintProcessorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[432],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrintProcessors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pPrintProcessorInfo,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pPrintProcessorInfo,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[462],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrintProcessorDirectory( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pPrintProcessorDirectory,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[500],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[500],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pPrintProcessorDirectory,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[500],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PDOC_INFO_CONTAINER pDocInfoContainer,
    /* [out] */ LPDWORD pJobId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pJobId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[534],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[534],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pDocInfoContainer,
                 ( unsigned char __RPC_FAR * )&pJobId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[534],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcStartPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[560],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[560],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[560],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWritePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][in] */ LPBYTE pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcWritten)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcWritten);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[578],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[578],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pBuf,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcWritten);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[578],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndPagePrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[606],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAbortPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[624],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[624],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[624],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReadPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [size_is][out] */ LPBYTE pBuf,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcNoBytesRead)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcNoBytesRead);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pBuf,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcNoBytesRead);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[642],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEndDocPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[670],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[670],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[670],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pAddJob,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[688],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[688],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pAddJob,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[688],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcScheduleJob( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD JobId)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,JobId);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&JobId);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[718],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pValueName,
    /* [out] */ LPDWORD pType,
    /* [size_is][out] */ LPBYTE pData,
    /* [in] */ DWORD nSize,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[738],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[738],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pValueName,
                 ( unsigned char __RPC_FAR * )&pType,
                 ( unsigned char __RPC_FAR * )&pData,
                 ( unsigned char __RPC_FAR * )&nSize,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[738],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pValueName,
    /* [in] */ DWORD Type,
    /* [size_is][in] */ LPBYTE pData,
    /* [in] */ DWORD cbData)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,cbData);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[774],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[774],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pValueName,
                 ( unsigned char __RPC_FAR * )&Type,
                 ( unsigned char __RPC_FAR * )&pData,
                 ( unsigned char __RPC_FAR * )&cbData);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[774],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcWaitForPrinterChange( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Flags,
    /* [out] */ LPDWORD pFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&Flags,
                 ( unsigned char __RPC_FAR * )&pFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[804],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE __RPC_FAR *phPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,phPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[828],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[828],
                 ( unsigned char __RPC_FAR * )&phPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[828],
                 ( unsigned char __RPC_FAR * )&phPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ PFORM_CONTAINER pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pFormInfoContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pFormInfoContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[846],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pFormName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pFormName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[868],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[868],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pFormName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[868],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pFormName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbNeeded);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[890],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[890],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pFormName,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pForm,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[890],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetForm( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pFormName,
    /* [in] */ PFORM_CONTAINER pFormInfoContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pFormInfoContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pFormName,
                 ( unsigned char __RPC_FAR * )&pFormInfoContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[924],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumForms( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pForm,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pForm,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[950],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPorts( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pPort,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[984],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[984],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pPort,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[984],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumMonitors( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pMonitor,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1018],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1018],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pMonitor,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1018],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD hWnd,
    /* [string][in] */ wchar_t __RPC_FAR *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pMonitorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1052],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1052],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&hWnd,
                 ( unsigned char __RPC_FAR * )&pMonitorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1052],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcConfigurePort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD hWnd,
    /* [string][in] */ wchar_t __RPC_FAR *pPortName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPortName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1076],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1076],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&hWnd,
                 ( unsigned char __RPC_FAR * )&pPortName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1076],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ DWORD hWnd,
    /* [string][in] */ wchar_t __RPC_FAR *pPortName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPortName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1100],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1100],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&hWnd,
                 ( unsigned char __RPC_FAR * )&pPortName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1100],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcCreatePrinterIC( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [out] */ GDI_HANDLE __RPC_FAR *pHandle,
    /* [in] */ LPDEVMODE_CONTAINER pDevModeContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDevModeContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1124],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1124],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pHandle,
                 ( unsigned char __RPC_FAR * )&pDevModeContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1124],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcPlayGdiScriptOnPrinterIC( 
    /* [in] */ GDI_HANDLE hPrinterIC,
    /* [size_is][in] */ LPBYTE pIn,
    /* [in] */ DWORD cIn,
    /* [size_is][out] */ LPBYTE pOut,
    /* [in] */ DWORD cOut,
    /* [in] */ DWORD ul)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ul);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 ( unsigned char __RPC_FAR * )&hPrinterIC,
                 ( unsigned char __RPC_FAR * )&pIn,
                 ( unsigned char __RPC_FAR * )&cIn,
                 ( unsigned char __RPC_FAR * )&pOut,
                 ( unsigned char __RPC_FAR * )&cOut,
                 ( unsigned char __RPC_FAR * )&ul);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1150],
                 ( unsigned char __RPC_FAR * )&hPrinterIC);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterIC( 
    /* [out][in] */ GDI_HANDLE __RPC_FAR *phPrinterIC)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,phPrinterIC);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1182],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1182],
                 ( unsigned char __RPC_FAR * )&phPrinterIC);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1182],
                 ( unsigned char __RPC_FAR * )&phPrinterIC);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterConnection( 
    /* [string][in] */ STRING_HANDLE pName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1200],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1200],
                 ( unsigned char __RPC_FAR * )&pName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1200],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterConnection( 
    /* [string][in] */ STRING_HANDLE pName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1218],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1218],
                 ( unsigned char __RPC_FAR * )&pName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1218],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcPrinterMessageBox( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD Error,
    /* [in] */ DWORD hWnd,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pText,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pCaption,
    /* [in] */ DWORD dwType)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwType);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1236],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1236],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&Error,
                 ( unsigned char __RPC_FAR * )&hWnd,
                 ( unsigned char __RPC_FAR * )&pText,
                 ( unsigned char __RPC_FAR * )&pCaption,
                 ( unsigned char __RPC_FAR * )&dwType);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1236],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ PMONITOR_CONTAINER pMonitorContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pMonitorContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1268],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1268],
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&pMonitorContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1268],
                 ( unsigned char __RPC_FAR * )&Name);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeleteMonitor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [string][in] */ wchar_t __RPC_FAR *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pMonitorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1290],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1290],
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&pMonitorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1290],
                 ( unsigned char __RPC_FAR * )&Name);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrintProcessor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [string][in] */ wchar_t __RPC_FAR *pPrintProcessorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPrintProcessorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1316],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1316],
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&pPrintProcessorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1316],
                 ( unsigned char __RPC_FAR * )&Name);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrintProvidor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [in] */ PPROVIDOR_CONTAINER pProvidorContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pProvidorContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1342],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1342],
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&pProvidorContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1342],
                 ( unsigned char __RPC_FAR * )&Name);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrintProvidor( 
    /* [unique][string][in] */ STRING_HANDLE Name,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [string][in] */ wchar_t __RPC_FAR *pPrintProvidorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPrintProvidorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1364],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1364],
                 ( unsigned char __RPC_FAR * )&Name,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&pPrintProvidorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1364],
                 ( unsigned char __RPC_FAR * )&Name);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrintProcessorDatatypes( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pPrintProcessorName,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pDatatypes,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [out] */ LPDWORD pcReturned)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcReturned);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1390],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1390],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pPrintProcessorName,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pDatatypes,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&pcReturned);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1390],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcResetPrinter( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pDatatype,
    /* [in] */ LPDEVMODE_CONTAINER pDevMode)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pDevMode);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1428],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1428],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pDatatype,
                 ( unsigned char __RPC_FAR * )&pDevMode);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1428],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcGetPrinterDriver2( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][unique][in] */ wchar_t __RPC_FAR *pEnvironment,
    /* [in] */ DWORD Level,
    /* [size_is][unique][out][in] */ LPBYTE pDriver,
    /* [in] */ DWORD cbBuf,
    /* [out] */ LPDWORD pcbNeeded,
    /* [in] */ DWORD dwClientMajorVersion,
    /* [in] */ DWORD dwClientMinorVersion,
    /* [out] */ LPDWORD pdwServerMaxVersion,
    /* [out] */ LPDWORD pdwServerMinVersion)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pdwServerMinVersion);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1454],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1454],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pEnvironment,
                 ( unsigned char __RPC_FAR * )&Level,
                 ( unsigned char __RPC_FAR * )&pDriver,
                 ( unsigned char __RPC_FAR * )&cbBuf,
                 ( unsigned char __RPC_FAR * )&pcbNeeded,
                 ( unsigned char __RPC_FAR * )&dwClientMajorVersion,
                 ( unsigned char __RPC_FAR * )&dwClientMinorVersion,
                 ( unsigned char __RPC_FAR * )&pdwServerMaxVersion,
                 ( unsigned char __RPC_FAR * )&pdwServerMinVersion);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1454],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcClientFindFirstPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [in] */ DWORD dwPID,
    /* [unique][in] */ PRPC_V2_NOTIFY_OPTIONS pOptions,
    /* [out] */ LPDWORD pdwEvent)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pdwEvent);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&fdwOptions,
                 ( unsigned char __RPC_FAR * )&dwPID,
                 ( unsigned char __RPC_FAR * )&pOptions,
                 ( unsigned char __RPC_FAR * )&pdwEvent);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1500],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcFindNextPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [out] */ LPDWORD pdwChange,
    /* [unique][in] */ PRPC_V2_NOTIFY_OPTIONS pOptions,
    /* [out] */ PRPC_V2_NOTIFY_INFO __RPC_FAR *ppInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppInfo);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1532],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1532],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&pdwChange,
                 ( unsigned char __RPC_FAR * )&pOptions,
                 ( unsigned char __RPC_FAR * )&ppInfo);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1532],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcFindClosePrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,hPrinter);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1564],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1564],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1564],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterFindFirstPrinterChangeNotificationOld( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwPrinterLocal);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1582],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1582],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&fdwOptions,
                 ( unsigned char __RPC_FAR * )&pszLocalMachine,
                 ( unsigned char __RPC_FAR * )&dwPrinterLocal);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1582],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReplyOpenPrinter( 
    /* [string][in] */ STRING_HANDLE pMachine,
    /* [out] */ PRINTER_HANDLE __RPC_FAR *phPrinterNotify,
    /* [in] */ DWORD dwPrinterRemote,
    /* [in] */ DWORD dwType,
    /* [in] */ DWORD cbBuffer,
    /* [size_is][unique][in] */ LPBYTE pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1610],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1610],
                 ( unsigned char __RPC_FAR * )&pMachine,
                 ( unsigned char __RPC_FAR * )&phPrinterNotify,
                 ( unsigned char __RPC_FAR * )&dwPrinterRemote,
                 ( unsigned char __RPC_FAR * )&dwType,
                 ( unsigned char __RPC_FAR * )&cbBuffer,
                 ( unsigned char __RPC_FAR * )&pBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1610],
                 ( unsigned char __RPC_FAR * )&pMachine);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinter( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD cbBuffer,
    /* [size_is][unique][in] */ LPBYTE pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1642],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1642],
                 ( unsigned char __RPC_FAR * )&hNotify,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&cbBuffer,
                 ( unsigned char __RPC_FAR * )&pBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1642],
                 ( unsigned char __RPC_FAR * )&hNotify);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcReplyClosePrinter( 
    /* [out][in] */ PRINTER_HANDLE __RPC_FAR *phNotify)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,phNotify);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                 ( unsigned char __RPC_FAR * )&phNotify);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1668],
                 ( unsigned char __RPC_FAR * )&phNotify);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPortEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ LPPORT_CONTAINER pPortContainer,
    /* [in] */ LPPORT_VAR_CONTAINER pPortVarContainer,
    /* [string][in] */ wchar_t __RPC_FAR *pMonitorName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pMonitorName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1686],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1686],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pPortContainer,
                 ( unsigned char __RPC_FAR * )&pPortVarContainer,
                 ( unsigned char __RPC_FAR * )&pMonitorName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1686],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [in] */ DWORD cbBuffer,
    /* [size_is][unique][out][in] */ LPBYTE pBuffer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pBuffer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1716],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1716],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&fdwOptions,
                 ( unsigned char __RPC_FAR * )&pszLocalMachine,
                 ( unsigned char __RPC_FAR * )&dwPrinterLocal,
                 ( unsigned char __RPC_FAR * )&cbBuffer,
                 ( unsigned char __RPC_FAR * )&pBuffer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1716],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSpoolerInit( 
    /* [in] */ STRING_HANDLE pName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1750],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1750],
                 ( unsigned char __RPC_FAR * )&pName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1750],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcResetPrinterEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pDatatype,
    /* [in] */ LPDEVMODE_CONTAINER pDevMode,
    /* [in] */ DWORD dwFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,dwFlags);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1768],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1768],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pDatatype,
                 ( unsigned char __RPC_FAR * )&pDevMode,
                 ( unsigned char __RPC_FAR * )&dwFlags);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1768],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRemoteFindFirstPrinterChangeNotificationEx( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD fdwFlags,
    /* [in] */ DWORD fdwOptions,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pszLocalMachine,
    /* [in] */ DWORD dwPrinterLocal,
    /* [unique][in] */ PRPC_V2_NOTIFY_OPTIONS pOptions)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pOptions);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1796],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1796],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&fdwFlags,
                 ( unsigned char __RPC_FAR * )&fdwOptions,
                 ( unsigned char __RPC_FAR * )&pszLocalMachine,
                 ( unsigned char __RPC_FAR * )&dwPrinterLocal,
                 ( unsigned char __RPC_FAR * )&pOptions);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1796],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcRouterReplyPrinterEx( 
    /* [in] */ PRINTER_HANDLE hNotify,
    /* [in] */ DWORD dwColor,
    /* [in] */ DWORD fdwFlags,
    /* [out] */ PDWORD pdwResult,
    /* [in] */ DWORD dwReplyType,
    /* [switch_is][in] */ RPC_V2_UREPLY_PRINTER Reply)
{

    RPC_BINDING_HANDLE _Handle	=	0;
    
    DWORD _RetVal;
    
    RPC_MESSAGE _RpcMessage;
    
    MIDL_STUB_MESSAGE _StubMsg;
    
    if(!pdwResult)
        {
        RpcRaiseException(RPC_X_NULL_REF_POINTER);
        }
    RpcTryFinally
        {
        NdrClientInitializeNew(
                          ( PRPC_MESSAGE  )&_RpcMessage,
                          ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                          ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                          66);
        
        
        if(hNotify != 0)
            {
            _Handle = NDRCContextBinding(( NDR_CCONTEXT  )hNotify);;
            
            }
        else
            {
            RpcRaiseException(RPC_X_SS_IN_NULL_CONTEXT);
            }
        
        _StubMsg.BufferLength = 20U + 4U + 4U + 4U + 0U;
        _StubMsg.MaxCount = dwReplyType;
        
        NdrNonEncapsulatedUnionBufferSize( (PMIDL_STUB_MESSAGE) &_StubMsg,
                                           (unsigned char __RPC_FAR *)&Reply,
                                           (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1822] );
        
        NdrGetBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg, _StubMsg.BufferLength, _Handle );
        
        NdrClientContextMarshall(
                            ( PMIDL_STUB_MESSAGE  )&_StubMsg,
                            ( NDR_CCONTEXT  )hNotify,
                            1);
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwColor;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = fdwFlags;
        
        *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++ = dwReplyType;
        
        _StubMsg.MaxCount = dwReplyType;
        
        NdrNonEncapsulatedUnionMarshall( (PMIDL_STUB_MESSAGE)& _StubMsg,
                                         (unsigned char __RPC_FAR *)&Reply,
                                         (PFORMAT_STRING) &__MIDL_TypeFormatString.Format[1822] );
        
        NdrSendReceive( (PMIDL_STUB_MESSAGE) &_StubMsg, (unsigned char __RPC_FAR *) _StubMsg.Buffer );
        
        if ( (_RpcMessage.DataRepresentation & 0X0000FFFFUL) != NDR_LOCAL_DATA_REPRESENTATION )
            NdrConvert( (PMIDL_STUB_MESSAGE) &_StubMsg, (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1828] );
        
        *pdwResult = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        _RetVal = *(( DWORD __RPC_FAR * )_StubMsg.Buffer)++;
        
        }
    RpcFinally
        {
        NdrFreeBuffer( (PMIDL_STUB_MESSAGE) &_StubMsg );
        
        }
    RpcEndFinally
    
    return _RetVal;
}


DWORD RpcRouterRefreshPrinterChangeNotification( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwColor,
    /* [unique][in] */ PRPC_V2_NOTIFY_OPTIONS pOptions,
    /* [out] */ PRPC_V2_NOTIFY_INFO __RPC_FAR *ppInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,ppInfo);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1848],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1848],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&dwColor,
                 ( unsigned char __RPC_FAR * )&pOptions,
                 ( unsigned char __RPC_FAR * )&ppInfo);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1848],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetAllocFailCount( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwFailCount,
    /* [out] */ LPDWORD lpdwAllocCount,
    /* [out] */ LPDWORD lpdwFreeCount,
    /* [out] */ LPDWORD lpdwFailCountHit)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,lpdwFailCountHit);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1876],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1876],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&dwFailCount,
                 ( unsigned char __RPC_FAR * )&lpdwAllocCount,
                 ( unsigned char __RPC_FAR * )&lpdwFreeCount,
                 ( unsigned char __RPC_FAR * )&lpdwFailCountHit);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1876],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcOpenPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pPrinterName,
    /* [out] */ PRINTER_HANDLE __RPC_FAR *pHandle,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pDatatype,
    /* [in] */ LPDEVMODE_CONTAINER pDevMode,
    /* [in] */ DWORD AccessRequired,
    /* [in] */ PSPLCLIENT_CONTAINER pClientInfo)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pClientInfo);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1908],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1908],
                 ( unsigned char __RPC_FAR * )&pPrinterName,
                 ( unsigned char __RPC_FAR * )&pHandle,
                 ( unsigned char __RPC_FAR * )&pDatatype,
                 ( unsigned char __RPC_FAR * )&pDevMode,
                 ( unsigned char __RPC_FAR * )&AccessRequired,
                 ( unsigned char __RPC_FAR * )&pClientInfo);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1908],
                 ( unsigned char __RPC_FAR * )&pPrinterName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcAddPrinterEx( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [in] */ PPRINTER_CONTAINER pPrinterContainer,
    /* [in] */ PDEVMODE_CONTAINER pDevModeContainer,
    /* [in] */ PSECURITY_CONTAINER pSecurityContainer,
    /* [in] */ PSPLCLIENT_CONTAINER pClientInfo,
    /* [out] */ PRINTER_HANDLE __RPC_FAR *pHandle)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pHandle);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1944],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1944],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pPrinterContainer,
                 ( unsigned char __RPC_FAR * )&pDevModeContainer,
                 ( unsigned char __RPC_FAR * )&pSecurityContainer,
                 ( unsigned char __RPC_FAR * )&pClientInfo,
                 ( unsigned char __RPC_FAR * )&pHandle);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1944],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcSetPort( 
    /* [unique][string][in] */ STRING_HANDLE pName,
    /* [unique][string][in] */ wchar_t __RPC_FAR *pPortName,
    /* [in] */ LPPORT_CONTAINER pPortContainer)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pPortContainer);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1982],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1982],
                 ( unsigned char __RPC_FAR * )&pName,
                 ( unsigned char __RPC_FAR * )&pPortName,
                 ( unsigned char __RPC_FAR * )&pPortContainer);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[1982],
                 ( unsigned char __RPC_FAR * )&pName);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcEnumPrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [in] */ DWORD dwIndex,
    /* [size_is][out] */ wchar_t __RPC_FAR *pValueName,
    /* [in] */ DWORD cbValueName,
    /* [out] */ LPDWORD pcbValueName,
    /* [out] */ LPDWORD pType,
    /* [size_is][out] */ LPBYTE pData,
    /* [in] */ DWORD cbData,
    /* [out] */ LPDWORD pcbData)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pcbData);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2008],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2008],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&dwIndex,
                 ( unsigned char __RPC_FAR * )&pValueName,
                 ( unsigned char __RPC_FAR * )&cbValueName,
                 ( unsigned char __RPC_FAR * )&pcbValueName,
                 ( unsigned char __RPC_FAR * )&pType,
                 ( unsigned char __RPC_FAR * )&pData,
                 ( unsigned char __RPC_FAR * )&cbData,
                 ( unsigned char __RPC_FAR * )&pcbData);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2008],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}


DWORD RpcDeletePrinterData( 
    /* [in] */ PRINTER_HANDLE hPrinter,
    /* [string][in] */ wchar_t __RPC_FAR *pValueName)
{

    CLIENT_CALL_RETURN _RetVal;

    
#if defined( _ALPHA_ )
    va_list vlist;
#endif
    
#if defined( _ALPHA_ )
    va_start(vlist,pValueName);
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2052],
                 vlist.a0);
#elif defined( _PPC_ ) || defined( _MIPS_ )

    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2052],
                 ( unsigned char __RPC_FAR * )&hPrinter,
                 ( unsigned char __RPC_FAR * )&pValueName);
#else
    _RetVal = NdrClientCall(
                 ( PMIDL_STUB_DESC  )&winspool_StubDesc,
                 (PFORMAT_STRING) &__MIDL_ProcFormatString.Format[2052],
                 ( unsigned char __RPC_FAR * )&hPrinter);
#endif
    return ( DWORD  )_RetVal.Simple;
    
}

extern const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1];
extern const EXPR_EVAL ExprEvalRoutines[];

static const MIDL_STUB_DESC winspool_StubDesc = 
    {
    (void __RPC_FAR *)& winspool___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &winspool_bhandle,
    0,
    BindingRoutines,
    ExprEvalRoutines,
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

static const GENERIC_BINDING_ROUTINE_PAIR BindingRoutines[1] = 
        {
        {
            (GENERIC_BINDING_ROUTINE)STRING_HANDLE_bind,
            (GENERIC_UNBIND_ROUTINE)STRING_HANDLE_unbind
         }
        
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


static const MIDL_PROC_FORMAT_STRING __MIDL_ProcFormatString =
    {
        0,
        {
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
/* 12 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 14 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 16 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 18 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 20 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 22 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 24 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 26 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 28 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 30 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 32 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 34 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 36 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 38 */	NdrFcShort( 0x1 ),	/* 1 */
#ifndef _ALPHA_
/* 40 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 42 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 44 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 46 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 48 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 50 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 52 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 54 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 56 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 58 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 60 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 62 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 64 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 66 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 68 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 70 */	NdrFcShort( 0x2 ),	/* 2 */
#ifndef _ALPHA_
/* 72 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 74 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 76 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 78 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 80 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 82 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 84 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 86 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 88 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */
/* 90 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 92 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 94 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 96 */	NdrFcShort( 0x3 ),	/* 3 */
#ifndef _ALPHA_
/* 98 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 100 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 102 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 104 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 106 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 108 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 110 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 112 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 114 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 116 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 118 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 120 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 122 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 124 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 126 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 128 */	NdrFcShort( 0x4 ),	/* 4 */
#ifndef _ALPHA_
/* 130 */	NdrFcShort( 0x24 ),	/* x86, MIPS, PPC Stack size/offset = 36 */
#else
			NdrFcShort( 0x48 ),	/* Alpha Stack size/offset = 72 */
#endif
/* 132 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 134 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 136 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 138 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 140 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 142 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 144 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 146 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 148 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 150 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */
/* 152 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 154 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 156 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 158 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 160 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 162 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 164 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 166 */	NdrFcShort( 0x5 ),	/* 5 */
#ifndef _ALPHA_
/* 168 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 170 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 172 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 174 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 176 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 178 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 180 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 182 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */
/* 184 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 186 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 188 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 190 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 192 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 194 */	NdrFcShort( 0x31e ),	/* Type Offset=798 */
/* 196 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 198 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 200 */	NdrFcShort( 0x6 ),	/* 6 */
#ifndef _ALPHA_
/* 202 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 204 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 206 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 208 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 210 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 212 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 214 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 216 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 218 */	NdrFcShort( 0x7 ),	/* 7 */
#ifndef _ALPHA_
/* 220 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 222 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 224 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 226 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 228 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 230 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 232 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 234 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */
/* 236 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 238 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 240 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 242 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 244 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 246 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 248 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 250 */	NdrFcShort( 0x8 ),	/* 8 */
#ifndef _ALPHA_
/* 252 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 254 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 256 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 258 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 260 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 262 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 264 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 266 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 268 */	NdrFcShort( 0x326 ),	/* Type Offset=806 */
/* 270 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 272 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 274 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 276 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 278 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 280 */	NdrFcShort( 0x9 ),	/* 9 */
#ifndef _ALPHA_
/* 282 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 284 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 286 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 288 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 290 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 292 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 294 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 296 */	NdrFcShort( 0x334 ),	/* Type Offset=820 */
/* 298 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 300 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 302 */	NdrFcShort( 0xa ),	/* 10 */
#ifndef _ALPHA_
/* 304 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
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
/* 312 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 314 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 316 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 318 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 320 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 322 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 324 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 326 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 328 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 330 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 332 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 334 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 336 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 338 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 340 */	NdrFcShort( 0xb ),	/* 11 */
#ifndef _ALPHA_
/* 342 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 344 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 346 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 348 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 350 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 352 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 356 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 358 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 360 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 362 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 364 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 366 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 368 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 370 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 372 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 374 */	NdrFcShort( 0xc ),	/* 12 */
#ifndef _ALPHA_
/* 376 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 378 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 380 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 382 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 384 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 386 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 388 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 390 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 392 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 394 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 396 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 398 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 400 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 402 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 404 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 406 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 408 */	NdrFcShort( 0xd ),	/* 13 */
#ifndef _ALPHA_
/* 410 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 412 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 414 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 416 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 418 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 420 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 422 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 424 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 426 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 428 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 430 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 432 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 434 */	NdrFcShort( 0xe ),	/* 14 */
#ifndef _ALPHA_
/* 436 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 438 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 440 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 442 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 444 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 446 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 448 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 450 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 452 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 454 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 456 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 458 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 460 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 462 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 464 */	NdrFcShort( 0xf ),	/* 15 */
#ifndef _ALPHA_
/* 466 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 468 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 470 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 472 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 474 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 476 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 478 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 480 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 482 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 484 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 486 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 488 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 490 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 492 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 494 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 496 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 498 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 500 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 502 */	NdrFcShort( 0x10 ),	/* 16 */
#ifndef _ALPHA_
/* 504 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 506 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 508 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 510 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 512 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 514 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 516 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 518 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 520 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 522 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 524 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 526 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 528 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 530 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 532 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 534 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 536 */	NdrFcShort( 0x11 ),	/* 17 */
#ifndef _ALPHA_
/* 538 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 540 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 542 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 544 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 546 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 548 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 550 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 552 */	NdrFcShort( 0x442 ),	/* Type Offset=1090 */
/* 554 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 556 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 558 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 560 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 562 */	NdrFcShort( 0x12 ),	/* 18 */
#ifndef _ALPHA_
/* 564 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 566 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 568 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 570 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 572 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 574 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 576 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 578 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 580 */	NdrFcShort( 0x13 ),	/* 19 */
#ifndef _ALPHA_
/* 582 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 584 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 586 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 588 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 590 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 592 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 594 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 596 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */
/* 598 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 600 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 602 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 604 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 606 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 608 */	NdrFcShort( 0x14 ),	/* 20 */
#ifndef _ALPHA_
/* 610 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 612 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 614 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 616 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 618 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 620 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 622 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 624 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 626 */	NdrFcShort( 0x15 ),	/* 21 */
#ifndef _ALPHA_
/* 628 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 630 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 632 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 634 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 636 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 638 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 640 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 642 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 644 */	NdrFcShort( 0x16 ),	/* 22 */
#ifndef _ALPHA_
/* 646 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 648 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 650 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 652 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 654 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 656 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 658 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 660 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */
/* 662 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 664 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 666 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 668 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 670 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 672 */	NdrFcShort( 0x17 ),	/* 23 */
#ifndef _ALPHA_
/* 674 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 676 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 678 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 680 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 682 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 684 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 686 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 688 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 690 */	NdrFcShort( 0x18 ),	/* 24 */
#ifndef _ALPHA_
/* 692 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 694 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 696 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 698 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 700 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 702 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 704 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 706 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 708 */	NdrFcShort( 0x326 ),	/* Type Offset=806 */
/* 710 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 712 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 714 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 716 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 718 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 720 */	NdrFcShort( 0x19 ),	/* 25 */
#ifndef _ALPHA_
/* 722 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 724 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 726 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 728 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 730 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 732 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 734 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 736 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 738 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 740 */	NdrFcShort( 0x1a ),	/* 26 */
#ifndef _ALPHA_
/* 742 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 744 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 746 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 748 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 750 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 752 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 754 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 756 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 758 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 760 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 762 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 764 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */
/* 766 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 768 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 770 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 772 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 774 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 776 */	NdrFcShort( 0x1b ),	/* 27 */
#ifndef _ALPHA_
/* 778 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 780 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 782 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 784 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 786 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 788 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 790 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 792 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 794 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 796 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 798 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */
/* 800 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 802 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 804 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 806 */	NdrFcShort( 0x1c ),	/* 28 */
#ifndef _ALPHA_
/* 808 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 810 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 812 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 814 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 816 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 818 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 820 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 822 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 824 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 826 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 828 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 830 */	NdrFcShort( 0x1d ),	/* 29 */
#ifndef _ALPHA_
/* 832 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 834 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 836 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 838 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 840 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 842 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */
/* 844 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 846 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 848 */	NdrFcShort( 0x1e ),	/* 30 */
#ifndef _ALPHA_
/* 850 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 852 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 854 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 856 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 858 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 860 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 862 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 864 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */
/* 866 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 868 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 870 */	NdrFcShort( 0x1f ),	/* 31 */
#ifndef _ALPHA_
/* 872 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 874 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 876 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 878 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 880 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 882 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 884 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 886 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 888 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 890 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 892 */	NdrFcShort( 0x20 ),	/* 32 */
#ifndef _ALPHA_
/* 894 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 896 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 898 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 900 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 902 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 904 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 906 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 908 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 910 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 912 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 914 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 916 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 918 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 920 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 922 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 924 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 926 */	NdrFcShort( 0x21 ),	/* 33 */
#ifndef _ALPHA_
/* 928 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 930 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 932 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 934 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 936 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 938 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 940 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 942 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 944 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 946 */	NdrFcShort( 0x4b0 ),	/* Type Offset=1200 */
/* 948 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 950 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 952 */	NdrFcShort( 0x22 ),	/* 34 */
#ifndef _ALPHA_
/* 954 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 956 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 958 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 960 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 962 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 964 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 966 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 968 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 970 */	NdrFcShort( 0x326 ),	/* Type Offset=806 */
/* 972 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 974 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 976 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 978 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 980 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 982 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 984 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 986 */	NdrFcShort( 0x23 ),	/* 35 */
#ifndef _ALPHA_
/* 988 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 990 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 992 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 994 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 996 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 998 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1000 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1002 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1004 */	NdrFcShort( 0x326 ),	/* Type Offset=806 */
/* 1006 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1008 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1010 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1012 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1014 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1016 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1018 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1020 */	NdrFcShort( 0x24 ),	/* 36 */
#ifndef _ALPHA_
/* 1022 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1024 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1026 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1028 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1030 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1032 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1034 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1036 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1038 */	NdrFcShort( 0x326 ),	/* Type Offset=806 */
/* 1040 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1042 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1044 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1046 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1048 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1050 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1052 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1054 */	NdrFcShort( 0x25 ),	/* 37 */
#ifndef _ALPHA_
/* 1056 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1058 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1060 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1062 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1064 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1066 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1068 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1070 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1072 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1074 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1076 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1078 */	NdrFcShort( 0x26 ),	/* 38 */
#ifndef _ALPHA_
/* 1080 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1082 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1084 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1086 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1088 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1090 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1092 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1094 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1096 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1098 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1100 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1102 */	NdrFcShort( 0x27 ),	/* 39 */
#ifndef _ALPHA_
/* 1104 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1106 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1108 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1110 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1112 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1114 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1116 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1118 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1120 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1122 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1124 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1126 */	NdrFcShort( 0x28 ),	/* 40 */
#ifndef _ALPHA_
/* 1128 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1130 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1132 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1134 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1136 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1138 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1140 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1142 */	NdrFcShort( 0x508 ),	/* Type Offset=1288 */
/* 1144 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1146 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1148 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1150 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1152 */	NdrFcShort( 0x29 ),	/* 41 */
#ifndef _ALPHA_
/* 1154 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1156 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1158 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1160 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1162 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1164 */	NdrFcShort( 0x510 ),	/* Type Offset=1296 */
/* 1166 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1168 */	NdrFcShort( 0x496 ),	/* Type Offset=1174 */
/* 1170 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1172 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1174 */	NdrFcShort( 0x4a4 ),	/* Type Offset=1188 */
/* 1176 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1178 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1180 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1182 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1184 */	NdrFcShort( 0x2a ),	/* 42 */
#ifndef _ALPHA_
/* 1186 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1188 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 1190 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1192 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1194 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1196 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */
/* 1198 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1200 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1202 */	NdrFcShort( 0x2b ),	/* 43 */
#ifndef _ALPHA_
/* 1204 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1206 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1208 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1210 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1212 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1214 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1216 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1218 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1220 */	NdrFcShort( 0x2c ),	/* 44 */
#ifndef _ALPHA_
/* 1222 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1224 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1226 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1228 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1230 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1232 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1234 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1236 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1238 */	NdrFcShort( 0x2d ),	/* 45 */
#ifndef _ALPHA_
/* 1240 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1242 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1244 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1246 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1248 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1250 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1252 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1254 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1256 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1258 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1260 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1262 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1264 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1266 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1268 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1270 */	NdrFcShort( 0x2e ),	/* 46 */
#ifndef _ALPHA_
/* 1272 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1274 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1276 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1278 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1280 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1282 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1284 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1286 */	NdrFcShort( 0x51c ),	/* Type Offset=1308 */
/* 1288 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1290 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1292 */	NdrFcShort( 0x2f ),	/* 47 */
#ifndef _ALPHA_
/* 1294 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1296 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1298 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1300 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1302 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1304 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1306 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1308 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1310 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1312 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1314 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1316 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1318 */	NdrFcShort( 0x30 ),	/* 48 */
#ifndef _ALPHA_
/* 1320 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1322 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1324 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1326 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1328 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1330 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1332 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1334 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1336 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1338 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1340 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1342 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1344 */	NdrFcShort( 0x31 ),	/* 49 */
#ifndef _ALPHA_
/* 1346 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1348 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1350 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1352 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1354 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1356 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1358 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1360 */	NdrFcShort( 0x54c ),	/* Type Offset=1356 */
/* 1362 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1364 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1366 */	NdrFcShort( 0x32 ),	/* 50 */
#ifndef _ALPHA_
/* 1368 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1370 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1372 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1374 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1376 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1378 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1380 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1382 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1384 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1386 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1388 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1390 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1392 */	NdrFcShort( 0x33 ),	/* 51 */
#ifndef _ALPHA_
/* 1394 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1396 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1398 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1400 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1402 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1404 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1406 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1408 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1410 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1412 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1414 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 1416 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1418 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1420 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1422 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1424 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1426 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1428 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1430 */	NdrFcShort( 0x34 ),	/* 52 */
#ifndef _ALPHA_
/* 1432 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1434 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1436 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1438 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1440 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1442 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1444 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1446 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1448 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1450 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1452 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1454 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1456 */	NdrFcShort( 0x35 ),	/* 53 */
#ifndef _ALPHA_
/* 1458 */	NdrFcShort( 0x2c ),	/* x86, MIPS, PPC Stack size/offset = 44 */
#else
			NdrFcShort( 0x58 ),	/* Alpha Stack size/offset = 88 */
#endif
/* 1460 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1462 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1464 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1466 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1468 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1470 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1472 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1474 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1476 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1478 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 1480 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1482 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1484 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1486 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1488 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1490 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1492 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1494 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1496 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1498 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1500 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1502 */	NdrFcShort( 0x36 ),	/* 54 */
#ifndef _ALPHA_
/* 1504 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
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
/* 1512 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1514 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1516 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1518 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1520 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1522 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1524 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */
/* 1526 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1528 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1530 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1532 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1534 */	NdrFcShort( 0x37 ),	/* 55 */
#ifndef _ALPHA_
/* 1536 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1538 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1540 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1542 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1544 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1546 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1548 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1550 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1552 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1554 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1556 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */
/* 1558 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1560 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */
/* 1562 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1564 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1566 */	NdrFcShort( 0x38 ),	/* 56 */
#ifndef _ALPHA_
/* 1568 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1570 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1572 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1574 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1576 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1578 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1580 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1582 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1584 */	NdrFcShort( 0x39 ),	/* 57 */
#ifndef _ALPHA_
/* 1586 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1588 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1590 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1592 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1594 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1596 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1598 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1600 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1602 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1604 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1606 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1608 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1610 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1612 */	NdrFcShort( 0x3a ),	/* 58 */
#ifndef _ALPHA_
/* 1614 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1616 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1618 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1620 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1622 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1624 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1626 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1628 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 1630 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1632 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1634 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1636 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1638 */	NdrFcShort( 0x4 ),	/* Type Offset=4 */
/* 1640 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1642 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1644 */	NdrFcShort( 0x3b ),	/* 59 */
#ifndef _ALPHA_
/* 1646 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1648 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1650 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1652 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1654 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1656 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1658 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1660 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1662 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1664 */	NdrFcShort( 0x66c ),	/* Type Offset=1644 */
/* 1666 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1668 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1670 */	NdrFcShort( 0x3c ),	/* 60 */
#ifndef _ALPHA_
/* 1672 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1674 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
#ifndef _ALPHA_
/* 1676 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1678 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1680 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1682 */	NdrFcShort( 0x4a8 ),	/* Type Offset=1192 */
/* 1684 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1686 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1688 */	NdrFcShort( 0x3d ),	/* 61 */
#ifndef _ALPHA_
/* 1690 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1692 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1694 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1696 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1698 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1700 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1702 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1704 */	NdrFcShort( 0x670 ),	/* Type Offset=1648 */
/* 1706 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1708 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1710 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1712 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 1714 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1716 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1718 */	NdrFcShort( 0x3e ),	/* 62 */
#ifndef _ALPHA_
/* 1720 */	NdrFcShort( 0x20 ),	/* x86, MIPS, PPC Stack size/offset = 32 */
#else
			NdrFcShort( 0x40 ),	/* Alpha Stack size/offset = 64 */
#endif
/* 1722 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1724 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1726 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1728 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1730 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1732 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1734 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1736 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1738 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1740 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1742 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1744 */	
			0x50,		/* FC_IN_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1746 */	NdrFcShort( 0x172 ),	/* Type Offset=370 */
/* 1748 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1750 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1752 */	NdrFcShort( 0x3f ),	/* 63 */
#ifndef _ALPHA_
/* 1754 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1756 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1758 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1760 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1762 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1764 */	NdrFcShort( 0x716 ),	/* Type Offset=1814 */
/* 1766 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1768 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1770 */	NdrFcShort( 0x40 ),	/* 64 */
#ifndef _ALPHA_
/* 1772 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1774 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1776 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1778 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1780 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1782 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1784 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1786 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1788 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1790 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1792 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1794 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1796 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1798 */	NdrFcShort( 0x41 ),	/* 65 */
#ifndef _ALPHA_
/* 1800 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1802 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1804 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1806 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1808 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1810 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1812 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1814 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1816 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1818 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1820 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1822 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1824 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */
/* 1826 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1828 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1830 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1832 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1834 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1836 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1838 */	NdrFcShort( 0x71a ),	/* Type Offset=1818 */
/* 1840 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1842 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1844 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */
/* 1846 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1848 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1850 */	NdrFcShort( 0x43 ),	/* 67 */
#ifndef _ALPHA_
/* 1852 */	NdrFcShort( 0x14 ),	/* x86, MIPS, PPC Stack size/offset = 20 */
#else
			NdrFcShort( 0x28 ),	/* Alpha Stack size/offset = 40 */
#endif
/* 1854 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1856 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1858 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1860 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1862 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1864 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1866 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1868 */	NdrFcShort( 0x572 ),	/* Type Offset=1394 */
/* 1870 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1872 */	NdrFcShort( 0x5d0 ),	/* Type Offset=1488 */
/* 1874 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1876 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1878 */	NdrFcShort( 0x44 ),	/* 68 */
#ifndef _ALPHA_
/* 1880 */	NdrFcShort( 0x18 ),	/* x86, MIPS, PPC Stack size/offset = 24 */
#else
			NdrFcShort( 0x30 ),	/* Alpha Stack size/offset = 48 */
#endif
/* 1882 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 1884 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1886 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1888 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1890 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 1892 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1894 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1896 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1898 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1900 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1902 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1904 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 1906 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1908 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1910 */	NdrFcShort( 0x45 ),	/* 69 */
#ifndef _ALPHA_
/* 1912 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1914 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1916 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1918 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1920 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1922 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1924 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1926 */	NdrFcShort( 0x16 ),	/* Type Offset=22 */
/* 1928 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1930 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1932 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1934 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1936 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1938 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1940 */	NdrFcShort( 0x732 ),	/* Type Offset=1842 */
/* 1942 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1944 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1946 */	NdrFcShort( 0x46 ),	/* 70 */
#ifndef _ALPHA_
/* 1948 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1950 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1952 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1954 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1956 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1958 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1960 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1962 */	NdrFcShort( 0x180 ),	/* Type Offset=384 */
/* 1964 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1966 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1968 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1970 */	NdrFcShort( 0x1e ),	/* Type Offset=30 */
/* 1972 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1974 */	NdrFcShort( 0x732 ),	/* Type Offset=1842 */
/* 1976 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1978 */	NdrFcShort( 0x776 ),	/* Type Offset=1910 */
/* 1980 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 1982 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 1984 */	NdrFcShort( 0x47 ),	/* 71 */
#ifndef _ALPHA_
/* 1986 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1988 */	0x31,		/* FC_BIND_GENERIC */
			0x4,		/* 4 */
#ifndef _ALPHA_
/* 1990 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 1992 */	0x0,		/* 0 */
			0x5c,		/* FC_PAD */
/* 1994 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 1996 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 1998 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2000 */	NdrFcShort( 0x0 ),	/* Type Offset=0 */
/* 2002 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2004 */	NdrFcShort( 0x670 ),	/* Type Offset=1648 */
/* 2006 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 2008 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2010 */	NdrFcShort( 0x48 ),	/* 72 */
#ifndef _ALPHA_
/* 2012 */	NdrFcShort( 0x28 ),	/* x86, MIPS, PPC Stack size/offset = 40 */
#else
			NdrFcShort( 0x50 ),	/* Alpha Stack size/offset = 80 */
#endif
/* 2014 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2016 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2018 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2020 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2022 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 2024 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 2026 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2028 */	NdrFcShort( 0x77e ),	/* Type Offset=1918 */
/* 2030 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 2032 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2034 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 2036 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2038 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 2040 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2042 */	NdrFcShort( 0x78c ),	/* Type Offset=1932 */
/* 2044 */	0x4e,		/* FC_IN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 2046 */	
			0x51,		/* FC_OUT_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2048 */	NdrFcShort( 0x12 ),	/* Type Offset=18 */
/* 2050 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
			0x8,		/* FC_LONG */
/* 2052 */	0x0,		/* 0 */
			0x40,		/* 64 */
/* 2054 */	NdrFcShort( 0x49 ),	/* 73 */
#ifndef _ALPHA_
/* 2056 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 2058 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
#ifndef _ALPHA_
/* 2060 */	NdrFcShort( 0x0 ),	/* x86, MIPS, PPC Stack size/offset = 0 */
#else
			NdrFcShort( 0x0 ),	/* Alpha Stack size/offset = 0 */
#endif
/* 2062 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 2064 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2066 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */
/* 2068 */	
			0x4d,		/* FC_IN_PARAM */
#ifndef _ALPHA_
			0x1,		/* x86, MIPS & PPC Stack size = 1 */
#else
			0x2,		/* Alpha Stack size = 2 */
#endif
/* 2070 */	NdrFcShort( 0x43e ),	/* Type Offset=1086 */
/* 2072 */	0x53,		/* FC_RETURN_PARAM_BASETYPE */
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
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 20 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 22 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 24 */	NdrFcShort( 0x2 ),	/* Offset= 2 (26) */
/* 26 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 28 */	0x0,		/* 0 */
			0x1,		/* 1 */
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
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 800 */	NdrFcShort( 0x2 ),	/* Offset= 2 (802) */
/* 802 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 804 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 806 */	
			0x12, 0x0,	/* FC_UP */
/* 808 */	NdrFcShort( 0x2 ),	/* Offset= 2 (810) */
/* 810 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 814 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 816 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 818 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 820 */	
			0x11, 0x0,	/* FC_RP */
/* 822 */	NdrFcShort( 0xfa ),	/* Offset= 250 (1072) */
/* 824 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 826 */	0x8,		/* 8 */
			0x0,		/*  */
/* 828 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 830 */	NdrFcShort( 0x2 ),	/* Offset= 2 (832) */
/* 832 */	NdrFcShort( 0x4 ),	/* 4 */
/* 834 */	NdrFcShort( 0x3003 ),	/* 12291 */
/* 836 */	NdrFcLong( 0x1 ),	/* 1 */
/* 840 */	NdrFcShort( 0x10 ),	/* Offset= 16 (856) */
/* 842 */	NdrFcLong( 0x2 ),	/* 2 */
/* 846 */	NdrFcShort( 0x22 ),	/* Offset= 34 (880) */
/* 848 */	NdrFcLong( 0x3 ),	/* 3 */
/* 852 */	NdrFcShort( 0x60 ),	/* Offset= 96 (948) */
/* 854 */	NdrFcShort( 0x0 ),	/* Offset= 0 (854) */
/* 856 */	
			0x12, 0x1,	/* FC_UP [all_nodes] */
/* 858 */	NdrFcShort( 0x2 ),	/* Offset= 2 (860) */
/* 860 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x4 ),	/* 4 */
/* 864 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 866 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 874 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 876 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 878 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 880 */	
			0x12, 0x0,	/* FC_UP */
/* 882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (884) */
/* 884 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 886 */	NdrFcShort( 0x18 ),	/* 24 */
/* 888 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 890 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 892 */	NdrFcShort( 0x4 ),	/* 4 */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 898 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 900 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 906 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 908 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 912 */	NdrFcShort( 0xc ),	/* 12 */
/* 914 */	NdrFcShort( 0xc ),	/* 12 */
/* 916 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 918 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 920 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 922 */	NdrFcShort( 0x10 ),	/* 16 */
/* 924 */	NdrFcShort( 0x10 ),	/* 16 */
/* 926 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 928 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 932 */	NdrFcShort( 0x14 ),	/* 20 */
/* 934 */	NdrFcShort( 0x14 ),	/* 20 */
/* 936 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 938 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 940 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 942 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 944 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 946 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 948 */	
			0x12, 0x0,	/* FC_UP */
/* 950 */	NdrFcShort( 0xc ),	/* Offset= 12 (962) */
/* 952 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 954 */	NdrFcShort( 0x2 ),	/* 2 */
/* 956 */	0x18,		/* 24 */
			0x0,		/*  */
/* 958 */	NdrFcShort( 0x24 ),	/* 36 */
/* 960 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 962 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 964 */	NdrFcShort( 0x2c ),	/* 44 */
/* 966 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 968 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 970 */	NdrFcShort( 0x4 ),	/* 4 */
/* 972 */	NdrFcShort( 0x4 ),	/* 4 */
/* 974 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 976 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 978 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 984 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 986 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 988 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 990 */	NdrFcShort( 0xc ),	/* 12 */
/* 992 */	NdrFcShort( 0xc ),	/* 12 */
/* 994 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 996 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 998 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1000 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1002 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1004 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1006 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1008 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1010 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1012 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1014 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1016 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1018 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1020 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1022 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1024 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1026 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1028 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1030 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1032 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1034 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1036 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1038 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1040 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1042 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1044 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1046 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1048 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1050 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1052 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1054 */	0x12, 0x0,	/* FC_UP */
/* 1056 */	NdrFcShort( 0xffffff98 ),	/* Offset= -104 (952) */
/* 1058 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1060 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1062 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1064 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1066 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1068 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1070 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1072 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1078) */
/* 1080 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1082 */	0x0,		/* 0 */
			NdrFcShort( 0xfffffefd ),	/* Offset= -259 (824) */
			0x5b,		/* FC_END */
/* 1086 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1088 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1090 */	
			0x11, 0x0,	/* FC_RP */
/* 1092 */	NdrFcShort( 0x44 ),	/* Offset= 68 (1160) */
/* 1094 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1096 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1098 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1100 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1102) */
/* 1102 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1104 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1106 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1110 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1114) */
/* 1112 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1112) */
/* 1114 */	
			0x12, 0x0,	/* FC_UP */
/* 1116 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1118) */
/* 1118 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1120 */	NdrFcShort( 0xc ),	/* 12 */
/* 1122 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1124 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1132 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1134 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1136 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1138 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1140 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1144 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1150 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1152 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1154 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1156 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1158 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1160 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1166 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1166) */
/* 1168 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1170 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffb3 ),	/* Offset= -77 (1094) */
			0x5b,		/* FC_END */
/* 1174 */	
			0x11, 0x0,	/* FC_RP */
/* 1176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1178) */
/* 1178 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1182 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1184 */	NdrFcShort( 0x8 ),	/* x86, MIPS, PPC Stack size/offset = 8 */
#else
			NdrFcShort( 0x10 ),	/* Alpha Stack size/offset = 16 */
#endif
/* 1186 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */
/* 1188 */	
			0x11, 0x0,	/* FC_RP */
/* 1190 */	NdrFcShort( 0xfffffb62 ),	/* Offset= -1182 (8) */
/* 1192 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1194 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1196) */
/* 1196 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 1198 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1200 */	
			0x11, 0x0,	/* FC_RP */
/* 1202 */	NdrFcShort( 0x48 ),	/* Offset= 72 (1274) */
/* 1204 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1206 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1208 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1210 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1212) */
/* 1212 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1214 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1216 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1220 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1224) */
/* 1222 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1222) */
/* 1224 */	
			0x12, 0x0,	/* FC_UP */
/* 1226 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1246) */
/* 1228 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1232 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1234 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1236 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1238 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1242 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1246 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1248 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1250 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1252 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1254 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1256 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1258 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1260 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1262 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1264 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1266 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd9 ),	/* Offset= -39 (1228) */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1270 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffdd ),	/* Offset= -35 (1236) */
			0x5b,		/* FC_END */
/* 1274 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1280 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1280) */
/* 1282 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1284 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffaf ),	/* Offset= -81 (1204) */
			0x5b,		/* FC_END */
/* 1288 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1290 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1292) */
/* 1292 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 1294 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1296 */	0x30,		/* FC_BIND_CONTEXT */
			0x40,		/* 64 */
/* 1298 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1300 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1302 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1304) */
/* 1304 */	0x30,		/* FC_BIND_CONTEXT */
			0xe0,		/* 224 */
/* 1306 */	0x1,		/* 1 */
			0x0,		/* 0 */
/* 1308 */	
			0x11, 0x0,	/* FC_RP */
/* 1310 */	NdrFcShort( 0x20 ),	/* Offset= 32 (1342) */
/* 1312 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1314 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1316 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1318 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1320) */
/* 1320 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1322 */	NdrFcShort( 0x3002 ),	/* 12290 */
/* 1324 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1328 */	NdrFcShort( 0xa ),	/* Offset= 10 (1338) */
/* 1330 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1334 */	NdrFcShort( 0xffffff24 ),	/* Offset= -220 (1114) */
/* 1336 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1336) */
/* 1338 */	
			0x12, 0x0,	/* FC_UP */
/* 1340 */	NdrFcShort( 0xfffffe20 ),	/* Offset= -480 (860) */
/* 1342 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1348) */
/* 1350 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1352 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffd7 ),	/* Offset= -41 (1312) */
			0x5b,		/* FC_END */
/* 1356 */	
			0x11, 0x0,	/* FC_RP */
/* 1358 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1380) */
/* 1360 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1362 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1364 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1366 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1368) */
/* 1368 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1370 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1372 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1376 */	NdrFcShort( 0xfffffefa ),	/* Offset= -262 (1114) */
/* 1378 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1378) */
/* 1380 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1382 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1386 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1386) */
/* 1388 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1390 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffe1 ),	/* Offset= -31 (1360) */
			0x5b,		/* FC_END */
/* 1394 */	
			0x12, 0x0,	/* FC_UP */
/* 1396 */	NdrFcShort( 0x46 ),	/* Offset= 70 (1466) */
/* 1398 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1400 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1402 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1404 */	NdrFcShort( 0xc ),	/* 12 */
/* 1406 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1408 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1410 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1412 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1414 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1416 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1418 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1420 */	0x12, 0x0,	/* FC_UP */
/* 1422 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1398) */
/* 1424 */	
			0x5b,		/* FC_END */

			0x6,		/* FC_SHORT */
/* 1426 */	0x6,		/* FC_SHORT */
			0x38,		/* FC_ALIGNM4 */
/* 1428 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1430 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1432 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1434 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1436 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1438 */	0x18,		/* 24 */
			0x0,		/*  */
/* 1440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1442 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1444 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1446 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1452 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1454 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1456 */	0x12, 0x0,	/* FC_UP */
/* 1458 */	NdrFcShort( 0xffffffc4 ),	/* Offset= -60 (1398) */
/* 1460 */	
			0x5b,		/* FC_END */

			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1462 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc9 ),	/* Offset= -55 (1408) */
			0x5b,		/* FC_END */
/* 1466 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1468 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1470 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1472 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1474 */	NdrFcShort( 0xc ),	/* 12 */
/* 1476 */	NdrFcShort( 0xc ),	/* 12 */
/* 1478 */	0x12, 0x0,	/* FC_UP */
/* 1480 */	NdrFcShort( 0xffffffd2 ),	/* Offset= -46 (1434) */
/* 1482 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1484 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1486 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1488 */	
			0x11, 0x10,	/* FC_RP */
/* 1490 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1492) */
/* 1492 */	
			0x12, 0x0,	/* FC_UP */
/* 1494 */	NdrFcShort( 0x8a ),	/* Offset= 138 (1632) */
/* 1496 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1498 */	0x0,		/* 0 */
			0x59,		/* FC_CALLBACK */
/* 1500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1502 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1504) */
/* 1504 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1506 */	NdrFcShort( 0x3005 ),	/* 12293 */
/* 1508 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1512 */	NdrFcShort( 0x26 ),	/* Offset= 38 (1550) */
/* 1514 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1518 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1570) */
/* 1520 */	NdrFcLong( 0x4 ),	/* 4 */
/* 1524 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1576) */
/* 1526 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1530 */	NdrFcShort( 0xfffffa32 ),	/* Offset= -1486 (44) */
/* 1532 */	NdrFcLong( 0x5 ),	/* 5 */
/* 1536 */	NdrFcShort( 0xfffffa2c ),	/* Offset= -1492 (44) */
/* 1538 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1537) */
/* 1540 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1542 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1544 */	0x18,		/* 24 */
			0x55,		/* FC_DIV_2 */
/* 1546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1548 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1550 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1554 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1556 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1558 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1560 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1562 */	0x12, 0x0,	/* FC_UP */
/* 1564 */	NdrFcShort( 0xffffffe8 ),	/* Offset= -24 (1540) */
/* 1566 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1568 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1570 */	
			0x1d,		/* FC_SMFARRAY */
			0x3,		/* 3 */
/* 1572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1574 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1576 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1580 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1582 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1584 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1586 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1588 */	0x12, 0x0,	/* FC_UP */
/* 1590 */	NdrFcShort( 0xfffffa36 ),	/* Offset= -1482 (108) */
/* 1592 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1594 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1596 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1598 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1602) */
/* 1604 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1606 */	0x38,		/* FC_ALIGNM4 */
			0x8,		/* FC_LONG */
/* 1608 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1610 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff8d ),	/* Offset= -115 (1496) */
			0x5b,		/* FC_END */
/* 1614 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1620 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1622 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1626 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1628 */	NdrFcShort( 0xffffffe0 ),	/* Offset= -32 (1596) */
/* 1630 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1632 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1634 */	NdrFcShort( 0xc ),	/* 12 */
/* 1636 */	NdrFcShort( 0xffffffea ),	/* Offset= -22 (1614) */
/* 1638 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1638) */
/* 1640 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1642 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1644 */	
			0x12, 0x0,	/* FC_UP */
/* 1646 */	NdrFcShort( 0xfffffe2c ),	/* Offset= -468 (1178) */
/* 1648 */	
			0x11, 0x0,	/* FC_RP */
/* 1650 */	NdrFcShort( 0x96 ),	/* Offset= 150 (1800) */
/* 1652 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1654 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1656 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1658 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1660) */
/* 1660 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1662 */	NdrFcShort( 0x3004 ),	/* 12292 */
/* 1664 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1668 */	NdrFcShort( 0xfffffeb6 ),	/* Offset= -330 (1338) */
/* 1670 */	NdrFcLong( 0x2 ),	/* 2 */
/* 1674 */	NdrFcShort( 0x10 ),	/* Offset= 16 (1690) */
/* 1676 */	NdrFcLong( 0x3 ),	/* 3 */
/* 1680 */	NdrFcShort( 0x3a ),	/* Offset= 58 (1738) */
/* 1682 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1686 */	NdrFcShort( 0x4e ),	/* Offset= 78 (1764) */
/* 1688 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1688) */
/* 1690 */	
			0x12, 0x0,	/* FC_UP */
/* 1692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1694) */
/* 1694 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1696 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1698 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1700 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1706 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1708 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1710 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1712 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1714 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1716 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1718 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1720 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1726 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1728 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1730 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1732 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1734 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1736 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1738 */	
			0x12, 0x0,	/* FC_UP */
/* 1740 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1742) */
/* 1742 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1744 */	NdrFcShort( 0xc ),	/* 12 */
/* 1746 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1748 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1750 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1752 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1754 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1756 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1758 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1760 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1762 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1764 */	
			0x12, 0x0,	/* FC_UP */
/* 1766 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1768) */
/* 1768 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1770 */	NdrFcShort( 0xc ),	/* 12 */
/* 1772 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1774 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1780 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1782 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1784 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1790 */	0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1792 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1794 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1796 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1798 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1800 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1806 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1806) */
/* 1808 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1810 */	0x0,		/* 0 */
			NdrFcShort( 0xffffff61 ),	/* Offset= -159 (1652) */
			0x5b,		/* FC_END */
/* 1814 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 1816 */	0x5,		/* FC_WCHAR */
			0x5c,		/* FC_PAD */
/* 1818 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1820 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1822 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1824 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1826 */	NdrFcShort( 0x10 ),	/* x86, MIPS, PPC Stack size/offset = 16 */
#else
			NdrFcShort( 0x20 ),	/* Alpha Stack size/offset = 32 */
#endif
/* 1828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1830) */
/* 1830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1832 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0xfffffea6 ),	/* Offset= -346 (1492) */
/* 1840 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1839) */
/* 1842 */	
			0x11, 0x0,	/* FC_RP */
/* 1844 */	NdrFcShort( 0x34 ),	/* Offset= 52 (1896) */
/* 1846 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x8,		/* FC_LONG */
/* 1848 */	0x8,		/* 8 */
			0x0,		/*  */
/* 1850 */	NdrFcShort( 0xfffffffc ),	/* -4 */
/* 1852 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1854) */
/* 1854 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1856 */	NdrFcShort( 0x3001 ),	/* 12289 */
/* 1858 */	NdrFcLong( 0x1 ),	/* 1 */
/* 1862 */	NdrFcShort( 0x4 ),	/* Offset= 4 (1866) */
/* 1864 */	NdrFcShort( 0xffffffff ),	/* Offset= -1 (1863) */
/* 1866 */	
			0x12, 0x0,	/* FC_UP */
/* 1868 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1870) */
/* 1870 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1872 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1876 */	NdrFcShort( 0xc ),	/* Offset= 12 (1888) */
/* 1878 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1880 */	0x36,		/* FC_POINTER */
			0x8,		/* FC_LONG */
/* 1882 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1884 */	0x6,		/* FC_SHORT */
			0x3e,		/* FC_STRUCTPAD2 */
/* 1886 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1888 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1890 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1892 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1894 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 1896 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1902 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1902) */
/* 1904 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1906 */	0x0,		/* 0 */
			NdrFcShort( 0xffffffc3 ),	/* Offset= -61 (1846) */
			0x5b,		/* FC_END */
/* 1910 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1912 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1914) */
/* 1914 */	0x30,		/* FC_BIND_CONTEXT */
			0xa0,		/* 160 */
/* 1916 */	0x0,		/* 0 */
			0x5,		/* 5 */
/* 1918 */	
			0x11, 0x0,	/* FC_RP */
/* 1920 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1922) */
/* 1922 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1924 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1926 */	0x28,		/* 40 */
			0x55,		/* FC_DIV_2 */
#ifndef _ALPHA_
/* 1928 */	NdrFcShort( 0xc ),	/* x86, MIPS, PPC Stack size/offset = 12 */
#else
			NdrFcShort( 0x18 ),	/* Alpha Stack size/offset = 24 */
#endif
/* 1930 */	0x5,		/* FC_WCHAR */
			0x5b,		/* FC_END */
/* 1932 */	
			0x11, 0x0,	/* FC_RP */
/* 1934 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1936) */
/* 1936 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1938 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1940 */	0x28,		/* 40 */
			0x0,		/*  */
#ifndef _ALPHA_
/* 1942 */	NdrFcShort( 0x1c ),	/* x86, MIPS, PPC Stack size/offset = 28 */
#else
			NdrFcShort( 0x38 ),	/* Alpha Stack size/offset = 56 */
#endif
/* 1944 */	0x2,		/* FC_CHAR */
			0x5b,		/* FC_END */

			0x0
        }
    };
