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
// MessageId: MSG_STARTING_DRIVE_SNAPSHOT
//
// MessageText:
//
//  Starting directory and file snapshot.
//
#define MSG_STARTING_DRIVE_SNAPSHOT      0x00007532L

//
// MessageId: MSG_SKIPPING_DRIVE
//
// MessageText:
//
//  Skipping excluded drive %1!c!.
//
#define MSG_SKIPPING_DRIVE               0x00007533L

//
// MessageId: MSG_SNAPDIRTREE_EXCLUDED
//
// MessageText:
//
//  Skipping excluded tree %1.
//
#define MSG_SNAPDIRTREE_EXCLUDED         0x00007534L

//
// MessageId: MSG_SNAPDIR_EXCLUDED
//
// MessageText:
//
//  Skipping excluded directory %1.
//
#define MSG_SNAPDIR_EXCLUDED             0x00007535L

//
// MessageId: MSG_SNAPDIR_ERROR
//
// MessageText:
//
//  Error %2!u! snapshotting directory %1.
//
#define MSG_SNAPDIR_ERROR                0x00007536L

//
// MessageId: MSG_SNAPPED_DIR
//
// MessageText:
//
//  Directory %1 snapshotted successfully.
//
#define MSG_SNAPPED_DIR                  0x00007537L

//
// MessageId: MSG_SKIPPED_FILE
//
// MessageText:
//
//  Skipping excluded file %1.
//
#define MSG_SKIPPED_FILE                 0x00007538L

//
// MessageId: MSG_DRIVE_SNAPSHOT_OK
//
// MessageText:
//
//  Directory and file snapshot completed successfully.
//
#define MSG_DRIVE_SNAPSHOT_OK            0x00007539L

//
// MessageId: MSG_DRIVE_SNAPSHOT_ERR
//
// MessageText:
//
//  Directory and file snapshot aborted (error = %1!u!).
//
#define MSG_DRIVE_SNAPSHOT_ERR           0x0000753AL

//
// MessageId: MSG_CANT_INIT_EXCLUDES
//
// MessageText:
//
//  Unable to load sysdiff INF %1.
//  
//  This file is required in SNAP and DIFF modes. Consult the Windows NT OEM Preinstall Kit documentation for more information.%0
//
#define MSG_CANT_INIT_EXCLUDES           0x0000753BL

//
// MessageId: MSG_WORKING
//
// MessageText:
//
//  Sysdiff is working...%0
//
#define MSG_WORKING                      0x0000753CL

//
// MessageId: MSG_DUMP_OK
//
// MessageText:
//
//  The dump or inf operation completed successfully.%0
//
#define MSG_DUMP_OK                      0x0000753DL

//
// MessageId: MSG_SKIPPED_REGVAL
//
// MessageText:
//
//  Skipping excluded value entry %1:%2.
//
#define MSG_SKIPPED_REGVAL               0x00007544L

//
// MessageId: MSG_SNAPREGTREE_EXCLUDED
//
// MessageText:
//
//  Skipping excluded tree %1.
//
#define MSG_SNAPREGTREE_EXCLUDED         0x00007545L

//
// MessageId: MSG_SNAPREG_EXCLUDED
//
// MessageText:
//
//  Skipping excluded key %1.
//
#define MSG_SNAPREG_EXCLUDED             0x00007546L

//
// MessageId: MSG_SNAPPED_REGKEY
//
// MessageText:
//
//  Key %1 snapshotted successfully.
//
#define MSG_SNAPPED_REGKEY               0x00007547L

//
// MessageId: MSG_SNAPREGKEY_ERROR
//
// MessageText:
//
//  Error %2!u! snapshotting key %1.
//
#define MSG_SNAPREGKEY_ERROR             0x00007548L

//
// MessageId: MSG_STARTING_REG_SNAPSHOT
//
// MessageText:
//
//  Starting registry snapshot.
//
#define MSG_STARTING_REG_SNAPSHOT        0x00007549L

//
// MessageId: MSG_REG_SNAPSHOT_OK
//
// MessageText:
//
//  Registry snapshot completed successfully.
//
#define MSG_REG_SNAPSHOT_OK              0x0000754AL

