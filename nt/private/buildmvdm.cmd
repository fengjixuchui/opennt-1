echo Building mvdm
cd %_NTROOT%\private\mvdm
build
        if errorlevel 1 (
	echo "error building mvdm"
	pause
	REM goto Error
	)
cd %_NTROOT%\private