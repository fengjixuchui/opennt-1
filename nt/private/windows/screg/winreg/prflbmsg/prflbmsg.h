/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992-1994  Microsoft Corporation

Module Name:

    perflib.h
       (generated from perflib.mc)

Abstract:

   Event message definititions used by routines in Perflib

Created:

    31-Oct-95 Bob Watson

Revision History:

--*/
#ifndef _PRFLBMSG_H_
#define _PRFLBMSG_H_

//
//     Perflib ERRORS
//
//
//  Values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: PERFLIB_ACCESS_DENIED
//
// MessageText:
//
//  Access to performance data was denied to %1!s! as attempted from 
//  %2!s!
//
#define PERFLIB_ACCESS_DENIED            ((DWORD)0xC00003E8L)

//
// MessageId: PERFLIB_BUFFER_OVERFLOW
//
// MessageText:
//
//  The buffer size returned by a collect procedure in Extensible Counter 
//  DLL "%1!s!" for the "%2!s!" service was larger than the space 
//  available. Performance data returned by counter DLL will be not be 
//  returned in Perf Data Block. Overflow size is data DWORD 0.
//
#define PERFLIB_BUFFER_OVERFLOW          ((DWORD)0xC00003E9L)

//
// MessageId: PERFLIB_GUARD_PAGE_VIOLATION
//
// MessageText:
//
//  A Guard Page was modified by a collect procedure in Extensible 
//  Counter DLL "%1!s!" for the "%2!s!" service. Performance data 
//  returned by counter DLL will be not be returned in Perf Data Block. 
//
#define PERFLIB_GUARD_PAGE_VIOLATION     ((DWORD)0xC00003EAL)

//
// MessageId: PERFLIB_INCORRECT_OBJECT_LENGTH
//
// MessageText:
//
//  The object length of an object returned by Extensible Counter DLL 
//  "%1!s!" for the "%2!s!" service was not correct. The sum of the 
//  object lengths returned did not match the size of the buffer 
//  returned.  Performance data returned by counter DLL will be not be 
//  returned in Perf Data Block. Count of objects returned is data 
//  DWORD 0.
//
#define PERFLIB_INCORRECT_OBJECT_LENGTH  ((DWORD)0xC00003EBL)

//
// MessageId: PERFLIB_INCORRECT_INSTANCE_LENGTH
//
// MessageText:
//
//  The instance length of an object returned by Extensible Counter 
//  DLL "%1!s!" for the "%2!s!" service was incorrect. The sum of the 
//  instance lengths plus the object definition structures did not match 
//  the size of the object. Performance data returned by counter DLL will 
//  be not be returned in Perf Data Block. The object title index of the 
//  bad object is data DWORD 0.
//
#define PERFLIB_INCORRECT_INSTANCE_LENGTH ((DWORD)0xC00003ECL)

//
// MessageId: PERFLIB_OPEN_PROC_NOT_FOUND
//
// MessageText:
//
//  Unable to locate the open procedure "%1!s!" in DLL "%2!s!" for 
//  the "%3!s!" service. Performance data for this service will not be
//  available. Error Status is data DWORD 0.
//
#define PERFLIB_OPEN_PROC_NOT_FOUND      ((DWORD)0xC00003EDL)

//
// MessageId: PERFLIB_COLLECT_PROC_NOT_FOUND
//
// MessageText:
//
//  Unable to locate the collect procedure "%1!s!" in DLL "%2!s!" for the
//  "%3!s!" service. Performance data for this service will not be
//  available. Error Status is data DWORD 0.
//
#define PERFLIB_COLLECT_PROC_NOT_FOUND   ((DWORD)0xC00003EEL)

//
// MessageId: PERFLIB_CLOSE_PROC_NOT_FOUND
//
// MessageText:
//
//  Unable to locate the close procedure "%1!s!" in DLL "%2!s!" for the
//  "%3!s!" service. Performance data for this service will not be
//  available. Error Status is data DWORD 0.
//
#define PERFLIB_CLOSE_PROC_NOT_FOUND     ((DWORD)0xC00003EFL)