//
// MessageId: MSG_REG_SNAPSHOT_ERR
//
// MessageText:
//
//  Registry snapshot aborted (error = %1!u!).
//
#define MSG_REG_SNAPSHOT_ERR             0x0000754BL

//
// MessageId: MSG_REGVAL_WAS_DELETED
//
// MessageText:
//
//  Value entry %1:%2 was deleted since snapshot.
//
#define MSG_REGVAL_WAS_DELETED           0x0000754CL

//
// MessageId: MSG_REGVAL_WAS_CHANGED
//
// MessageText:
//
//  Value entry %1:%2 was added/changed since snapshot.
//
#define MSG_REGVAL_WAS_CHANGED           0x0000754DL

//
// MessageId: MSG_REGKEY_WAS_DELETED
//
// MessageText:
//
//  Key %1 was deleted since snapshot.
//
#define MSG_REGKEY_WAS_DELETED           0x0000754EL

//
// MessageId: MSG_REGKEY_WAS_ADDED
//
// MessageText:
//
//  Key %1 was added since snapshot.
//
#define MSG_REGKEY_WAS_ADDED             0x0000754FL

//
// MessageId: MSG_STARTING_REG_DIFF
//
// MessageText:
//
//  Starting registry diff.
//
#define MSG_STARTING_REG_DIFF            0x00007550L

//
// MessageId: MSG_SNAPPING_REG_DIFF
//
// MessageText:
//
//  Snapshotting tree rooted at key %1 in preparation for diff.
//
#define MSG_SNAPPING_REG_DIFF            0x00007551L

//
// MessageId: MSG_REG_DIFF_OK
//
// MessageText:
//
//  Registry diff completed successfully.
//
#define MSG_REG_DIFF_OK                  0x00007552L

//
// MessageId: MSG_REG_DIFF_ERR
//
// MessageText:
//
//  Registry diff aborted (error = %1!u!).
//
#define MSG_REG_DIFF_ERR                 0x00007553L

//
// MessageId: MSG_STARTING_DRIVE_DIFF
//
// MessageText:
//
//  Starting directory and file diff.
//
#define MSG_STARTING_DRIVE_DIFF          0x00007554L

//
// MessageId: MSG_DRIVE_DIFF_OK
//
// MessageText:
//
//  Directory and file diff completed successfully.
//
#define MSG_DRIVE_DIFF_OK                0x00007555L

//
// MessageId: MSG_DRIVE_DIFF_ERR
//
// MessageText:
//
//  Directory and file diff aborted (error = %1!u!).
//
#define MSG_DRIVE_DIFF_ERR               0x00007556L

//
// MessageId: MSG_SNAPPING_DRIVE_DIFF
//
// MessageText:
//
//  Snapshotting drive %1!c! in preparation for diff.
//
#define MSG_SNAPPING_DRIVE_DIFF          0x00007557L

//
// MessageId: MSG_FILE_WAS_DELETED
//
// MessageText:
//
//  File %1 was deleted since snapshot.
//
#define MSG_FILE_WAS_DELETED             0x00007558L

//
// MessageId: MSG_FILE_WAS_CHANGED
//
// MessageText:
//
//  File %1 was added/changed since snapshot.
//
#define MSG_FILE_WAS_CHANGED             0x00007559L

//
// MessageId: MSG_DIR_WAS_DELETED
//
// MessageText:
//
//  Directory %1 was deleted since snapshot.
//
#define MSG_DIR_WAS_DELETED              0x0000755AL

//
// MessageId: MSG_DIR_WAS_ADDED
//
// MessageText:
//
//  Directory %1\%2 was added since snapshot.
//
#define MSG_DIR_WAS_ADDED                0x0000755BL

//
// MessageId: MSG_CANT_CREATE_LOG
//
// MessageText:
//
//  Unable to create log file %1 (error = %2!u!).
//  Logging has been disabled.
//
#define MSG_CANT_CREATE_LOG              0x0000755CL

