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
// MessageId: MSG_BAD_COMPUTER_NAME1
//
// MessageText:
//
//  Computer names may not start or end with a space, and the following characters are not allowed in computer names:
//  
//  / \ [ ] " : ; | < > + = , ? *
//  
//  Please enter a different name for your computer.%0
//
#define MSG_BAD_COMPUTER_NAME1           0x0000EA61L

//
// MessageId: MSG_BAD_COMPUTER_NAME2
//
// MessageText:
//
//  Setup cannot continue until you enter a name for your computer.%0
//
#define MSG_BAD_COMPUTER_NAME2           0x0000EA62L

//
// MessageId: MSG_NO_NAMEORG_NAME
//
// MessageText:
//
//  Setup cannot continue until you enter your name.%0
//
#define MSG_NO_NAMEORG_NAME              0x0000EA63L

//
// MessageId: MSG_CANT_INVOKE_WINHELP
//
// MessageText:
//
//  Setup is unable to display help.%0
//
#define MSG_CANT_INVOKE_WINHELP          0x0000EA64L

//
// MessageId: MSG_UNABLE_TO_SET_NPX_SETTING
//
// MessageText:
//
//  Setup was unable to enable the floating-point workaround because a registry function returned %1!u!.
//  
//  You can use the PENTNT.EXE program to control floating-point emulation when you have finished installing Windows NT.%0
//
#define MSG_UNABLE_TO_SET_NPX_SETTING    0x0000EA65L

//
// MessageId: MSG_BAD_USER_NAME1
//
// MessageText:
//
//  User names may not start or end with a space, and the following characters are not allowed in user names:
//  
//  / \ [ ] " : ; | < > + = , ? *
//  
//  Please enter a different name for the user.%0
//
#define MSG_BAD_USER_NAME1               0x0000EA66L

//
// MessageId: MSG_BAD_USER_NAME2
//
// MessageText:
//
//  Setup cannot continue until you enter a name for the user.%0
//
#define MSG_BAD_USER_NAME2               0x0000EA67L

//
// MessageId: MSG_PW_MISMATCH
//
// MessageText:
//
//  The passwords you entered do not match. Please enter the desired password again.%0
//
#define MSG_PW_MISMATCH                  0x0000EA68L

//
// MessageId: MSG_BAD_USER_NAME3
//
// MessageText:
//
//  "Administrator" and "Guest" are already used. Please enter a different name for the user.%0
//
#define MSG_BAD_USER_NAME3               0x0000EA69L

//
// MessageId: MSG_FATAL_ERROR
//
// MessageText:
//
//  An error has been encountered that prevents Setup from continuing.
//  
//  %1
//  Press OK to view the Setup log file.%0
//
#define MSG_FATAL_ERROR                  0x0000EA6AL

//
// MessageId: MSG_INITIALIZING
//
// MessageText:
//
//  Setup is initializing...%0
//
#define MSG_INITIALIZING                 0x0000EA6BL

//
// MessageId: MSG_CONFIGURING_COMPUTER
//
// MessageText:
//
//  Setup is configuring your computer to run Windows NT...
//
#define MSG_CONFIGURING_COMPUTER         0x0000EA6CL

//
// MessageId: MSG_UPGRADING
//
// MessageText:
//
//  Setup is upgrading Windows NT...
//
#define MSG_UPGRADING                    0x0000EA6DL

//
// MessageId: MSG_REMOVING_LOCALSRC
//
// MessageText:
//
//  Setup is removing temporary installation files...
//
#define MSG_REMOVING_LOCALSRC            0x0000EA6EL

//
// MessageId: MSG_PREPARING_OPTDIRS
//
// MessageText:
//
//  Setup is preparing to copy files in optional directories...
//
#define MSG_PREPARING_OPTDIRS            0x0000EA6FL

//
// MessageId: MSG_SETUP_DONE_SUCCESS
//
// MessageText:
//
//  Windows NT 4.50 has been installed successfully.
//  
//  Remove disks from floppy drives and compact discs from CD-ROM drives and choose Restart Computer.%0
//
#define MSG_SETUP_DONE_SUCCESS           0x0000EA70L

//
// MessageId: MSG_UPGRADE_DONE_SUCCESS
//
// MessageText:
//
//  Windows NT has been successfully upgraded to version 4.50.
//  
//  Remove disks from floppy drives and compact discs from CD-ROM drives and choose Restart Computer.%0
//
#define MSG_UPGRADE_DONE_SUCCESS         0x0000EA71L

