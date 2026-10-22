@echo off
rem Compile one oracle translation unit.
rem   tools\compile_one.bat src\mw4mercs\text\func_00401000.c build\obj\
call "%~dp0env.bat" || exit /b 1
if "%~1"=="" (
    echo usage: compile_one.bat ^<source.c^> ^<obj-dir^>
    exit /b 1
)
set "OUTDIR=%~2"
if "%OUTDIR%"=="" set "OUTDIR=build\obj"
if not exist "%OUTDIR%" mkdir "%OUTDIR%"
cl /nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /I"%MW4_ROOT%\include" "%~1" /Fo"%OUTDIR%\"
