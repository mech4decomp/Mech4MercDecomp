# Module notes

Concise oracle summaries for the six code-bearing game DLLs. Each module is
built and diffed against its own reference binary.

## `blade.dll`

A DirectDraw proxy DLL. It exports the DirectDraw entry points and forwards to
the real `ddraw.dll`, while embedding a custom software rasterizer and a large
state-machine facade. The oracle source is organized by the subsystem taxonomy
`wrapper`, `facade`, `caps`, `render`, `accessors`, `stubs`, `exports`, `crt`.
733 function sources.

## `GunDll.dll`

A COM in-proc server for the game's gun/lobby account client. It includes COM
registration, registry/string helpers, a hash-list object, a base64 codec, and
an HTTP client using WinINet. The oracle includes in-scope game functions plus
transcribed CRT/SEH ranges; its coverage report uses
`reference/in_scope/gundll.txt`. 3,175 function sources.

## `MW4Stats.dll`

The game's stats API. It records match/player statistics, builds XML upload
bodies, and performs the Gun authentication/upload flow. Subsystems:
`support`, `recording`, `upload`, `gunauth`, `crt`. 1,085 function sources.

## `ZlogLib.dll`

The logging API (`GetngLogAPI`). It handles log lifecycle, file rotation,
formatted emission, and small MD5/memory helpers. Subsystems: `lifecycle`,
`emit`, `api`, `md5`, `mem`, `crt`. 31 function sources.

## `Language.dll`

A localizable string-table loader. It reads language resources and exposes
lookup/arena/error helpers, with a statically linked MSVCRT. Subsystems: `crt`,
`string`, `codepage`, `arena`, `error`, `locks`. 100 function sources.

## `MissionLang_MERCS.dll`

The mission/string-table loader, structurally similar to `Language.dll`.
Subsystems: `crt`, `string`, `codepage`, `arena`, `error`, `locks`. 67 function
sources.

## `ScriptStrings_MERCS.dll`

A pure resource table: `.rsrc` and `.reloc` only, no code. It is not an oracle
build target. The reference hash is listed in `reference/SHA256.txt`.

## Related documentation

- `docs/MASTER_INDEX.md` links the per-VA subsystem index for each binary.
- `docs/module_data_annotation/` lists the data-run annotations.
- `docs/GAME_VERSIONING.md` covers the EXE's version identity and multiplayer
  version gates.
