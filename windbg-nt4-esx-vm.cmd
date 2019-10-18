set volume_root=D:
set wrk=%~dp0
set windbgargs=-k com:port=com1,baud=115200 -srcpath %wrk%nt\private
set _NT_SYMBOL_PATH=%wrk%binaries\nt\Symbols;%CORE_ROOT%;%CORE_ROOT%\pdb;%volume_root%\pdb;srv*%volume_root%\pdb*http://msdl.microsoft.com/download/symbols
rem start ""  "E:\WinDDK\7600.16385.1\Debuggers\windbg.exe" %windbgargs%
start "" "%wrk%others\windbg6.6\windbg.exe" %windbgargs%

