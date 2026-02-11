
call "setup_mingw.bat"


call  "\\LAPTOP-4SNPJQQI\D$\MathWorks MATLAB R2025b v25.2.0.2998904 (x64)\bin\win64\checkMATLABRootForDriveMap.exe" "\\LAPTOP-4SNPJQQI\D$\MathWorks MATLAB R2025b v25.2.0.2998904 (x64)"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

if "%1"=="" ("%MINGW_ROOT%\mingw32-make.exe" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -j 4 -l 8 -Oline -f BMSV001.mk all) else ("%MINGW_ROOT%\mingw32-make.exe" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -j 4 -l 8 -Oline -f BMSV001.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1