//
// MessageId: MSG_SETUP_DONE_GENERIC
//
// MessageText:
//
//  Windows NT 4.50 is now installed.
//  
//  Remove disks from floppy drives and compact discs from CD-ROM drives and choose Restart Computer.%0
//
#define MSG_SETUP_DONE_GENERIC           0x0000EA72L

//
// MessageId: MSG_SETUP_HAD_ERRORS
//
// MessageText:
//
//  One or more minor errors occurred installing Windows NT. The errors will not prevent Windows NT from running.
//  
//  After Windows NT starts, you can check the Setup log file (%1) for more information.
//  
//  Would you like to view the log file now?
//
#define MSG_SETUP_HAD_ERRORS             0x0000EA73L

//
// MessageId: MSG_UPGRADING_PRINTERS
//
// MessageText:
//
//  Setup is upgrading Windows NT printing support...
//
#define MSG_UPGRADING_PRINTERS           0x0000EA74L

//
// MessageId: MSG_SETUP_CANT_READ_PID
//
// MessageText:
//
//  Setup was unable to retrieve the Product Identification of the system you
//  are installing. The Windows NT media may be damaged.
//  
//  Please contact Product Support.
//  
//
#define MSG_SETUP_CANT_READ_PID          0x0000EA75L

//
// MessageId: MSG_PID_IS_INVALID
//
// MessageText:
//
//  The CD Key you entered is not valid.
//  
//
#define MSG_PID_IS_INVALID               0x0000EA76L

//
// MessageId: MSG_PID_OEM_IS_INVALID
//
// MessageText:
//
//  The Product Id you entered is not valid.
//  
//
#define MSG_PID_OEM_IS_INVALID           0x0000EA77L

//
// MessageId: MSG_CREATING_MENU_OBJECTS
//
// MessageText:
//
//  Setup is creating menu groups and items...
//
#define MSG_CREATING_MENU_OBJECTS        0x0000EA78L

//
// MessageId: MSG_DISKSPACE_OC
//
// MessageText:
//
//  There is not enough disk space for all of the selected components. You can install these components later by using Control Panel in Windows. Click OK, and then clear one or more of the selected components.%0
//
#define MSG_DISKSPACE_OC                 0x0000EA79L

//
// MessageId: MSG_DISKSPACE_CPL
//
// MessageText:
//
//  There is not enough disk space for all of the selected components. Click OK, and then clear one or more of the selected components.%0
//
#define MSG_DISKSPACE_CPL                0x0000EA7AL

//
// MessageId: MSG_COMPONENTS_NEEDED_ADD
//
// MessageText:
//
//  %1 requires the following component(s):
//  
//  %2
//  
//  Adding it will also add these components.
//  
//  Do you want to add %1 and all components that it requires?%0
//
#define MSG_COMPONENTS_NEEDED_ADD        0x0000EA7BL

//
// MessageId: MSG_COMPONENTS_NEEDED
//
// MessageText:
//
//  %1 is required by the following component(s):
//  
//  %2
//  
//  Removing it will also remove these components.
//  
//  Do you want to remove %1 and all components that require it?%0
//
#define MSG_COMPONENTS_NEEDED            0x0000EA7CL

//
// MessageId: MSG_BAD_UNATTEND_PARAM
//
// MessageText:
//
//  A Setup parameter specified by your system administrator or computer manufacturer is missing or invalid. Setup must therefore ask you to provide this information now.
//  
//  Once you have furnished the required information, unattended Setup operation will continue.
//  
//  You may wish to inform your system administrator or computer manufacturer that the "%1" value is missing or invalid.%0
//
#define MSG_BAD_UNATTEND_PARAM           0x0000EA7DL

//
// MessageId: MSG_SPECIALOC_SPACE
//
// MessageText:
//
//  There is not enough disk space for the selected components. You can install these components later from the Windows NT desktop. Click OK, and then clear one or more of the selected components.
//  
//  Space required:\t%1
//  Space available:\t%2%0
//
#define MSG_SPECIALOC_SPACE              0x0000EA7EL

//
// MessageId: MSG_MIGRATING_WIN95
//
// MessageText:
//
//  Setup is migrating Windows 95 settings to Windows NT...
//
#define MSG_MIGRATING_WIN95              0x0000EA7FL

