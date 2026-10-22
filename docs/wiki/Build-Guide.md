# Build guide

## Requirements

- Windows
- Microsoft Visual C++ 6.0 SP6 (`cl.exe` 12.00.8804)
- DirectX 8.1 SDK
- Python 3.8+
- Your own copy of the game

## Setup

```bat
call tools\env.bat
```

If VC6 is not auto-detected:

```bat
set VC98=C:\Program Files (x86)\Microsoft Visual Studio\VC98
set DXSDK=C:\dx81full\DXF\DXSDK
call tools\env.bat
```

Copy your reference binaries into `reference\` and verify them against
`reference/SHA256.txt`.

## Build the EXE

The order matters: `init` learns the residual extern table from compiled
objects.

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

## Build a module

```bat
nmake dll-all MOD=gundll
```

Keys: `blade`, `gundll`, `language`, `missionlang`, `mw4stats`, `zloglib`.

## Verify

```bat
nmake verify
```

## Per-function checks

```bat
nmake one SRC=src\mw4mercs\text\func_00401000.c
nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

Full details and troubleshooting:
[`docs/BUILD.md`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/docs/BUILD.md).
