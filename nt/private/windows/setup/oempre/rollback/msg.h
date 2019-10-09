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
#define MSG_NOT_FOUND                    0x00000001L

//
// MessageId: MSG_BANNER
//
// MessageText:
//
//  
//  Setup rollback tool version 4.0, Copyright(c) 1996, Microsoft Corporation
//  
//
#define MSG_BANNER                       0x00000002L

//
// MessageId: MSG_NOT_ADMIN
//
// MessageText:
//
//  You must be logged on an administrator to run this program.
//
#define MSG_NOT_ADMIN                    0x00000003L

//
// MessageId: MSG_NO_PRIVILEGE
//
// MessageText:
//
//  Unable to enable restore or shutdown privilege.
//
#define MSG_NO_PRIVILEGE                 0x00000004L

//
// MessageId: MSG_BACKUPHIVE_ABSENT
//
// MessageText:
//
//  The backup hive file %1 is missing.
//
#define MSG_BACKUPHIVE_ABSENT            0x00000005L

//
// MessageId: MSG_HIVE_COPY
//
// MessageText:
//
//  Copying hive file %1 to %2...%0
//
#define MSG_HIVE_COPY                    0x00000006L

//
// MessageId: MSG_OK
//
// MessageText:
//
//   OK
//
#define MSG_OK                           0x00000007L

//
// MessageId: MSG_HIVE_COPY_FAILED
//
// MessageText:
//
//  
//  Unable to copy backup hive file %1 to
//  new hive file %2:
//
#define MSG_HIVE_COPY_FAILED             0x00000008L

//
// MessageId: MSG_PROCESSING_SYSHIVE
//
// MessageText:
//
//  Processing new system hive...%0
//
#define MSG_PROCESSING_SYSHIVE           0x00000009L

//
// MessageId: MSG_CANT_LOAD_HIVE
//
// MessageText:
//
//  
//  Unable to load new hive %1:
//
#define MSG_CANT_LOAD_HIVE               0x0000000AL

//
// MessageId: MSG_CANT_OPEN_SETUP_KEY
//
// MessageText:
//
//  
//  Unable to open setup key in interim hive %1:
//
#define MSG_CANT_OPEN_SETUP_KEY          0x0000000BL

//
// MessageId: MSG_CANT_WRITE_SETUP_VALUE
//
// MessageText:
//
//  
//  Unable to write RestartSetup value in setup key in new hive %1:
//
#define MSG_CANT_WRITE_SETUP_VALUE       0x0000000CL

//
// MessageId: MSG_HIVE_SHUFFLE
//
// MessageText:
//
//  Replacing existing hive files with new hive files...%0
//
#define MSG_HIVE_SHUFFLE                 0x0000000DL

//
// MessageId: MSG_HIVE_SHUFFLE_FAILED
//
// MessageText:
//
//  
//  Unable to replace hive backing %1 with hive file %2:
//
#define MSG_HIVE_SHUFFLE_FAILED          0x0000000EL

//
// MessageId: MSG_DELETING_CONFIG_FILES
//
// MessageText:
//
//  Cleaning out the config directory...%0
//
#define MSG_DELETING_CONFIG_FILES        0x0000000FL

//
// MessageId: MSG_CANT_START_DIR_SCAN
//
// MessageText:
//
//  
//  Unable to start scan of directory %1:
//
#define MSG_CANT_START_DIR_SCAN          0x00000010L

//
// MessageId: MSG_DIR_SCAN_FAILED
//
// MessageText:
//
//  
//  Directory scan (%1) terminated prematurely:
//
#define MSG_DIR_SCAN_FAILED              0x00000011L

//
// MessageId: MSG_CANT_DELETE_FILE
//
// MessageText:
//
//  
//  Unable to register file %1 for delete on next reboot:
//
#define MSG_CANT_DELETE_FILE             0x00000012L

//
// MessageId: MSG_SUCCESS
//
// MessageText:
//
//  The system has been successfully rolled back. Shut down now.
//
#define MSG_SUCCESS                      0x00000013L

//
// MessageId: MSG_CANT_OPEN_NEW_SM_KEY
//
// MessageText:
//
//  
//  Unable to open session manager key in interim hive %1:
//
#define MSG_CANT_OPEN_NEW_SM_KEY         0x00000014L

//
// MessageId: MSG_CANT_OPEN_SM_KEY
//
// MessageText:
//
//  
//  Unable to open session manager key:
//
#define MSG_CANT_OPEN_SM_KEY             0x00000015L

//
// MessageId: MSG_CANT_SET_DELETE_LIST
//
// MessageText:
//
//  
//  Unable to transfer delete list to new system hive:
//
#define MSG_CANT_SET_DELETE_LIST         0x00000016L