//
// MessageId: MSG_PREPARING_FOR_NETSETUP
//
// MessageText:
//
//  Setup is preparing to initialize Windows NT Networking installation...
//
#define MSG_PREPARING_FOR_NETSETUP       0x0000EA80L

//
// MessageId: MSG_UNABLE_TO_SHOW_LOG
//
// MessageText:
//
//  Setup is unable to show the log file.
//
#define MSG_UNABLE_TO_SHOW_LOG           0x0000EA81L

//
// MessageId: MSG_OC_EXCEPTION
//
// MessageText:
//
//  Setup encountered an internal error while processing optional components. Please notify Microsoft.
//  
//  Press OK to continue Setup.
//
#define MSG_OC_EXCEPTION                 0x0000EA82L

//
// MessageId: MSG_UNIQUENESS_DB_BAD_1
//
// MessageText:
//
//  Setup was unable to locate information for "%1" in the computer database provided by your system administrator. The database file is missing or damaged.
//  
//  Contact your system administrator, who may provide you with a floppy disk containing a repaired or more up-to-date computer database. When you click OK, Setup will prompt you to insert this disk.%0
//
#define MSG_UNIQUENESS_DB_BAD_1          0x0000EA83L

//
// MessageId: MSG_UNIQUENESS_DB_BAD_2
//
// MessageText:
//
//  Setup was unable to locate information for "%1" in the computer database on the floppy disk you provided. The database file may be missing or damaged.
//  
//  Contact your system administrator, who may provide you with a floppy disk containing a repaired or more up-to-date computer database. When you click OK, Setup will prompt you to insert this disk.%0
//
#define MSG_UNIQUENESS_DB_BAD_2          0x0000EA84L

//
// MessageId: MSG_UNIQUENESS_DB_PROMPT
//
// MessageText:
//
//  Your system administrator has configured Setup to prompt you for a database that contains information about computers in your organization.
//  
//  Contact your system administrator and request the floppy disk containing this database. When you have this disk, insert it in drive A and click OK.
//  
//  Click Cancel only as a last resort, such as when you cannot contact your system administrator. Setup will procede using default values which may not be correct for your computer within your organization.%0
//
#define MSG_UNIQUENESS_DB_PROMPT         0x0000EA85L

//
// MessageId: MSG_UNIQUENESS_DB_VERIFYCANCEL
//
// MessageText:
//
//  If you cancel, Setup will procede with default values that may not be correct for your computer or your organization. You will need to perform additional configuration after Setup has completed.
//  
//  Are you sure you want to cancel?%0
//
#define MSG_UNIQUENESS_DB_VERIFYCANCEL   0x0000EA86L

//
// MessageId: MSG_EULA_ERROR
//
// MessageText:
//
//  The text of the Software License Agreement for Windows NT has been tampered with.
//
#define MSG_EULA_ERROR                   0x0000EA87L

//
// MessageId: MSG_NOT_ACCEPT_EULA
//
// MessageText:
//
//  You elected not to accept the Software License Agreement for Windows NT.
//
#define MSG_NOT_ACCEPT_EULA              0x0000EA88L

//
// MessageId: MSG_EXAMINING_DEVICES
//
// MessageText:
//
//  Setup is examining your computer's devices...%0
//
#define MSG_EXAMINING_DEVICES            0x0000EA89L

//
// MessageId: MSG_EVAL_UNIT_CLOCK_SEEMS_WRONG
//
// MessageText:
//
//  The date and time indicated by your computer's clock appear to Setup to be inaccurate, which may affect proper operation of this evaluation version of Windows NT.
//  
//  Click OK. You will then be given an opportunity to change the date and time.
//
#define MSG_EVAL_UNIT_CLOCK_SEEMS_WRONG  0x0000EA8AL

//
// MessageId: MSG_CPL_NOT_ADMIN
//
// MessageText:
//
//  You do not have the privileges necessary to add/remove components.  Continuing may generate errors.  Do you want to continue?
//
#define MSG_CPL_NOT_ADMIN                0x0000EA8BL

//
// MessageId: MSG_LOG_X_RETURNED_NTSTATUS
//
// MessageText:
//
//  %1 returned status %2!x!.
//
#define MSG_LOG_X_RETURNED_NTSTATUS      0x0000EE48L

