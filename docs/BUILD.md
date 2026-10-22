# Build guide

## Requirements

- Windows 10 or 11. The build tools are 32-bit and run on 64-bit Windows.
- Microsoft Visual C++ 6.0 with SP6: `cl.exe` 12.00.8804, `link.exe`
  6.00.8447, and the matching `nmake.exe`. SP6 matters; earlier VC6 builds do
  not produce the oracle's instruction encoding.
- DirectX 8.1 SDK headers and libraries.
- Python 3.8+ on `PATH`.

The build uses `nmake`. Run commands from a `cmd.exe` prompt in the repository
root.

## Provenance

The oracle reproduces the official **MechWarrior 4: Mercenaries Point Release
1 (PR1)** build:

| Item | Value |
|---|---|
| Release | Point Release 1 (PR1), the final official point release |
| EXE file version | `50.07.01.2105` |
| EXE size | 3,915,776 bytes |
| EXE SHA-256 | `deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f` |

This is provenance, not a build prerequisite. The reference-derived non-`.text`
data sources and the committed `.bin` artifacts are part of the repository, so
the default build does **not** need the original EXE or DLLs. The hashes remain
in `reference/SHA256.txt` for optional regeneration and verification.

The baseline is the original PR1 engine, not a community build such as MekTek
3.1. See [game versioning](GAME_VERSIONING.md) for how the EXE uses
`50.07.01.2105` in multiplayer and saved data.

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

## 2. Reference binaries (optional)

The default build does not read the reference binaries. The repository
contains the generated non-`.text` data sources and the reference-derived
`.bin` artifacts, so you can build without owning or supplying the game.

The reference binaries are needed only for these optional operations:

- `nmake data` / `nmake module-data` - regenerate data sources from a reference.
- `nmake init` / `nmake dll-init` - regenerate metadata artifacts.
- `nmake exe` / `nmake dll` - run the final byte diff (skipped if the
  reference file is absent).
- `nmake diff` / `nmake nomask` - per-function comparison.

If you want those checks, copy your own files into `reference/` and verify them
against `reference/SHA256.txt` (for example with
`certutil -hashfile reference\MW4Mercs.exe SHA256`). Reference binaries remain
ignored by git.

## 3. Build the EXE oracle

```bat
nmake objs
nmake data-objs
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
| `nmake data-objs` | `build\obj\data\*.obj` from the committed `src\mw4mercs\{rdata,data,rsrc,txt2}\data_0x*.c` |
| `nmake exe` | `build\MW4Mercs.exe`; byte diff only if `reference\MW4Mercs.exe` is present |

`nmake data` and `nmake init` are the optional regeneration path. They read the
reference to rebuild the committed data sources/artifacts; you do not need them
for a normal build.

## 4. Build a module oracle

```bat
nmake dll-all MOD=gundll
```

Valid module keys:

```
blade  gundll  language  missionlang  mw4stats  zloglib
```

The steps are:

```bat
nmake module-objs MOD=gundll
nmake module-data-objs MOD=gundll
nmake dll MOD=gundll
```

`nmake dll` assembles `build\modules\<key>\dll\<name>.dll` and byte-diffs it
when the corresponding reference DLL is present. The module's `header.bin`,
`rsrc.bin`, `reloc.bin`, `text_pads.bin`, `trailer.bin`, and `extern_addrs.csv`
are committed under `src\<target>\artifacts\`. `nmake dll-init` is the
optional path that regenerates them from a reference DLL.

## 5. Verify

```bat
nmake verify
```

Expected hashes are in `reference/SHA256.txt`. The command checks the EXE and
all six built DLLs, so build every module first if you want a full pass.

## Per-function workflow (optional)

These checks compare one source file against a reference binary, so they need
the corresponding file under `reference/`:

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
tools, the SafeDisc-era game files, or the reference executable. Add a local
exclusion for the build and game directories if you trust the files; do not
disable real-time protection globally.

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

**`nmake dll` says missing artifacts** — the committed artifact is missing;
restore it from the repository, or run `nmake dll-init MOD=...` with a
reference DLL.

## Clean

```bat
nmake clean
```

This removes `build/` but leaves the committed data sources and artifacts under
`src/` in place.
