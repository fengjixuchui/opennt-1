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
//             21-Apr-95 BruceFo	Added to ntshrui
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
// MessageId: MSG_STOPSHARECONNS
//
// MessageText:
//
//  There are %1!d! user(s) connected to %2. If you stop sharing %2, they will be disconnected. Do you want to continue?
//
#define MSG_STOPSHARECONNS               ((HRESULT)0x00000100L)

//
// MessageId: MSG_STOPSHAREOPENS
//
// MessageText:
//
//  There are %1!d! file(s) open by %2!d! user(s) connected to %3. If you stop sharing %3, the files will close, which may cause these users to lose data. Do you want to continue?
//
#define MSG_STOPSHAREOPENS               ((HRESULT)0x00000101L)

//
// MessageId: MSG_RMDIRCONFIRM
//
// MessageText:
//
//  You are sharing %1 as %2. Others may be using files in this folder. If you delete the folder, it will no longer be shared. Are you sure you want to delete it?
//
#define MSG_RMDIRCONFIRM                 ((HRESULT)0x00000102L)

//
// MessageId: MSG_MVDIRCONFIRM
//
// MessageText:
//
//  You are sharing %1 as %2. The folder will not be shared after you move or rename it. Are you sure you want to continue?
//
#define MSG_MVDIRCONFIRM                 ((HRESULT)0x00000103L)

//
// MessageId: MSG_RESHARENAMECONFIRM
//
// MessageText:
//
//  You are already sharing %1 using the name %2. Do you want to share %3 using the name %2 instead?
//
#define MSG_RESHARENAMECONFIRM           ((HRESULT)0x00000104L)

//
// MessageId: MSG_MULTIDEL
//
// MessageText:
//
//  This folder is shared more than once. Are you sure you wish to remove all these shares?
//
#define MSG_MULTIDEL                     ((HRESULT)0x00000105L)

//--------------------------------------------------------------------------
//	Error messages
// BUGBUG: get rid of hex numbered error message!
//--------------------------------------------------------------------------
//
// MessageId: IERR_UNKNOWN
//
// MessageText:
//
//  Unknown error 0x%1!08lx!.
//
#define IERR_UNKNOWN                     ((HRESULT)0x80000106L)

//
// MessageId: IERR_CANT_ADD_SHARE
//
// MessageText:
//
//  An error occurred while trying to share %1. %2
//  The shared resource was not created at this time.
//
#define IERR_CANT_ADD_SHARE              ((HRESULT)0x80000107L)

//
// MessageId: IERR_CANT_MODIFY_SHARE
//
// MessageText:
//
//  An error occurred while trying to modify share %1. %2
//
#define IERR_CANT_MODIFY_SHARE           ((HRESULT)0x80000108L)

//
// MessageId: IERR_CANT_DEL_SHARE
//
// MessageText:
//
//  An error occurred while trying to delete share %1. %2
//
#define IERR_CANT_DEL_SHARE              ((HRESULT)0x80000109L)

//
// MessageId: IERR_NOACLEDITOR
//
// MessageText:
//
//  Error invoking the security editor.
//
#define IERR_NOACLEDITOR                 ((HRESULT)0x8000010AL)

//
// MessageId: IERR_BlankShareName
//
// MessageText:
//
//  You must type a share name for this resource.
//
#define IERR_BlankShareName              ((HRESULT)0x8000010BL)

//
// MessageId: IERR_InvalidShareName
//
// MessageText:
//
//  The share name contains invalid characters.
//
#define IERR_InvalidShareName            ((HRESULT)0x8000010CL)

//
// MessageId: IERR_InaccessibleByDos
//
// MessageText:
//
//  The share name %1 is not accessible from some MS-DOS workstations. Are you sure you want to use the share name?
//
#define IERR_InaccessibleByDos           ((HRESULT)0x8000010DL)

//
// MessageId: IERR_AlreadyExistsSpecial
//
// MessageText:
//
//  The %1 share already exists.
//
#define IERR_AlreadyExistsSpecial        ((HRESULT)0x8000010EL)

//
// MessageId: IERR_AlreadyExists
//
// MessageText:
//
//  The share name %1 already exists for this resource. Please choose another share name.
//
#define IERR_AlreadyExists               ((HRESULT)0x8000010FL)

//
// MessageId: MSG_NOSECURITYONSPECIAL
//
// MessageText:
//
//  You may not specify permissions for ADMIN$, IPC$, and drive letter (X$) shares. Do you want to create the share anyway?
//
#define MSG_NOSECURITYONSPECIAL          ((HRESULT)0x80000110L)

//
// MessageId: IERR_AdminShare
//
// MessageText:
//
//  This has been shared for administrative purposes. The permissions cannot be set.
//
#define IERR_AdminShare                  ((HRESULT)0x80000111L)

//
// MessageId: IERR_SpecialShare
//
// MessageText:
//
//  The share names ADMIN$ and IPC$ are reserved. To create an ADMIN$ or IPC$ share, get a context menu on the background of the window and choose New->Share. Type ADMIN$ or IPC$ as the share name and hit OK.
//
#define IERR_SpecialShare                ((HRESULT)0x80000112L)

//
// MessageId: MSG_DELETESPECIAL
//
// MessageText:
//
//  You are attempting to delete default share %1!s!. If you do so, it might not be possible to remotely administer this machine. Are you sure you wish to do this?
//
#define MSG_DELETESPECIAL                ((HRESULT)0x80000113L)

//
// MessageId: MSG_ADDSPECIAL
//
// MessageText:
//
//  You may not specify paths for ADMIN$ and IPC$ shares.
//
#define MSG_ADDSPECIAL                   ((HRESULT)0x80000114L)

//
// MessageId: MSG_ADDSPECIAL2
//
// MessageText:
//
//  You may not rename a share to ADMIN$ or IPC$.
//
#define MSG_ADDSPECIAL2                  ((HRESULT)0x80000115L)

//
// MessageId: MSG_NOWIZARD
//
// MessageText:
//
//  The Share Publishing Wizard could not be found or started.
//
#define MSG_NOWIZARD                     ((HRESULT)0x80000116L)

//
// MessageId: MSG_TEMPLATE_WITH_ON
//
// MessageText:
//
//  %2 on %1%0
//
#define MSG_TEMPLATE_WITH_ON             ((HRESULT)0x80000117L)

#endif // __MESSAGES_H__
