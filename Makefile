# MW4 Mercenaries oracle recompilation - nmake build
#
# Pinned toolchain: cl.exe 12.00.8804 (VC6 SP6), link.exe 6.00.8447.
# See docs/BUILD.md for prerequisites and the full build order.
#
# Typical first build (reference-free):
#   call tools\env.bat
#   nmake objs
#   nmake data-objs
#   nmake exe
#
# Or: nmake all
#
# Module build:
#   nmake dll-all MOD=gundll
#   nmake dll-all MOD=blade
#   nmake dll-all MOD=mw4stats
#   nmake dll-all MOD=zloglib
#   nmake dll-all MOD=language
#   nmake dll-all MOD=missionlang

PYTHON  = python
CC      = cl

CFLAGS  = /nologo /MD /GR- /Gm- /Gs- /Gy /GX- /O1 /c /Iinclude
LDFLAGS = /nologo /subsystem:windows,4.0 /base:0x400000 /fixed \
          /filealign:0x1000 /machine:i386 /nodefaultlib:libc.lib
LDLIBS  = msvcrt.lib kernel32.lib user32.lib gdi32.lib advapi32.lib \
          shell32.lib version.lib winmm.lib wsock32.lib msacm32.lib ole32.lib

OBJDIR  = build\obj
EXEDIR  = build
TARGET  = $(EXEDIR)\MW4Mercs.exe

EXE     = reference\MW4Mercs.exe
CSV     = reference\functions\MW4Mercs.csv
OUTDIR  = $(OBJDIR)

EXPECTARG =
!IF "$(MOD)" == "gundll"
EXPECTARG = --expect=reference/in_scope/gundll.txt
!ENDIF

# Default target: show the commands rather than starting a multi-hour build.
default: help

help:
    @echo.
    @echo MW4 Mercenaries oracle recompilation
    @echo -----------------------------------
    @echo   nmake objs                 compile all EXE .text sources
    @echo   nmake data-objs            compile committed EXE data sources
    @echo   nmake exe                  assemble build\MW4Mercs.exe
    @echo   nmake all                  objs + data-objs + exe
    @echo.
    @echo   nmake data                 optional: regenerate EXE data from a reference
    @echo   nmake init                 optional: regenerate EXE metadata artifacts
    @echo   nmake module-objs MOD=...  compile one module's .text sources
    @echo   nmake module-data-objs MOD=...  compile one module's committed data
    @echo   nmake dll MOD=...          assemble one module
    @echo   nmake dll-all MOD=...      module-objs + module-data-objs + dll
    @echo   nmake module-data MOD=...  optional: regenerate module data
    @echo   nmake dll-init MOD=...     optional: regenerate module artifacts
    @echo.
    @echo   nmake one SRC=src\mw4mercs\text\func_00401000.c
    @echo   nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
    @echo   nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
    @echo   nmake verify               verify built images against reference hashes
    @echo   nmake clean                remove build outputs
    @echo.

dirs:
    @if not exist $(OBJDIR) mkdir $(OBJDIR)
    @if not exist $(EXEDIR) mkdir $(EXEDIR)
    @if not exist build\modules mkdir build\modules

# ---- EXE oracle ---------------------------------------------------------

objs: dirs
    @$(PYTHON) tools\build_text_objs.py

data-objs: dirs
    @$(PYTHON) tools\exe_data_assemble.py --compile

data: dirs
    @$(PYTHON) tools\exe_data_assemble.py --files

init: objs
    @$(PYTHON) tools\exe_image_assemble.py --init

exe: objs data-objs
    @$(PYTHON) tools\exe_image_assemble.py
    @$(PYTHON) tools\exe_image_assemble.py --diff

all: exe

# ---- Module oracle ------------------------------------------------------

module-objs: dirs
    @if "$(MOD)"=="" (echo usage: nmake module-objs MOD=gundll & exit /b 1)
    @$(PYTHON) tools\build_text_objs.py --module $(MOD)

module-data-objs: dirs
    @if "$(MOD)"=="" (echo usage: nmake module-data-objs MOD=gundll & exit /b 1)
    @$(PYTHON) tools\data_assemble.py $(MOD) --compile

module-data: dirs
    @if "$(MOD)"=="" (echo usage: nmake module-data MOD=gundll & exit /b 1)
    @$(PYTHON) tools\data_assemble.py $(MOD) --files

dll-init: module-objs
    @if "$(MOD)"=="" (echo usage: nmake dll-init MOD=gundll & exit /b 1)
    @$(PYTHON) tools\image_assemble.py $(MOD) --init

dll: module-objs module-data-objs
    @if "$(MOD)"=="" (echo usage: nmake dll MOD=gundll & exit /b 1)
    @if not exist "src\$(MOD:missionlang=missionlang_mercs)\artifacts\header.bin" (echo missing artifacts - run: nmake dll-init MOD=$(MOD) & exit /b 1)
    @$(PYTHON) tools\image_assemble.py $(MOD) $(EXPECTARG)
    @$(PYTHON) tools\image_assemble.py $(MOD) --diff

dll-all: dll
    @if "$(MOD)"=="" (echo usage: nmake dll-all MOD=gundll & exit /b 1)

# ---- Single translation unit / per-function gates -----------------------

one: dirs
    @if not exist $(OUTDIR) mkdir $(OUTDIR)
    $(CC) $(CFLAGS) $(SRC) /Fo$(OUTDIR)/

!IFDEF SIZE
diff:
    @$(PYTHON) tools\diff.py --func $(FUNC) --obj $(OBJNAME) --exe $(EXE) --size $(SIZE) $(DIFFFLAGS)
!ELSE IFDEF OBJNAME
diff:
    @$(PYTHON) tools\diff.py --func $(FUNC) --obj $(OBJNAME) --exe $(EXE) --csv $(CSV) $(DIFFFLAGS)
!ELSE
diff:
    @echo usage: nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj [SIZE=4] [DIFFFLAGS=--full] [EXE=reference\bin] [CSV=path\functions.csv]
!ENDIF

nomask:
    @$(PYTHON) tools\verify_nomask.py --func $(FUNC) --obj $(OBJNAME) $(DIFFFLAGS)

# ---- Verification and optional dev workflow -----------------------------

verify:
    @$(PYTHON) tools\verify_hashes.py

hashes: verify

deploy:
    @$(PYTHON) tools\deploy_exe.py $(DEPLOYDIR)

map:
    @$(PYTHON) tools\gen_symbol_map.py

debug:
    @powershell -NoProfile -ExecutionPolicy Bypass -File tools\run_debug.ps1

clean:
    @if exist build rmdir /s /q build

.PHONY: default help dirs objs data-objs data init exe all module-objs module-data-objs module-data dll-init dll dll-all one diff nomask verify hashes deploy map debug clean
