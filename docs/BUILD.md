# Build guide

## Requirements

- Windows 10 or 11. The build tools are 32-bit and run on 64-bit Windows.
- Microsoft Visual C++ 6.0 with SP6: `cl.exe` 12.00.8804, `link.exe`
  6.00.8447, and the matching `nmake.exe`. SP6 matters; earlier VC6 builds do
  not produce the oracle's instruction encoding.
- DirectX 8.1 SDK headers and libraries.
- Python 3.8+ on `PATH`.
- A legitimate copy of MechWarrior 4: Mercenaries updated to **Point Release 1
  (PR1)**.

The build uses `nmake`. Run commands from a `cmd.exe` prompt in the repository
root.

## Game version

The oracle target is the official Microsoft **MechWarrior 4: Mercenaries Point
Release 1 (PR1)** build:

| Item | Value |
|---|---|
| Release | Point Release 1 (PR1), the final official point release |
| Patch installer | `Mercpr1.exe` |
| EXE file version | `50.07.01.2105` |
| EXE size | 3,915,776 bytes |
| EXE SHA-256 | `deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f` |

This was confirmed from the PR1 readme included in a normal install and the
EXE's version resource. A normal PR1 install includes the patch readme
(`mw mercs patch 1 readme.rtf`).
The reference `MW4Mercs.exe` is the PR1 image with the SafeDisc wrapper
removed. The six DLLs in `reference/` must come from the same PR1 install.

The base retail release (before PR1) and later community builds do not match.
Before building, verify every supplied binary against `reference/SHA256.txt`.
The byte gates are keyed to these exact files; a different EXE or DLL will
fail at the final diff even if the game version string looks similar.

See [game versioning](GAME_VERSIONING.md) for how the EXE uses
`50.07.01.2105` in multiplayer and saved data.

### Unwrapped and NoCD executables

The retail PR1 disc uses SafeDisc. The canonical reference is an unwrapped
PR1 image, not a modified "NoCD" executable. Community NoCD or unprotected
executables exist because the original disc check is inconvenient on modern
Windows; they are not provided or supported here. Most have modified code or
packing, so their SHA-256 will not match the reference.

If you use a NoCD executable to run the game, keep a separate canonical PR1
image for the build and verify its hash. A NoCD EXE that does not match
`reference/SHA256.txt` cannot be used as the oracle reference.

### Getting a copy

The game is out of print and is not distributed by this project. The official
PR1 patch and retail disc images are preserved on general software archives
(for example, the Internet Archive and archived Microsoft download mirrors).
We do not link to or host them. Use a source you trust, scan the files, and
verify the hashes against `reference/SHA256.txt`. Applying the official PR1
patch to a retail install is the expected way to produce the target set.

### Why the official PR1 build, not the MekTek free release

MekTek's authorized 2010 free release is a different product build. The final
MekTek 3.1 release identifies as version `51.03.01`, includes MekPak content,
and ships different binaries. The oracle is keyed to the official PR1
`50.07.01.2105` bytes: function addresses, data sections, artifacts, and the
SHA-256 gates all assume that exact build.

The MekTek release is a legitimate way to play the game, but it is not the
oracle target and cannot pass the byte-identity gates. Use it for play if you
like; use an official PR1 install for the build.

## 1. Configure the environment

```bat
call tools\env.bat
```

The script derives `MW4_ROOT` from its own location and sets `PATH`, `INCLUDE`,
and `LIB` for VC6. Override the install locations if needed:

```bat
set VC98=C:\Program Files (x86)\Microsoft Visual Studio\VC98
set DXSDK=C:\dx81full\DXF\DXSDK
call tools\env.bat
```

Check the compiler:

```bat
cl
```

## 2. Supply the reference binaries

Copy your own copies into `reference/`:

```
MW4Mercs.exe
blade.dll
GunDll.dll
MW4Stats.dll
ZlogLib.dll
Language.dll
MissionLang_MERCS.dll
```

Verify them against `reference/SHA256.txt` (for example with
`certutil -hashfile reference\MW4Mercs.exe SHA256`). These files are ignored by
git and must never be committed.

## 3. Build the EXE oracle

Run the steps in this order. The order matters: `init` learns the residual
extern table from the compiled `.text` objects.

```bat
nmake objs
nmake data
nmake init
nmake exe
```

Or:

```bat
nmake all
```

What each step does:

| Step | Output |
|---|---|
| `nmake objs` | `build\obj\*.obj` from every `src\mw4mercs\text\*.c` |
| `nmake data` | generated `src\mw4mercs\{rdata,data,rsrc,txt2}\data_0x*.c` and `build\obj\data\*.obj` |
| `nmake init` | `src\mw4mercs\artifacts\{pe_headers.bin,text_pads.bin,extern_addrs.csv}` |
| `nmake exe` | `build\MW4Mercs.exe` + full byte diff |