//
// MessageId: MSG_LOG_X_PARAM_RETURNED_NTSTATUS
//
// MessageText:
//
//  %1(%3) returned error %2!x!.
//
#define MSG_LOG_X_PARAM_RETURNED_NTSTATUS 0x0000EE49L

//
// MessageId: MSG_LOG_X_RETURNED_WINERR
//
// MessageText:
//
//  %1 returned error %2!u!.
//
#define MSG_LOG_X_RETURNED_WINERR        0x0000EE4AL

//
// MessageId: MSG_LOG_X_PARAM_RETURNED_WINERR
//
// MessageText:
//
//  %1(%3) returned error %2!u!.
//
#define MSG_LOG_X_PARAM_RETURNED_WINERR  0x0000EE4BL

//
// MessageId: MSG_LOG_X_RETURNED_STRING
//
// MessageText:
//
//  %1 returned error %2.
//
#define MSG_LOG_X_RETURNED_STRING        0x0000EE4CL

//
// MessageId: MSG_LOG_X_PARAM_RETURNED_STRING
//
// MessageText:
//
//  %1 returned error %2.
//
#define MSG_LOG_X_PARAM_RETURNED_STRING  0x0000EE4DL

//
// MessageId: MSG_LOG_SETACCOUNTDOMAINSID
//
// MessageText:
//
//  Setup was unable to set the account domain SID because of the following error:
//  %1
//
#define MSG_LOG_SETACCOUNTDOMAINSID      0x0000EE4EL

//
// MessageId: MSG_LOG_SIGNALLSA
//
// MessageText:
//
//  Setup was unable to complete installation of the security
//  subsystem; signalling LSA failed as follows:
//  %1
//
#define MSG_LOG_SIGNALLSA                0x0000EE4FL

//
// MessageId: MSG_LOG_SAMEVENT
//
// MessageText:
//
//  Setup was unable to complete installation of the security
//  subsystem; initializing SAM failed as follows:
//  %1
//
#define MSG_LOG_SAMEVENT                 0x0000EE50L

//
// MessageId: MSG_LOG_WAITFORSAM
//
// MessageText:
//
//  Setup was unable to complete installation of the security
//  subsystem; waiting for SAM to initialize failed as follows:
//  %1
//
#define MSG_LOG_WAITFORSAM               0x0000EE51L

//
// MessageId: MSG_LOG_CHANGING_PW_FAIL
//
// MessageText:
//
//  Setup was unable to change the password for user account %1
//  because of the following error:
//  %2
//
#define MSG_LOG_CHANGING_PW_FAIL         0x0000EE52L

//
// MessageId: MSG_LOG_USERNOTFOUND
//
// MessageText:
//
//  The user could not be found in the accounts domain.
//
#define MSG_LOG_USERNOTFOUND             0x0000EE53L

//
// MessageId: MSG_LOG_ADD_PDC_ACCT_FAIL
//
// MessageText:
//
//  Setup was unable to add the PDC machine account bacause of
//  the following error:
//  %1
//
#define MSG_LOG_ADD_PDC_ACCT_FAIL        0x0000EE54L

//
// MessageId: MSG_LOG_NOLSAEVENT
//
// MessageText:
//
//  The expected LSA event does not exist.
//
#define MSG_LOG_NOLSAEVENT               0x0000EE55L

//
// MessageId: MSG_LOG_PAGEFILE_FAIL
//
// MessageText:
//
//  Setup was unable to create a paging file because of the following error:
//  %1
//  You can use Control Panel to create a paging file after you start Windows NT.
//  Select System and then click the Virtual Memory button.
//
#define MSG_LOG_PAGEFILE_FAIL            0x0000EE56L

//
// MessageId: MSG_LOG_NO_PAGING_DRIVES
//
// MessageText:
//
//  No free space is available on any drive.%0
//
#define MSG_LOG_NO_PAGING_DRIVES         0x0000EE57L

//
// MessageId: MSG_LOG_CREATED_PAGEFILE
//
// MessageText:
//
//  Setup configured the system to place a %2!u! MB pagefile on drive %1!c!:.
//
#define MSG_LOG_CREATED_PAGEFILE         0x0000EE58L