//
// MessageId: MSG_SNAPSHOT_SUCCESS
//
// MessageText:
//
//  Snapshot complete; wrote snapshot file %1.
//
#define MSG_SNAPSHOT_SUCCESS             0x0000755DL

//
// MessageId: MSG_SNAPSHOT_FAILED
//
// MessageText:
//
//  Snapshot failed (error = %1!u!).
//
#define MSG_SNAPSHOT_FAILED              0x0000755EL

//
// MessageId: MSG_DIFF_SUCCESS
//
// MessageText:
//
//  Diff complete; wrote diff file %1.
//
#define MSG_DIFF_SUCCESS                 0x0000755FL

//
// MessageId: MSG_DIFF_FAILED
//
// MessageText:
//
//  Diff failed (error = %1!u!).
//
#define MSG_DIFF_FAILED                  0x00007560L

//
// MessageId: MSG_STARTING_INI_SNAPSHOT
//
// MessageText:
//
//  Starting ini file snapshot.
//
#define MSG_STARTING_INI_SNAPSHOT        0x00007561L

//
// MessageId: MSG_INI_SNAPSHOT_OK
//
// MessageText:
//
//  Ini file snapshot completed successfully.
//
#define MSG_INI_SNAPSHOT_OK              0x00007562L

//
// MessageId: MSG_INI_SNAPSHOT_ERR
//
// MessageText:
//
//  Ini file snapshot aborted (error = %1!u!).
//
#define MSG_INI_SNAPSHOT_ERR             0x00007563L

//
// MessageId: MSG_SNAPPED_INI
//
// MessageText:
//
//  Ini file %1 snapshotted successfully.
//
#define MSG_SNAPPED_INI                  0x00007564L

//
// MessageId: MSG_SNAPPED_INI_ERR
//
// MessageText:
//
//  Snapshot of ini file %1 failed (error = %2!u!).
//
#define MSG_SNAPPED_INI_ERR              0x00007565L

//
// MessageId: MSG_STARTING_INI_DIFF
//
// MessageText:
//
//  Starting ini file diff.
//
#define MSG_STARTING_INI_DIFF            0x00007566L

//
// MessageId: MSG_DIFFED_INI
//
// MessageText:
//
//  Ini file %1 diffed successfully.
//
#define MSG_DIFFED_INI                   0x00007567L

//
// MessageId: MSG_DIFFED_INI_ERR
//
// MessageText:
//
//  Diff of ini file %1 failed (error = %2!u!).
//
#define MSG_DIFFED_INI_ERR               0x00007568L

//
// MessageId: MSG_FILE_VALIDATION_ERROR
//
// MessageText:
//
//  A problem exists with a file supplied by your computer's manufacturer. Contact the manufacturer and report the following:
//  
//  %1
//  
//  Click OK. Setup will continue but certain applications or other features may not work correctly.
//
#define MSG_FILE_VALIDATION_ERROR        0x00007569L

//
// MessageId: MSG_NOT_SYSDIFF_FILE
//
// MessageText:
//
//  A snapshot or diff file specified on the command line is not a valid sysdiff file, or is the wrong type.%0
//
#define MSG_NOT_SYSDIFF_FILE             0x0000756AL

//
// MessageId: MSG_WRONG_VERSION
//
// MessageText:
//
//  A snapshot or diff file specified on the command line was created by a different version of sysdiff and cannot be used with this version.%0
//
#define MSG_WRONG_VERSION                0x0000756BL

//
// MessageId: MSG_FILE_CORRUPT
//
// MessageText:
//
//  A snapshot or diff file specified on the command line is corrupt.%0
//
#define MSG_FILE_CORRUPT                 0x0000756CL

//
// MessageId: MSG_PROFILE_MISMATCH
//
// MessageText:
//
//  A snapshot or diff file specified on the command line was created with a different user and cannot be used now.%0
//
#define MSG_PROFILE_MISMATCH             0x0000756DL

//
// MessageId: MSG_SYSROOT_MISMATCH
//
// MessageText:
//
//  A snapshot or diff file specified on the command line was created with a different sysroot and cannot be used now.%0
//
#define MSG_SYSROOT_MISMATCH             0x0000756EL

