                   Microsoft(R) Debugging Tools for Windows(R)
                                    Sample Code
                                      README

Sample Overview

The following samples are included with this SDK.

  assert
  - Shows how to use non-invasive self-attach to get stack traces for
    assertion failures

  dumpstk
  - Demonstrates how to open a dump file and get a stack trace

  exts
  - Sample DbgEng-style debugger extension (using dbgeng.h and wdbgexts.h) 

  extcpp
  - Sample EngExtCpp-style debugger extension

  healer
  - Shows how to monitor an app for compatibility problems and automatically
    correct them

  remmon
  - Example of how to connect to a debugger server and execute a command while
    the server is broken into the debugger

  simplext
  - Sample WdbgExts-style debugger extension (using wdbgexts.h only)

  mattachproc
  - Managed sample showing how to create/attach to process and get last debug event

  mdumpstk
  - Managed version of the "dumpstk" sample

  mformatting
  - Managed sample showing how to use the DebugFormatter class to format strings and text output

  mhealer
  - Managed version of the "healer" sample

  mremmon
  - Managed version of the "remmon" sample

----------
Building the Samples

In order to build these samples with the Windows DDK, you must do the
following:

1) Install the Debugging Tools using the custom installation option.  When you
get to the "Custom Installation" dialog, expand the "Debugging Tools for
Windows" selection, click on "SDK", and choose "Entire feature will be
installed on local hard drive".  (e.g. install to directory D:\dbg)

Use the Build utility environment window to compile and build these samples.
You must use the version of the Build utility supplied by the latest version
of the Windows DDK (or the Platform SDK).  The Windows DDK includes several
different build environment windows -- you must use the "Windows Server 2003
Build Environment" window, even if you are building samples or extensions for
use on a different version of Windows.

(Attempting to build the samples in a "Windows 2000 Build Environment" will
cause compilation errors.  Building them in a "Windows XP Build Environment"
may succeed in some cases, but it is not recommended.  You should always
choose the "Windows 2003 Server Build Environment".)

The header files and libs in this package should replace any existing version
of the header files or libs that are shipped with the Windows DDK or the
Platform SDK.  If you follow the instructions for using the Build utility
which appear in the Windows DDK documentation, you can set your include paths
so that this is done automatically.

The samples will not compile if they are located in a directory path containing
spaces.  If you have installed Debugging Tools for Windows into a path with
spaces, you can work around this limitation by moving or copying the "sdk"
subdirectory to a directory path without spaces.

2) Use the DDK's setenv.bat script to setup your Windows Server 2003 DDK build
environment.

  For example: setenv D:\winddk\3790 fre wnet

This step is only necessary if you are not using the "Windows 2003 Server
Build Environment" window.

3) Set the following two environment variables to point to the debugger's
inc and lib directories:

  set DBGSDK_INC_PATH=D:\dbg\sdk\inc
  set DBGSDK_LIB_PATH=D:\dbg\sdk\lib
  set DBGLIB_LIB_PATH=D:\dbg\sdk\lib

In this example, "D:\dbg\sdk" should be replaced with the actual path on your
computer.

To build the managed samples, set the environment variable DBGSDK_REF_PATH to
point to the location of mdbgeng.metadata_dll


4) Change directory to the debugging tools samples directory and build.

  build -cZMg
