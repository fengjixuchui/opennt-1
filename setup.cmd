@REM this gets us ready for the build process
copy /Y w:\tools\x86\idw\alias.exe  %SystemRoot%\system32

cd w:\nt\private
set username=x86chk
call zSHchk.cmd

rem next to run zTESTBUILD.cmd to build NT4 from source
rem first run clean build, then run non-clean build until no building errors

rem to make NT4 bootable and installation CD
rem cd \cdimg
rem genall
