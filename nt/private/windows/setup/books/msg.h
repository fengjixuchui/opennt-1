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
// MessageId: MSG_PROMPT_CD_FIRST
//
// MessageText:
//
//  Please insert the CD-ROM labeled "%2" into your CD-ROM drive, or enter the location of the Books Online files.%0
//
#define MSG_PROMPT_CD_FIRST              0x00002710L

//
// MessageId: MSG_PROMPT_NO_CD_FIRST
//
// MessageText:
//
//  Please enter the location of the Books Online files.%0
//
#define MSG_PROMPT_NO_CD_FIRST           0x00002711L

//
// MessageId: MSG_PROMPT_CD
//
// MessageText:
//
//  The Books Online files could not be located at their last known location (%1).
//  
//  Please insert the CD-ROM labeled "%2" into your CD-ROM drive, or enter the location of the Books Online files.%0
//
#define MSG_PROMPT_CD                    0x00002712L

//
// MessageId: MSG_PROMPT_NO_CD
//
// MessageText:
//
//  The Books Online files could not be located at their last known location (%1).
//  
//  Please enter the location of the Books Online files.%0
//
#define MSG_PROMPT_NO_CD                 0x00002713L

//
// MessageId: MSG_CANT_GET_FILE_LIST
//
// MessageText:
//
//  An error occurred accessing the Books Online files. Check the network connection or make sure the compact disc is properly inserted in your CD-ROM drive.%0
//
#define MSG_CANT_GET_FILE_LIST           0x00002714L

