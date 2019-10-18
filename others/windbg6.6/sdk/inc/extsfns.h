/*++

Copyright (c) 1992-2002  Microsoft Corporation

Module Name:

    extsfns.h

Abstract:

    This header file must be included after "windows.h", "dbgeng.h", and
    "wdbgexts.h".

    This file contains headers for various known extension functions defined
    in different extension dlls. To use these functions, the appropriate
    extension dll must be loaded in the debugger. IDebugSymbols->GetExtension
    (declared in dbgeng.h) method could be used to retrieve these functions.

    Please see the Debugger documentation for specific information about how
    to write your own debugger extension DLL.

Environment:

    Win32 only.

Revision History:

--*/



#ifndef _EXTFNS_H
#define _EXTFNS_H

#define _EXTSAPI_VER_ 3

#ifndef _KDEXTSFN_H
#define _KDEXTSFN_H

/*
 *  Extension functions defined in kdexts.dll
 */

//
// device.c
//
typedef struct _DEBUG_DEVICE_OBJECT_INFO {
    ULONG      SizeOfStruct; // must be == sizeof(DEBUG_DEVICE_OBJECT_INFO)
    ULONG64    DevObjAddress;
    ULONG      ReferenceCount;
    BOOL       QBusy;
    ULONG64    DriverObject;
    ULONG64    CurrentIrp;
    ULONG64    DevExtension;
    ULONG64    DevObjExtension;
} DEBUG_DEVICE_OBJECT_INFO, *PDEBUG_DEVICE_OBJECT_INFO;


// GetDevObjInfo
typedef HRESULT
(WINAPI *PGET_DEVICE_OBJECT_INFO)(
    IN PDEBUG_CLIENT Client,
    IN ULONG64 DeviceObject,
    OUT PDEBUG_DEVICE_OBJECT_INFO pDevObjInfo);


//
// driver.c
//
typedef struct _DEBUG_DRIVER_OBJECT_INFO {
    ULONG     SizeOfStruct; // must be == sizeof(DEBUG_DRIVER_OBJECT_INFO)
    ULONG     DriverSize;
    ULONG64   DriverObjAddress;
    ULONG64   DriverStart;
    ULONG64   DriverExtension;
    ULONG64   DeviceObject;
    struct {
        USHORT Length;
        USHORT MaximumLength;
        ULONG64 Buffer;
    } DriverName;
} DEBUG_DRIVER_OBJECT_INFO, *PDEBUG_DRIVER_OBJECT_INFO;

// GetDrvObjInfo
typedef HRESULT
(WINAPI *PGET_DRIVER_OBJECT_INFO)(
    IN PDEBUG_CLIENT Client,
    IN ULONG64 DriverObject,
    OUT PDEBUG_DRIVER_OBJECT_INFO pDrvObjInfo);

//
// dump.cpp
//
typedef struct _DEBUG_CPU_SPEED_INFO {
    ULONG SizeOfStruct; // must be == sizeof(DEBUG_CPU_SPEED_INFO)
    ULONG CurrentSpeed;
    ULONG RatedSpeed;
    WCHAR NameString[256];
} DEBUG_CPU_SPEED_INFO, *PDEBUG_CPU_SPEED_INFO;

typedef HRESULT
(WINAPI *PGET_CPU_PSPEED_INFO)(
    IN  PDEBUG_CLIENT         Client,
    OUT PDEBUG_CPU_SPEED_INFO pCpuSpeedInfo);

typedef struct _DEBUG_CPU_MICROCODE_VERSION {
    ULONG         SizeOfStruct; // must be == sizeof(DEBUG_CPU_MICROCODE_VERSION)
    LARGE_INTEGER CachedSignature;
    LARGE_INTEGER InitialSignature;
    ULONG         ProcessorModel;
    ULONG         ProcessorFamily;
    ULONG         ProcessorStepping;    // ProcessorRevision on IA64
    ULONG         ProcessorArchRev;     // IA64?
} DEBUG_CPU_MICROCODE_VERSION, *PDEBUG_CPU_MICROCODE_VERSION;

typedef HRESULT
(WINAPI *PGET_CPU_MICROCODE_VERSION)(
    IN  PDEBUG_CLIENT                Client,
    OUT PDEBUG_CPU_MICROCODE_VERSION pCpuMicrocodeVersion);

typedef struct _DEBUG_SMBIOS_INFO {
    ULONG SizeOfStruct;
    UCHAR SmbiosMajorVersion;
    UCHAR SmbiosMinorVersion;
    UCHAR DMIVersion;
    ULONG TableSize;
    UCHAR BiosMajorRelease;
    UCHAR BiosMinorRelease;
    UCHAR FirmwareMajorRelease;
    UCHAR FirmwareMinorRelease;
    CHAR  BaseBoardManufacturer[64];
    CHAR  BaseBoardProduct[64];
    CHAR  BaseBoardVersion[64];
    CHAR  BiosReleaseDate[64];
    CHAR  BiosVendor[64];
    CHAR  BiosVersion[64];
    CHAR  SystemFamily[64];
    CHAR  SystemManufacturer[64];
    CHAR  SystemProductName[64];
    CHAR  SystemSKU[64];
    CHAR  SystemVersion[64];
} DEBUG_SMBIOS_INFO, *PDEBUG_SMBIOS_INFO;

typedef HRESULT
(WINAPI *PGET_SMBIOS_INFO)(
    IN  PDEBUG_CLIENT       Client,
    OUT PDEBUG_SMBIOS_INFO  pSmbiosInfo
    );

//
// irp.c
//
typedef struct _DEBUG_IRP_STACK_INFO {
    UCHAR     Major;
    UCHAR     Minor;
    ULONG64   DeviceObject;
    ULONG64   FileObject;
    ULONG64   CompletionRoutine;
    ULONG64   StackAddress;
} DEBUG_IRP_STACK_INFO, *PDEBUG_IRP_STACK_INFO;

typedef struct _DEBUG_IRP_INFO {
    ULONG     SizeOfStruct;  // Must be == sizeof(DEBUG_IRP_INFO)
    ULONG64   IrpAddress;
    ULONG     StackCount;
    ULONG     CurrentLocation;
    ULONG64   MdlAddress;
    ULONG64   Thread;
    ULONG64   CancelRoutine;
    DEBUG_IRP_STACK_INFO CurrentStack;
} DEBUG_IRP_INFO, *PDEBUG_IRP_INFO;

// GetIrpInfo
typedef HRESULT
(WINAPI * PGET_IRP_INFO)(
    IN PDEBUG_CLIENT Client,
    IN ULONG64 Irp,
    OUT PDEBUG_IRP_INFO IrpInfo
    );

//
// pnpexts.cpp
//
typedef struct _DDEBUG_PNP_TRIAGE_INFO {
    ULONG   SizeOfStruct; // must be == sizeof(DEBUG_PNP_TRIAGE_INFO)
    ULONG64 Lock_Address;
    LONG    Lock_ActiveCount;
    ULONG   Lock_ContentionCount;
    ULONG   Lock_NumberOfExclusiveWaiters;
    ULONG   Lock_NumberOfSharedWaiters;
    USHORT  Lock_Flag;
    ULONG64 TriagedThread;
    LONG    ThreadCount;
    ULONG64 TriagedThread_WaitTime;
    //ULONG64 PpDeviceActionThread;
    //ULONG64 PpDeviceEventThread;
} DEBUG_PNP_TRIAGE_INFO, *PDEBUG_PNP_TRIAGE_INFO;

