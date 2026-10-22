# Launch the oracle MW4Mercs.exe windowed and attach x32dbg to it.
#
# Usage:
#   powershell -ExecutionPolicy Bypass -File tools\run_debug.ps1 [-Deploy] [-NoAttach]
#
#   -Deploy    copy build\MW4Mercs.exe into the install (hash-verified) first
#   -NoAttach  start the game windowed and do NOT attach a debugger
#
# Notes:
#   * Windowed mode is the game's own `-window` command-line switch.
#   * Attach is used (not launch-under-debugger): the 2026.05.27 x64dbg
#     snapshot crashes on the launch-debuggee path (x32dbg.dll+0xf2b6c,
#     STATUS_FATAL_USER_CALLBACK_EXCEPTION); `-p <pid>` attach works fine.
#   * After attach, x32dbg breaks in; press F9 (run) to let the game start.
#   * Function names: this x64dbg build has NO map-file loader (PDB-only).
#     Load names via the Script tab (run build\MW4Mercs.x64dbg.txt from
#     `nmake map`), then File > Save Database so labels persist.
#     `nmake debug` -> attach; the game is 32-bit so x32dbg is the right arch.

param(
    [switch]$Deploy,
    [switch]$NoAttach,
    [string]$Install = "",
    [string]$Debugger = "C:\tools\x64dbg\release\x32\x32dbg.exe"
)

$ErrorActionPreference = "Stop"
$ROOT = Split-Path -Parent $PSScriptRoot
if (-not $Install) { $Install = Join-Path $ROOT "Mechwarrior 4 Mercenaries" }

if ($Deploy) {
    & python (Join-Path $ROOT "tools\deploy_exe.py") $Install
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}

$gameExe = Join-Path $Install "MW4Mercs.exe"
if (-not (Test-Path -LiteralPath $gameExe)) {
    Write-Error "game exe not found: $gameExe (run: nmake exe; nmake deploy)"
    exit 1
}

Write-Host "starting game windowed: $gameExe -window"
$game = Start-Process -FilePath $gameExe -ArgumentList "-window" `
                      -WorkingDirectory $Install -PassThru
Start-Sleep -Seconds 6

if ($game.HasExited) {
    Write-Error "game exited early (code $($game.ExitCode))"
    exit 1
}
Write-Host "game running: pid=$($game.Id)  title='$((Get-Process -Id $game.Id).MainWindowTitle)'"

if ($NoAttach) { Write-Host "launch only (no attach). game pid=$($game.Id)"; exit 0 }

if (-not (Test-Path -LiteralPath $Debugger)) {
    Write-Error "debugger not found: $Debugger"
    exit 1
}
Write-Host "attaching $Debugger to pid $($game.Id) ..."
& $Debugger -p $game.Id
Write-Host "done (x32dbg exited; game state: $(-not (Get-Process -Id $game.Id -ErrorAction SilentlyContinue) -or 'running'))"
