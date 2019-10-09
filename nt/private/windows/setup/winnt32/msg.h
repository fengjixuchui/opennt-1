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
#define MSG_FIRST                        0x00002710L

//
// MessageId: MSG_OUT_OF_MEMORY
//
// MessageText:
//
//  Out of Memory.
//
#define MSG_OUT_OF_MEMORY                0x00002711L

//
// MessageId: MSG_CANT_OPEN_HELP_FILE
//
// MessageText:
//
//  Setup was unable to open help file %1.%0
//
#define MSG_CANT_OPEN_HELP_FILE          0x00002712L

//
// MessageId: MSG_LOADING_INF
//
// MessageText:
//
//  Loading Setup Information File %1...%0
//
#define MSG_LOADING_INF                  0x00002713L

//
// MessageId: MSG_INF_READ_ERR
//
// MessageText:
//
//  Setup was unable to read the file %1. Try again later.%0
//
#define MSG_INF_READ_ERR                 0x00002714L

//
// MessageId: MSG_INF_LOAD_ERR
//
// MessageText:
//
//  The file %1 contains a syntax error. Contact your system administrator.%0
//
#define MSG_INF_LOAD_ERR                 0x00002715L

//
// MessageId: MSG_INF_NOT_THERE
//
// MessageText:
//
//  The specified location does not contain a valid Windows NT Setup installation source.%0
//
#define MSG_INF_NOT_THERE                0x00002716L

//
// MessageId: MSG_INF_MISSING_STUFF_1
//
// MessageText:
//
//  The file %1 is missing the required value '%2' in section [%3]. Contact your system administrator.%0
//
#define MSG_INF_MISSING_STUFF_1          0x00002717L

//
// MessageId: MSG_NO_DRIVES_FOR_LOCAL_SOURCE
//
// MessageText:
//
//  Setup was unable to locate a drive suitable for holding temporary installation files. Setup requires a drive that meets the following criteria:
//  
//  * The drive must be a locally attached hard drive.
//  * The drive must not be part of a mirror set, stripe set, or volume set.
//  * The drive must not be formatted with the OS/2 File System (HPFS).
//  * The drive must have at least %1!u! MB of unused space available.
//
#define MSG_NO_DRIVES_FOR_LOCAL_SOURCE   0x00002718L

//
// MessageId: MSG_CHECKING_DRIVE
//
// MessageText:
//
//  Checking free space on drive %1!c!...%0
//
#define MSG_CHECKING_DRIVE               0x00002719L

//
// MessageId: MSG_SURE_EXIT
//
// MessageText:
//
//  This will exit Setup. You will need to run it again later to install/upgrade Windows NT 4.50. Are you sure you want to exit?%0
//
#define MSG_SURE_EXIT                    0x0000271AL

//
// MessageId: MSG_COPY_COMPLETE
//
// MessageText:
//
//  File copying complete.%0
//
#define MSG_COPY_COMPLETE                0x0000271BL

//
// MessageId: MSG_NOT_ADMIN
//
// MessageText:
//
//  You must be an administrator to run this application.%0
//
#define MSG_NOT_ADMIN                    0x0000271CL

//
// MessageId: MSG_NO_SPACE_FOR_FLOPPYLESS
//
// MessageText:
//
//  There is not enough space on your system partition (drive %1!c!:) for floppyless operation.
//  
//  Floppyless operation requires at least %2!u! bytes of free disk space on that drive.
//
#define MSG_NO_SPACE_FOR_FLOPPYLESS      0x0000271DL

//
// MessageId: MSG_COULDNT_CREATE_DIRECTORY
//
// MessageText:
//
//  Setup was unable to create the directory %1.%0
//
#define MSG_COULDNT_CREATE_DIRECTORY     0x0000271EL

//
// MessageId: MSG_INF_SYNTAX_ERR
//
// MessageText:
//
//  A problem exists with file %1. Value %2!u! on line %3!u! in section [%4] is missing or incorrect.
//  
//  Contact your system administrator.%0
//
#define MSG_INF_SYNTAX_ERR               0x0000271FL

//
// MessageId: MSG_COPYING_FILE
//
// MessageText:
//
//  Copying file: %1.%0
//
#define MSG_COPYING_FILE                 0x00002720L