//
// MessageId: MSG_CRLF
//
// MessageText:
//
//  
//
#define MSG_CRLF                         0x0000756FL

//
// MessageId: MSG_INSTALLING
//
// MessageText:
//
//  Setup is installing software ...
//
#define MSG_INSTALLING                   0x00007570L

//
// MessageId: MSG_INSTALLING_PARAM
//
// MessageText:
//
//  Setup is installing %1 ...
//
#define MSG_INSTALLING_PARAM             0x00007571L

//
// MessageId: MSG_DUMPING_DIFF
//
// MessageText:
//
//  ; Dump of sysdiff package %1
//
#define MSG_DUMPING_DIFF                 0x00007918L

//
// MessageId: MSG_DUMP_BAD_SIG
//
// MessageText:
//
//  ; Signature %1!x! indicates that this is not a sysdiff diff file.
//
#define MSG_DUMP_BAD_SIG                 0x00007919L

//
// MessageId: MSG_DUMP_VERSION
//
// MessageText:
//
//  ; File created with sysdiff version %1!x!
//
#define MSG_DUMP_VERSION                 0x0000791AL

//
// MessageId: MSG_DUMP_BAD_VERSION
//
// MessageText:
//
//  ; Version mismatch: cannot use this package with this version of sysdiff.
//
#define MSG_DUMP_BAD_VERSION             0x0000791BL

//
// MessageId: MSG_DUMP_NOT_DUMPFILE
//
// MessageText:
//
//  ; File type %1!u! indicates that this is not a diff file.
//
#define MSG_DUMP_NOT_DUMPFILE            0x0000791CL

//
// MessageId: MSG_DUMP_SYSROOT
//
// MessageText:
//
//  ; Sysroot: %1
//
#define MSG_DUMP_SYSROOT                 0x0000791DL

//
// MessageId: MSG_DUMP_USRROOT
//
// MessageText:
//
//  ; Usrroot: %1
//
#define MSG_DUMP_USRROOT                 0x0000791EL

//
// MessageId: MSG_DUMP_DIRECTORY
//
// MessageText:
//
//  %1
//
#define MSG_DUMP_DIRECTORY               0x0000791FL

//
// MessageId: MSG_DUMP_DIRECTORY_SFN
//
// MessageText:
//
//      SFN: %1
//
#define MSG_DUMP_DIRECTORY_SFN           0x00007920L

//
// MessageId: MSG_DUMP_DIR_DELETED
//
// MessageText:
//
//      (delete directory)
//
#define MSG_DUMP_DIR_DELETED             0x00007921L

//
// MessageId: MSG_DUMP_FILE_ADDCHANGE
//
// MessageText:
//
//      Add/change %1
//
#define MSG_DUMP_FILE_ADDCHANGE          0x00007922L

//
// MessageId: MSG_DUMP_FILE_ADDCHANGE_SFN
//
// MessageText:
//
//      Add/change %1 (SFN: %2)
//
#define MSG_DUMP_FILE_ADDCHANGE_SFN      0x00007923L

//
// MessageId: MSG_DUMP_TITLE
//
// MessageText:
//
//  ; Package title: %1
//
#define MSG_DUMP_TITLE                   0x00007924L

//
// MessageId: MSG_DUMP_FILE_DELETED
//
// MessageText:
//
//      Delete     %1
//
#define MSG_DUMP_FILE_DELETED            0x00007925L

//
// MessageId: MSG_DUMP_REGKEY
//
// MessageText:
//
//  %1
//  
//
#define MSG_DUMP_REGKEY                  0x00007926L

//
// MessageId: MSG_DUMP_REGKEY_DELETED
//
// MessageText:
//
//      (delete key)
//
#define MSG_DUMP_REGKEY_DELETED          0x00007927L

//
// MessageId: MSG_DUMP_REGVAL_DELETED
//
// MessageText:
//
//      Delete value %1
//
#define MSG_DUMP_REGVAL_DELETED          0x00007928L