//
// pnpexts.cpp (GetPNPTriageInfo)
//
typedef HRESULT
(WINAPI *PGET_PNP_TRIAGE_INFO)(
    IN PDEBUG_CLIENT Client,
    OUT PDEBUG_PNP_TRIAGE_INFO pPNPTriageInfo);


//
// pool.c
//
typedef struct _DEBUG_POOL_DATA {
    ULONG   SizeofStruct;
    ULONG64 PoolBlock;
    ULONG64 Pool;
    ULONG   PreviousSize;
    ULONG   Size;
    ULONG   PoolTag;
    ULONG64 ProcessBilled;
    union {
        struct {
            ULONG   Free:1;
            ULONG   LargePool:1;
            ULONG   SpecialPool:1;
            ULONG   Pageable:1;
            ULONG   Protected:1;
            ULONG   Allocated:1;
            ULONG   Reserved:26;
        };
        ULONG AsUlong;
    };
    ULONG64 Reserved2[4];
    CHAR    PoolTagDescription[64];
} DEBUG_POOL_DATA, *PDEBUG_POOL_DATA;


// GetPoolData
typedef HRESULT
(WINAPI *PGET_POOL_DATA)(
    PDEBUG_CLIENT Client,
    ULONG64 Pool,
    PDEBUG_POOL_DATA PoolData
    );

typedef enum _DEBUG_POOL_REGION {
    DbgPoolRegionUnknown,
    DbgPoolRegionSpecial,
    DbgPoolRegionPaged,
    DbgPoolRegionNonPaged,
    DbgPoolRegionCode,
    DbgPoolRegionNonPagedExpansion,
    DbgPoolRegionSessionPaged,
    DbgPoolRegionMax,
} DEBUG_POOL_REGION;

// GetPoolRegion
typedef HRESULT
(WINAPI  *PGET_POOL_REGION)(
     PDEBUG_CLIENT Client,
     ULONG64 Pool,
     DEBUG_POOL_REGION *PoolRegion
     );

//
// Proces.c: FindMatchingThread
//
typedef struct _KDEXT_THREAD_FIND_PARAMS {
    ULONG    SizeofStruct;
    ULONG64  StackPointer;
    ULONG    Cid;
    ULONG64  Thread;
} KDEXT_THREAD_FIND_PARAMS, *PKDEXT_THREAD_FIND_PARAMS;

typedef HRESULT
(WINAPI *PFIND_MATCHING_THREAD)(
    PDEBUG_CLIENT Client,
    PKDEXT_THREAD_FIND_PARAMS ThreadInfo
    );

//
// FindFileLockOwnerInfo
//
typedef struct _KDEXT_FILELOCK_OWNER {
    ULONG Sizeofstruct;
    ULONG64 FileObject;            // IN  File object whose owner is to be searched
    ULONG64 OwnerThread;           // OUT Thread owning file object
    ULONG64 WaitIrp;               // OUT Irp associated with file object in hte thread
    ULONG64 DeviceObject;          // OUT Device object on which IRP is blocked
    CHAR    BlockingDirver[32];    // OUT Driver for the device object
} KDEXT_FILELOCK_OWNER, *PKDEXT_FILELOCK_OWNER;

typedef HRESULT
(WINAPI *PFIND_FILELOCK_OWNERINFO)(
    PDEBUG_CLIENT Client,
    PKDEXT_FILELOCK_OWNER pFileLockOwner
    );

//
// locks
//
typedef struct _KDEXTS_LOCK_INFO {
    ULONG SizeOfStruct;
    ULONG64 Address;
    ULONG64 OwningThread;
    BOOL  ExclusiveOwned;
    ULONG NumOwners;
    ULONG ContentionCount;
    ULONG NumExclusiveWaiters;     // threads waiting on exclusive access
    ULONG NumSharedWaiters;        // threads waiting on shared access
    PULONG64 pOwnerThreads;        // Array of thread addresses [NumOwners] owning lock
                                   // Set by Lock enumerator, caller needs to preserve value before return
    PULONG64 pWaiterThreads;       // Array of thread addresses [NumExclusiveWaiters]
                                   // Set by Lock enumerator, caller needs to preserve value before return
} KDEXTS_LOCK_INFO,*PKDEXTS_LOCK_INFO;

typedef HRESULT
(WINAPI *KDEXTS_LOCK_CALLBACKROUTINE)(PKDEXTS_LOCK_INFO pLock,
                                      PVOID Context);

#define KDEXTS_LOCK_CALLBACKROUTINE_DEFINED 2


//
// EnumerateSystemLocks
//     Enumerates owned locks and calls CallbackRoutine on all owned/active locks.
//
typedef HRESULT
(WINAPI *PENUMERATE_SYSTEM_LOCKS)(
    PDEBUG_CLIENT Client,
    ULONG Flags,
    KDEXTS_LOCK_CALLBACKROUTINE Callback,
    PVOID Context
    );

#endif // _KDEXTSFN_H


#ifndef _KEXTFN_H
#define _KEXTFN_H

/*
 *  Extension functions defined in kext.dll
 */

/*****************************************************************************
        PoolTag definitions
 *****************************************************************************/

typedef struct _DEBUG_POOLTAG_DESCRIPTION {
    ULONG  SizeOfStruct; // must be == sizeof(DEBUG_POOLTAG_DESCRIPTION)
    ULONG  PoolTag;
    CHAR   Description[MAX_PATH];
    CHAR   Binary[32];
    CHAR   Owner[32];
} DEBUG_POOLTAG_DESCRIPTION, *PDEBUG_POOLTAG_DESCRIPTION;

// GetPoolTagDescription
typedef HRESULT
(WINAPI *PGET_POOL_TAG_DESCRIPTION)(
    ULONG PoolTag,
    PDEBUG_POOLTAG_DESCRIPTION pDescription
    );

#endif // _KEXTFN_H

#ifndef _EXTAPIS_H
#define _EXTAPIS_H

/*
 *  Extension functions defined in ext.dll
 */

/*****************************************************************************
        Failure analysis definitions
 *****************************************************************************/

typedef enum _DEBUG_FAILURE_TYPE {
    DEBUG_FLR_UNKNOWN,
    DEBUG_FLR_KERNEL,
    DEBUG_FLR_USER_CRASH,
    DEBUG_FLR_IE_CRASH,
} DEBUG_FAILURE_TYPE;

