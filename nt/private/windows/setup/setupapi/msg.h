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
// MessageId: MSG_FIRST
//
// MessageText:
//
//  MSG_FIRST
//
#define MSG_FIRST                        0x0000EA60L

//
// MessageId: MSG_FILEERROR_DETAILS1
//
// MessageText:
//
//  The following error occurred: "%1" (error #%2!u!).
//  
//  Source File: %3
//  Destination File: %4%0
//
#define MSG_FILEERROR_DETAILS1           0x0000EA61L

//
// MessageId: MSG_FILEERROR_RENAME
//
// MessageText:
//
//  An error occurred renaming a file: "%1" (error #%2!u!).
//  
//  Current File Name: %3
//  New File Name: %4
//  
//  Click Retry to retry the operation or Skip File to skip this file.%0
//
#define MSG_FILEERROR_RENAME             0x0000EA66L

//
// MessageId: MSG_FILEERROR_DELETE
//
// MessageText:
//
//  An error occurred deleting file %1.
//  
//  %2 (error #%3!u!).
//  
//  Click Retry to retry the operation or Skip File to skip this file.%0
//
#define MSG_FILEERROR_DELETE             0x0000EA67L

//
// MessageId: MSG_NO_NEED_TO_COPY
//
// MessageText:
//
//  Required files are already installed on your hard disk. Setup can use these existing files, or Setup can recopy them from your original Windows NT CD-ROM or from a network share.
//  
//  Would you like to skip file copying and use the existing files? (If you click No, you will be prompted to insert your Windows NT CD-ROM or to supply an alternate location where the needed files may be found.)%0
//
#define MSG_NO_NEED_TO_COPY              0x0000EA68L

//
// MessageId: MSG_SELECTDEVICE_ERROR
//
// MessageText:
//
//  You must select a model before continuing.
//
#define MSG_SELECTDEVICE_ERROR           0x0000EA69L

//
// MessageId: MSG_NO_DEVICEINFO_ERROR
//
// MessageText:
//
//  The specified location does not contain information about your hardware.
//
#define MSG_NO_DEVICEINFO_ERROR          0x0000EA6AL

//
// MessageId: MSG_CI_LOADFAIL_ERROR
//
// MessageText:
//
//  Windows NT could not load the installer for the %1 hardware being installed. Contact your hardware vendor for assistance.
//
#define MSG_CI_LOADFAIL_ERROR            0x0000EA6BL

//
// MessageId: MSG_NO_CLASSDRVLIST_ERROR
//
// MessageText:
//
//  The list of all devices could not be retrieved.
//
#define MSG_NO_CLASSDRVLIST_ERROR        0x0000EA6CL

//
// MessageId: MSG_INF_FAILED
//
// MessageText:
//
//  Installation failed.
//
#define MSG_INF_FAILED                   0x0000EA6DL

//
// MessageId: MSG_CDPROMPT
//
// MessageText:
//
//  Please insert the Compact Disc labeled '%1' into your CD-ROM drive (%2!c!:) and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a floppy disk or a network server.%0
//
#define MSG_CDPROMPT                     0x0000EA6EL

//
// MessageId: MSG_FLOPPYPROMPT
//
// MessageText:
//
//  Please insert the floppy disk labeled '%1' into drive %2!c!: and then click OK.
//  
//  You can also click OK if you want files to be copied from an alternate location, such as a network server or a compact disc.%0
//
#define MSG_FLOPPYPROMPT                 0x0000EA6FL

