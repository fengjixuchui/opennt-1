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
// MessageId: MSG_NOT_FOUND
//
// MessageText:
//
//  The system could not locate message #%1!x!.
//
#define MSG_NOT_FOUND                    0x00007530L

//
// MessageId: MSG_USAGE
//
// MessageText:
//
//  Incorrect arguments. Consult the Windows NT OEM Preinstall Kit documentation for a description of the arguments to this application.
//
#define MSG_USAGE                        0x00007531L

//
// MessageId: MSG_DEVICE_INF_ERROR
//
// MessageText:
//
//  Setup could not locate an information file supplied by your computer's manufacturer.  Contact the manufacturer and report the following missing file:
//  
//  %1
//  
//  Click OK. Setup will continue, but certain devices may not work correctly.
//
#define MSG_DEVICE_INF_ERROR             0x00007532L

