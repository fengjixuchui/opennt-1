/**********************************************************************/
/**                       Microsoft Windows NT                       **/
/**                Copyright(c) Microsoft Corp., 1993                **/
/**********************************************************************/

/*
    inetamsg.h

    This file is generated by the MC tool from the INETAMSG.MC message
    file.


    FILE HISTORY:
        Johnl       16-Mar-1995 Created.

*/


#ifndef _INETAMSG_H_
#define _INETAMSG_H_

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
// MessageId: INET_SVCS_FAILED_LOGON
//
// MessageText:
//
//  The server was unable to logon the Windows NT account '%1' due to the following error: %2 The data is the error code.
//
#define INET_SVCS_FAILED_LOGON           0x80000064L

//
// MessageId: INET_SVC_ADD_VIRTUAL_ROOT_FAILED
//
// MessageText:
//
//  The server was unable to add the virtual root '%1' for the directory '%2' due to the following error: %3 The data is the error code.
//
#define INET_SVC_ADD_VIRTUAL_ROOT_FAILED 0x80000065L

//
// MessageId: INET_SVC_ODBC_DLL_LOAD_FAILED
//
// MessageText:
//
//  The server was unable to load ODBC32.DLL for sql logging due to the following error: %1 The data is the error code.
//
#define INET_SVC_ODBC_DLL_LOAD_FAILED    0xC0000066L

//
// MessageId: INET_SVC_ODBC_OPEN_FAILED
//
// MessageText:
//
//  The server was unable to open ODBC Data source %1, Table: %2, under UserName %3. The ODBC Error is: %4. The data is the error code.
//
#define INET_SVC_ODBC_OPEN_FAILED        0xC0000067L

//
// MessageId: INET_SVC_LOG_PARAMETERS_LONG
//
// MessageText:
//
//  The parameters specified for logging are too long. Field: %1; Data Given: %2.
//
#define INET_SVC_LOG_PARAMETERS_LONG     0xC0000068L

//
// MessageId: INET_SVC_SERVICE_REG_FAILED
//
// MessageText:
//
//  The server was unable to register the administration tool discovery information.  The administration tool may not be able to see this server.  The data is the error code.
//
#define INET_SVC_SERVICE_REG_FAILED      0xC0000069L

//
// MessageId: INET_SVC_LOG_CREATION_FAILED
//
// MessageText:
//
//  The Creation of InetLog Context failed. The data is error code. 
//
#define INET_SVC_LOG_CREATION_FAILED     0xC000006AL

//
// MessageId: INET_SVC_LOG_INFORMATION_FAILED
//
// MessageText:
//
//  Logging information failed. The log object was never created possibly due to wrong configuration. 
//
#define INET_SVC_LOG_INFORMATION_FAILED  0xC000006BL

//
// MessageId: INET_SVC_INVALID_LOGFILE_DIRECTORY
//
// MessageText:
//
//  The server was unable to find the log file directory %1. The data is error code.
//
#define INET_SVC_INVALID_LOGFILE_DIRECTORY 0xC000006CL

//
// MessageId: INET_SVC_LOGGING_SUSPENDED
//
// MessageText:
//
//  The server was unable to continue request log owing to failure indicated by error code in data. Additionally it received error message: %1.
//
#define INET_SVC_LOGGING_SUSPENDED       0xC000006DL

//
// MessageId: INET_SVC_LOGGING_RESUMED
//
// MessageText:
//
//  The server resumed request logging.
//
#define INET_SVC_LOGGING_RESUMED         0xC000006EL


#endif  // _INETAMSG_H_

/**********************************************************************/
/**                       Microsoft Windows NT                       **/
/**                Copyright(c) Microsoft Corp., 1993                **/
/**********************************************************************/

/*
    msg.h

    This file is generated by the MC tool from the MSG.MC message
    file.


    FILE HISTORY:
        KeithMo     19-Mar-1993 Created.

*/


#ifndef _MSG_H_
#define _MSG_H_

//
// MessageId: FTPD_EVENT_CANNOT_INITIALIZE_SECURITY
//
// MessageText:
//
//  FTP Server could not initialize its security.  The data is the error.
//
#define FTPD_EVENT_CANNOT_INITIALIZE_SECURITY 0xC0000001L

//
// MessageId: FTPD_EVENT_CANNOT_INITIALIZE_WINSOCK
//
// MessageText:
//
//  FTP Server could not initialize the socket library.  The data is the error.
//
#define FTPD_EVENT_CANNOT_INITIALIZE_WINSOCK 0xC0000003L

//
// MessageId: FTPD_EVENT_OUT_OF_MEMORY
//
// MessageText:
//
//  FTP Server was unable to initialize due to a shortage of available memory.  The data is the error.
//
#define FTPD_EVENT_OUT_OF_MEMORY         0xC0000004L

//
// MessageId: FTPD_EVENT_CANNOT_LOCATE_FTP
//
// MessageText:
//
//  FTP Server could not locate the FTP/TCP service.  The data is the error.
//
#define FTPD_EVENT_CANNOT_LOCATE_FTP     0xC0000005L

//
// MessageId: FTPD_EVENT_CANNOT_CREATE_CONNECTION_SOCKET
//
// MessageText:
//
//  FTP Server could not create the main connection socket.  The data is the error.
//
#define FTPD_EVENT_CANNOT_CREATE_CONNECTION_SOCKET 0xC0000006L

//
// MessageId: FTPD_EVENT_CANNOT_CREATE_CONNECTION_THREAD
//
// MessageText:
//
//  FTP Server could not create the main connection thread.  The data is the error.
//
#define FTPD_EVENT_CANNOT_CREATE_CONNECTION_THREAD 0xC0000007L

//
// MessageId: FTPD_EVENT_CANNOT_CREATE_CLIENT_THREAD
//
// MessageText:
//
//  FTP Server could not create a client worker thread for user at host %1.  The connection to this user is terminated.  The data is the error.
//
#define FTPD_EVENT_CANNOT_CREATE_CLIENT_THREAD 0xC0000008L

//
// MessageId: FTPD_EVENT_SYSTEM_CALL_FAILED
//
// MessageText:
//
//  A call to a system service failed unexpectedly.  The data is the error.
//
#define FTPD_EVENT_SYSTEM_CALL_FAILED    0xC0000009L

//
// MessageId: FTPD_EVENT_CLIENT_TIMEOUT
//
// MessageText:
//
//  User %1 at host %2 has timed-out after %3 seconds of inactivity.
//
#define FTPD_EVENT_CLIENT_TIMEOUT        0x8000000AL

//
// MessageId: FTPD_EVENT_ANONYMOUS_LOGON
//
// MessageText:
//
//  Anonymous logon request received from %1 at host %2.
//
#define FTPD_EVENT_ANONYMOUS_LOGON       0x4000000BL

//
// MessageId: FTPD_EVENT_NONANONYMOUS_LOGON
//
// MessageText:
//
//  User logon request received from %1 at host %2.
//
#define FTPD_EVENT_NONANONYMOUS_LOGON    0x4000000CL

//
// MessageId: FTPD_EVENT_BAD_HOME_DIRECTORY
//
// MessageText:
//
//  User %1 failed to log on, could not access the home directory %2.
//
#define FTPD_EVENT_BAD_HOME_DIRECTORY    0x8000000DL

//
// MessageId: FTPD_EVENT_RETRO_ACCESS_DENIED
//
// MessageText:
//
//  User %1 denied access to the current directory %2 due to a security change.
//
#define FTPD_EVENT_RETRO_ACCESS_DENIED   0x8000000EL


#endif  // _MSG_H_