//
// MessageId: MSG_LOG_CRASHDUMPFAIL
//
// MessageText:
//
//  Setup was unable to enable crashdump because of the following error:
//  %1
//
#define MSG_LOG_CRASHDUMPFAIL            0x0000EE59L

//
// MessageId: MSG_LOG_CRASHDUMPOK
//
// MessageText:
//
//  Crashdump was enabled.
//
#define MSG_LOG_CRASHDUMPOK              0x0000EE5AL

//
// MessageId: MSG_LOG_CREATESVC_FAIL
//
// MessageText:
//
//  Setup was unable to create service entry %1 because of the following error:
//  %2
//
#define MSG_LOG_CREATESVC_FAIL           0x0000EE5BL

//
// MessageId: MSG_LOG_CHANGESVC_FAIL
//
// MessageText:
//
//  Setup was unable to change service entry %1 because of the following error:
//  %2
//
#define MSG_LOG_CHANGESVC_FAIL           0x0000EE5CL

//
// MessageId: MSG_LOG_STARTSVC_FAIL
//
// MessageText:
//
//  Setup was unable to start service %1 because of the following error:
//  %2
//
#define MSG_LOG_STARTSVC_FAIL            0x0000EE5DL

//
// MessageId: MSG_LOG_OUTOFMEMORY
//
// MessageText:
//
//  A memory allocation request failed.
//
#define MSG_LOG_OUTOFMEMORY              0x0000EE5EL

//
// MessageId: MSG_LOG_INVOKEAPP_FAIL
//
// MessageText:
//
//  Setup was unable to invoke external program %1 because of
//  the following error:
//  %2
//
#define MSG_LOG_INVOKEAPP_FAIL           0x0000EE5FL

//
// MessageId: MSG_LOG_INVOKEAPPLET_FAIL
//
// MessageText:
//
//  Setup was unable to invoke a control panel applet because of
//  the following error:
//  %2
//
#define MSG_LOG_INVOKEAPPLET_FAIL        0x0000EE60L

//
// MessageId: MSG_LOG_SAVEHIVE_FAIL
//
// MessageText:
//
//  Setup was unable to save registry data %1 to %2
//  because of the following error:
//  %3
//
#define MSG_LOG_SAVEHIVE_FAIL            0x0000EE61L

//
// MessageId: MSG_LOG_SETENV_FAIL
//
// MessageText:
//
//  Unable to set environment variable %1.%0
//
#define MSG_LOG_SETENV_FAIL              0x0000EE62L

//
// MessageId: MSG_LOG_CANT_INIT_NETDDE
//
// MessageText:
//
//  Setup was unable to initialize NetDDE because of the following error:
//  %1
//
#define MSG_LOG_CANT_INIT_NETDDE         0x0000EE63L

//
// MessageId: MSG_LOG_NETDDELIB_FAILED
//
// MessageText:
//
//  A routine in the NetDDE library returned failure.
//
#define MSG_LOG_NETDDELIB_FAILED         0x0000EE64L

//
// MessageId: MSG_LOG_DELNODE_FAIL
//
// MessageText:
//
//  Setup was unable to remove temporary file or directory %1
//  from your hard drive because of the following error:
//  %2
//
#define MSG_LOG_DELNODE_FAIL             0x0000EE65L

//
// MessageId: MSG_LOG_INIWRITE_FAIL
//
// MessageText:
//
//  Setup was unable to write a value to %1 (error = %5!u!).
//  
//      [%2]
//      %3 = %4
//
#define MSG_LOG_INIWRITE_FAIL            0x0000EE66L

//
// MessageId: MSG_LOG_FONTINST_FAIL
//
// MessageText:
//
//  Setup was unable to install/upgrade fonts because of
//  the following error:
//  %1
//
#define MSG_LOG_FONTINST_FAIL            0x0000EE67L

//
// MessageId: MSG_LOG_MISCSPOOLERINIT
//
// MessageText:
//
//  Setup was unable to initialize the print spooler because of
//  the following error:
//  %1
//  You may be unable to print.
//
#define MSG_LOG_MISCSPOOLERINIT          0x0000EE68L

//
// MessageId: MSG_LOG_MENU_CREATGRP_FAIL
//
// MessageText:
//
//  Setup was unable to create menu group %1 because
//  of the following error:
//  %2
//
#define MSG_LOG_MENU_CREATGRP_FAIL       0x0000EE69L