/*
    Each analysis entry can have associated data with it.  The
    analyzer knows how to handle each of these entries.
    For example it could do a !driver on a DEBUG_FLR_DRIVER_OBJECT
    or it could do a .cxr and k on a DEBUG_FLR_CONTEXT.
*/
typedef enum _DEBUG_FLR_PARAM_TYPE {
    DEBUG_FLR_INVALID = 0,
    DEBUG_FLR_RESERVED,
    DEBUG_FLR_DRIVER_OBJECT,
    DEBUG_FLR_DEVICE_OBJECT,
    DEBUG_FLR_INVALID_PFN,
    DEBUG_FLR_WORKER_ROUTINE,
    DEBUG_FLR_WORK_ITEM,
    DEBUG_FLR_INVALID_DPC_FOUND,
    DEBUG_FLR_PROCESS_OBJECT,
    // Address for which an instruction could not be executed,
    // such as invalid instructions or attempts to execute
    // non-instruction memory.
    DEBUG_FLR_FAILED_INSTRUCTION_ADDRESS,
    DEBUG_FLR_LAST_CONTROL_TRANSFER,
    DEBUG_FLR_ACPI_EXTENSION,
    DEBUG_FLR_ACPI_RESCONFLICT,
    DEBUG_FLR_ACPI_OBJECT,
    DEBUG_FLR_READ_ADDRESS,
    DEBUG_FLR_WRITE_ADDRESS,
    DEBUG_FLR_CRITICAL_SECTION,
    DEBUG_FLR_BAD_HANDLE,
    DEBUG_FLR_INVALID_HEAP_ADDRESS,
    DEBUG_FLR_CHKIMG_EXTENSION,
    DEBUG_FLR_USBPORT_OCADATA,
    DEBUG_FLR_WORK_QUEUE_ITEM,
    DEBUG_FLR_ERESOURCE_ADDRESS,  // ERESOURCE, use !locks to display this
    DEBUG_FLR_PNP_TRIAGE_DATA, // DEBUG_PNP_TRIAGE_INFO struct
    DEBUG_FLR_HANDLE_VALUE,

    DEBUG_FLR_IRP_ADDRESS = 0x100,
    DEBUG_FLR_IRP_MAJOR_FN,
    DEBUG_FLR_IRP_MINOR_FN,
    DEBUG_FLR_IRP_CANCEL_ROUTINE,
    DEBUG_FLR_IOSB_ADDRESS,
    DEBUG_FLR_INVALID_USEREVENT,
    DEBUG_FLR_VIDEO_TDR_CONTEXT,

    // Previous mode 0 == KernelMode , 1 == UserMode
    DEBUG_FLR_PREVIOUS_MODE,

    // Irql
    DEBUG_FLR_CURRENT_IRQL = 0x200,
    DEBUG_FLR_PREVIOUS_IRQL,
    DEBUG_FLR_REQUESTED_IRQL,

    // Exceptions
    DEBUG_FLR_ASSERT_DATA = 0x300,
    DEBUG_FLR_ASSERT_FILE,
    DEBUG_FLR_EXCEPTION_PARAMETER1,
    DEBUG_FLR_EXCEPTION_PARAMETER2,
    DEBUG_FLR_EXCEPTION_PARAMETER3,
    DEBUG_FLR_EXCEPTION_PARAMETER4,
    DEBUG_FLR_EXCEPTION_RECORD,
    DEBUG_FLR_IO_ERROR_CODE,
    DEBUG_FLR_EXCEPTION_STR,
    DEBUG_FLR_EXCEPTION_DOESNOT_MATCH_CODE, // address causing read/write av was'nt referred in code
    DEBUG_FLR_ASSERT_INSTRUCTION,

    // Pool
    DEBUG_FLR_POOL_ADDRESS = 0x400,
    DEBUG_FLR_SPECIAL_POOL_CORRUPTION_TYPE,
    DEBUG_FLR_CORRUPTING_POOL_ADDRESS,
    DEBUG_FLR_CORRUPTING_POOL_TAG,
    DEBUG_FLR_FREED_POOL_TAG,


    // Filesystem
    DEBUG_FLR_FILE_ID = 0x500,
    DEBUG_FLR_FILE_LINE,

    // bugcheck data
    DEBUG_FLR_BUGCHECK_STR = 0x600,
    DEBUG_FLR_BUGCHECK_SPECIFIER,

    // Managed code stuff
    DEBUG_FLR_MANAGED_CODE = 0x700,
    DEBUG_FLR_MANAGED_OBJECT,
    DEBUG_FLR_MANAGED_EXCEPTION_OBJECT,
    DEBUG_FLR_MANAGED_EXCEPTION_MESSAGE,
    DEBUG_FLR_MANAGED_STACK_STRING,


    // Constant values / exception code / bugcheck subtypes etc
    DEBUG_FLR_DRIVER_VERIFIER_IO_VIOLATION_TYPE = 0x1000,
    DEBUG_FLR_EXCEPTION_CODE,
    DEBUG_FLR_EXCEPTION_CODE_STR,
    DEBUG_FLR_SPARE2,
    DEBUG_FLR_IOCONTROL_CODE,
    DEBUG_FLR_MM_INTERNAL_CODE,
    DEBUG_FLR_DRVPOWERSTATE_SUBCODE,
    DEBUG_FLR_STATUS_CODE,
    DEBUG_FLR_SYMBOL_STACK_INDEX,
    DEBUG_FLR_SYMBOL_ON_RAW_STACK,
    DEBUG_FLR_SECURITY_COOKIES,
    DEBUG_FLR_THREADPOOL_WAITER,
    DEBUG_FLR_TARGET_MODE,  // Value is DEBUG_FAILURE_TYPE
    DEBUG_FLR_BUGCHECK_CODE,

    // Notification IDs, values under it doesn't have significance
    DEBUG_FLR_CORRUPT_MODULE_LIST = 0x2000,
    DEBUG_FLR_BAD_STACK,
    DEBUG_FLR_ZEROED_STACK,
    DEBUG_FLR_WRONG_SYMBOLS,
    DEBUG_FLR_FOLLOWUP_DRIVER_ONLY,   //bugcheckEA indicates a general driver failure
    DEBUG_FLR_UNUSED001,             //bucket include timestamp, so each drive is tracked
    DEBUG_FLR_CPU_OVERCLOCKED,
    DEBUG_FLR_POSSIBLE_INVALID_CONTROL_TRANSFER,
    DEBUG_FLR_POISONED_TB,
    DEBUG_FLR_UNKNOWN_MODULE,
    DEBUG_FLR_ANALYZAABLE_POOL_CORRUPTION,
    DEBUG_FLR_SINGLE_BIT_ERROR,
    DEBUG_FLR_TWO_BIT_ERROR,
    DEBUG_FLR_INVALID_KERNEL_CONTEXT,
    DEBUG_FLR_DISK_HARDWARE_ERROR,
    DEBUG_FLR_SHOW_ERRORLOG,
    DEBUG_FLR_MANUAL_BREAKIN,
    DEBUG_FLR_HANG,
    DEBUG_FLR_BAD_MEMORY_REFERENCE,
    DEBUG_FLR_BAD_OBJECT_REFERENCE,
    DEBUG_FLR_APPKILL,
    DEBUG_FLR_SINGLE_BIT_PFN_PAGE_ERROR,
    DEBUG_FLR_HARDWARE_ERROR,
    DEBUG_FLR_NO_IMAGE_IN_BUCKET,        // do not add image name in bucket
    DEBUG_FLR_NO_BUGCHECK_IN_BUCKET,     // do not add bugcheck string in bucket
    DEBUG_FLR_SKIP_STACK_ANALYSIS,       // do not look at stack
    DEBUG_FLR_INVALID_OPCODE,            // Bad op code instruction
    DEBUG_FLR_ADD_PROCESS_IN_BUCKET,
    DEBUG_FLR_RAISED_IRQL_USER_FAULT,
    DEBUG_FLR_USE_DEFAULT_CONTEXT,
    DEBUG_FLR_BOOST_FOLLOWUP_TO_SPECIFIC,
    DEBUG_FLR_SWITCH_PROCESS_CONTEXT,    // Set process context when getting tread stack
    DEBUG_FLR_VERIFIER_STOP,
    DEBUG_FLR_USERBREAK_PEB_PAGEDOUT,
    DEBUG_FLR_MOD_SPECIFIC_DATA_ONLY,
    DEBUG_FLR_OVERLAPPED_MODULE,         // Module with overlapping address space
    DEBUG_FLR_CPU_MICROCODE_ZERO_INTEL,
    DEBUG_FLR_INTEL_CPU_BIOS_UPGRADE_NEEDED,
    DEBUG_FLR_OVERLAPPED_UNLOADED_MODULE,
    DEBUG_FLR_INVALID_USER_CONTEXT,
    DEBUG_FLR_MILCORE_BREAK,
    DEBUG_FLR_NO_IMAGE_TIMESTAMP_IN_BUCKET, // do not add _DATE_#### to bucket (aplicable for
                                            // buckets containing just the image name)

    // Known analyzed failure cause or problem that bucketing could be
    // applied against.
    DEBUG_FLR_POOL_CORRUPTOR = 0x3000,
    DEBUG_FLR_MEMORY_CORRUPTOR,
    DEBUG_FLR_UNALIGNED_STACK_POINTER,
    DEBUG_FLR_OLD_OS_VERSION,
    DEBUG_FLR_BUGCHECKING_DRIVER,
    DEBUG_FLR_SOLUTION_ID,
    DEBUG_FLR_DEFAULT_SOLUTION_ID,
    DEBUG_FLR_SOLUTION_TYPE,
    DEBUG_FLR_RECURRING_STACK,
    DEBUG_FLR_FAULTING_INSTR_CODE,
    DEBUG_FLR_SYSTEM_LOCALE,
    DEBUG_FLR_CUSTOMER_CRASH_COUNT,
    DEBUG_FLR_TRAP_FRAME_RECURSION,
    DEBUG_FLR_STACK_OVERFLOW,
    DEBUG_FLR_STACK_POINTER_ERROR,
    DEBUG_FLR_STACK_POINTER_ONEBIT_ERROR,
    DEBUG_FLR_STACK_POINTER_MISALIGNED,
    DEBUG_FLR_INSTR_POINTER_MISALIGNED,
    DEBUG_FLR_INSTR_POINTER_CLIFAULT,
    DEBUG_FLR_REGISTRYTXT_STRESS_ID,
    DEBUG_FLR_CORRUPT_SERVICE_TABLE,
    DEBUG_FLR_LOP_STACKHASH,
    DEBUG_FLR_GSFAILURE_FUNCTION,
    DEBUG_FLR_GSFAILURE_MODULE_COOKIE,
    DEBUG_FLR_GSFAILURE_FRAME_COOKIE,
    DEBUG_FLR_GSFAILURE_CORRUPTED_COOKIE,
    DEBUG_FLR_GSFAILURE_CORRUPTED_EBP,
    DEBUG_FLR_GSFAILURE_OVERRUN_LOCAL,
    DEBUG_FLR_GSFAILURE_OVERRUN_LOCAL_NAME,
    DEBUG_FLR_GSFAILURE_CORRUPTED_EBPESP,
    DEBUG_FLR_GSFAILURE_ANALYSIS_TEXT,
    DEBUG_FLR_OS_BUILD_NAME,
    DEBUG_FLR_CPU_MICROCODE_VERSION,
    DEBUG_FLR_INSTR_POINTER_ON_STACK,
    DEBUG_FLR_INSTR_POINTER_ON_HEAP,
    DEBUG_FLR_EVENT_CODE_DATA_MISMATCH,
    DEBUG_FLR_PROCESSOR_INFO,              // Data is DEBUG_ANALYSIS_PROCESSOR_INFO
    DEBUG_FLR_INSTR_POINTER_IN_UNLOADED_MODULE,
    DEBUG_FLR_MEMDIAG_LASTRUN_STATUS,
    DEBUG_FLR_MEMDIAG_LASTRUN_TIME,

    // Internal data, retated to the OCA database
    DEBUG_FLR_INTERNAL_RAID_BUG = 0x4000,
    DEBUG_FLR_INTERNAL_BUCKET_URL,
    DEBUG_FLR_INTERNAL_SOLUTION_TEXT,
    DEBUG_FLR_INTERNAL_BUCKET_HITCOUNT,
    DEBUG_FLR_INTERNAL_RAID_BUG_DATABASE_STRING,

    // Data corelating a user target to watson DB
    DEBUG_FLR_WATSON_MODULE = 0x4100,
    DEBUG_FLR_WATSON_MODULE_VERSION,
    DEBUG_FLR_WATSON_MODULE_OFFSET,
    DEBUG_FLR_WATSON_PROCESS_VERSION,
    DEBUG_FLR_WATSON_IBUCKET,
    DEBUG_FLR_WATSON_MODULE_TIMESTAMP,
    DEBUG_FLR_WATSON_PROCESS_TIMESTAMP,
    DEBUG_FLR_WATSON_GENERIC_EVENT_NAME,

    // Data extracted from cabbed files with dump
    DEBUG_FLR_SYSXML_LOCALEID = 0x4200,
    DEBUG_FLR_SYSXML_CHECKSUM,

    // Strings.
    DEBUG_FLR_BUCKET_ID = 0x10000,
    DEBUG_FLR_IMAGE_NAME,
    DEBUG_FLR_SYMBOL_NAME,
    DEBUG_FLR_FOLLOWUP_NAME,
    DEBUG_FLR_STACK_COMMAND,
    DEBUG_FLR_STACK_TEXT,
    DEBUG_FLR_MODULE_NAME,
    DEBUG_FLR_FIXED_IN_OSVERSION,
    DEBUG_FLR_DEFAULT_BUCKET_ID,
    DEBUG_FLR_MODULE_BUCKET_ID,         // Part of Bucket id specific to the culprit module
    DEBUG_FLR_ADDITIONAL_DEBUGTEXT,
    DEBUG_FLR_USER_NAME,
    DEBUG_FLR_PROCESS_NAME,
    DEBUG_FLR_MARKER_FILE,       // Marker file name from sysdata.xml in cabs
    DEBUG_FLR_INTERNAL_RESPONSE, // Response text for bucket
    DEBUG_FLR_CONTEXT_RESTORE_COMMAND, // command to restore original context as before analysis
    DEBUG_FLR_DRIVER_HARDWAREID,    // hardware id of faulting driver from sysdata.xml
    DEBUG_FLR_DRIVER_HARDWARE_VENDOR_ID,
    DEBUG_FLR_DRIVER_HARDWARE_DEVICE_ID,
    DEBUG_FLR_DRIVER_HARDWARE_SUBSYS_ID,
    DEBUG_FLR_MARKER_MODULE_FILE, // Secondary marker file name from the module list
    DEBUG_FLR_BUGCHECKING_DRIVER_IDTAG,  // Tag set during processing to identify bugchecking driver frm triage.ini
    DEBUG_FLR_MARKER_BUCKET,      // bucket id derived from machine marker
    DEBUG_FLR_FAILURE_BUCKET_ID,
    DEBUG_FLR_DRIVER_XML_DESCRIPTION,
    DEBUG_FLR_DRIVER_XML_PRODUCTNAME,
    DEBUG_FLR_DRIVER_XML_MANUFACTURER,
    DEBUG_FLR_DRIVER_XML_VERSION,
    DEBUG_FLR_BUILD_VERSION_STRING,
    DEBUG_FLR_ORIGINAL_CAB_NAME,
    DEBUG_FLR_FAULTING_SOURCE_CODE,

    // User-mode specific stuff
    DEBUG_FLR_USERMODE_DATA = 0x100000,
    DEBUG_FLR_THREAD_ATTRIBUTES, // Thread attributes
    DEBUG_FLR_PROBLEM_CLASSES,
    DEBUG_FLR_PRIMARY_PROBLEM_CLASS,
    DEBUG_FLR_PRIMARY_PROBLEM_CLASS_DATA,
    DEBUG_FLR_HUNG_START_THREAD,
    DEBUG_FLR_HUNG_CHASED_THREAD,
    DEBUG_FLR_DERIVED_WAIT_CHAIN,
    DEBUG_FLR_HUNG_START_THREAD_PROBLEM_CLASS,
    DEBUG_FLR_HUNG_START_THREAD_PROBLEM_CLASS_DATA,
    DEBUG_FLR_HUNG_CHASED_THREAD_PROBLEM_CLASS,
    DEBUG_FLR_HUNG_CHASED_THREAD_PROBLEM_CLASS_DATA,
    DEBUG_FLR_HANG_DATA_NEEDED,
    DEBUG_FLR_PROBLEM_CODE_PATH_HASH,
    DEBUG_FLR_SUSPECT_CODE_PATH_HASH,
    DEBUG_FLR_LOADERLOCK_IN_WAIT_CHAIN,
    DEBUG_FLR_XPROC_HANG,
    DEBUG_FLR_DEADLOCK_INPROC,
    DEBUG_FLR_DEADLOCK_XPROC,
    DEBUG_FLR_WCT_XML_AVAILABLE,
    DEBUG_FLR_XPROC_DUMP_AVAILABLE,
    DEBUG_FLR_DESKTOP_HEAP_MISSING,
    DEBUG_FLR_HANG_REPORT_THREAD_IS_IDLE,

    // Culprit module
    DEBUG_FLR_FAULTING_IP = 0x80000000,     // Instruction where failure occurred
    DEBUG_FLR_FAULTING_MODULE,
    DEBUG_FLR_IMAGE_TIMESTAMP,
    DEBUG_FLR_FOLLOWUP_IP,

    // custom analysis plugin tags
    DEBUG_FLR_CUSTOM_ANALYSIS_TAG_MIN = 0xA0000000,
    DEBUG_FLR_CUSTOM_ANALYSIS_TAG_MAX = 0xB0000000,

    // To get faulting stack
    DEBUG_FLR_FAULTING_THREAD = 0xc0000000,
    DEBUG_FLR_CONTEXT,
    DEBUG_FLR_TRAP_FRAME,
    DEBUG_FLR_TSS,
    DEBUG_FLR_BLOCKING_THREAD, // Thread which is blocking others to execute by holding locks/critsec
    DEBUG_FLR_BLOCKED_THREAD0, // Threads blocked / waiting for some event / crit section
    DEBUG_FLR_BLOCKED_THREAD1,
    DEBUG_FLR_BLOCKED_THREAD2,
    DEBUG_FLR_BLOCKING_PROCESSID, // process id of processes which is blocking execution
    DEBUG_FLR_PROCESSOR_ID,  // CPU where the fault is
    DEBUG_FLR_MASK_ALL = 0xFFFFFFFF

} DEBUG_FLR_PARAM_TYPE;

