@echo off
rem Environment setup for the MW4 oracle build.
rem
rem Requirements:
rem   * Microsoft Visual C++ 6.0 (SP6) - cl.exe 12.00.8804
rem   * DirectX 8.1 SDK
rem   * Python 3.8+ on PATH
rem
rem Usage: call tools\env.bat
rem
rem Override the install locations by setting VC98 and DXSDK before calling
rem this script. The defaults cover the common VC6 and DX8.1 install paths.

for %%I in ("%~dp0..") do set "MW4_ROOT=%%~fI"

if not defined VC98 (
    if exist "C:\Program Files (x86)\Microsoft Visual Studio\VC98\BIN\cl.exe" set "VC98=C:\Program Files (x86)\Microsoft Visual Studio\VC98"
    if not defined VC98 if exist "C:\Program Files\Microsoft Visual Studio\VC98\BIN\cl.exe" set "VC98=C:\Program Files\Microsoft Visual Studio\VC98"
    if not defined VC98 if exist "C:\PROGRA~2\MICROS~3\VC98\BIN\cl.exe" set "VC98=C:\PROGRA~2\MICROS~3\VC98"
    if not defined VC98 if exist "C:\VC98\BIN\cl.exe" set "VC98=C:\VC98"
)

if not defined VC98 (
    echo ERROR: Visual C++ 6.0 not found.
    echo Set VC98 to the VC98 directory, e.g.:
    echo   set VC98=C:\Program Files ^(x86^)\Microsoft Visual Studio\VC98
    exit /b 1
)

if not defined VSCommon (
    if exist "%VC98%\..\Common\msdev98\BIN" set "VSCommon=%VC98%\..\Common"
    if not defined VSCommon if exist "C:\PROGRA~2\MICROS~3\Common\msdev98\BIN" set "VSCommon=C:\PROGRA~2\MICROS~3\Common"
)

if not defined DXSDK (
    if exist "C:\dx81full\DXF\DXSDK\include\d3d8.h" set "DXSDK=C:\dx81full\DXF\DXSDK"
    if not defined DXSDK if exist "C:\DXSDK\include\d3d8.h" set "DXSDK=C:\DXSDK"
)

set "PATH=%VSCommon%\msdev98\BIN;%VC98%\BIN;%PATH%"
set "INCLUDE=%VC98%\ATL\INCLUDE;%VC98%\INCLUDE;%VC98%\MFC\INCLUDE;%INCLUDE%"
set "LIB=%VC98%\LIB;%VC98%\MFC\LIB;%LIB%"

if defined DXSDK (
    set "INCLUDE=%DXSDK%\include;%INCLUDE%"
    set "LIB=%DXSDK%\lib;%LIB%"
) else (
    echo WARNING: DirectX 8.1 SDK not found; set DXSDK if the build needs it.
)

rem Keep the caller's working directory; only environment variables change.
