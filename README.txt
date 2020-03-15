~~~~~~~~~~~~
My summarry:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
How to build in brief:
- install windows server 2003 32 bit
- copy all source files to w:\
- run "W:\setupchk.cmd"
- run zTESTBUILD.cmd and answer 'yyy' for the 1st pass clean build and ignore building errors if any
- if any building errors, run zTESTBUILD.cmd again and answer 'nyy' for a 2nd pass non-clean build


Note:
- Windows 64bit cannot work
- w: drive can be created using a local volume, subst, or mapping a network drive


Reference:
- https://github.com/stephanosio
- http://web.archive.org/web/20151117232635/http://file.opennt.net/
- https://virtuallyfun.com/wordpress/2018/09/13/opennt-4-5-revisited/
- http://vetusware.com/download/OpenNT%204.5/?id=14904


~~~~~~~~~~~~~~~~~~
From contributors:
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
I created a seperate hard disk for the W: drive, a subst may work as well.
There are portions of the build that rely on 16bit (MS-DOS) executables,
they can be forced to run via MS-DOS Player on higher OS's but there are 
some really old style executables (local.exe) that x64's don't like at all.  
The safest environment is at least 2000 i386  I'm using Windows 2000 Advanced Server 
so I can use 8 processors.  It's been reported that 2003 i386 will work as well.
There are portions of the build which can run in
 parallel so having more processors is a good thing.

xcopy files to a 'W:' drive.  I guess you can use a SUBST disk, but I use a seperate physical disk.

(if your CD is the D drive......  if you cant figure this out god help you)
xcopy d:\*.* w:\ /e/s

copy w:\tools\x86\idw\alias.exe  %SystemRoot%\system32

cd w:\nt\private
set username=x86fre
zSHfre.cmd
(screen should turn green)
ztestbuild
answer yes to everything


But I've rigged the build process to keep on going if there is a failure, but it'll
pause on whatever broke.  The way it was the MVDM build would bomb out as files
it needed weren't generated yet, so I moved it to the bottom of the build list, and
in my test run it'll build.

So it ought to have built...

-====================================================================-
Creating TBOMB60.HIV hive for Retail Setup
Creating TBOMB90.HIV hive for Retail Setup
Creating TBOMB120.HIV hive for Retail Setup
Creating SETUPUPG.HIV hive for Retail Setup


Build done
-====================================================================-

*****IF it fails on MVDM don't worry!!!!!!!****************

Just run buildmvdm.cmd and it'll build it again.  It usually bombs if it can't find
files that need to be built later on (dependancy issue).


Or just re-run ztestbuild but this time say NO to a clean build, 
and let it try to build everything again.  This should be a little quicker than the first
pass over the code.

You can also try to build MVDM directly by running from the green terminal:

-====================================================================-

    cd %_NTROOT%\private\mvdm
    build
-====================================================================-


The process is a bit screwed up for sure. :(

to build a CD you need 2624 files in your binary directory.

dir \binaries\nt /s
            2624 File(s)    126,200,461 bytes

Once you some how manage to get it to build stuff then make a CD!

cd \cdimg
genall




-====================================================================-
Generating ISO image ...

CDIMAGE 2.47 CD-ROM and DVD-ROM Premastering Utility
Copyright (C) Microsoft, 1993-2000.  All rights reserved.
For Microsoft internal use only.


Scanning source tree complete (2473 files in 3 directories)

Computing directory information complete

Image file is 58241024 bytes

Writing 2473 files in 3 directories to W:\cdimg\iso\NT45Wks.iso

100% complete

Final image file is 58241024 bytes

Done.
-====================================================================-