//
// MessageId: MSG_PERCENT_COMPLETE
//
// MessageText:
//
//  Files are being copied to your hard disk.%0
//
#define MSG_PERCENT_COMPLETE             0x00002721L

//
// MessageId: MSG_DELNODING_LOCAL_SOURCE
//
// MessageText:
//
//  Removing previous temporary files from drive %1!c!...%0
//
#define MSG_DELNODING_LOCAL_SOURCE       0x00002722L

//
// MessageId: MSG_DONE_1
//
// MessageText:
//
//  This portion of Setup has completed successfully. You must restart your computer to continue with the installation.
//  
//  When you restart, make sure that "%1" is inserted in drive A:. After restarting, Setup will continue.
//
#define MSG_DONE_1                       0x00002723L

//
// MessageId: MSG_DONE_2
//
// MessageText:
//
//  This portion of Setup has completed successfully. You must restart your computer to continue with the installation.
//  
//  When you restart your computer, Setup will continue.
//
#define MSG_DONE_2                       0x00002724L

//
// MessageId: MSG_INF_MISSING_SECTION
//
// MessageText:
//
//  The file %1 is missing the required section [%2]. Contact your system administrator.%0
//
#define MSG_INF_MISSING_SECTION          0x00002725L

//
// MessageId: MSG_COULDNT_READ_NVRAM
//
// MessageText:
//
//  An unexpected error occured reading your computer's startup environment. Contact your system administrator.
//
#define MSG_COULDNT_READ_NVRAM           0x00002726L

//
// MessageId: MSG_READING_NVRAM
//
// MessageText:
//
//  Inspecting startup environment...
//
#define MSG_READING_NVRAM                0x00002727L

//
// MessageId: MSG_COULDNT_INDICATE_WINNT_ARC
//
// MessageText:
//
//  Setup was unable to write the file %1!c!:\$WIN_NT$.~LS\WINNT.SIF. The disk may be full. You will need to create this file manually with the following contents:
//  
//  [Data]
//  MsDosInitiated = 1
//
#define MSG_COULDNT_INDICATE_WINNT_ARC   0x00002729L

//
// MessageId: MSG_REBOOT_FAIL
//
// MessageText:
//
//  Setup was unable to shut down the system.  Perform a manual shutdown/restart, and Setup will continue.
//
#define MSG_REBOOT_FAIL                  0x0000272AL

//
// MessageId: MSG_NOT_WINDOWS_NT
//
// MessageText:
//
//  This application requires Windows NT.
//
#define MSG_NOT_WINDOWS_NT               0x0000272BL

//
// MessageId: MSG_BAD_SECTOR_SIZE
//
// MessageText:
//
//  Your system partition (drive %1!c!:) has a sector size other than 512 bytes. You cannot use floppyless operation on this computer.
//
#define MSG_BAD_SECTOR_SIZE              0x0000272CL

//
// MessageId: MSG_CANT_WRITE_FLOPPYLESS_BOOT
//
// MessageText:
//
//  Setup was unable to read from drive %1!c!: or write to the file %2. You cannot use floppyless operation at this time.
//
#define MSG_CANT_WRITE_FLOPPYLESS_BOOT   0x0000272DL

//
// MessageId: MSG_CANT_MUNGE_BOOT_INI
//
// MessageText:
//
//  Setup was unable to modify %1!c!:\\BOOT.INI. You cannot use floppyless operation at this time.
//
#define MSG_CANT_MUNGE_BOOT_INI          0x0000272EL

//
// MessageId: MSG_BAD_CMD_LINE_LOCAL_SOURCE
//
// MessageText:
//
//  Drive %1!c!: specified on the command line cannot be used for Setup temporary files for one of the following reasons:
//  
//  * The drive does not exist.
//  * The drive is not a locally attached hard drive.
//  * The drive is part of a mirror set, stripe set, or volume set.
//  * The drive is formatted with the OS/2 File System (HPFS).
//  * The drive does not contain at least %2!u! MB of free space.
//
#define MSG_BAD_CMD_LINE_LOCAL_SOURCE    0x0000272FL

//
// MessageId: MSG_NO_VALID_SOURCES
//
// MessageText:
//
//  None of the specified sources is currently available.%0
//
#define MSG_NO_VALID_SOURCES             0x00002730L

