# Agent / contributor guide

## Scope

This repository is the **byte-identical oracle**. The sources are complete and
frozen. Do not modify `src/`, `include/`, or the build tooling to change
behavior. Documentation corrections are welcome.

## Canonical targets

| Binary | SHA-256 |
|---|---|
| `MW4Mercs.exe` | `deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f` |
| `blade.dll` | `d774c9fd2473e069c5c183333e07518392f2782b35582e2672a9479164652c6a` |
| `GunDll.dll` | `1e441bc27cf7779d893dc59d2cf52b39c28dee17172f0ae08edd183e481b2410` |
| `MW4Stats.dll` | `61de52cb1606422181e03f87e1eeb944b705d69da1ab1e564a566d588ab814d5` |
| `ZlogLib.dll` | `03af8be5d047ba02076253009523461ab25922376e2af6a3db1d523df259b295` |
| `Language.dll` | `8cacab8c2eb11ba1829ca2e57920bd8e191be8c8178dbb7e00352e65ef80c1d6` |
| `MissionLang_MERCS.dll` | `280d422c13d428bc4b4b17d7809ace628b10927047c2f5e37aadeb337f0db1b3` |

The reference binaries are optional and are never committed. The default build
uses the committed data sources and `.bin` artifacts.

## Build order

```bat
call tools\env.bat
nmake objs      :: compile .text sources
nmake data-objs :: compile committed non-.text data
nmake exe       :: assemble (byte-diff if a reference is present)
```

Modules: `nmake dll-all MOD=gundll` (and the other module keys).
`nmake data`, `nmake init`, and `nmake dll-init` are the optional regeneration
path and need a reference binary.

## Layout

- `src/<target>/text/` — `func_<VA>.c` and in-`.text` `data_<VA>.c`
- `src/<target>/artifacts/` — committed CSV metadata and `.bin` build artifacts
- `include/mw4/` — shared format headers
- `tools/` — build, diff, annotation, and optional RE utilities
- `docs/` — public documentation and static indexes
- `reference/` — hashes and metadata; user-supplied binaries are ignored

Generated data sections (`src/*/rdata`, `src/*/data`, `src/*/rsrc`,
`src/*/txt2`) are committed so the default build is reference-free.

## Verification

- `nmake verify` — hash gate for all built images (reference-free).
- `nmake diff FUNC=... OBJNAME=...` — masked per-function diff (optional).
- `nmake nomask FUNC=... OBJNAME=...` — full no-mask check (optional).
- `python tools/audit_public_export.py` — public-repo policy audit.

## Rules

- Never commit reference binaries.
- Never add personal information, tokens, or absolute local paths.
- Keep docs factual and evidence-based (binary, VA, section, hash).
- Do not change oracle sources without maintainer approval and a byte gate.