The generated data sources and `.bin` artifacts are gitignored. The build is
reference-free after `init`; the reference is read only for the final `--diff`.

## 4. Build a module oracle

```bat
nmake dll-all MOD=gundll
```

Valid module keys:

```
blade  gundll  language  missionlang  mw4stats  zloglib
```

The steps are the same:

```bat
nmake module-objs MOD=gundll
nmake module-data MOD=gundll
nmake dll-init MOD=gundll
nmake dll MOD=gundll
```

`dll-init` writes the module's `header.bin`, `rsrc.bin`, `reloc.bin`,
`extern_addrs.csv`, `text_pads.bin`, and (when needed) `trailer.bin` into
`src\<target>\artifacts\`. The `.bin` files are gitignored. `nmake dll` then
assembles `build\modules\<key>\dll\<name>.dll` and byte-diffs it.

## 5. Verify

```bat
nmake verify
```

Expected hashes are in `reference/SHA256.txt`. The command checks the EXE and
all six built DLLs.

## Per-function workflow

Compile one source and compare it to the reference:

```bat
nmake one SRC=src\mw4mercs\text\func_00401000.c
nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

The masked diff ignores relocation slots. The no-mask check resolves them from
the committed table and compares every byte.

## Windows 11 notes

The compiler and linker are 32-bit, so they run on 64-bit Windows 11. The
installers are the problem: Visual Studio 6.0 and the DirectX 8.1 SDK predate
64-bit Windows and may refuse to run or register components.

**Visual C++ 6.0 installation fails.** The original VS6 installer predates
64-bit Windows and often fails on Windows 11. Try `setup.exe` in Windows XP
(SP3) compatibility mode as administrator first. If it still fails:

- Install VC6 with SP6 in a 32-bit Windows VM and share the repository into
  the VM.
- Use a pre-extracted or portable VC98 tree and point `VC98` at it.
- Copy an existing VC98 installation from a 32-bit machine.

The build only needs the VC98 `Bin`, `Include`, and `Lib` directories; a full
IDE installation is not required. Short paths without spaces are safest:

```bat
set VC98=C:\VC98
set DXSDK=C:\dx81full\DXF\DXSDK
call tools\env.bat
```

**The DirectX 8.1 SDK installer fails.** The old installer may refuse to run.
Extract or copy the SDK files and point `DXSDK` at the directory containing
`Include` and `Lib`. The build does not need the SDK installer to run.

**`cl` or `nmake` is the wrong version.** A modern Visual Studio installation
may be earlier on `PATH`. Run `tools\env.bat` in the same `cmd.exe` session and
check `cl` reports 12.00.8804. Do not use `nmake` from Visual Studio 2022.

**PowerShell environment.** `tools\env.bat` is a batch file. Run it from
`cmd.exe`; invoking a `.bat` from PowerShell runs it in a child process, so the
environment does not persist.

**The game will not start.** For multiplayer, enable the legacy **DirectPlay**
component in Windows Features. If the game or an old tool still fails, try
Windows XP (SP3) compatibility mode and "Run as administrator". For display
scaling problems, use the shortcut's compatibility settings and set "Override
high DPI scaling behavior" to "Application".

**Old binaries are quarantined.** Antivirus and SmartScreen may flag VC6
tools, the SafeDisc-era game files, or a NoCD executable. Add a local exclusion
for the build and game directories if you trust the files; do not disable
real-time protection globally.

## Troubleshooting

**`cl` not found or wrong version** — `tools\env.bat` did not find VC6. Set
`VC98` explicitly and rerun it.

**`Cannot open include file: 'mw4/archive.h'`** — run from the repository root
so `/Iinclude` resolves, or use `tools\compile_one.bat`.

**`missing committed artifacts` / empty extern table** — run `nmake objs`
before `nmake init`. `init` learns symbols from the compiled objects.

**Data-section mismatch** — your reference binary does not match the expected
hash. Verify `reference/SHA256.txt`.

**Module data mismatch** — make sure the matching DLL in `reference/` is the
canonical one; each module is diffed against its own binary.

**Build is slow** — the first EXE build compiles ~13,800 translation units.
Subsequent builds are incremental. `build_text_objs.py` skips objects that are
newer than their sources.

**`nmake dll` says missing artifacts** — run `nmake dll-init MOD=...` first.

## Clean

```bat
nmake clean
```

This removes `build/` but leaves generated data sources under `src/` in place.
They are gitignored; remove them manually if you want a pristine tree.