//
// MessageId: MSG_INVALID_OPTIONAL_DIR
//
// MessageText:
//
//  One or more of the specified optional directories is invalid or inaccessible.%0
//
#define MSG_INVALID_OPTIONAL_DIR         0x00002731L

//
// MessageId: MSG_ALREADY_RUNNING
//
// MessageText:
//
//  Windows NT Installation/Upgrade is already running. You can run only one instance of this application at a time.%0
//
#define MSG_ALREADY_RUNNING              0x00002732L

//
// MessageId: MSG_COPY_ERROR_TEMPLATE
//
// MessageText:
//
//  An error occured copying file %1 to %2.
//  
//  %3
//  
//  %4
//
#define MSG_COPY_ERROR_TEMPLATE          0x00002742L

//
// MessageId: MSG_COPYERR_NO_SOURCE_FILE
//
// MessageText:
//
//  The file does not exist on the source. Contact your system administrator.%0
//
#define MSG_COPYERR_NO_SOURCE_FILE       0x00002743L

//
// MessageId: MSG_COPYERR_DISK_FULL
//
// MessageText:
//
//  The destination disk is full. Another application may have claimed a large amount of disk space since you started Setup.%0
//
#define MSG_COPYERR_DISK_FULL            0x00002744L

//
// MessageId: MSG_COPYERR_OPTIONS
//
// MessageText:
//
//  You may choose to retry the copy, skip this file, or exit Setup.
//  
//  * If you select Retry, Setup will try to copy the file again.
//  
//  * If you select Skip File, the file will not be copied. This is intended for advanced users who are familiar with the various Windows NT system files.
//  
//  * If you select Exit Setup, you will need to run Setup again later to install or upgrade Windows NT.
//
#define MSG_COPYERR_OPTIONS              0x00002745L

//
// MessageId: MSG_REALLY_SKIP
//
// MessageText:
//
//  This option is intended for advanced users who understand the ramifications of missing system files.
//  
//  If you skip the file, Setup cannot guarantee successful installation or upgrade of Windows NT.
//  
//  Are you sure you want to skip this file?%0
//
#define MSG_REALLY_SKIP                  0x00002746L

//
// MessageId: MSG_CANT_ACCESS_SCRIPT_FILE
//
// MessageText:
//
//  Setup was unable to access the unattended mode script file %1.
//  
//  Setup cannot continue. Click OK. Setup will exit.
//
#define MSG_CANT_ACCESS_SCRIPT_FILE      0x00002747L

//
// MessageId: MSG_INSPECTING_SOURCE
//
// MessageText:
//
//  Inspecting source %1...%0
//
#define MSG_INSPECTING_SOURCE            0x00002748L

//
// MessageId: MSG_SYSPART_IS_HPFS
//
// MessageText:
//
//  Setup has determined that your startup drive (%1!c!:) is formatted with the OS/2 File System (HPFS). Windows NT 4.50 does not support this file system.
//  
//  To install Windows NT 4.50, you must first convert the drive to the Windows NT File System (NTFS).
//  
//  Setup cannot continue installing Windows NT 4.50.%0
//
#define MSG_SYSPART_IS_HPFS              0x00002749L

//
// MessageId: MSG_SYSTEM_ON_HPFS
//
// MessageText:
//
//  Setup has determined that Windows NT is installed on a drive formatted with the OS/2 File System (HPFS). Windows NT 4.50 does not support this file system.
//  
//  Setup can continue, but you will be unable to upgrade this Windows NT installation to version 4.50. If you would like to upgrade to version 4.50, you must first convert drive %1!c!: to the Windows NT File System (NTFS).
//  
//  Would you like to continue installing Windows NT 4.50?%0
//
#define MSG_SYSTEM_ON_HPFS               0x0000274AL

//
// MessageId: MSG_HPFS_DRIVES_EXIST
//
// MessageText:
//
//  Setup has determined that the OS/2 File System (HPFS) is in use on your computer. Windows NT 4.50 does not support this file system.
//  
//  If you will need to access the data stored on these drives from Windows NT 4.50, you must convert them to the Windows NT File System (NTFS) before continuing.
//  
//  Would you like to continue installing Windows NT 4.50?%0
//
#define MSG_HPFS_DRIVES_EXIST            0x0000274BL

