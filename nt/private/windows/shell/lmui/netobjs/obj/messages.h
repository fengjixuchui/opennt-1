//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992 - 1993.
//
//  File:      messages.mc
//
//  Contents:  Main message file
//
//  History:   dd-mmm-yy Author    Comment
//             26-Sep-95 BruceFo	Added to netobjs
//
//  Notes:
// A .mc file is compiled by the MC tool to generate a .h file and
// a .rc (resource compiler script) file.
//
// Comments in .mc files start with a ";".
// Comment lines are generated directly in the .h file, without
// the leading ";"
//
// See mc.hlp for more help on .mc files and the MC tool.
//
//--------------------------------------------------------------------------
#ifndef __MESSAGES_H__
#define __MESSAGES_H__
#ifdef FACILITY_NULL
#undef FACILITY_NULL
#endif
#ifdef FACILITY_RPC
#undef FACILITY_RPC
#endif
#ifdef FACILITY_DISPATCH
#undef FACILITY_DISPATCH
#endif
#ifdef FACILITY_STORAGE
#undef FACILITY_STORAGE
#endif
#ifdef FACILITY_ITF
#undef FACILITY_ITF
#endif
#ifdef FACILITY_WIN32
#undef FACILITY_WIN32
#endif
#ifdef FACILITY_WINDOWS
#undef FACILITY_WINDOWS
#endif
//--------------------------------------------------------------------------
//	Success messages
//--------------------------------------------------------------------------
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
#define FACILITY_WINDOWS                 0x8
#define FACILITY_WIN32                   0x7
#define FACILITY_STORAGE                 0x3
#define FACILITY_RPC                     0x1
#define FACILITY_NULL                    0x0
#define FACILITY_ITF                     0x4
#define FACILITY_DISPATCH                0x2


//
// Define the severity codes
//
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_COERROR          0x2


//
// MessageId: MSG_ACCESSDENIED
//
// MessageText:
//
//  You do not have the appropriate access rights for this server. For more information, contact your network administrator.
//
#define MSG_ACCESSDENIED                 ((HRESULT)0x00000100L)

//
// MessageId: MSG_SERVERNOTFOUND
//
// MessageText:
//
//  The server %1 could not be found on the network.
//
#define MSG_SERVERNOTFOUND               ((HRESULT)0x00000101L)

//
// MessageId: MSG_CANTREMOTE
//
// MessageText:
//
//  The server %1 does not accept remote requests.
//
#define MSG_CANTREMOTE                   ((HRESULT)0x00000102L)

//  This format string is used to generate the "type" string.
//
//      %1 = The machine type (one of IDS_SERVER_TYPE_*).
//      %2 = The major version number.
//      %3 = The minor version number.
//      %4 = The domain role (one of IDS_ROLE_*).
//
// MessageId: MSG_TYPE_FORMAT
//
// MessageText:
//
//  %1 %2!d!.%3!d! %4%0
//
#define MSG_TYPE_FORMAT                  ((HRESULT)0x00000103L)

//
// MessageId: MSG_TYPE_FORMAT_UNKNOWN
//
// MessageText:
//
//  %1 %4%0
//
#define MSG_TYPE_FORMAT_UNKNOWN          ((HRESULT)0x00000104L)

#endif // __MESSAGES_H__
