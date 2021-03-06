L /�m^�I       .debug$S        >   �               @ B.rsrc$01        �   �   j         @  @.rsrc$02        (H ~              @  @    	     obj\i386\usetup.res    Microsoft CVTRES 4.00    /�m^             �   8  �    /�m^          P  �    /�m^          h  �    /�m^       	  �       /�m^       	  �       �D         �D p          �       �          (#  �#  �   �#  �#    �#  �#  ؈  �#  �#  ��  �#  �#  x�  �#  �#  @�  %  %   �  '  ='  �  L'  ^'  ��  c'  l'  ��  �*  �*  �  �.  �.  ,�  D/  M/  ��  �/  �/  x�  �/  �/  ��  �/  �/  ��  �2  �2  ��  �2  �2  �( �:  �:  $A R  R  tC    SP_MSG_FIRST
  �  %%IWelcome to Setup.

The Setup program for the Windows OpenNT operating system version 4.5
prepares Windows OpenNT to run on your computer.

     To learn more about Windows OpenNT Setup before continuing, press F1.

     To set up Windows OpenNT now, press ENTER.

     To repair a damaged Windows OpenNT version 4.5 installation, press R.

     To quit Setup without installing Windows OpenNT, press F3.




   Windows OpenNT provides two Setup methods:

%%IExpress Setup (recommended)
Express Setup relies on Setup to make decisions,
so setting up Windows OpenNT is quick and easy.

      To use Express Setup, press ENTER.

%%ICustom Setup
Custom Setup is for experienced computer users who
want to control how Windows OpenNT is set up.  To use this Setup method,
you should know how to use a mouse with Windows OpenNT.

      To use Custom Setup, press C.

For details about both Setup methods, press F1.







 �  The list below shows existing partitions and spaces available for
creating new partitions.

Use the UP and DOWN ARROW keys to move the highlight to an item
in the list.

     To install Windows OpenNT on the highlighted partition
      or unpartitioned space, press ENTER.

     To create a partition in the unpartitioned space, press C.

     To delete the highlighted partition, press D.





   You have asked Setup to remove the partition

   %1

on %2.


     To delete this partition, press L.
      WARNING: All data on the partition will be lost!

     To return to the previous screen without
      deleting the partition, press ESC.





   �  You have asked Setup to create a new partition on
%1.


     To create the new partition, enter a size below and
      press ENTER.

     To return to the previous screen without creating
      the partition, press ESC.


The mimumum size for the new partition is %2!5u! megabytes (MB).
The maximum size for the new partition is %3!5u! megabytes (MB).





   X  Setup has determined that your computer's startup hard disk is new
or has been erased, or that an operating system is installed on your
computer with which Windows OpenNT cannot coexist.

If such an operating system is installed on your computer, continuing
Setup may damage or destroy it.

If the hard disk is new or has been erased, or you want to discard
its current contents, you can choose to continue Setup.

  To continue Setup, press C. WARNING: Any data currently on
   your computer's startup hard disk will be permanently lost.

  To exit Setup, press F3.





   <   This portion of Setup has completed successfully.

   0   Windows OpenNT has not been installed.

  �   The following value in the Setup Information File is corrupt or missing:

Value %1!u! on line %2!u! in section [%3]

Setup cannot continue. Press F3 to exit.



   �   The following value in the Setup Information File is corrupt or missing:

Value %1!u! on the line in section [%2]
with key "%3."

Setup cannot continue. Press F3 to exit.



 @  ����������������������������������������������������ͻ
�  Windows OpenNT version 4.5 is not completely set  �
�  up on your computer. If you quit Setup now, you   �
�  will need to run Setup again to set up Windows.   �
�                                                    �
�      Press ENTER to continue Setup.               �
�      Press F3 to quit Setup.                      �
����������������������������������������������������Ķ
�  F3=Exit  ENTER=Continue                           �
����������������������������������������������������ͼ




    �   The partition or unpartitioned space you chose is too small
for Windows OpenNT. Select a partition or unpartitioned space whose
size is at least %1!u! megabytes (1 megabyte = 1,048,576 bytes).


    d  The partition you have chosen is not recognized by Windows OpenNT.

Setup cannot install Windows OpenNT onto this partition. However you can
return to the previous screen and delete the partition, and then
select the resulting unpartitioned space. Setup will automatically create
a new partition onto which you can install Windows OpenNT.



 �  The partition you have chosen is recognized by Windows OpenNT but
is unformatted or damaged. Setup will have to reformat this
partition to install Windows OpenNT on it.


      To continue and use the partition anyway, press C.
       Setup will confirm this again later before actually
       reformatting the partition.

      If you want to select a different partition, press ESC.




   �  The partition you have chosen is too full to contain Windows OpenNT,
which requires a drive with at least %1!u! megabytes of free disk space
(1 megabyte = 1,048,576 bytes).

To install Windows OpenNT on the partition, Setup will have to reformat it.

      To continue and use the partition anyway, press C.
       Setup will confirm this again later before actually
       reformatting the drive.

      If you want to select a different partition, press ESC.





    �   Setup cannot create a new partition in the unpartitioned space
you have selected because the disk's partition table is full.

Press ENTER to continue.


 �  Setup has determined that one or more of your hard disks has more than
1024 cylinders.

Because MS-DOS is normally limited to 1024 cylinders per hard disk,
some hard disk controllers offer special configuration options to allow
access to large disks in their entirety. These options are known as
sector translation modes. If a disk has only slightly more than 1024
cylinders, or such a mode is not enabled, a small portion of the disk
remains inaccessible to MS-DOS. Consult your computer or hard disk
controller documentation for more information about sector translation
and large hard disks.

If disk sizes appear too small when Setup later displays information
about hard disks it has located, you should exit Setup and check your
CMOS drive type settings. Consult your computer or hard disk controller
documentation for more information about CMOS drive type settings.

Note that this message does not necessarily indicate an error condition.
It is intended to alert you to the fact that one or more of your hard disks
may actually be larger than the size for which it is currenty configured.

Press ENTER to continue.




    %1
does not contain a partition suitable for starting Windows OpenNT.

This hard disk must contain a Windows OpenNT-compatible partition before
Setup can continue. You can create such a partition from the previous
screen by locating and highlighting an unpartitioned space on the disk
and pressing C to create a partition in the space. If there are no
unpartitioned spaces on the disk, you must first delete an existing
partition to create an unpartitioned space.

Press ENTER to return to the previous screen.





    �  Setup has found Boot Manager on your computer and must disable it
to complete Windows OpenNT installation. Boot Manager will not be
destroyed, uninstalled, or otherwise altered by this operation.

You can re-enable Boot Manager from Windows OpenNT after Setup is complete
by using Disk Administrator to mark the Boot Manager partition as active.
Refer to your System Guide for more information about Disk Administrator.




 �  To complete Windows OpenNT installation, Setup must temporarily disable
the operating system that currently starts when your computer is
powered on or restarted. That operating system will not be destroyed,
uninstalled, or otherwise altered as a result of being disabled by Setup.

You can re-enable the operating system that Setup disables by using the
Disk Administrator to mark its partition as active. Refer to your
System Guide for more information about Disk Administrator.





  �  Your C: drive is unformatted, damaged, or formatted with a file system
that is not compatible with Windows OpenNT. To continue installing
Windows OpenNT, Setup will have to format the drive.

      To format the C: drive and continue Setup, press F.
       WARNING: All data currently on the drive will be lost.

      To return to the previous screen without formatting drive C:,
       press ESC.




  �  Your C: drive is too full to contain Windows OpenNT startup files.
You must have at least %1!u! kilobytes (1 KB = 1024 bytes) of
disk space on C: to install Windows OpenNT.

To continue installing Windows OpenNT, Setup will have to
format the drive.

      To format the C: drive and continue Setup, press F.
       WARNING: All data currently on the drive will be lost.

      To return to the previous screen without formatting drive C:,
       press ESC.





  l  A new partition for Windows OpenNT has been created on
%1.
The partition must now be formatted.

Select a file system for the new partition from the list below.
Use the UP and DOWN ARROW keys to move the highlight to the
file system you want and then press ENTER.

If you want to select a different partition for Windows OpenNT, press ESC.




     You have asked to install Windows OpenNT on the partition

%1

on %2.

This partition is too full, damaged, not formatted, or not formatted
with a file system recognized by Windows OpenNT. To continue
installing Windows OpenNT on this partition, Setup must format it.

Select a file system for the partition from the list below.
Use the UP and DOWN ARROW keys to move the highlight to the
file system you want and then press ENTER.

If you want to select a different partition for Windows OpenNT, press ESC.





   t  The partition you have chosen is newly created and thus unformatted.
Setup will now format the partition.

Select a file system for the partition from the list below.
Use the UP and DOWN ARROW keys to move the highlight to the
file system you want and then press ENTER.

If you want to select a different partition for Windows OpenNT, press ESC.





    T  Setup will install Windows OpenNT on partition

%1

on %2.

Select the type of file system you want on this partition
from the list below. Use the UP and DOWN ARROW keys to move the highlight
to the selection you want. Then press ENTER.

If you want to select a different partition for Windows OpenNT, press ESC.





  �  WARNING: Converting this drive to NTFS will render it inaccessable
to operating systems other than Windows OpenNT.

Do not convert the drive to NTFS if you require access to the drive
when using other operating systems such as MS-DOS, Windows, or OS/2.

Please confirm that you want to convert

%1

on %2.

      To convert the drive to NTFS, press C.

      To select a different partition for Windows OpenNT, press ESC.





     WARNING: Formatting this drive will erase all data currently stored on it.
Please confirm that you would like to format

%1

on %2.

      To format the drive, press F.

      To select a different partition for Windows OpenNT, press ESC.



   H   Please wait while Setup formats the partition

%1

on %2.


 �  Setup was unable to format the partition. The disk may be damaged.
Make sure the drive is switched on and properly connected
to your computer. If the disk is a SCSI disk, make sure your SCSI
devices are properly terminated. Consult your computer or SCSI adapter
documentation for more information.

You will have to select a different partition for Windows OpenNT.
Press ENTER to continue.




  l   Setup will now format your C: drive, which is currently unformatted.

Press ENTER to continue.


  �  You have asked Setup to remove Windows OpenNT system files from the path
listed below. Please verify that this is what you want to do.

            %1

WARNING: after removing system files from a Windows OpenNT installation
you will no longer be able to start that installation of Windows OpenNT.

  To remove Windows OpenNT system files in the above directory, press R.

  To return to the previous screen without removing any files,
   press ESC.






 X   Setup has finished removing files.

%1!u! bytes of disk space were freed.


   H   Please wait while Setup removes Windows OpenNT system files.

    �   Setup was unable to load the log file listed below.

%1

Setup is unable to remove Windows OpenNT system files from the selected
Windows OpenNT installation. Press ENTER to continue.



 �  The partition you have chosen is too full to hold Windows OpenNT.
Setup has found existing Windows OpenNT installations in the directories
listed below. Removing one of these installations may free enough
disk space so that Setup can install Windows OpenNT on the partition
you selected.

Removing a Windows OpenNT installation will not affect data files.

  To move the highlight to the Windows OpenNT installation you 
   want to remove, use the UP and DOWN ARROW keys. Then press ENTER.

  If you want to format the partition you selected or install
   Windows OpenNT on a different partition, press ESC, or move
   the highlight to "Do not remove any files" and press ENTER.








 �   Setup encountered an error while updating partition information on
%1.

This error prevents Setup from continuing. Press F3 to exit Setup.


 �  The drive containing Windows 3.1 is too full to hold Windows OpenNT.
Setup has found existing Windows OpenNT installations in the directories
listed below. Removing one of the installations may free enough
disk space so that Setup can install Windows OpenNT in your Windows 3.1
directory.

Removing a Windows OpenNT installation will not affect Windows 3.1
or data files.

  Use the UP and DOWN ARROW keys to move the highlight to the
   Windows OpenNT installation you want to remove. Then press ENTER.

  If you want to install Windows OpenNT on a different drive, press ESC
   or move the highlight to "Do not remove any files" and press ENTER.







  T  Setup has found a previous version of Microsoft Windows on your hard disk
in the directory shown below.


    %1!c!:%2


Setup recommends installing Windows OpenNT in the same directory.
However the drive is too full to hold Windows OpenNT, which requires
%3!u! megabytes (1 MB = 1,048,576 bytes) of free disk space.

      To install Windows OpenNT in the directory above, press F3
       to exit Setup. Start MS-DOS and delete any unneeded files
       from the drive and then run Setup again.

      To select a different directory for Windows OpenNT, press N.




  �  Setup has found a previous version of Microsoft Windows on your hard disk
in the directory shown below.


    %1!c!:%2


Setup recommends installing Windows OpenNT in the same directory.
This will help Windows OpenNT interoperate with the previous version
of Windows.

      To install Windows OpenNT in the directory shown above, press ENTER.

      To select a different directory for Windows OpenNT, press N.




    �   Setup installs Windows OpenNT files onto your hard disk. Choose the location
where you want these files to be installed:


 �   To change the suggested location, press the BACKSPACE key
to delete characters and then type the directory where you want
Windows OpenNT installed.


 P  The directory you have entered is invalid. Make sure the name
is not the root directory and does not contain any consecutive
path separator (backslash) characters.

Also make sure the name follows the standard MS-DOS filename rules.

Press ENTER to continue. Setup will prompt you to enter
a different directory.





 �  Setup has found a previous version of Microsoft Windows in the directory
you have chosen for installing Windows OpenNT. Setup recommends installing
into this directory since Microsoft Windows OpenNT can interoperate with the
previous version of Windows.

     To install Windows OpenNT in the same directory, press ENTER.

     To select a different directory for Windows OpenNT, press ESC.




   l  The directory you have chosen already exists and may contain
a Windows OpenNT installation. If you continue, the existing Windows 
OpenNT installation will be overwritten. Your user account and security
information and configuration settings will be lost.

    To use the directory you have chosen and overwrite
     the existing Windows OpenNT installation in it, press ENTER.

    To use a different directory, press ESC.

    To upgrade the installation, press F3 to exit Setup.
     Then start Setup again and choose to upgrade when Setup suggests
     upgrading this installation.





    T   Setup is out of memory and cannot continue.

Press F3 to exit Setup.


    l   Setup has determined that your computer contains the following hardware
and software components.


 �            Computer:
           Display:
          Keyboard:
   Keyboard Layout:
   Pointing Device:

        No Changes:


If you want to change any item in the list, press the UP or DOWN ARROW
key to move the highlight to the item you want to change. Then press
ENTER to see alternatives for that item.

When all the items in the list are correct, move the highlight to
"The above list matches my computer" and press ENTER.





  <  Drive C: is larger than 4GB. This may potentially cause a compatibility
issue with previous versions of Windows.


  To proceed with formatting drive C: larger than 4GB, press ENTER.

  To return to the previous screen without formatting drive C:,
   press ESC.

  To exit Setup, press F3.




 L  You have asked to change the type of computer to be installed.

  To select a computer from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the computer type you want, and then press ENTER.

  To return to the previous screen without changing your
   computer type, press ESC.



   �  You have asked to change the type of display to be installed.
WARNING: The list below is extremely limited and may not contain
an item exactly corresponding to your display type. This is normal.
Setup will allow further configuration of your display type later.

Changing your display type now is neither recommended nor necessary
unless you have a driver disk provided by a display adapter
manufacturer.

  To select a display from the following list, use the UP or DOWN ARROW
   key to move the highlight to the type you want, and then press ENTER.

  To return to the previous screen without changing your display type,
   press ESC.







 L  You have asked to change the type of keyboard to be installed.

  To select a keyboard from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the keyboard type you want, and then press ENTER.

  To return to the previous screen without changing your
   keyboard type, press ESC.



   h  You have asked to change the type of keyboard layout to be installed.

  To select a keyboard layout from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the keyboard layout type you want, and then press ENTER.

  To return to the previous screen without changing your
   keyboard layout type, press ESC.



   h  You have asked to change the type of pointing device to be installed.

  To select a pointing device from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the pointing device type you want, and then press ENTER.

  To return to the previous screen without changing your
   pointing device type, press ESC.



   |  You have chosen to change your computer type to one supported
by a disk provided by a hardware manufacturer.

  To select a computer from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the computer type you want, and then press ENTER.

  To return to the previous screen without changing your
   computer type, press ESC.



    T  You have chosen to install a display provided by a hardware
manufacturer.

  To select a display from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the display type you want, and then press ENTER.

  To return to the previous screen without changing your display type,
   press ESC.



  X  You have chosen to install a keyboard provided by a hardware
manufacturer.

  To select a keyboard from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the keyboard type you want, and then press ENTER.

  To return to the previous screen without changing your
   keyboard type, press ESC.



  t  You have chosen to install a keyboard layout provided by a hardware
manufacturer.

  To select a keyboard layout from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the keyboard layout type you want, and then press ENTER.

  To return to the previous screen without changing your
   keyboard layout type, press ESC.



  t  You have chosen to install a pointing device provided by a hardware
manufacturer.

  To select a pointing device from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the pointing device type you want, and then press ENTER.

  To return to the previous screen without changing your
   pointing device type, press ESC.



  d   Please insert the disk labeled

%%I%1

into drive %2!c!:

 Press ENTER when ready.


 t   Please insert the compact disc labeled

%%I%1

into your CD-ROM drive.

 Press ENTER when ready.


   D   If there is a floppy disk inserted in drive A:, remove it.

  H  The disk or CD-ROM you inserted may be damaged.

Press ENTER to continue (Setup will prompt you to insert the disk
again). Make sure you have inserted the correct disk or CD-ROM.
If you continue to get this message, try inserting a different
copy of the disk or CD-ROM that Setup is prompting you to insert.



    �   Setup cannot install hardware components provided by a hardware
manufacturer because there are no floppy disk drives in your computer.


   �   A problem exists with the Setup Information File on the manufacturer-
supplied disk you have provided:

%1

Setup cannot use the disk or select the option. Contact the
hardware manufacturer.

Press ENTER to continue.



    H   Setup cannot continue until it knows the type of your computer.

 H   Setup cannot continue until it knows the type of your display.

  H   Setup cannot continue until it knows the type of your keyboard.

 H   Setup cannot continue until it knows your keyboard layout type.

 P   Setup cannot continue until it knows the type of your pointing device.

  d  Setup did not find any hard disk drives installed in your computer.

Make sure any hard disk drives are powered on and properly connected
to your computer, and that any disk-related hardware configuration is
correct. This may involve running a manufacturer-supplied diagnostic
or setup program.

Setup cannot continue. Press F3 to exit.



 <  Setup automatically detects floppy disk controllers and standard
ESDI/IDE hard disks without user intervention. However on some
computers detection of certain other mass storage devices, such as
SCSI adapters and CD-ROM drives, can cause the computer to become
unresponsive or to malfunction temporarily.

For this reason, you can bypass Setup's mass storage device detection
and manually select SCSI adapters, CD-ROM drives, and special disk
controllers (such as drive arrays) for installation.


     To continue, Press ENTER.
      Setup will attempt to detect mass storage devices in your computer.

     To skip mass storage device detection, press S.
      Setup will allow you to manually select SCSI adapters,
      CD-ROM drives, and special disk controllers for installation.








   P   Setup has recognized the following mass storage devices in your computer:
 �     To specify additional SCSI adapters, CD-ROM drives, or special
    disk controllers for use with Windows OpenNT, including those for 
    which you have a device support disk from a mass storage device
    manufacturer, press S.

   If you do not have any device support disks from a mass storage
    device manufacturer, or do not want to specify additional
    mass storage devices for use with Windows OpenNT, press ENTER.




 �  You have asked to specify an additional SCSI adapter, CD-ROM drive,
or special disk controller for use with Windows OpenNT.

  To select a mass storage device from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the mass storage device you want, and then press ENTER.

  To return to the previous screen without specifying an additional
   mass storage device for use with Windows OpenNT, press ESC.




 �  You have chosen to install a SCSI adapter, CD-ROM drive, or
special disk controller provided by a hardware manufacturer.

  To select a mass storage device from the following list,
   use the UP or DOWN ARROW key to move the highlight to
   the mass storage device you want, and then press ENTER.

  To return to the previous screen without specifying a mass storage
   device for use with Windows OpenNT, press ESC.





  x   The SCSI adapter, CD-ROM drive, or special disk controller you specified
is not installed in your computer.


  �   Setup was unable to create the directory
%1.

Setup cannot continue until the directory has been successfully created.

     To retry the operation, press ENTER.

     To exit Setup, press F3.





     Setup was unable to copy the file %1.

   To retry the copy, press ENTER.

    If you are installing from a CD-ROM, make sure the proper
    Windows OpenNT CD-ROM is in the drive.

   To skip this file, press ESC.

    WARNING: this option is intended for advanced users who understand
    the ramifications of the absence of the various Windows OpenNT files.
    If you choose to skip this file, Setup cannot guarantee
    successful installation of Windows OpenNT.

   To exit Setup, press F3.








  (  The file %1 was not copied correctly.

Although Setup did not encounter any errors while copying this file,
the copy Setup placed on your hard drive is not a valid Windows OpenNT
system image. If you are installing from a CD-ROM, this may indicate
a problem with the Windows OpenNT CD-ROM currently in the drive.

   To retry the copy, press ENTER.

    If you continue to receive this message, contact your Windows OpenNT
    supplier or administrator.

   To skip this file, press ESC.

    WARNING: this option is intended for advanced users who understand
    the ramifications of the absence of the various Windows OpenNT files.
    If you choose to skip this file, Setup cannot guarantee
    successful installation of Windows OpenNT.

   To exit Setup, press F3.





 @   Please wait while Setup copies files to your hard disk.

 �   Setup cannot set required Windows OpenNT configuration information.
This indicates an internal Setup error.

Contact your group or system administrator.


   P   Please wait while Setup initializes your Windows OpenNT configuration.

  �   Setup cannot configure your computer to start Windows OpenNT.

This may indicate a problem with the hard disk containing your C: drive,
or C: may be severely corrupted.

Setup cannot continue. Press F3 to exit.




   ,  Setup cannot add a selection to your computer's list of available
operating systems. Your non-volatile configuration memory may be exhausted.
Setup has attempted to restore your system configuration to its original
state.

Setup will continue, but you should run the system configuration program
supplied by your computer's manufacturer to update the startup configuration.
The required parameters are:

LOADIDENTIFIER = %1
OSLOADER = %2
OSLOADPARTITION = %3
OSLOADFILENAME = %4
OSLOADOPTIONS = %5
SYSTEMPARTITION = %6







    |   Setup was unable to locate the Windows OpenNT installation to be upgraded.

Contact your system administrator.


  �  Setup has determined that the Delete Sentry or Delete Tracking protection
method of Undelete may be in use on your computer. These protection methods
use a portion of your hard disk to remember deleted files.

Disk space used to remember deleted files is not recognized as
free disk space by Windows OpenNT. Therefore, the amount of free disk space
reported by Setup and Windows OpenNT for a drive on which Undelete is in use
may differ from the amount reported by MS-DOS.




   �   Setup was unable to initialize an internal database used to formulate
device names. This indicates an internal Setup error or a serious
system problem.


 �  The partition you have asked to delete is a system partition.

System partitions may contain diagnostic or hardware configuration
programs, programs to start operating systems (such as Windows OpenNT),
or other manufacturer-supplied programs.

Delete a system partition only if you are sure that it contains
no such programs or if you are willing to lose them. Deleting a
system partition may prevent your computer from starting from
the hard disk until you complete installation of Windows OpenNT.

   To continue and delete this partition, press ENTER.
    Setup will prompt for additional confirmation before
    deleting the partition.

   To return to the previous screen without
    deleting the partition, press ESC.








   You have chosen to install Windows OpenNT on the system partition.

A system partition is an area of a hard disk that your computer uses
to store operating system startup files and diagnostic, configuration,
or other manufacturer-supplied programs.

Your computer requires that system partitions be formatted with the
FAT file system. This will limit your ability to take advantage of
the full security features of Windows OpenNT because these features require
the Windows NT File System (NTFS).

     To select a different partition for Windows OpenNT, press ESC.

     To install Windows OpenNT on the partition anyway, press ENTER.
      You will not be allowed to convert or format the partition
      to the Windows OpenNT File System (NTFS).








  8  No valid system partitions are defined on this computer, or all
system partitions are full. Windows OpenNT requires %1!u! kilobytes
(1 KB = 1024 bytes) of free disk space on a valid system partition.

A system partition is an area of a hard disk that your computer uses
to store operating system startup files and diagnostic, configuration,
or other manufacturer-supplied programs.

System partitions are created and managed by a manufacturer-supplied
configuration program. If you do not know of such a program, you can use
a program called ARCINST.EXE, which is supplied on the Windows OpenNT CD-ROM.

How you invoke this program depends on your computer type.
Typically you select a "Run a program" option from your computer's
startup menu.

Setup cannot continue. Press F3 to exit.








 �   There is a syntax error in the Setup information file at line %1!u!.

This indicates an internal Setup error.

Setup cannot continue. Power down or reboot your computer now.



   D   Also remove any compact discs from your CD-ROM drive(s).

    H  Setup is unable to locate the hard drive partition prepared by
the MS-DOS portion of Setup.

When you run the MS-DOS Windows OpenNT Setup program, you must specify a
temporary drive that is supported by Windows OpenNT. See your
System Guide for more information.

Setup cannot continue. Press F3 to exit.




   �   There is not enough memory installed in this computer to run Windows OpenNT.

This version requires %1!u!.%2!02u! megabytes (1 MB = 1,048,576 bytes)
of memory.

Setup cannot continue. Press F3 to exit.




    �  The hard disk containing the partition or free space you chose is not
accessible to your computer's startup program. Setup cannot install
Windows OpenNT on this hard disk.

On x86-based computers, this message may indicate a problem with the
computer's CMOS drive type settings. Consult your computer or hard
disk controller documentation for more information.

Note that this message does not necessarily indicate an error condition.
The hard disks typically accessible to a computer's startup program
are those whose installation in your computer were anticipated by
the computer manufacturer.

For example, disks attached to a SCSI adapter not installed by your
computer manufacturer, or to a secondary hard disk controller, are
typically not visible to the startup program unless special software is
added to your computer. Contact your computer or hard disk controller
manufacturer for more information.

Press ENTER to continue.






 t   Windows OpenNT cannot be installed on a disk connected to a PCMCIA card.

Press ENTER to continue.



    �  A problem exists with the Emergency Repair Information File on the disk
you have provided or the Windows OpenNT installation you specified:

%1

Setup cannot use the file to repair the selected Windows OpenNT installation.

    To provide a different Emergency Repair Disk or to specify
     a different Windows OpenNT installation, press ENTER.

    To exit Setup, press F3.






   ,  A problem exists with the Emergency Repair Information File on the disk
you have provided or the Windows OpenNT installation you specified:

%1

Setup cannot repair the file.

   To skip this file, press ENTER. The file will not be repaired.

   To exit Setup, press F3.





   �   %1


   To skip this file, press ESC. The file will not be repaired.

   To repair this file, press ENTER.

   To repair this file and all other non-original files, press A.

   To exit Setup, press F3.




   D   Please wait while Setup examines files on your hard disk.

   (   Setup has completed repairs.

    0   Windows OpenNT has not been repaired.

   0   Press ENTER to restart your computer.

   <   When your computer restarts, Setup will continue.

   �  Setup needs to know if you have the Emergency Repair Disk for
the Windows OpenNT version 4.5 installation which you want to repair.
NOTE: Setup can only repair Windows OpenNT version 4.5 installations.


    If you have the Emergency Repair Disk, press ENTER.

    If you do not have the Emergency Repair Disk, press ESC.
     Setup will attempt to locate Windows OpenNT version 4.5 for you.





   `  Setup was unable to locate a CD-ROM drive.

Make sure your CD-ROM drive is switched on and properly connected
to your computer. If it is a SCSI CD-ROM drive, make sure your
SCSI devices are properly terminated. Consult your computer or
SCSI adapter documentation for more information.

Setup cannot continue. Press F3 to exit.





   �  Setup could not find a Windows OpenNT version 4.5 installation to repair.
Unless you provide the Emergency Repair Disk for the installation
which you want to repair, Setup will not be able to repair it.


    If you have the Emergency Repair Disk, or if you want setup to
     retry the search of existing Windows OpenNT installations, press ENTER.

    If you want to quit Setup, press F3.





    p  The hard disk containing the partition or free space you chose has a Logical
Unit Number (LUN) greater than 0, and is not accessible to your computer's
startup program. Setup cannot install Windows OpenNT on this hard disk.

Please contact your computer or hard disk controller manufacturer for more
information.

Press ENTER to continue.







     Setup has encountered a fatal error that prevents it from continuing.

Contact your product support representative for assistance.  The
following status codes will assist them in diagnosing the problem:

(%1!#lx!, %2!#lx!, %3!#lx!, %4!#lx!)



   d   Setup is out of memory and cannot continue.

Power down or reboot your computer now.


    <  Setup has encountered a fatal error while initializing your computer's video.

Contact your product support representative for assistance.  The following
status codes will assist them in diagnosing the problem:

(%1!#lx!, %2!#lx!)

Setup cannot continue. Power down or reboot your computer now.




 H   Setup cannot continue. Power down or reboot your computer now.

  4   Setup cannot continue. Press F3 to exit.

    �  The following value in the Setup Information File is corrupt or missing:

Value %1!u! on line %2!u! in section [%3]

Setup was unable to copy the file %4.

   To skip this file, press ESC.

    WARNING: this option is intended for advanced users who understand
    the ramifications of the absence of the various Windows OpenNT files.
    If you choose to skip this file, Setup cannot guarantee
    successful installation of Windows OpenNT.

   To exit Setup, press F3.







     The following value in the Setup Information File is corrupt or missing:

Value %1!u! on the line in section [%2]
with key "%3."

Setup was unable to copy the file %4.

   To skip this file, press ESC.

    WARNING: this option is intended for advanced users who understand
    the ramifications of the absence of the various Windows OpenNT files.
    If you choose to skip this file, Setup cannot guarantee
    successful installation of Windows OpenNT.

   To exit Setup, press F3.








   T  The partition

%1

on %2

is larger than 4GB. This may potentially cause a compatibility issue
with previous versions of Windows.


  To proceed with formatting the partition larger than 4GB, press ENTER.

  To return to the previous screen without formatting, press ESC.

  To exit Setup, press F3.








  X  The partition you have chosen is too full to contain Windows OpenNT,
which requires a drive with a least %1!u! megabytes of free disk space
(1 megabyte = 1,048,576 bytes).

You must return to the previous screen and select a different partition
on which to install.

      To return to the previous screen, press ENTER.




     Your C: drive is too full to contain Windows OpenNT startup files.
You must have at least %1!u! kilobytes (1 KB = 1024 bytes) of
disk space on C: to install Windows OpenNT.

You must exit Setup and free some space on your C: drive.

     To exit Setup, press F3.




 d  Setup was unable to format drive C:. The disk may be damaged.
Make sure the drive is switched on and properly connected
to your computer. If the disk is a SCSI disk, make sure your SCSI
devices are properly terminated. Consult your computer or SCSI
adapter documentation for more information.

Setup cannot continue. Press F3 to exit.




  �  The partition you have chosen to format as FAT:

%1

on %2

exceeds the 2048 megabyte maximum supported by MS-DOS
(1 megabyte = 1,048,576 bytes). If you format this large partition as FAT,
it may not be safely accessible to other operating systems such as MS-DOS.

You can continue with the format and use this partition, or you can return
to the previous screen and select or create a partition that does not exceed
2048 megabytes.

  To continue and format the partition anyway, press ENTER.

  To return to the previous screen without formatting this partition,
   press ESC.

  To exit Setup, press F3.






  d  The size of drive C: (%1!u! megabytes) exceeds the 2048 megabyte maximum
supported by MS-DOS (1 megabyte = 1,048,576 bytes). If you format this large
partition as FAT, it may not be safely accessible to other operating systems
such as MS-DOS.

You can continue with the format of this partition, or you can return
to the previous screen and create a drive C: that does not exceed
2048 megabytes.

  To continue and format the partition anyway, press ENTER.

  To return to the previous screen without formatting this partition,
   press ESC.

  To exit Setup, press F3.








      Setup has found an existing installation of Microsoft Windows 95 in
the directory you chose for Windows OpenNT. You must specify a different
directory for Windows OpenNT.

Press ENTER to continue. Setup will prompt you to enter
a different directory.




   �  The drive containing the existing Microsoft Windows 95 installation
is too full to hold Windows OpenNT.
Setup has found existing Windows OpenNT installations in the directories
listed below. Removing one of the installations may free enough
disk space so that Setup can install Windows OpenNT in your existing
Windows directory.




  Use the UP and DOWN ARROW keys to move the highlight to the
   Windows OpenNT installation you want to remove. Then press ENTER.

  If you want to install Windows OpenNT on a different drive, press ESC
   or move the highlight to "Do not remove any files" and press ENTER.







 �  Setup has found Microsoft Windows 95 on your hard disk in
the directory shown below.


    %1!c!:%2


Setup can install Windows OpenNT in this directory and preserve your
Windows 95 settings and installed applications.
However the drive is too full to hold Windows OpenNT, which requires
%3!u! megabytes (1 MB = 1,048,576 bytes) of free disk space.

NOTE: Installing Windows OpenNT in this directory removes Windows 95.


      To install Windows OpenNT in the directory above, press F3
       to exit Setup. Start Windows 95 and delete any unneeded
       files from the drive and then run Setup again.

      To select a different directory for Windows OpenNT, press N.




  �  Setup has found Microsoft Windows 95 on your hard disk in
the directory shown below.


    %1!c!:%2


Setup can install Windows OpenNT in this directory and preserve your
Windows 95 settings and installed applications.

NOTE: Installing Windows OpenNT in this directory removes Windows 95.


      To install Windows OpenNT in the directory shown above, press ENTER.

      To select a different directory for Windows OpenNT, press N.




   �  Setup has found Microsoft Windows 95 in the directory you chose for
Windows OpenNT. Setup can install Windows OpenNT in this directory and
preserve your Windows 95 settings and installed applications.

NOTE: Installing Windows OpenNT in this directory removes Windows 95.


     To install Windows OpenNT in the same directory, press ENTER.

     To select a different directory for Windows OpenNT, press ESC.




  �   A problem exists with the OEM Setup Information File that contains the
information about the OEM components to pre-install:

%1

Setup cannot continue. Press F3 to exit.



  �   The following value specified in the unattended script file is not defined
in the Setup Information File, section [%2]:

%1


Setup cannot continue. Press F3 to exit.



       Setup has found Windows OpenNT on your hard disk in the directory
shown below.

    %1:%2 %3

Setup recommends upgrading this Windows OpenNT installation to
Windows OpenNT version 4.5. Upgrading will preserve user
account and security information, user preferences, and
other configuration information.


      To upgrade Windows OpenNT in the directory shown above,
       press ENTER.

      To cancel upgrade and install a fresh copy of Windows OpenNT,
       press N.







    P  Setup has found Windows OpenNT on your hard disk in the directory
shown below.

    %1:%2 %3

Setup recommends upgrading this Windows OpenNT installation to
Windows OpenNT version 4.5. Upgrading will preserve user account and
security information, user preferences, and other configuration
information. However, there is not enough free disk space
to upgrade.

    Drive       Space Required(KB)     Free Space Available(KB)
    --------    ------------------     ------------------------
    %4          %5                     %6
    %7          %8                     %9


      If you want to upgrade, press F3 to exit Setup. Delete any unneeded
       files to create the required free space and then start Setup again.

      To cancel upgrade and install a fresh copy of Windows OpenNT,
       press N.




     Setup has found Windows OpenNT on your hard disk in the directory
shown below.

    %1:%2 %3

Setup has also determined that you attempted unsuccessfully to upgrade
this installation to Windows OpenNT version 4.5. Setup can try again
to complete the upgrade or you may choose to cancel upgrade.


      To try again to upgrade Windows OpenNT in the directory
       shown above, press ENTER.

      To cancel upgrade and install a fresh copy of Windows OpenNT,
       press N.







    �  You have chosen to install Windows OpenNTNT version 4.5 in the
directory shown below.

    %1:%2 %3

However, there is not enough free disk space to do so. Exit Setup
and create the space required.

    Drive       Space Required(KB)     Free Space Available(KB)
    --------    ------------------     ------------------------
    %4          %5                     %6
    %7          %8                     %9


      To exit Setup, press F3. Delete any unneeded files to create
       the free space required and then retry the current selection.

      To cancel the current selection, press ESC.






      You have chosen to upgrade the version of Windows OpenNT
on your hard disk in the directory shown below.

    %1:%2 %3

Setup has also determined that you attempted unsuccessfully to upgrade
this installation to Windows OpenNT version 4.5. Setup can try again
to complete the upgrade, or you may choose to cancel upgrade.


      To try again to upgrade the Windows OpenNT installation in the
       directory shown above, press ENTER.

      To cancel the current selection, press ESC.




 �  The list below shows the Windows OpenNT installations on your computer
that can be upgraded to Windows OpenNT version 4.5.

Use the UP and DOWN ARROW keys to move the highlight to an item
in the list.

      To upgrade the highlighted Windows OpenNT installation, press ENTER.

      To cancel the upgrade and install a fresh copy of Windows OpenNT,
       press N.





      Setup was unable to delete the file %1.

NOTE: This error will not prevent Setup from completing successfully.

   To skip this operation, press ESC (recommended).

   To retry deleting this file, press ENTER.

   To exit Setup, press F3.





     Setup was unable to back up the file %1 to %2.

NOTE: This error will not prevent Setup from completing successfully.

   To skip this operation, press ESC (recommended).

   To retry backing up this file, press ENTER.

   To exit Setup, press F3.





  H  Setup was unable to mark the upgrade progress status in your target
configuration.

NOTE: This error will not prevent Setup from completing successfully.

   To skip this operation, press ESC (recommended).

   To retry marking the upgrade progress status, press ENTER.

   To exit Setup, press F3.





  `  Setup was unable to copy the following key into your registry:

%1\%2

NOTE: Setup may not be able to upgrade your system properly.
Retry this operation and if it continues to fail press F3
to exit Setup.

   To retry copying the key, press ENTER.

   To skip this operation, press ESC.

   To exit Setup, press F3.







  <  Setup was unable to save data used by the performance library subsystem.

NOTE: This error will not prevent Setup from completing successfully.

   To skip this operation, press ESC (recommended).

   To retry saving the performance library data, press ENTER.

   To exit Setup, press F3.





   Setup has found Windows OpenNT on your hard disk in the directory
shown below.


    %1 %2



      To repair the Windows OpenNT installation shown above, press ENTER.

      To return to the previous screen, press ESC.

      To exit Setup, press F3.




    h  The list below shows the Windows OpenNT installations on your computer
that may be repaired.

Use the UP and DOWN ARROW keys to move the highlight to an item
in the list.

      To repair the highlighted Windows OpenNT installation, press ENTER.

      To return to the previous screen, press ESC.

      To exit Setup, press F3.




    h  As part of the repair process, Setup will perform each optional task
shown below with an 'X' in its check box.

To perform the selected tasks, press ENTER to indicate "Continue."
If you want to select or deselect any item in the list, press the
UP or DOWN ARROW key to move the highlight to the item you want
to change. Then press ENTER.




   L   Please wait while Setup inspects your Windows OpenNT configuration.

 �  Setup will restore each registry file shown below with an 'X' in
its check box.

To restore the selected files, press ENTER to indicate "Continue."
If you want to select or deselect any item in the list, press the
UP or DOWN ARROW key to move the highlight to the item you want
to change. Then press ENTER.

WARNING: Restore a registry file only as a last resort.
Existing configuration may be lost. Press F1 for more information.





   Setup was unable to restore your registry.  The Emergency Repair Disk
may be damaged, or the disk volume containing Windows OpenNT may be
damaged beyond repair.

     Press ENTER to continue Setup repair.

     Press F3 to quit Setup repair.


 �  The existing Windows OpenNT installation is a Windows OpenNT Workstation
Upgrading will make it a Windows OpenNT Server that cannot be a Primary
or Backup Domain Controller.


      To upgrade the Windows OpenNT Workstation to a Windows OpenNT
       Server, press ENTER.

      To cancel upgrade and install a new copy of Windows OpenNT
       Server, press ESC.







  �  The existing Windows OpenNT installation you chose to upgrade is a
Windows OpenNT Workstation. Upgrading will make it a Windows OpenNT Server
that cannot be a Primary or Backup Domain Controller.


      To upgrade the Windows OpenNT Workstation to a Windows OpenNT
       Server, press ENTER.

      To select another installation to upgrade, or to install a new
       copy of Windows OpenNT Server, press ESC.







 ,  Setup did not find a keyboard connected to your computer.

Power down your computer and check to make sure that the keyboard
cable is properly connected. If the problem persists, your keyboard
or computer may need repairs.

Setup cannot continue. Power down your computer now.





  �   Setup could not load the keyboard layout file %1.

Setup cannot continue. Power down or reboot your computer now.


   X   Please wait while setup examines your disk(s). This may take
several minutes.

  t   Setup has determined that drive %1 is corrupt beyond repair.

Setup cannot continue. Press F3 to exit.

    �  Setup will now examine your hard disk(s) for corruption.

In addition to a basic examination, Setup can perform a more exhaustive
secondary examination on some drives. This can be a time consuming
operation, especially on large or very full drives.


      To allow Setup to perform an exhaustive secondary examination of
       your hard disk(s), press ENTER.

      To skip the exhaustive examination, press ESC.





  �   Setup was unable to verify drive %1.

Your computer may lack sufficient memory to carry out the verification,
or your Windows OpenNT CD-ROM may contain some corrupt files.

Press ENTER to continue.




    T  Setup will now examine your hard disk(s) for corruption.

In order to examine your drives, Setup requires the original installation
media. If you do not have the media, you may skip the verification process.


      To allow Setup to verify your disk(s), press ENTER.

      To skip disk verification, press ESC.




    �   Setup has performed maintenance on your hard disk(s) that requires a
reboot to take effect. You must reboot and restart Setup to continue.

      Press F3 to reboot.


 �   Setup could not find a previous version of Windows OpenNT installed on
your computer. To continue, Setup will need to verify that you qualify
to use this upgrade product.

    x   Please insert your Windows NT Workstation CD-ROM from Windows NT 3.1, 3.5,
or 3.51, into your CD-ROM drive.

    p   Please insert your Windows NT Server CD-ROM from Windows NT 3.1, 3.5,
or 3.51, into your CD-ROM drive.

 d         When the CD-ROM is in the drive, press ENTER.

      To exit Setup, press F3.


   t   Setup could not read from the CD-ROM you inserted, or the CD-ROM
is not from Windows NT 3.1, 3.5, or 3.51.

 �   No previous version of Windows NT could be found on your computer.
Setup is unable to verify that you qualify to use this upgrade product.

Press F3 to exit.


  �  Setup has determined that the following file did not originate
from Microsoft:

    %1

This file may have been provided by your hardware manufacturer.

Setup can replace this file with the latest Microsoft version, or
it can continue the installation without replacing this file.


      To allow Setup to replace the file, press ENTER.

      To keep the original third party file, press ESC.




 l  Setup has found one or more hard disk drives formatted with the OS/2
File System (HPFS). Windows OpenNT 4.5 does not support this file system.
You will not be able to access disks that are formatted with HPFS
from Windows OpenNT 4.5.

If you have a previous version of Windows OpenNT installed on a disk formatted
with HPFS, Setup will not be able to upgrade it to Windows OpenNT 4.5.

You can use the CONVERT program supplied with previous versions of
Windows OpenNT to convert disks formatted with HPFS to the Windows NT File
System (NTFS). (Windows OpenNT 4.5 CONVERT does not provide this capability.)
Do not convert any disks you need to access when using other operating
systems such as OS/2.

Refer to your System Guide for more information about CONVERT.


      To continue Setup, press ENTER.

      To exit Setup, press F3.






   �  Warning: If you continue upgrading, you will not be able to use Windows OpenNT
to access disks formatted with the OS/2 File System (HPFS), and you will
not be able to use Windows OpenNT 4.5 CONVERT to convert such disks to the
Windows NT File System (NTFS).


      To continue upgrading, press U. The ability to access HPFS drives
       from Windows OpenNT will be lost.

      To exit Setup, press F3.






   \   Setup could not format your drive %1.

Setup cannot continue. Press F3 to exit.

   �   Setup was unable to format partition because AutoFmt execution failed.

Your computer may lack sufficient memory to carry out the format,
or your Windows OpenNT CD-ROM may contain some corrupt files.

Press ENTER to continue.




    l   Setup could not find the End User Licensing Agreement.

Setup cannot continue. Press F3 to exit.

  �  You have asked Setup to remove the partition

   %1

on %2.

WARNING: This partition contains %3!u! compressed drive(s). Deleting this
partition will also delete its compressed drive(s).

     To delete this partition, press L.
      WARNING: All data on the partition will be lost.

     To return to the previous screen without
      deleting the partition, press ESC.







   `  WARNING: This partition contains %3!u! compressed drive(s). Formatting this
drive will erase all data currently stored on it, including its compressed
drive(s).
Please confirm that you want to format

%1

on %2.

      To format the drive, press F.

      To select a different partition for Windows OpenNT, press ESC.







 $  WARNING: This partition contains %3!u! compressed drive(s). Converting this
drive to NTFS will render the drive and its compressed drive(s) inaccessable
to operating systems other than Windows OpenNT.

Do not convert the drive to NTFS if you require access to the drive
when using other operating systems, such as MS-DOS, Windows, or OS/2.

Please confirm that you want to convert

%1

on %2.

      To convert the drive to NTFS, press C.

      To select a different partition for Windows OpenNT, press ESC.







      F1=Help%0
    F3=Exit%0
    ENTER=Continue%0
     ESC=More Options%0
       ENTER=Express Setup%0
    C=Custom Setup%0
     C=Create Partition%0
     D=Delete Partition%0
     ENTER=Install%0
      L=Delete%0
       F3=Reboot%0
      ESC=Cancel%0
     ENTER=Create%0
       C=Continue Setup%0
        ENTER=Restart Computer%0
     F=Format%0
       C=Convert%0
   (   Examining disk configuration...%0
    ENTER=Select%0
       R=Remove Files%0
     Removing:%0
      Updating %1...%0
  @   Searching for previous versions of Microsoft Windows...%0
     N=Different Directory%0
      Examining %1...%0
     ESC=Different Directory%0
    Please wait...%0
     S=Skip Detection%0
    (   Loading device driver (%1)...%0
   $   S=Specify Additional Device%0
 $   Creating directory %1...%0
       ENTER=Retry%0
    ESC=Skip File%0
   0   Building list of files to be copied...%0
     Copying:%0
    (   Loading information file %1...%0
  ,   Loading default configuration...%0
        Saving configuration...%0
 (   Initializing configuration...%0
   ,   Setting startup configuration...%0
    (   Updating startup environment...%0
     Restarting computer...%0
  (   Processing information file...%0
  4   Initializing SCSI startup configuration...%0
  0   Preparing to upgrade font file %1...%0
    $   Examining configuration...%0
  D   Searching for previous versions of Microsoft Windows NT...%0
  ,   Examining startup environment...%0
       Deleting file %1...%0
 ,   Cleaning startup configuration...%0
      ENTER=Upgrade%0
      O=Overwrite%0
 $   Backing up file %1 to %2...%0
    ESC=Skip Operation%0
     N=New Version%0
      ENTER=Next Page%0
     BACKSPACE=Previous Page%0
    ESC=Cancel Help%0
 0   Loading Keyboard Layout Library %1...%0
      R=Repair%0
       ENTER=Repair%0
       Examining %1...%0
    Repairing %1 ...%0
       A=Repair All%0
        ENTER=Select/Deselect%0
      Power Down Computer%0
     Checking drive %1...%0
    ,   Setup is examining directories...%0
      ENTER=Replace File%0
     U=Continue Upgrade%0
      Formatting drive %1...%0
     F8=I agree%0
     ESC=I do not agree%0
     PAGE DOWN=Next Page%0
     PAGE UP=Previous Page%0
   P   
 Windows OpenNT Workstation Setup
���������������������������������%0
  H   
 Windows OpenNT Server Setup
����������������������������%0
    $   
 Setup Help
������������%0
 T   
 Windows OpenNT Licensing Agreement
�����������������������������������%0
     Unknown Disk%0
    ,   %1!u! MB Disk on Unknown Adapter%0
    0   (Setup is unable to access this disk.)%0
  4   %1  %2!-35.35s!%3!5u! MB ( %4!5u! MB free)%0
  4   %1  %2!-35.35s!%3!5u! MB ( %4!5u! KB free)%0
  $   %1  %2!-35.35s!%3!5u! MB%0
    <       Unpartitioned space                %1!5u! MB%0
    ,   Create partition of size (in MB):%0
       Setup is formatting...%0
  $   Setup is removing files...%0
  ,   (There is no media in this drive.)%0
  8   Format the partition using the FAT file system%0
  8   Format the partition using the NTFS file system%0
 (   Convert the partition to NTFS%0
   <   Leave the current file system intact (no changes)%0
       Do not remove any files%0
    <none>
       %0
    @   Format the partition using the FAT file system (quick)%0
  @   Format the partition using the NTFS file system (quick)%0
    XENIX%0
      OS/2 Boot Manager%0
      EISA Utilities%0
     Unix%0
    (   Windows OpenNT Fault Tolerance%0
     XENIX Table%0
    System Reserved%0
    EZDrive%0
    Unknown%0
    Windows 95 (FAT32)%0
      Unformatted or Damaged%0
     New (Unformatted)%0
      FAT%0
    NTFS%0
       OS/2 (HPFS)%0
    NTFS%0
       Unknown%0
 ,   The above list matches my computer.%0
 D   Other (Requires disk provided by a hardware manufacturer)%0
   4   Manufacturer-supplied hardware support disk%0
 ,   Setup was unable to load the file.

  `   The disk contains no support files for the component you are
attempting to change.



 4   Syntax error on line %2!u! in section
%1

   (   Section %1
missing or empty.

   D   Unknown file type specified on line %2!u! in section
%1.


 D   Bad source disk specified on line %2!u! in section
%1.


   P   Unknown registry value type specified on line %2!u! in section
%1.


   D   Badly formed registry data on line %2!u! in section
%1.


  H   Missing <configname> (field 3) on line %2!u! in section
%1.


  D   Illegal or missing file types specified in section
%1.


   ,   Line %2!u! contains a syntax error.

    (More )%0
       (More )%0
       Found: %1%0
   $   Setup is copying files...%0
   ,   Unrecognized Operating System on C:%0
 4   Install Windows OpenNT from Compact Disc%0
    0   Windows OpenNT Emergency Repair Disk%0
    4   Setup was unable to find or load the file.
    ,   Line %2!u! contains a syntax error.
   H   Incorrect or missing signature in the Repair Information File.
    �   Setup was unable to load the source file %1 or the source
file is not the original file which Setup copied to the
Windows OpenNT installation.
  �   Setup has determined that the file:

    %1

is not the original file which Setup copied to the
Windows OpenNT installation.
 <   The version of the file is not Windows OpenNT 4.5.
    $   Setup is examining files...%0
 0   Repair Windows OpenNT from Compact Disc%0
 $   [X] Inspect registry files%0
  (   [X] Inspect startup environment%0
 0   [X] Verify Windows OpenNT system files%0
      [X] Inspect boot sector%0
 0       Continue (perform selected tasks)%0
   ,   [ ] SYSTEM (System Configuration)%0
   ,   [ ] SOFTWARE (Software Information)%0
 ,   [ ] DEFAULT (Default User Profile)%0
  ,   [ ] NTUSER.DAT (New User Profile)%0
   ,   [ ] SECURITY (Security Policy) and%0
  ,       SAM (User Accounts Database)%0
       (Mirror)%0
    <   Section [%1] does not contain the description
%3

   �  The Windows OpenNT Setup program makes it easy for you to set up Windows OpenNT
on your computer. Setup determines what kind of computer and file system(s)
you are using, and presents appropriate options for you to choose from
during Setup.

If you want to change a recommended setting, select the item you want to
change, and then choose a different setting. If you need more information
before deciding on a certain option, you can always get help by pressing F1.
%P
%IThe Setup Program

The Setup program has two parts:  a text-based portion and a
Windows OpenNT portion. You are now in the text-based portion of Setup.
In this portion, Setup does these things:

   It identifies correct hardware settings for your computer.

   It confirms your selection of partitions for your hard disk(s).

   It confirms the file system to be used on the disk partition that will
    contain Windows OpenNT.

   It confirms the directory where you will store the Windows OpenNT files.

   It copies essential files to your hard disk so it can start Windows OpenNT.

Setup gives you a chance to verify this information and change specific
settings before moving on to the next screen.
%P
%IWhat You Need to Know for Setup

Setup attempts to select appropriate settings for you, but it helps if you
know the following things about your computer system:

   What kind of network adapter card your computer has, and the card's
    interrupt number (IRQ), base port address, and other settings.
   The computer name and domain name assigned by your network
    administrator if your computer will join a Windows OpenNT Server domain.

If you are not sure about any item, you should accept Setup's
recommendation.
%P
%ISetup Keys

While running Setup, you may need to use various keys to move from screen to
screen and to select options. A summary of the keys you can use during Setup
appears below.

Press this key   To do this

UP/DOWN ARROW    Move the highlight to select
                 the next item in a list.

ENTER            Choose a selected option or
                 continue to the next Setup screen.

F1               Display Help for the current Setup screen.

F3               Quit Setup from anywhere in Setup.

ESC              Return from Help to the Setup screen, or cancel an option.


The ENTER, ESC, F1, and F3 keys can be used whenever they appear at the
bottom of the screen (in the text-based portion of Setup).
%P
%IQuitting Setup

To set up Windows OpenNT properly, you should complete both the text-based
and Windows OpenNT portions of the Setup program.

Although it is not recommended, you can quit at any time the F3 appears at
the bottom of the screen, by pressing F3. Please keep in mind, however, that
if you quit Setup early, Windows OpenNT will not be set up properly. You will
have to run Setup again to set up Windows OpenNT on your computer.

   To return to Setup, press ESC.





































 �  %ITwo Methods of Windows OpenNT Setup

Windows OpenNT provides two setup methods: Express and Custom Setup. Both
are described in detail in the screens that follow.

%IExpress Setup

With Express Setup, setting up Windows OpenNT is simple and fast. You have
very few actions to perform, because Setup uses default settings and does
almost everything for you.  Express Setup is recommended for people who
are less familiar with computers or with Windows OpenNT.
%P
Specifically, Express Setup does the following:

   Automatically configures your computer system. It detects your
    hardware and sets it up for Windows OpenNT (computer, display, mouse,
    keyboard, and keyboard layout).

   If Setup detects an earlier version of Windows OpenNT on your system,
    it will ask if you want to upgrade or to change the path, keeping the
    previous version and installing the new version in addition.

   Helps you set up your printer, if you have one connected to your
    system. Setup asks you for the name of your printer and the port it is
    connected to.

   Helps you to select and configure appropriate settings for your
    network adapter card and allows you to join a workgroup or a
    Windows OpenNT Server domain.

   Automatically sets up applications for use with Windows OpenNT. Setup
    searches the path and hard drive(s) on your computer (but not network
    drives). It sets up both Windows-based applications and
    non-Windows-based applications.
%P
%ICustom Setup

Custom Setup is designed for experienced users who want or need more
control over how Windows OpenNT is set up on their computers. With Custom
Setup, you can override most default setup values, and you can choose
which Windows OpenNT components and files you want copied to your hard disk.

Custom Setup requires you to make several choices and to supply more
information than Express Setup. If you choose Custom Setup, you should
already know how to use a mouse with Windows OpenNT.
%P
Specifically, Custom Setup does the following:

   Lists the hardware that Setup detects. You can choose to accept or
    change Setup's selections for computer, display, mouse, keyboard,
    keyboard layout, and SCSI adapters, if any.

   If Setup detects an earlier version of Windows OpenNT on your system,
    it will ask if you want to upgrade or to change the path, keeping the
    previous version and installing the new version in addition.

   Allows you to choose whether to set up optional Windows OpenNT
    components if you want or need to conserve disk space.

   Gives you full control over setting up your local printer(s).

   Helps you to select and configure appropriate settings for one or more
    network adapter cards and other network settings.

   Allows you to join a workgroup or a Windows OpenNT Server domain.

   Gives you full control over setting up applications for use with
    Windows OpenNT. Setup can search your path and hard drive(s) for
    applications to set up, or you can choose specific applications.
    You can use this feature to set up both Windows-based and
    non-Windows-based applications.

   To return to Setup, press ESC.




























 �  Run your computer manufacturer's setup utility the next time you
start the computer. Do the following:

 Check that the system environment is correctly configured for
  the specific hardware used in this computer.

 Delete any unused Boot selections (for operating systems
  that you no longer use).

See your hardware manufacturer's documentation for information about
running and using the setup utility.

   To return to Setup, press ESC.





    H  Check the following possible conditions:

 More memory may be required to run the options you selected
  on your system. Check the system requirements in the
  Windows OpenNT Installation Guide to be sure that your computer
  meets the minimum requirements.

 If you have a large number of hard disks, remove nonessential disks
  and run Windows OpenNT Setup again.

If you continue to get this error after ensuring that you meet
the minimum memory requirements, contact your product support
representative.

   To return to Setup, press ESC.








   �  Because Windows OpenNT Setup cannot read the required file,
it cannot remove Windows OpenNT system files from the previous installation.

To resolve this problem, you can do one of the following:

 Press ENTER and choose another directory or another disk partition for
  installing this new version. After Setup is complete, you can remove
  the directory containing the previous version of Windows OpenNT.

 Quit Setup. Then start your computer using another operating system
  and delete the previous installation of Windows OpenNT.
  Then start Windows OpenNT Setup and continue with steps for the
  new installation.

   To return to Setup, press ESC.








  �  A hard disk can contain four primary partitions, one of which can be
an extended partition that can contain an unlimited number of
logical drives. Setup has determined that a new primary partition
cannot be added on the hard disk you selected because it already contains
four partitions.

You can do one of the following:

 Select another disk or an existing partition where you will
  install Windows OpenNT.

 Remove an existing primary partition and create a new partition
  from the free space. (All data will be lost on any existing partition
  that you remove.)

   To return to Setup, press ESC.








  P  This Setup screen allows you to create, delete, and arrange disk partitions
to suit your needs before installing the Windows OpenNT operating system. Setup
can install Windows OpenNT on any partition in this list if that partition has
sufficient space for the Windows OpenNT system files.

NOTE: Any changes you make to create or delete partitions using this Setup
screen are not committed to disk until you select the partition where you
want to install Windows OpenNT and press ENTER.

If you are unsure about making any changes to your hard disk partitions
during Setup, do not create or delete any partitions. Install Windows OpenNT
on an existing partition. After Setup, you can use Disk Administrator to
manage partitions that do not contain the Windows OpenNT system files.

The list on this Setup screen is organized by disk. For each hard drive, the
list shows its total size and the hard drive type, such as IDE or SCSI. The
list also shows the amount of unpartitioned free space on each hard disk.
%P
For each partition on a drive, the list shows:
 The drive letter that Windows OpenNT would assign.
 The type of file system, if it is FAT or NTFS. For other types of
  file systems, the list shows the operating system that the partition was
  created for.
 The size of the partition in megabytes.
 The first few characters of the volume label.

For SCSI drives, the list shows:
 The total disk size in megabytes.
 The SCSI ID (usually 0 or 1).
 The bus ID for the controller.
 An abbreviation for the type of SCSI controller.

If there is unpartitioned free space on any hard disk, you can use the arrow
keys to select it in the list, and then press ENTER to automatically
partition that free space at the largest possible size.
%P
If you want to create a partition using a portion of the free space on a
hard disk, use the arrow keys to select that free space, and then press C.
The partition is not actually created until you select the partition where
you want to install Windows OpenNT and press ENTER.

If you want to delete one or more partitions that are no longer used,
highlight the partition you want to delete, and then press D. Deleting a
partition creates free space that can be combined with other free space on
the hard disk to create a new partition.

When you delete a partition, Setup will warn you that any files on that
partition will be lost. The partition is not actually deleted until you
select the partition where you want to install Windows OpenNT and press ENTER.
%P
If you are installing Windows OpenNT on an x86-based computer, the drive
letters displayed on this screen may not match the drive letters that appear
when you run MS-DOS. This is because MS-DOS assigns letters to SCSI drives
last, but Windows OpenNT treats SCSI drives as primary partitions, so letters
are assigned in a different order.

If you want to change the drive letters that Windows OpenNT assigns, after
Setup you can use Disk Administrator to assign drive letters.

   To return to Setup, press ESC.





























    �  This condition may represent a serious hardware problem.
Quit Setup and check the following for your hard disk:

   Be sure that the cables and power supply are properly connected.
   Run a hard disk check utility, such as CHKDSK or MS-DOS SCANDISK.

If the problem persists, your hard disk or computer may need repairs.

     To return to Setup, press ESC.





    �
  %IRestore Registry

Setup can restore the files of your registry which were saved on the
Emergency Repair Disk when you installed Windows OpenNT.

Setup attempts to access these files in your Windows OpenNT installation
and then recommends that corrupt or inaccessible Files be restored
from the Emergency Repair Disk. If you restore a file, all changes
made to it since you first installed Windows OpenNT will be lost.

For this reason, restoring a registry file should be done only as a
last resort when you have exhausted all other options, such as restoring
tape backups or accessing the Last Known Good Configuration by holding
down the space bar as your computer starts.

The following screens describe the different registry files.
%P
%ISYSTEM - System Configuration

The system configuration file controls such characteristics as

   Device drivers and services loaded by the system
   System memory management options
   Time and time zone configuration
   National Language Support (NLS) configuration
   Event logging

Restoring this file will undo changes you have made to the above
configuration since Windows OpenNT was first installed.
%P
%ISECURITY - Security Policy
%ISAM      - User Accounts Database

Setup treats these two files as a unit. They cannot be restored
independently of each other. Together these files form the system's
user accounts and security policy repository.

Restoring these files will eliminate all user groups and accounts
created on your computer since Windows OpenNT was first installed.

If you originally configured this computer as a Windows OpenNT Server
Primary Domain Controller and later demoted it to a Backup Domain
Controller, restoring these files will reconfigure the computer as a
Primary Domain Controller. Disconnect the computer from the network
before restarting it to avoid conflicts with the actual Primary
Domain Controller.
%P
%IDEFAULT - Default User Profile

The default user profile contains the environment used whenever a new
user first logs on to this computer. The environment includes:

   Personal program groups
   Screen colors
   Program preferences
   Control panel settings

Restoring the default user profile will not change existing users'
environments.
%P
%ISOFTWARE - Software Information

The software configuration file contains information about software
currently installed on your computer, including Windows OpenNT itself.

Restoring this file may cause some applications to behave incorrectly,
possibly necessitating their reinstallation.

   To return to Setup, press ESC.




































 $  %IRepair Menu

You can repair any or all of the following options on a Windows OpenNT 4.5
installation:


       Registry files

       Startup environment

       Windows OpenNT system files

       Boot sector



The following screens describe each option that you can select for setup
to repair.
%P
%IRepair Menu - Registry Files

Select this option if you want setup to restore your registry files.
Setup will allow you to select the registry files that you want to repair,
and will replace them with the files that were created when you first
installed Windows OpenNT. All changes made to the system since you installed
will be lost.
%P
%ISystem Repair Menu - Startup Environment

Select this option if you have Windows OpenNT version 4.5 installed on
your computer, but this installation does not appear in the list of
bootable systems. For this option, you must provide the Emergency
Repair disk created when you installed Windows OpenNT.
%P
%IRepair Menu - Windows OpenNT System Files

Select this option if you want setup to verify the existence and
integrity of all Windows OpenNT system files. Setup can replace the
damaged files after confirming the operation with you. You can also
direct Setup to replace all damaged files automatically, without asking
you to confirm the replacement of each file.
%P
%IRepair Menu - Boot Sector

Select this option if you cannot boot any system installed on your
computer. Setup will copy a new boot sector to your disk.


   To return to Setup, press ESC.



   d  %IRepair Menu

You can repair any or all of the following options on a Windows OpenNT
4.5 installation:


       Registry files

       Startup environment

       Windows OpenNT system files



The following screens describe each option that you can select for setup
to repair.
%P
%IRepair Menu - Registry Files

Select this option if you want setup to restore your registry files.
Setup will allow you to select the registry files that you want to repair,
and will replace them with the files that were created when you first
installed Windows OpenNT. All changes made to the system since you
installed will be lost.
%P
%IRepair Menu - Startup Environment

Select this option if you have Windows OpenNT version 4.5 installed on
your computer, but this installation does not appear in the list of
bootable systems. For this option, you must provide the Emergency
Repair disk created when you installed Windows OpenNT.
%P
%IRepair Menu - Windows OpenNT System Files

Select this option if you want setup to verify the existence and
integrity of all Windows OpenNT system files. Setup can replace the
damaged files after confirming the operation with you. You can also
direct Setup to replace all damaged files automatically, without asking
you to confirm the replacement of each file.


   To return to Setup, press ESC.



     Hardware Manufacturers who pre-install Windows OpenNT or provide
their own versions of the Windows OpenNT installation media may include
files that are optimized for your hardware.  When an upgrade is
attempted on such a system, Windows OpenNT Setup will identify these
files for you.  In some instances, the latest Microsoft version of
these files may not be compatible with your hardware.

For further assistance, you should contact your hardware manufacturer.


     To return to Setup, press ESC.





    *CCDCFCRNSSLONRAUYN%0
 4  # 0: (reserved)
# 1: C=Custom Setup (10005)
# 2: C=Create Partition (10006)
# 3: D=Delete Partition (10007)
# 4: C=Continue Setup (10013)
# 5: F=Format (10015)
# 6: C=Convert (10016)
# 7: R=Remove Files (10019)
# 8: N=Different Directory (10023)
# 9: S=Skip Detection (10027)
#10: S=Specify Additional SCSI Adapter (10029)
#11: L=Delete (10009)
#12: O=Overwrite (10065)
#13: N=New Version (10068)
#14: R=Repair (10073)
#15: A=Repair All (10077)
#16: U=Continue Upgrade (10087)
#17: Y=Yes, I agree (10089)
#18: N=No, I don't agree (10090)
       SP_SCRN_LOCALE_SPECIFIC_1
     SP_SCRN_LOCALE_SPECIFIC_2
     SP_SCRN_LOCALE_SPECIFIC_3
     SP_SCRN_LOCALE_SPECIFIC_4
     SP_SCRN_LOCALE_SPECIFIC_5
     SP_SCRN_LOCALE_SPECIFIC_6
     SP_SCRN_LOCALE_SPECIFIC_7
     SP_SCRN_LOCALE_SPECIFIC_8
     SP_SCRN_LOCALE_SPECIFIC_9
 $   SP_SCRN_LOCALE_SPECIFIC_10
    p4   V S _ V E R S I O N _ I N F O     ���      �e   �e?                        �   S t r i n g F i l e I n f o   �   0 4 0 9 0 4 B 0   >   C o m p a n y N a m e     O p e n N T   P r o j e c t     � B  F i l e D e s c r i p t i o n     W i n d o w s   O p e n N T   S e t u p   ( u s e r   m o d e   p o r t i o n   o f   c h a r a c t e r - b a s e d   p h a s e )   *   F i l e V e r s i o n     4 . 0 0     6   I n t e r n a l N a m e   U S E T U P . E X E     t (  L e g a l C o p y r i g h t   C o p y r i g h t   ( C )   M i c r o s o f t   C o r p .   1 9 8 1 - 1 9 9 6   >   O r i g i n a l F i l e n a m e   U S E T U P . E X E     `    P r o d u c t N a m e     W i n d o w s   O p e n N T   O p e r a t i n g   S y s t e m   .   P r o d u c t V e r s i o n   4 . 0 0     D    V a r F i l e I n f o     $    T r a n s l a t i o n     	�.debug$S        .rsrc$02            