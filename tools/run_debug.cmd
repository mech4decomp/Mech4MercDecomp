@echo off
rem Launch the oracle MW4Mercs.exe windowed and attach x32dbg.
rem   run_debug.cmd            -> start game windowed + attach x32dbg
rem   run_debug.cmd deploy     -> also deploy build\MW4Mercs.exe first
rem   run_debug.cmd noattach   -> start game windowed, no debugger
setlocal
set EXTRA=
if /i "%~1"=="deploy" set EXTRA=-Deploy
if /i "%~1"=="noattach" set EXTRA=-NoAttach
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0run_debug.ps1" %EXTRA%
endlocal
