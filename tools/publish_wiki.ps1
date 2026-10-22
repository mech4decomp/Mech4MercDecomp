# Publish docs/wiki/*.md to the GitHub wiki for this repository.
#
# The wiki is a separate git repository:
#   https://github.com/<owner>/<repo>.wiki.git
#
# Usage:
#   $env:GITHUB_TOKEN = '<token with repo scope>'
#   powershell -NoProfile -ExecutionPolicy Bypass -File tools\publish_wiki.ps1
#
# The token is only passed to git through a temporary askpass helper. It is
# never written into the repository or the remote URL.

param(
    [string]$Repo = "mech4decomp/Mech4MercDecomp",
    [string]$WikiDir = ""
)

$ErrorActionPreference = "Stop"
$ROOT = Split-Path -Parent $PSScriptRoot
if (-not $WikiDir) { $WikiDir = Join-Path $ROOT "docs\wiki" }

if (-not $env:GITHUB_TOKEN) {
    Write-Error "GITHUB_TOKEN is not set"
    exit 1
}
if (-not (Test-Path -LiteralPath $WikiDir)) {
    Write-Error "wiki source directory not found: $WikiDir"
    exit 1
}

$tmp = Join-Path $env:TEMP ("mw4-wiki-" + [guid]::NewGuid().ToString("N"))
$tokenFile = Join-Path $tmp "token.txt"
$askpass = Join-Path $tmp "askpass.bat"
New-Item -ItemType Directory -Force -Path $tmp | Out-Null
Set-Content -LiteralPath $tokenFile -Value $env:GITHUB_TOKEN -NoNewline
$ask = @"
@echo off
setlocal
echo %~1 | findstr /I "Username" >nul
if not errorlevel 1 (
  echo x-access-token
) else (
  type "$tokenFile"
)
"@
Set-Content -LiteralPath $askpass -Value $ask -Encoding Ascii

$env:GIT_ASKPASS = $askpass
$env:GIT_TERMINAL_PROMPT = "0"

try {
    $wikiRepo = Join-Path $tmp "wiki"
    git clone "https://github.com/$Repo.wiki.git" $wikiRepo
    if ($LASTEXITCODE -ne 0) { throw "wiki clone failed (is the wiki enabled?)" }

    Copy-Item (Join-Path $WikiDir "*.md") $wikiRepo -Force
    git -C $wikiRepo add -A
    git -C $wikiRepo -c user.name="mech4decomp" -c user.email="mech4decomp@proton.me" `
        commit -m "docs: publish oracle wiki"
    if ($LASTEXITCODE -ne 0) {
        Write-Host "no wiki changes to commit"
    } else {
        git -C $wikiRepo -c credential.helper= push origin HEAD
        if ($LASTEXITCODE -ne 0) { throw "wiki push failed" }
        Write-Host "wiki published: https://github.com/$Repo/wiki"
    }
} finally {
    Remove-Item -LiteralPath $tmp -Recurse -Force -ErrorAction SilentlyContinue
    Remove-Item Env:GIT_ASKPASS -ErrorAction SilentlyContinue
    Remove-Item Env:GIT_TERMINAL_PROMPT -ErrorAction SilentlyContinue
}