//
// MessageId: PERFLIB_OPEN_PROC_FAILURE
//
// MessageText:
//
//  The Open Procedure for service "%1!s!" in DLL "%2!s!" failed. 
//  Performance data for this service will not be available. Status code 
//  returned is DWORD 0.
//
#define PERFLIB_OPEN_PROC_FAILURE        ((DWORD)0xC00003F0L)

//
// MessageId: PERFLIB_OPEN_PROC_EXCEPTION
//
// MessageText:
//
//  The Open Procedure for service "%1!s!" in DLL "%2!s!" generated an 
//  exception. Performance data for this service will not be available. 
//  Exception code returned is DWORD 0.
//
#define PERFLIB_OPEN_PROC_EXCEPTION      ((DWORD)0xC00003F1L)

//
// MessageId: PERFLIB_COLLECT_PROC_EXCEPTION
//
// MessageText:
//
//  The Collect Procedure for the "%1!s!" service in DLL "%2!s!" generated an 
//  exception or returned an invalid status. Performance data returned by 
//  counter DLL will be not be returned in Perf Data Block. Exception or 
//  status code returned is DWORD 0.
//
#define PERFLIB_COLLECT_PROC_EXCEPTION   ((DWORD)0xC00003F2L)

//
// MessageId: PERFLIB_LIBRARY_NOT_FOUND
//
// MessageText:
//
//  The library file "%2!s!" specified for the "%1!s!" service could not 
//  be opened. Performance data for this service will not be available. 
//  Status code is data DWORD 0.
//
#define PERFLIB_LIBRARY_NOT_FOUND        ((DWORD)0xC00003F3L)

//
// MessageId: PERFLIB_NEGATIVE_IDLE_TIME
//
// MessageText:
//
//  The system reported an idle process time that was less than the last
//  time reported. The data shows the current time and the last reported 
//  time for the system's idle process.
//
#define PERFLIB_NEGATIVE_IDLE_TIME       ((DWORD)0xC00003F4L)

//
// MessageId: PERFLIB_HEAP_ERROR
//
// MessageText:
//
//  The collect procedure in Extensible Counter DLL "%1!s!" for the "%2!s!" 
//  service returned a buffer that was larger than the space allocated and 
//  may have corrupted the application's heap. This DLL should be disabled 
//  or removed from the system until the problem has been corrected to 
//  prevent further corruption. The application accessing this performance 
//  data should be restarted.  The Performance data returned by counter 
//  DLL will be not be returned in Perf Data Block. Overflow size is 
//  data DWORD 0.
//
#define PERFLIB_HEAP_ERROR               ((DWORD)0xC00003F5L)

//
// MessageId: PERFLIB_BUFFER_POINTER_MISMATCH
//
// MessageText:
//
//  The pointer returned did not match the buffer length returned by the
//  Collect procedure for the "%1!s!" service in Extensible Counter DLL 
//  "%2!s!". The Length will be adjusted to match and the performance 
//  data will appear in the Perf Data Block. The returned length is data 
//  DWORD 0, the new length is data DWORD 1.
//
#define PERFLIB_BUFFER_POINTER_MISMATCH  ((DWORD)0x800007D0L)

//
// MessageId: PERFLIB_NO_PERFORMANCE_SUBKEY
//
// MessageText:
//
//  The "%1!s!" service does not have a Performance subkey or the key 
//  could not be opened. No performance counters will be collected for 
//  this service. The Win32 error code is returned in the data.
//
#define PERFLIB_NO_PERFORMANCE_SUBKEY    ((DWORD)0x800007D1L)

//
// MessageId: PERFLIB_OPEN_PROC_TIMEOUT
//
// MessageText:
//
//  The open procedure for service "%1!s!" in DLL "%2!s!" has taken longer than
//  the established wait time to complete. The wait time in milliseconds is
//  shown in the data.
//
#define PERFLIB_OPEN_PROC_TIMEOUT        ((DWORD)0x800007D2L)


//
// MessageId: PERFLIB_OPEN_PROC_SUCCESS
//
// MessageText:
//
//  Open procedure for service "%1!s!" in DLL "%2!s!" was called and 
//  returned successfully.
//
#define PERFLIB_OPEN_PROC_SUCCESS        ((DWORD)0x40000BB8L)


#endif //_PRFLBMSG_H_
