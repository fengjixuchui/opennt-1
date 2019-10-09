/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) 1992-1994  Microsoft Corporation

Module Name:

    8514alog.h

Abstract:

    Constant definitions for the I/O error code log values.

Revision History:

--*/


//
//  Status values are 32 bit values layed out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-------------------------+-------------------------------+
//  |Sev|C|       Facility          |               Code            |
//  +---+-+-------------------------+-------------------------------+
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
//      Facility - is the facility code
//
//      Code - is the facility's status code
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
#define FACILITY_VIDEO_ERROR_CODE        0x101


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: P9_INTERGRAPH_FOUND
//
// MessageText:
//
//  An Intergraph video adapter was detected that is not compatible with this driver.
//  An Intergraph supplied driver may be used instead.
//
#define P9_INTERGRAPH_FOUND              ((VP_STATUS)0x41010001L)

//
// MessageId: P9_DOWN_LEVEL_BIOS
//
// MessageText:
//
//  A down level BIOS was detected on the Viper P9000. Boot or mode switching problems may be encountered.
//
#define P9_DOWN_LEVEL_BIOS               ((VP_STATUS)0x41010002L)

//
// MessageId: P9_UNSUPPORTED_DAC
//
// MessageText:
//
//  An unsupported DAC type was detected on a Weitek P9100 based video adapter.
//  This display driver will support it only in VGA mode.
//
#define P9_UNSUPPORTED_DAC               ((VP_STATUS)0x41010003L)