typedef struct _DBG_THREAD_ATTRIBUTES
{
    ULONG ThreadIndex;
    ULONG64 ProcessID;
    ULONG64 ThreadID;
    ULONG64 AttributeBits;

/*
        bHas_StringData         0x0001
        bBlockedOnPID           0x0002
        bBlockedOnTID           0x0004
        bHas_CritSecAddress     0x0008
        bHas_timeout            0x0010
        m_szSymName[0]          0x0020
*/
    ULONG BoolBits;
    ULONG64 BlockedOnPID;
    ULONG64 BlockedOnTID;
    ULONG64 CritSecAddress;
    ULONG Timeout_msec;
    char StringData[100];
    char SymName[100];
} DBG_THREAD_ATTRIBUTES, *PDBG_THREAD_ATTRIBUTES;

//----------------------------------------------------------------------------
//
// A failure analysis is a dynamic buffer of tagged blobs.  Values
// are accessed through the Get/Set methods.
//
// Entries are always fully aligned.
//
// Set methods throw E_OUTOFMEMORY exceptions when the data
// buffer cannot be extended.
//
//----------------------------------------------------------------------------

typedef DEBUG_FLR_PARAM_TYPE FA_TAG;

//
// This is set in IDebugFAEntryTags Tag Type to determine
// type of value contained in entry
//
typedef enum _FA_ENTRY_TYPE
{
    // Undefined entry, this may be used for
    // FA_TAGs whose values do not have any significance
    DEBUG_FA_ENTRY_NO_TYPE,
    // FA_ENTRY is of ULONG type
    DEBUG_FA_ENTRY_ULONG,
    // FA_ENTRY is of ULONG64 type
    DEBUG_FA_ENTRY_ULONG64,
    // FA_ENTRY is offset in instruction stream
    DEBUG_FA_ENTRY_INSTRUCTION_OFFSET,
    // FA_ENTRY is a (ULONG64 sign-extended) pointer value
    DEBUG_FA_ENTRY_POINTER,
    // FA_ENTRY is null terminated char array
    // DataSize is size of string including null terminator
    DEBUG_FA_ENTRY_ANSI_STRING,
    // FA_ENTRY is an array of strings, each of the string
    // is null terminated char array.
    // DataSize is sum size of all string including null terminator
    DEBUG_FA_ENTRY_ANSI_STRINGs,
    // FA_ENTRY is a link to an extension command. !analyze -v
    // would run the command when showing the entry value
    // The Entry contains extension command string.
    DEBUG_FA_ENTRY_EXTENSION_CMD,
    // Bit flag modifier for any of the basic type
    // (ULONG/POINTER/INSTRUCTION_OFFSET). FA_ENTRY is an
    // array of any basic type other than string. DataSize
    // member of the Entry can be used to determine array length.
    DEBUG_FA_ENTRY_ARRAY = 0x8000,
} FA_ENTRY_TYPE;