//
// MessageId: MSG_GENERIC_FLOPPY_PROMPT
//
// MessageText:
//
//  Please insert a formatted, blank high-density floppy disk into drive A:. This disk will become "%1."
//  
//  Click OK when the disk is in the drive, or click Cancel to exit Setup.%0
//
#define MSG_GENERIC_FLOPPY_PROMPT        0x00002774L

//
// MessageId: MSG_FIRST_FLOPPY_PROMPT
//
// MessageText:
//
//  Setup requires you to provide three formatted, blank high-density floppy disks. Setup will refer to these disks as "%2," "%3," and "%4."
//  
//  Please insert one of these disks into drive A:. This disk will become "%1."
//  
//  Click OK when the disk is in the drive, or click Cancel to exit Setup.%0
//
#define MSG_FIRST_FLOPPY_PROMPT          0x00002776L

//
// MessageId: MSG_FLOPPY_NOT_FORMATTED
//
// MessageText:
//
//  You have not inserted a floppy disk, or the floppy disk you inserted is not formatted for use with Windows NT or MS-DOS. Setup is unable to use this disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_NOT_FORMATTED         0x00002778L

//
// MessageId: MSG_FLOPPY_BAD_FORMAT
//
// MessageText:
//
//  This floppy disk is not formatted as high-density, not formatted with a standard Windows NT or MS-DOS format, or is corrupted. Setup is unable to use this disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_BAD_FORMAT            0x00002779L

//
// MessageId: MSG_FLOPPY_CANT_GET_SPACE
//
// MessageText:
//
//  Setup is unable to determine the amount of free space on the floppy disk you have provided. Setup is unable to use this disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_CANT_GET_SPACE        0x0000277AL

//
// MessageId: MSG_FLOPPY_NOT_BLANK
//
// MessageText:
//
//  The floppy disk you have provided is not high-density or is not blank. Setup is unable to use this disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_NOT_BLANK             0x0000277BL

//
// MessageId: MSG_CANT_WRITE_FLOPPY
//
// MessageText:
//
//  Setup was unable to write to the floppy disk in drive A:. The floppy disk may be damaged. Try a different floppy disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_CANT_WRITE_FLOPPY            0x0000277CL

//
// MessageId: MSG_FLOPPY_WRITE_BS
//
// MessageText:
//
//  Setup was unable to write to the system area of the floppy disk you have provided. Setup is unable to use this disk.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_WRITE_BS              0x0000277DL

//
// MessageId: MSG_PREPARING_FLOPPY
//
// MessageText:
//
//  Setup is preparing %1...
//
#define MSG_PREPARING_FLOPPY             0x0000277EL

//
// MessageId: MSG_PREPARING_FLOPPYLESS
//
// MessageText:
//
//  Setup is also copying startup files...
//
#define MSG_PREPARING_FLOPPYLESS         0x0000277FL

//
// MessageId: MSG_FLOPPY_BUSY
//
// MessageText:
//
//  Setup is unable to access the floppy disk in drive A:. The drive may be in use by another application.
//  
//  Click OK. Setup will prompt you for a different floppy disk.%0
//
#define MSG_FLOPPY_BUSY                  0x00002780L

//
// MessageId: MSG_REQUIRES_486
//
// MessageText:
//
//  Windows NT requires an 80486 or later processor.%0
//
#define MSG_REQUIRES_486                 0x00002781L

//
// MessageId: MSG_FLOPPY_CHECKBOX
//
// MessageText:
//
//  Warning: This option is not the same as a floppyless installation. If you deselect this check box, you must have a set of Windows NT Setup boot floppies to complete installation.
//  
//  To perform a floppyless installation, exit this application and restart it with the /b switch.%0
//
#define MSG_FLOPPY_CHECKBOX              0x00002782L

//
// MessageId: MSG_BOGUS_A_COLON_DRIVE
//
// MessageText:
//
//  Setup has determined that floppy drive A: is non-existent or is not a high-density 3.5" drive. An A: drive with a capacity of 1.44 Megabytes or higher is required for Setup operation with floppies.
//  
//  To install Windows NT without using floppies, restart this program and specify /b on the command line.%0
//
#define MSG_BOGUS_A_COLON_DRIVE          0x00002783L

