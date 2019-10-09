/*++

Copyright (c) 1992  Microsoft Corporation

Module Name:

    pbmsg.mc (will create pbmsg.h when compiled)

Abstract:

    This file contains the pentnt messages.

Author:

    Bryan Willman (bryanwi) 7-Dec-94

Revision History:

--*/
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


//
// MessageId: MSG_PENTBUG_HELP
//
// MessageText:
//
//  Reports on whether local computer exhibits Intel(tm) Pentium
//  Floating Point Division Error
//  
//  pentnt [-?] [-H] [-h] [-C] [-c] [-F] [-f] [-O] [-o]
//  
//          Run without arguments this program will tell you if the
//          system exhibits the Pentium floating point division error
//          and whether floating point emulation is forced and whether floating
//          point hardware is disabled.
//  
//      -?  Print this help message
//      -h
//      -H
//  
//      -c  Turn on conditional emulation. This means that floating
//      -C  point emulation will be forced on if and only if
//          the system detects the Pentium floating point division
//          error at boot. Reboot required before this takes effect.
//          This is what should generally be used.
//  
//      -f  Turn on forced emulation.  This means that floating
//      -F  point hardware is disabled and floating point emulation
//          will always be forced on, regardless of whether the system
//          exhibits the Pentium division error. Useful for testing
//          software emulators and for working around floating point
//          hardware defects unknown to the OS. Reboot required before
//          this takes effect.
//  
//      -o  Turn off forced emulation. Reenables floating point hardware
//      -O  if present. Reboot required before this takes effect.
//  
//  The Floating Point Division error that this program addresses only
//  occurs on certain Intel Pentium processors. It only affects floating
//  point operations. The problem is described in detail in a white paper
//  available from Intel. If you are doing critical work with programs that
//  perform floating point division and certain related functions that
//  use the same hardware (including remainder and transcendtal functions),
//  you may wish to use this program to force emulation.
//  
//  Type "pentnt -? | more" if you need to see all the help text
//
#define MSG_PENTBUG_HELP                 0x00000001L

//
// MessageId: MSG_PENTBUG_NO_FLOAT_HARDWARE
//
// MessageText:
//
//  This computer does not have any floating point hardware,
//  therefore you do not need to run this program.
//
#define MSG_PENTBUG_NO_FLOAT_HARDWARE    0x00000002L

//
// MessageId: MSG_PENTBUG_NOT_NT
//
// MessageText:
//
//  This program is only useful on Windows NT.
//
#define MSG_PENTBUG_NOT_NT               0x00000003L

//
// MessageId: MSG_PENTBUG_NEED_NTOK
//
// MessageText:
//
//  You are running a version of Windows NT that does not
//  support forced emulation.  You must upgrade to Service
//  Pack 1 (or later) for Windows NT Version 3.5 or upgrade to
//  Windows NT Version 3.51 or later, if you wish to
//  use the forced emulation workaround for the Pentium
//  floating point division error.
//
#define MSG_PENTBUG_NEED_NTOK            0x00000004L

//
// MessageId: MSG_PENTBUG_SET_FAILED
//
// MessageText:
//
//  Unable to set the ForceNpxEmulation flag in the registry.
//  Error code = %d.
//
#define MSG_PENTBUG_SET_FAILED           0x00000005L

//
// MessageId: MSG_PENTBUG_IS_OFF_OK
//
// MessageText:
//
//  Floating point hardware is not disabled.
//  This program has not made any changes.
//
#define MSG_PENTBUG_IS_OFF_OK            0x00000006L

//
// MessageId: MSG_PENTBUG_IS_OFF_REBOOT
//
// MessageText:
//
//  Forced floating point emulation has already been turned off,
//  but is still active. You must shut down and restart your
//  system for this to take effect.
//
#define MSG_PENTBUG_IS_OFF_REBOOT        0x00000007L