#undef INTERFACE
#define INTERFACE IDebugFAEntryTags
DECLARE_INTERFACE(IDebugFAEntryTags)
{
    // Looksup Type associated for the failure tag
    STDMETHOD_(FA_ENTRY_TYPE, GetType)(
        THIS_
        __in FA_TAG Tag
        ) PURE;

    // Sets Type associated for the failure tag
    STDMETHOD(SetType)(
        THIS_
        __in FA_TAG Tag,
        __in FA_ENTRY_TYPE EntryType
        ) PURE;

    // Looksup description and name for the failure tag
    STDMETHOD(GetProperties)(
        THIS_
        __in FA_TAG Tag,
        __out_bcount_opt(NameSize) PSTR Name,
        __inout_opt PULONG NameSize,
        __out_bcount_opt(DescSize) PSTR Description,
        __inout_opt PULONG DescSize,
        __out_opt PULONG Flags
        ) PURE;

    // Sets description and name for the failure tag
    // If the given tag already had these defined, this will overwrite
    // previous definition(s)
    STDMETHOD(SetProperties)(
        THIS_
        __in FA_TAG Tag,
        __in_opt PCSTR Name,
        __in_opt PCSTR Description,
        __in_opt ULONG Flags
        ) PURE;

    // This looks up default analysis tag or plugin's registered tag
    // by its name
    STDMETHOD(GetTagByName)(
        THIS_
        __in PCSTR PluginId,
        __in PCSTR TagName,
        __out FA_TAG* Tag
        ) PURE;

    // This allows extensions to check if a given failure
    // tag value can be set. This would return true for all
    // tags that were allocated via AllocateTagRange or
    // the predefined tag values in this header file
    STDMETHOD_(BOOL, IsValidTagToSet)(
        THIS_
        __in FA_TAG Tag
        ) PURE;
};