//
// MessageId: MSG_LOG_MENU_REMGRP_FAIL
//
// MessageText:
//
//  Setup was unable to remove menu group %1 because
//  of the following error:
//  %2
//
#define MSG_LOG_MENU_REMGRP_FAIL         0x0000EE6AL

//
// MessageId: MSG_LOG_MENU_CREATITEM_FAIL
//
// MessageText:
//
//  Setup was create item %2 in menu group %1 because of
//  the following error:
//  %3
//
#define MSG_LOG_MENU_CREATITEM_FAIL      0x0000EE6BL

//
// MessageId: MSG_LOG_MENU_REMITEM_FAIL
//
// MessageText:
//
//  Setup was remove item %2 in menu group %1 because of
//  the following error:
//  %3
//
#define MSG_LOG_MENU_REMITEM_FAIL        0x0000EE6CL

//
// MessageId: MSG_LOG_ACTIVATEPROGMAN
//
// MessageText:
//
//  Setup was unable to activate Program Manager.
//
#define MSG_LOG_ACTIVATEPROGMAN          0x0000EE6DL

//
// MessageId: MSG_LOG_LEGACYINTERFACE
//
// MessageText:
//
//  Internal Setup data structures are corrupted (phase %1!d!).
//
#define MSG_LOG_LEGACYINTERFACE          0x0000EE6EL

//
// MessageId: MSG_LOG_SYSINFBAD
//
// MessageText:
//
//  The critical system information file %1 is corrupt or missing.
//
#define MSG_LOG_SYSINFBAD                0x0000EE6FL

//
// MessageId: MSG_LOG_SETPRODTYPE
//
// MessageText:
//
//  Setup was unable to set the product type in the registry.
//
#define MSG_LOG_SETPRODTYPE              0x0000EE70L

//
// MessageId: MSG_LOG_SECURITY_CATASTROPHE
//
// MessageText:
//
//  The security subsystem could not be initialized.
//
#define MSG_LOG_SECURITY_CATASTROPHE     0x0000EE71L

//
// MessageId: MSG_LOG_PRINTUPG_FAILED
//
// MessageText:
//
//  Setup was unable to upgrade printer drivers because of the following error:
//  %1
//
#define MSG_LOG_PRINTUPG_FAILED          0x0000EE72L

//
// MessageId: MSG_LOG_INF_CORRUPT
//
// MessageText:
//
//  The Setup Information File %1 is corrupt and could not be loaded.
//  Some options might not be available during Setup.
//
#define MSG_LOG_INF_CORRUPT              0x0000EE73L

//
// MessageId: MSG_LOG_BASEWIN_INSTFAIL
//
// MessageText:
//
//  A Setup installation operation failed while processing section %1
//  in Setup Information File %2. The specific error code is %3!u!.
//  
//  Some options might not be available during Setup.
//
#define MSG_LOG_BASEWIN_INSTFAIL         0x0000EE74L

//
// MessageId: MSG_LOG_WIN95_INITIALIZATION
//
// MessageText:
//
//  Setup was unable to migrate Windows 95 settings because of the following error:
//  %1
//
#define MSG_LOG_WIN95_INITIALIZATION     0x0000EE75L

//
// MessageId: MSG_LOG_WIZPAGES
//
// MessageText:
//
//  Initialization of the Setup Wizard failed. Your computer may be
//  low on memory or have a hardware malfunction.
//
#define MSG_LOG_WIZPAGES                 0x0000EE76L

//
// MessageId: MSG_LOG_NETWIZPAGE
//
// MessageText:
//
//  Setup was unable to initialize Network installation components.
//  The specific error code is %1!u!.
//
#define MSG_LOG_NETWIZPAGE               0x0000EE77L

//
// MessageId: MSG_LOG_CRYPTO_1
//
// MessageText:
//
//  Setup was unable to initialize Windows NT Cryptography.
//  The file RSABASE.SIG may be damaged on the Windows NT CD-ROM.
//  The specific error code is %1!u!.
//
#define MSG_LOG_CRYPTO_1                 0x0000EE78L

//
// MessageId: MSG_LOG_SPOOLER_TIMEOUT
//
// MessageText:
//
//  The spooler is taking too long to start.
//
#define MSG_LOG_SPOOLER_TIMEOUT          0x0000EE79L