//
// MessageId: MSG_PENTBUG_TURNED_OFF
//
// MessageText:
//
//  Forced floating point emulation has been turned off.
//
#define MSG_PENTBUG_TURNED_OFF           0x00000008L

//
// MessageId: MSG_PENTBUG_REBOOT
//
// MessageText:
//
//  You must shut down and restart your system for this change
//  to take effect.
//
#define MSG_PENTBUG_REBOOT               0x00000009L

//
// MessageId: MSG_PENTBUG_IS_ON_COND_REBOOT
//
// MessageText:
//
//  Forced floating point emulation has already been conditionally
//  enabled, but is not active.  You must shut down and restart your
//  system to activate emulation.
//
#define MSG_PENTBUG_IS_ON_COND_REBOOT    0x0000000AL

//
// MessageId: MSG_PENTBUG_IS_ON_COND_OK
//
// MessageText:
//
//  Forced floating point emulation is already conditionally enabled,
//  and appears to be working.  This program has not changed anything.
//
#define MSG_PENTBUG_IS_ON_COND_OK        0x0000000BL

//
// MessageId: MSG_PENTBUG_TURNED_ON_CONDITIONAL
//
// MessageText:
//
//  Floating point emulation has been conditionally enabled.
//
#define MSG_PENTBUG_TURNED_ON_CONDITIONAL 0x0000000CL

//
// MessageId: MSG_PENTBUG_IS_ON_ALWAYS_OK
//
// MessageText:
//
//  Forced floating point emulation is already forced on.
//  This program has not made any changes.
//
#define MSG_PENTBUG_IS_ON_ALWAYS_OK      0x0000000DL

//
// MessageId: MSG_PENTBUG_IS_ON_ALWAYS_REBOOT
//
// MessageText:
//
//  Floating point emulation has already been unconditionally enabled,
//  but is not active.  You need to shut down and restart your
//  system to activate emulation.
//
#define MSG_PENTBUG_IS_ON_ALWAYS_REBOOT  0x0000000EL

//
// MessageId: MSG_PENTBUG_TURNED_ON_ALWAYS
//
// MessageText:
//
//  Forced floating point emulation has been unconditionally enabled.
//
#define MSG_PENTBUG_TURNED_ON_ALWAYS     0x0000000FL

//
// MessageId: MSG_PENTBUG_FLOAT_WORKS
//
// MessageText:
//
//  The floating point hardware in this system does not
//  exhibit the Pentium floating point division error.
//
#define MSG_PENTBUG_FLOAT_WORKS          0x00000010L

//
// MessageId: MSG_PENTBUG_EMULATION_ON_AND_WORKS
//
// MessageText:
//
//  Floating point hardware is disabled and floating point emulation
//  has been enabled.
//
#define MSG_PENTBUG_EMULATION_ON_AND_WORKS 0x00000011L

//
// MessageId: MSG_PENTBUG_FDIV_ERROR
//
// MessageText:
//
//  The floating point hardware in this system exhibits
//  the Pentium floating point division error.
//
#define MSG_PENTBUG_FDIV_ERROR           0x00000012L

//
// MessageId: MSG_PENTBUG_IS_ON_REBOOT
//
// MessageText:
//
//  Forced floating point emulation has already been enabled
//  either conditionally or unconditionally, but you
//  must shut down and restart the system before
//  it will take effect.
//
#define MSG_PENTBUG_IS_ON_REBOOT         0x00000013L

//
// MessageId: MSG_PENTBUG_CRITICAL_WORK
//
// MessageText:
//
//  If you are doing critical work using applications that
//  depend on floating point division, remainder or
//  transcendental instructions, you may wish to disable
//  floating point hardware and to force floating point emulation.
//  Run "pentnt -c" and then shut down and restart your
//  system to force floating point emulation on.
//  If you do this, floating point operations will run
//  much more slowly.
//
#define MSG_PENTBUG_CRITICAL_WORK        0x00000014L