typedef struct _FA_ENTRY
{
    FA_TAG Tag;
    USHORT FullSize;
    USHORT DataSize;
} FA_ENTRY, *PFA_ENTRY;

#define FA_ENTRY_DATA(Type, Entry) ((Type)((Entry) + 1))

/* ed0de363-451f-4943-820c-62dccdfa7e6d */
DEFINE_GUID(IID_IDebugFailureAnalysis, 0xed0de363, 0x451f, 0x4943,
            0x82, 0x0c, 0x62, 0xdc, 0xcd, 0xfa, 0x7e, 0x6d);

typedef interface DECLSPEC_UUID("ed0de363-451f-4943-820c-62dccdfa7e6d")
    IDebugFailureAnalysis* PDEBUG_FAILURE_ANALYSIS;

#undef INTERFACE
#define INTERFACE IDebugFailureAnalysis
DECLARE_INTERFACE_(IDebugFailureAnalysis, IUnknown)
{
    // IUnknown.
    STDMETHOD(QueryInterface)(
        THIS_
        IN REFIID InterfaceId,
        OUT PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;

    // IDebugFailureAnalysis.
    STDMETHOD_(ULONG, GetFailureClass)(
        THIS
        ) PURE;
    STDMETHOD_(DEBUG_FAILURE_TYPE, GetFailureType)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, GetFailureCode)(
        THIS
        ) PURE;
    STDMETHOD_(PFA_ENTRY, Get)(
        THIS_
        FA_TAG Tag
        ) PURE;
    STDMETHOD_(PFA_ENTRY, GetNext)(
        THIS_
        PFA_ENTRY Entry,
        FA_TAG Tag,
        FA_TAG TagMask
        ) PURE;
    STDMETHOD_(PFA_ENTRY, GetString)(
        THIS_
        FA_TAG Tag,
        PSTR Str,
        ULONG MaxSize
        ) PURE;
    STDMETHOD_(PFA_ENTRY, GetBuffer)(
        THIS_
        FA_TAG Tag,
        PVOID Buf,
        ULONG Size
        ) PURE;
    STDMETHOD_(PFA_ENTRY, GetUlong)(
        THIS_
        FA_TAG Tag,
        PULONG Value
        ) PURE;
    STDMETHOD_(PFA_ENTRY, GetUlong64)(
        THIS_
        FA_TAG Tag,
        PULONG64 Value
        ) PURE;
    STDMETHOD_(PFA_ENTRY, NextEntry)(
        THIS_
        PFA_ENTRY Entry
        ) PURE;
};

/* ea15c288-8226-4b70-acf6-0be6b189e3ad */
DEFINE_GUID(IID_IDebugFailureAnalysis2, 0xea15c288, 0x8226, 0x4b70,
            0xac, 0xf6, 0x0b, 0xe6, 0xb1, 0x89, 0xe3, 0xad);


typedef interface DECLSPEC_UUID("ea15c288-8226-4b70-acf6-0be6b189e3ad")
    IDebugFailureAnalysis2* PDEBUG_FAILURE_ANALYSIS2;

//
// Interface to query analysis data
//
#undef INTERFACE
#define INTERFACE IDebugFailureAnalysis2
DECLARE_INTERFACE_(IDebugFailureAnalysis2, IUnknown)
{
    // IUnknown.
    STDMETHOD(QueryInterface)(
        THIS_
        IN REFIID InterfaceId,
        OUT PVOID* Interface
        ) PURE;
    STDMETHOD_(ULONG, AddRef)(
        THIS
        ) PURE;
    STDMETHOD_(ULONG, Release)(
        THIS
        ) PURE;

    // IDebugFailureAnalysis2.

    // Target class for the given failure
    STDMETHOD_(ULONG, GetFailureClass)(
        THIS
        ) PURE;
    // Type of failure being analyzed
    STDMETHOD_(DEBUG_FAILURE_TYPE, GetFailureType)(
        THIS
        ) PURE;
    // Failure code: Bugcheck code for kernel mode,
    // exception code for user mode
    STDMETHOD_(ULONG, GetFailureCode)(
        THIS
        ) PURE;
    // Lookup FA_ENTRY by tag
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, Get)(
        THIS_
        __in FA_TAG Tag
        ) PURE;
    // Looks up next FA_ENTRY after the given 'Entry' by
    // matching with Tag & and TagMask
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, GetNext)(
        THIS_
        __in PFA_ENTRY Entry,
        __in FA_TAG Tag,
        __in FA_TAG TagMask
        ) PURE;
    // Looksup FA_ENTRY by tag and copies its string value
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, GetString)(
        THIS_
        __in FA_TAG Tag,
        __out_ecount(MaxSize) PSTR Str,
        __in ULONG MaxSize
        ) PURE;
    // Looksup FA_ENTRY by tag and copies its data value
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, GetBuffer)(
        THIS_
        __in FA_TAG Tag,
        __out_bcount(Size) PVOID Buf,
        __in ULONG Size
        ) PURE;
    // Looksup FA_ENTRY by tag and copies its ULONG value
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, GetUlong)(
        THIS_
        __in FA_TAG Tag,
        __out PULONG Value
        ) PURE;
    // Looksup FA_ENTRY by tag and copies its ULONG64 value
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, GetUlong64)(
        THIS_
        __in FA_TAG Tag,
        __out PULONG64 Value
        ) PURE;
    // Looks up next FA_ENTRY after the given 'Entry'
    // Returns NULL if tag is not found
    STDMETHOD_(PFA_ENTRY, NextEntry)(
        THIS_
        __in PFA_ENTRY Entry
        ) PURE;
    // Sets the given String for corresponding tag
    // It overwrites the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, SetString)(
        THIS_
        FA_TAG Tag,
        __nullterminated PCSTR Str
        ) PURE;
    // Sets the given extension command and its
    // argument for corresponding tag
    // It overwrites the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, SetExtensionCommand)(
        THIS_
        FA_TAG Tag,
        __nullterminated PCSTR Extension
        ) PURE;
    // Sets the given ULONG value for corresponding tag
    // It overwrites the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, SetUlong)(
        THIS_
        FA_TAG Tag,
        __in ULONG Value
        ) PURE;
    // Sets the given ULONG64 value for corresponding tag
    // It overwrites the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, SetUlong64)(
        THIS_
        FA_TAG Tag,
        __in ULONG64 Value
        ) PURE;
    // Sets the given Buffer value for corresponding tag
    // It overwrites the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, SetBuffer)(
        THIS_
        FA_TAG Tag,
        __in FA_ENTRY_TYPE EntryType,
        __in_bcount(Size) PVOID Buf,
        __in ULONG Size
        ) PURE;
    // Sets the given String for corresponding tag
    // It adds a new entry the value if tag is already
    // present.
    STDMETHOD_(PFA_ENTRY, AddString)(
        THIS_
        FA_TAG Tag,
        __nullterminated PSTR Str
        ) PURE;
    // Sets the given extension command and its
    // argument for corresponding tag in a new entry
    STDMETHOD_(PFA_ENTRY, AddExtensionCommand)(
        THIS_
        FA_TAG Tag,
        __nullterminated PSTR Extension
        ) PURE;
    // Sets the given ULONG value for corresponding tag
    // in a new entry
    STDMETHOD_(PFA_ENTRY, AddUlong)(
        THIS_
        FA_TAG Tag,
        __in ULONG Value
        ) PURE;
    // Sets the given ULONG64 value for corresponding tag
    // in a new entry
    STDMETHOD_(PFA_ENTRY, AddUlong64)(
        THIS_
        FA_TAG Tag,
        __in ULONG64 Value
        ) PURE;
    // Sets the given Buffer value for corresponding tag
    // in a new entry
    STDMETHOD_(PFA_ENTRY, AddBuffer)(
        THIS_
        FA_TAG Tag,
        __in FA_ENTRY_TYPE EntryType,
        __in_bcount(Size) PVOID Buf,
        __in ULONG Size
        ) PURE;
    // Get the interface to query and set meta-data about
    // failure analysis tags
    STDMETHOD(GetDebugFATagControl)(
        THIS_
        __out IDebugFAEntryTags** FATagControl
        ) PURE;
};