//
// MessageId: MSG_LOG_SPOOLER_NOT_RUNNING
//
// MessageText:
//
//  The spooler is not running and is not starting.
//
#define MSG_LOG_SPOOLER_NOT_RUNNING      0x0000EE7AL

//
// MessageId: MSG_LOG_FIX_SERVICE_FAILED
//
// MessageText:
//
//  Setup was unable to update the service %1 because of the following error:
//  %2
//
#define MSG_LOG_FIX_SERVICE_FAILED       0x0000EE7BL

//
// MessageId: MSG_LOG_UPDATE_SERVICES_FAILED
//
// MessageText:
//
//  Setup was unable to update services dependencies because of the following error:
//  %1
//
#define MSG_LOG_UPDATE_SERVICES_FAILED   0x0000EE7CL

//
// MessageId: MSG_LOG_UPDATE_SERVICES_PARAM_FAILED
//
// MessageText:
//
//  Setup was unable to update the services that depend on %1 because of the following error:
//  %2
//
#define MSG_LOG_UPDATE_SERVICES_PARAM_FAILED 0x0000EE7DL

//
// MessageId: MSG_LOG_NO_SECTION
//
// MessageText:
//
//  The section [%1] in the inf file is empty, missing, or contains invalid data
//
#define MSG_LOG_NO_SECTION               0x0000EE7EL

//
// MessageId: MSG_LOG_CANT_CREATE_DUMMY_SERVICE
//
// MessageText:
//
//  Unable to create temporary service %1
//
#define MSG_LOG_CANT_CREATE_DUMMY_SERVICE 0x0000EE7FL

//
// MessageId: MSG_LOG_PERMSINF_BAD
//
// MessageText:
//
//  Setup was unable to secure system files because the information file
//  %1 or its associated layout file is missing or invalid.
//
#define MSG_LOG_PERMSINF_BAD             0x0000EE80L

//
// MessageId: MSG_LOG_SETACL_FAILED
//
// MessageText:
//
//  Setup was unable to secure system files because initialization of
//  internal Setup security-related data failed. The specific error code is
//  %1!u!.
//
#define MSG_LOG_SETACL_FAILED            0x0000EE81L

//
// MessageId: MSG_LOG_SETACL_ON_FILE_FAILED
//
// MessageText:
//
//  Setup was unable to secure the directory or file
//  %1.
//  
//  The specific error code is %2!u!.
//
#define MSG_LOG_SETACL_ON_FILE_FAILED    0x0000EE82L

//
// MessageId: MSG_LOG_PNPINIT_FAILED
//
// MessageText:
//
//  Setup was unable to build a database of available drivers.
//  
//  The specific error code is %1!u!.
//
#define MSG_LOG_PNPINIT_FAILED           0x0000EE83L

//
// MessageId: MSG_LOG_OPTIONAL_COMPONENT_ERROR
//
// MessageText:
//
//  Setup was unable to process some optional components because of the following error:
//  %1
//
#define MSG_LOG_OPTIONAL_COMPONENT_ERROR 0x0000EE84L

//
// MessageId: MSG_LOG_CANT_OPEN_INF
//
// MessageText:
//
//  Setup was unable to process some optional components because the information file %1 or its associated layout file is missing or invalid.
//
#define MSG_LOG_CANT_OPEN_INF            0x0000EE85L

//
// MessageId: MSG_LOG_BAD_SECTION
//
// MessageText:
//
//  Setup was unable to process some optional components because of the following error in section %1 of information file %2:
//  %3
//
#define MSG_LOG_BAD_SECTION              0x0000EE86L

//
// MessageId: MSG_LOG_OC_REGISTRY_ERROR
//
// MessageText:
//
//  Setup was unable to process some optional components because the following error prevented access to registry key %1:
//  %2
//
#define MSG_LOG_OC_REGISTRY_ERROR        0x0000EE87L

//
// MessageId: MSG_LOG_LICWIZPAGE
//
// MessageText:
//
//  Setup was unable to initialize Licensing components.
//  The specific error code is %1!u!.
//
#define MSG_LOG_LICWIZPAGE               0x0000EE88L

 //
 //    Pid related log messages
 //
//
// MessageId: MSG_LOG_PID_CANT_READ_PID
//
// MessageText:
//
//  Setup was unable to retrieve the Product Id because of
//  the following error:
//  %1
//
#define MSG_LOG_PID_CANT_READ_PID        0x0000EF10L