//
// MessageId: MSG_PREPARING_FLOPPY_ALSO
//
// MessageText:
//
//  Setup is also preparing %1...
//
#define MSG_PREPARING_FLOPPY_ALSO        0x00002784L

//
// MessageId: MSG_COPYING_SINGLE_FILE
//
// MessageText:
//
//  Also, the file %1 is being copied to %2...%0
//
#define MSG_COPYING_SINGLE_FILE          0x000027D8L

//
// MessageId: MSG_NO_SYSPARTS
//
// MessageText:
//
//  No valid system partitions were found. Setup is unable to continue.%0
//
#define MSG_NO_SYSPARTS                  0x000027D9L

//
// MessageId: MSG_COULDNT_WRITE_NVRAM
//
// MessageText:
//
//  Your startup environment is full. Setup is unable to add a selection for continuing Setup. The correct values are
//  
//  SYSTEMPARTITION = %1
//  OSLOADER = %2
//  OSLOADPARTITION = %3
//  OSLOADFILENAME = %4
//  OSLOADOPTIONS = %5
//  LOADIDENTIFIER = %6
//
#define MSG_COULDNT_WRITE_NVRAM          0x000027DAL

//
// MessageId: MSG_WRITING_NVRAM
//
// MessageText:
//
//  Also writing startup values...%0
//
#define MSG_WRITING_NVRAM                0x000027DCL

//
// MessageId: MSG_SYSPART_LOW
//
// MessageText:
//
//  Caution: The system partition specified is almost full. If you continue and use this system partition, you may encounter problems later in Setup.
//  
//  To select a different partition, click "Change System Partition...".
//
#define MSG_SYSPART_LOW                  0x000027DDL

//
// MessageId: MSG_SYSPART_LOW_1
//
// MessageText:
//
//  Caution: The system partition specified is almost full. If you continue and use this system partition, you may encounter problems later in Setup.
//  
//  Since you only have one possible system partition, you may need to free some space on this partition before continuing.
//
#define MSG_SYSPART_LOW_1                0x000027DEL

//
// MessageId: MSG_SYSPART_LOW_X86
//
// MessageText:
//
//  Caution: Drive %1!c!: is almost full. Free some space on this partition to avoid problems later in Setup.
//  
//  Click OK to continue, or click Cancel to exit Setup.
//
#define MSG_SYSPART_LOW_X86              0x000027DFL

//
// MessageId: MSG_GENERIC_EXCEPTION
//
// MessageText:
//
//  An internal error has occurred that prevents Setup from continuing.
//  The error code is %1!lx!.
//  
//
#define MSG_GENERIC_EXCEPTION            0x000027E0L

//
// MessageId: MSG_RESTORING_NVRAM
//
// MessageText:
//
//  Restoring initial startup configuration...%0
//
#define MSG_RESTORING_NVRAM              0x000027E2L

//
// MessageId: MSG_CLEAN_LSDIR
//
// MessageText:
//
//  Removing temporary files...%0
//
#define MSG_CLEAN_LSDIR                  0x000027E3L

//
// MessageId: MSG_SYSPART_NTFT_SINGLE
//
// MessageText:
//
//  The system partition is part of a fault-tolerant mirror.  You must break this mirror before running Setup.
//
#define MSG_SYSPART_NTFT_SINGLE          0x000027E4L

//
// MessageId: MSG_SYSPART_NTFT_MULTI
//
// MessageText:
//
//  The system partition specified is part of a fault-tolerant mirror. You must either select a different system partition, or exit Setup and break the mirror.
//
#define MSG_SYSPART_NTFT_MULTI           0x000027E5L

//
// MessageId: MSG_REBOOTING
//
// MessageText:
//
//  Setup will now restart your computer to continue with the installation.
//
#define MSG_REBOOTING                    0x000027E6L

//
// MessageId: MSG_CLEAN_BTDIR
//
// MessageText:
//
//  Removing temporary boot directory...%0
//
#define MSG_CLEAN_BTDIR                  0x000027E7L

//
// MessageId: MSG_LOCAL_SOURCE_COPY_SKIPPED
//
// MessageText:
//
//  (No files will be copied to your hard disk.)%0
//
#define MSG_LOCAL_SOURCE_COPY_SKIPPED    0x000027E8L