//
// Analysis control flags
//
// Analyzer doesn't lookup database for information about failure
#define FAILURE_ANALYSIS_NO_DB_LOOKUP           0x0001
// Produces verbose analysis output
#define FAILURE_ANALYSIS_VERBOSE                0x0002
// Assumes target is hung when doing analysis
#define FAILURE_ANALYSIS_ASSUME_HANG            0x0004
// Ignores manual breakin state and continues forward with analysis
#define FAILURE_ANALYSIS_IGNORE_BREAKIN         0x0008
// Sets the analysis failure context after finishing up analysis
#define FAILURE_ANALYSIS_SET_FAILURE_CONTEXT    0x0010

// GetFailureAnalysis Extension function, deprecarted
typedef HRESULT
(WINAPI* EXT_GET_FAILURE_ANALYSIS)(
    IN PDEBUG_CLIENT4 Client,
    IN ULONG Flags,
    OUT PDEBUG_FAILURE_ANALYSIS* Analysis
    );

//
// Function signature for GetDebugFailureAnalysis extension-function
// from ext.dll.
// This analyzes failure state of current target and returns
// analysis results in Analysis object
//
typedef HRESULT
(WINAPI* EXT_GET_DEBUG_FAILURE_ANALYSIS)(
    __in PDEBUG_CLIENT4 Client,
    __in ULONG Flags,
    __in CLSID pIIdFailureAnalysis,     // must be IID_IDebugFailureAnalysis2
    __out PDEBUG_FAILURE_ANALYSIS2* Analysis
    );

//
// This determines the analysis phase during which a registered
// analysis-plugin is invoked. The extensions can register their
// plugin along with one or more of these flags to control the
// time when the plugin gets called.
//
typedef enum _FA_EXTENSION_PLUGIN_PHASE
{
    // Extension plugin is invoked after the primary data such as
    // exception record (for user mode) / bugcheck code (for kernel
    // mode) is initialized
    FA_PLUGIN_INITILIZATION    = 0x0001,
    // Extension plugin is invoked after the stack is analyzed and
    // the analysis has the information about faulting symbol and
    // module if it were available on stack
    FA_PLUGIN_STACK_ANALYSIS   = 0x0002,
    // Extension plugin is invoked just before generating bucket.
    FA_PLUGIN_PRE_BUCKETING    = 0x0004,
    // Extension plugin is invoked just after generating bucket.
    FA_PLUGIN_POST_BUCKETING   = 0x0008,
} FA_EXTENSION_PLUGIN_PHASE;

//
// Function signature for custom analyzer entry point in a
// registered analysis-plugin dll.
//
typedef HRESULT
(WINAPI* EXT_ANALYSIS_PLUGIN)(
    __in PDEBUG_CLIENT4 Client,
    __in FA_EXTENSION_PLUGIN_PHASE CallPhase,
    __in PDEBUG_FAILURE_ANALYSIS2 pAnalysis
    );

typedef HRESULT
(WINAPI* EXT_GET_FA_ENTRIES_DATA)(
    IN PDEBUG_CLIENT4 Client,
    IN PULONG Count,
    OUT PFA_ENTRY* Entries
    );

//
// Typedef for extension function GetManagedObjectName in sos.dll
//
typedef HRESULT
(WINAPI* EXT_GET_MANAGED_OBJECTNAME)(
    PDEBUG_CLIENT Client,
    ULONG64 objAddr,
    PSTR szName,
    ULONG cbName
    );

//
// Typedef for extension function GetManagedObjectFieldInfo in sos.dll
//
typedef HRESULT
(WINAPI* EXT_GET_MANAGED_OBJECT_FIELDINFO)(
    PDEBUG_CLIENT Client,
    ULONG64 objAddr,
    PSTR szFieldName,
    PULONG64 pValue,
    PULONG pOffset
    );

//
// Typedef for extension function GetManagedExcepStack in sos.dll
//
typedef HRESULT
(WINAPI* EXT_GET_MANAGED_EXCEPSTACK)(
    PDEBUG_CLIENT Client,
    ULONG64 StackObjAddr,
    PSTR szStackString,
    ULONG cbString
    );

//
// Typedef for extension function StackTrace in sos.dll
//
typedef HRESULT
(WINAPI* EXT_GET_MANAGED_STACKTRACE)(
    PDEBUG_CLIENT Client,
    WCHAR wszTextOut[],
    UINT *puiTextLength,
    LPVOID pTransitionContexts,
    UINT *puiTransitionContextCount,
    UINT uiSizeOfContext,
    ULONG Flags);


/*****************************************************************************
   Target info
 *****************************************************************************/
typedef enum _TARGET_MODE {
    NoTarget = DEBUG_CLASS_UNINITIALIZED,
    KernelModeTarget = DEBUG_CLASS_KERNEL,
    UserModeTarget = DEBUG_CLASS_USER_WINDOWS,
    NumModes,
} TARGET_MODE;

typedef enum _OS_TYPE {
    WIN_95,
    WIN_98,
    WIN_ME,
    WIN_NT4,
    WIN_NT5,
    WIN_NT5_1,
    NUM_WIN,
} OS_TYPE;


//
// Info about OS installed
//
typedef struct _OS_INFO {
    OS_TYPE   Type;          // OS type such as NT4, NT5 etc.
    union {
        struct {
            ULONG Major;
            ULONG Minor;
        }       Version;     // 64 bit OS version number
        ULONG64 Ver64;
    };
    ULONG ProductType; // NT, LanMan or Server
    ULONG Suite;        // OS flavour - per, SmallBuisness etc.
    struct {
        ULONG Checked:1;     // If its a checked build
        ULONG Pae:1;         // True for Pae systems
        ULONG MultiProc:1;   // True for multiproc enabled OS
        ULONG Reserved:29;
    } s;
    ULONG   SrvPackNumber;   // Service pack number of OS
    TCHAR   Language[30];    // OS language
    TCHAR   OsString[64];    // Build string
    TCHAR   ServicePackString[64];
                             // Service pack string
} OS_INFO, *POS_INFO;

typedef struct _CPU_INFO {
    ULONG Type;              // Processor type as in IMAGE_FILE_MACHINE types
    ULONG NumCPUs;           // Actual number of Processors
    ULONG CurrentProc;       // Current processor
    DEBUG_PROCESSOR_IDENTIFICATION_ALL ProcInfo[32];
    ULONG Mhz;               // Processor speed (from currentproc.prcb)
} CPU_INFO, *PCPU_INFO;