//
// MessageId: MSG_DUMP_REGVAL_DWORD
//
// MessageText:
//
//      %1: REG_DWORD 0x%2!x!
//
#define MSG_DUMP_REGVAL_DWORD            0x0000792BL

//
// MessageId: MSG_DUMP_REGVAL_STRING
//
// MessageText:
//
//      %1: REG_SZ/REG_EXPAND_SZ %2
//
#define MSG_DUMP_REGVAL_STRING           0x0000792CL

//
// MessageId: MSG_DUMP_REGVAL_BINARY
//
// MessageText:
//
//      %1: binary data of type %2!u!
//
#define MSG_DUMP_REGVAL_BINARY           0x0000792DL

//
// MessageId: MSG_DUMP_END
//
// MessageText:
//
//  End of dump of %1
//
#define MSG_DUMP_END                     0x0000792EL

//
// MessageId: MSG_DUMP_ERROR
//
// MessageText:
//
//  
//  Error %1!u! encountered; dump phase aborted.
//
#define MSG_DUMP_ERROR                   0x0000792FL

//
// MessageId: MSG_DUMP_INIFILE
//
// MessageText:
//
//  
//  %1 (ini file)
//
#define MSG_DUMP_INIFILE                 0x00007931L

//
// MessageId: MSG_DUMP_INIXSETSECTION
//
// MessageText:
//
//  
//      [%1] (entire section)
//
#define MSG_DUMP_INIXSETSECTION          0x00007932L

//
// MessageId: MSG_DUMP_INIXSETSECTION_STRING
//
// MessageText:
//
//      %1
//
#define MSG_DUMP_INIXSETSECTION_STRING   0x00007933L

//
// MessageId: MSG_DUMP_INIXCHANGELINES
//
// MessageText:
//
//  
//      [%1] (key/value pairs)
//
#define MSG_DUMP_INIXCHANGELINES         0x00007934L

//
// MessageId: MSG_DUMP_INIXCHANGELINES_PAIR
//
// MessageText:
//
//      %1 = %2
//
#define MSG_DUMP_INIXCHANGELINES_PAIR    0x00007935L

//
// MessageId: MSG_DUMP_INIXDELETELINE
//
// MessageText:
//
//  
//      [%1] %2= (delete line)
//
#define MSG_DUMP_INIXDELETELINE          0x00007936L

//
// MessageId: MSG_DUMP_INIXDELETESECTION
//
// MessageText:
//
//  
//      [%1] (delete section)
//
#define MSG_DUMP_INIXDELETESECTION       0x00007937L

//
// MessageId: MSG_DUMP_DIFFCOUNT
//
// MessageText:
//
//  ; TotalDiffCount: %1!u!
//
#define MSG_DUMP_DIFFCOUNT               0x00007938L

//
// MessageId: MSG_INF_HEADER
//
// MessageText:
//
//  [Version]
//  Signature = "$Windows NT$"
//  
//  [DefaultInstall]
//  AddReg = AddReg
//  DelReg = DelReg
//  UpdateInis = UpdateInis
//  
//
#define MSG_INF_HEADER                   0x0000797CL

//
// MessageId: MSG_INF_SINGLELINE
//
// MessageText:
//
//  %1
//
#define MSG_INF_SINGLELINE               0x0000797DL

//
// MessageId: MSG_INF_BAD_REGSPEC_1
//
// MessageText:
//
//  ; Warning: the following line represents a registry change that could be
//  ; expressed in an INF file. The root key has been changed to HKR.
//
#define MSG_INF_BAD_REGSPEC_1            0x0000797EL

//
// MessageId: MSG_INF_BAD_REGSPEC_2
//
// MessageText:
//
//  ; Warning: the following line represents a registry change that could be
//  ; expressed in an INF file. The data type has been changed to REG_BINARY.
//
#define MSG_INF_BAD_REGSPEC_2            0x0000797FL

//
// MessageId: MSG_INF_DELINISECT
//
// MessageText:
//
//  ; Warning: the section [%2] in ini file %1
//  ; is marked for deletion. Section deletes cannot be expressed in an INF file.
//
#define MSG_INF_DELINISECT               0x00007986L

