# Build guide

## Requirements

- Windows (the pinned toolchain is 32-bit MSVC6).
- Microsoft Visual C++ 6.0 with SP6 — `cl.exe` 12.00.8804.
- DirectX 8.1 SDK.
- Python 3.8+ on `PATH`.
- A legitimate copy of MechWarrior 4: Mercenaries.

The build uses `nmake`. Run commands from a `cmd.exe` prompt in the repository
root.

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