typedef enum _DATA_SOURCE {
    Debugger,
    Stress,
} DATA_SOURCE;

#define MAX_STACK_IN_BYTES 4096

typedef struct _TARGET_DEBUG_INFO {
    ULONG       SizeOfStruct;
    ULONG64     Id;          // ID unique to this debug info
    DATA_SOURCE Source;      // Source where this came from
    ULONG64     EntryDate;   // Date created
    ULONG64     SysUpTime;   // System Up time
    ULONG64     AppUpTime;   // Application up time
    ULONG64     CrashTime;   // Time system / app crashed
    TARGET_MODE Mode;        // Kernel / User mode
    OS_INFO     OsInfo;      // OS details
    CPU_INFO    Cpu;         // Processor details
    TCHAR       DumpFile[MAX_PATH]; // Dump file name if its a dump
    PVOID       FailureData; // Failure data collected by debugger
    CHAR       StackTr[MAX_STACK_IN_BYTES];
                                 // Contains stacks, with frames separated by newline
} TARGET_DEBUG_INFO, *PTARGET_DEBUG_INFO;

// GetTargetInfo
typedef HRESULT
(WINAPI* EXT_TARGET_INFO)(
    PDEBUG_CLIENT4  Client,
    PTARGET_DEBUG_INFO pTargetInfo
    );


typedef struct _DEBUG_DECODE_ERROR {
    ULONG     SizeOfStruct;   // Must be == sizeof(DEBUG_DECODE_ERROR)
    ULONG     Code;           // Error code to be decoded
    BOOL      TreatAsStatus;  // True if code is to be treated as Status
    CHAR      Source[64];     // Source from where we got decoded message
    CHAR      Message[MAX_PATH]; // Message string for error code
} DEBUG_DECODE_ERROR, *PDEBUG_DECODE_ERROR;

/*
   Decodes and prints the given error code - DecodeError
*/
typedef VOID
(WINAPI *EXT_DECODE_ERROR)(
    PDEBUG_DECODE_ERROR pDecodeError
    );

//
// ext.dll: GetTriageFollowupFromSymbol
//
//       This returns owner info from a given symbol name
//
typedef struct _DEBUG_TRIAGE_FOLLOWUP_INFO {
    ULONG SizeOfStruct;      // Must be == sizeof (DEBUG_TRIAGE_FOLLOWUP_INFO)
    ULONG OwnerNameSize;     // Size of allocated buffer
    PCHAR OwnerName;         // Followup owner name returned in this
                             // Caller should initialize the name buffer
} DEBUG_TRIAGE_FOLLOWUP_INFO, *PDEBUG_TRIAGE_FOLLOWUP_INFO;

#define TRIAGE_FOLLOWUP_FAIL    0
#define TRIAGE_FOLLOWUP_IGNORE  1
#define TRIAGE_FOLLOWUP_DEFAULT 2
#define TRIAGE_FOLLOWUP_SUCCESS 3

typedef DWORD
(WINAPI *EXT_TRIAGE_FOLLOWUP)(
    IN PDEBUG_CLIENT4 Client,
    IN PSTR SymbolName,
    OUT PDEBUG_TRIAGE_FOLLOWUP_INFO OwnerInfo
    );

//
// Struct to receive data from syzdata.XML file cabbed along with the dump
//
typedef struct _EXT_CAB_XML_DATA {
    ULONG SizeOfStruct;       // Must be == sizeof(_EXT_CAB_XML_DATA)
    PCWSTR XmlObjectTag;      // Look for text under this tag
    ULONG NumSubTags;         // Number of subtags
    struct _SUBTAGS {
        PCWSTR SubTag;        // Look for text under this sub-tag of XmlObjectTag
        PCWSTR MatchPattern;  // Match the text with MatchPattern according to MatchType
        PWSTR  ReturnText;    // Return the matched text in ReturnText, multiple
                              // matches are returned in multistring
        ULONG ReturnTextSize; // Size of ReturnText in bytes
        ULONG MatchType:3;    // 0: Prefix match, 2: In-text match  1: Suffix match
        ULONG Reserved:29;
        ULONG Reserved2;
    } SubTags[1];
} EXT_CAB_XML_DATA, *PEXT_CAB_XML_DATA;

typedef HRESULT
(WINAPI *EXT_XML_DATA)(
    PDEBUG_CLIENT4 Client,
    PEXT_CAB_XML_DATA pXmpData
    );

//
// Extension function type definition for dlls which want to export analyzer
// function to be used by !analyze to gather component specific data
//

#define EXT_ANALYZER_FLAG_MOD  0x00000001
#define EXT_ANALYZER_FLAG_ID   0x00000002

typedef HRESULT
(WINAPI *EXT_ANALYZER)(
   __in_opt PDEBUG_CLIENT Client,
   __out_bcount(cbBucketSuffix) PSTR BucketSuffix,     // The additional suffix analyzer wants to
                              // be added to !analyze BUGCKET_ID to better distinguish this bucket
   __in ULONG cbBucketSuffix,   // byte count of BucketSuffix buffer supplied
   __out_bcount(cbDebugText) PSTR DebugText,        // The debugging text (optional) which !analyze
                              // should print out to help people debugging this failure
   __in ULONG cbDebugText,      // byte count of DebugText buffer supplied
   __in PULONG Flags,           // Flags that contorl the bucketing
   __in PDEBUG_FAILURE_ANALYSIS pAnalysis // Data for current analysis
   );

//
// Data queried about processor, returned as part of analysis tag DEBUG_FLR_PROCESSOR_INFO
//
typedef struct _DEBUG_ANALYSIS_PROCESSOR_INFO {
    ULONG         SizeOfStruct; // must be == sizeof(DEBUG_ANALYSIS_PROCESSOR_INFO)
    ULONG         Model;
    ULONG         Family;
    ULONG         Stepping;
    ULONG         Architecture;
    ULONG         Revision;
    ULONG         CurrentClockSpeed;
    ULONG         CurrentVoltage;
    ULONG         MaxClockSpeed;
    ULONG         ProcessorType;
    CHAR          DeviceID[32];
    CHAR          Manufacturer[64];
    CHAR          Name[64];
    CHAR          Version[64];
    CHAR          Description[64];
} DEBUG_ANALYSIS_PROCESSOR_INFO, *PDEBUG_ANALYSIS_PROCESSOR_INFO;

#endif // _EXTAPIS_H


//
// Function exported from ntsdexts.dll
//
typedef HRESULT
(WINAPI *EXT_GET_HANDLE_TRACE)(
    PDEBUG_CLIENT Client,
    ULONG TraceType,
    ULONG StartIndex,
    PULONG64 HandleValue,
    PULONG64 StackFunctions,
    ULONG StackTraceSize
    );


//
// Functions exported from exts.dll
//

//
// GetEnvironmenttVariable - gets environment variable value from the target
//
typedef HRESULT
(WINAPI* EXT_GET_ENVIRONMENT_VARIABLE)(
    ULONG64 Peb,           // Peb address where variable resides, 0 for default
    PSTR Variable,         // Env Variable name
    PSTR Buffer,           // Buffer to receive the value in
    ULONG BufferSize       // size of buffer
    );

#endif // _EXTFNS_H