//
// MessageId: MSG_LOG_PID_INVALID_PID
//
// MessageText:
//
//  %1 returned invalid data (Type = %2!u!), or Pid has invalid length
//  (Length = %3!u!).
//
#define MSG_LOG_PID_INVALID_PID          0x0000EF11L

//
// MessageId: MSG_LOG_PID_SERIAL_CHK
//
// MessageText:
//
//  The serial and check digits on setup.ini are not valid. Digits = %1.
//
#define MSG_LOG_PID_SERIAL_CHK           0x0000EF12L

//
// MessageId: MSG_LOG_PID_CANT_WRITE_PID
//
// MessageText:
//
//  Setup was unable to save the Product Id in the registry because of
//  the following error:
//  %1
//
#define MSG_LOG_PID_CANT_WRITE_PID       0x0000EF13L

//
// MessageId: MSG_LOG_FLAWED_PENTIUM
//
// MessageText:
//
//  Setup detected a Pentium with the floating-point errata.
//
#define MSG_LOG_FLAWED_PENTIUM           0x0000F230L

//
// MessageId: MSG_LOG_UNABLE_TO_CHECK_NPX_SETTING
//
// MessageText:
//
//  Setup was unable to determine the current NPX Emulation setting.
//  Error code = %1!u!.
//
#define MSG_LOG_UNABLE_TO_CHECK_NPX_SETTING 0x0000F231L

//
// MessageId: MSG_LOG_UNABLE_TO_SET_NPX_SETTING
//
// MessageText:
//
//  Setup was unable to set the current NPX Emulation setting.
//  Error code = %1!u!.
//
#define MSG_LOG_UNABLE_TO_SET_NPX_SETTING 0x0000F232L

//
// MessageId: MSG_LOG_OPTIONAL_DIRS
//
// MessageText:
//
//  Setup was unable to copy optional directories because of
//  the following error:
//  %1
//
#define MSG_LOG_OPTIONAL_DIRS            0x0000F233L

//
// MessageId: MSG_LOG_OPTIONAL_DIR
//
// MessageText:
//
//  Setup was unable to copy all files in optional directory %1
//  because of the following error:
//  %2
//
#define MSG_LOG_OPTIONAL_DIR             0x0000F234L

//
// MessageId: MSG_LOG_OPTIONAL_DIR_COPY
//
// MessageText:
//
//  One or more file copy operations in an optional directory failed.
//
#define MSG_LOG_OPTIONAL_DIR_COPY        0x0000F235L

 //
 //  Confirmation message used when a user is installing support
 //  for a device whose driver also affects other devices.
 //
//
// MessageId: MSG_CONFIRM_SHAREDDRV_INSTALL
//
// MessageText:
//
//  The driver for the device you have selected also controls %1 devices.
//  
//  If you install support for this device, your current %1 driver(s) may be replaced.  Are you sure you want to install this device?
//
#define MSG_CONFIRM_SHAREDDRV_INSTALL    0x0000F294L

 //
 //  Error messages given to user if the driver they select
 //  cannot be installed.
 //
//
// MessageId: MSG_DRIVERNODE_INF_ERROR
//
// MessageText:
//
//  There is a problem with the setup information file for this device.  The device cannot be installed.
//
#define MSG_DRIVERNODE_INF_ERROR         0x0000F2F8L

//
// MessageId: MSG_CANT_GET_DEVINST_TO_INSTALL
//
// MessageText:
//
//  The specified device cannot be installed.
//
#define MSG_CANT_GET_DEVINST_TO_INSTALL  0x0000F2F9L

 //
 //  Error messages given to user if the driver node they select doesn't support Windows NT
 //  (i.e., Win95-only INF).
 //
//
// MessageId: MSG_DRIVERNODE_WIN95_ONLY
//
// MessageText:
//
//  The setup information file for this device does not support installation on Windows NT.  Contact your hardware vendor for assistance.
//
#define MSG_DRIVERNODE_WIN95_ONLY        0x0000F35CL

 //
 //   BUGBUG - Cairo
 //   These messages will be removed in the future
 //
//
// MessageId: MSG_CAIRO_BAD_USER_NAME
//
// MessageText:
//
//  User name cannot be the same as the computer name.
//
#define MSG_CAIRO_BAD_USER_NAME          0x0000F618L

