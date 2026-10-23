# Config Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 13 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

options.ini/config-file framework, option registry, and persistence.

## Role and boundary

The config subsystem owns the game's text configuration file, `options.ini`,
and the generic INI tree behind it. It has two layers:

- the options layer at `0x00406ED7`-`0x00407BD8`, which loads/saves the game's
  settings and binds named keys to option globals;
- the generic INI framework at `0x0040DCA0`-`0x0040E4A0`, which parses a file
  into a section/key tree, looks up or creates entries, and serializes the tree
  back to disk.

The file lives in the game directory. The game rewrites it from the in-memory
tree when an option changes, so a value edited by hand is only persistent until
the next automatic save.

## File format

`options.ini` is a conventional sectioned text file:

```ini
[graphics options]
lod=-1000000
...
[sound options]
...
[special commands]
...
[server]
allowed=...
```

The observed game-written file has seven sections: graphics options, sound
options, special commands, server, joystick, MSR spectator, and network
options. Values are typed by the option registry:

| Type | Encoding |
|------|----------|
| bool | `true` / `false` |
| int | decimal |
| float | `%.6f` |
| hex | lowercase hexadecimal, no `0x` prefix |
| text | raw string |

The parser reads the last duplicate of a key; the serializer emits every
section in tree order. Line endings are CRLF. Comments and blank lines are not
semantic to the loader, though the file writer preserves a stable layout.

## Generic INI tree

`FUN_0040DCA0` is the config-file load constructor. Its arguments are the
filename, a mode, and a flag; it stores the path at `[this+0]` and the mode at
`[this+8]`. The loader calls `FUN_006FC4D0` to read the file and
`FUN_0041DEE0` to build the tree through `FUN_00412BF0`. Mode `1` is the
"required" mode: an empty tree asserts with `"%s is missing or empty!"`.

The tree operations are:

| VA | Operation |
|----|-----------|
| `0x0040ECC0` | look up a named entry/section |
| `0x0040EDA0` | look up or create a section |
| `0x00411A10` | find a key node |
| `0x00411B00` | create a key node |
| `0x00411C40` | set a key's string value (`__thiscall`, `RET 8`) |
| `0x00411D60` | bind a tree key to a global variable |
| `0x00411DC0` | set a value (used by the LOD teardown write-back) |

`FUN_0040E4A0` saves the tree. It checks the dirty flag at `[this+4]` and the
path at `[this+0]`, opens a writer with `FUN_0041DE80`, serializes every
section through `FUN_0040E450` and `FUN_00411940`, closes with
`FUN_0041DEC0`, and clears the dirty flag.

## Option binding and the LOD path

The options layer registers and binds named keys. `FUN_00411D60` is the live
binding path: it associates a section/key with a global so that a loaded value
propagates into game state. The LOD teardown `FUN_004BC4A0` writes the global
back through `FUN_00411DC0`.

The LOD registration at `FUN_004BC290` also calls `FUN_0070F090` to expose four
gosScript variables. `FUN_0070F090` is a `RET 0x14` no-op, so those four
getter/setter pairs are dead code: the gosScript variables are never created,
and the game has no in-session LOD control. The live value comes from
`options.ini` or `autoconfig_MERCS.exe`.

### LOD bias model

The renderer's LOD bias is applied as:

```text
d2_biased = dx*dx + dy*dy + dz*dz + lod
```

A LOD band matches while `lo <= d2_biased <= hi`. A positive bias makes the
object switch to a coarser LOD sooner; a negative bias keeps it finer for
longer. A very negative value such as `lod=-1000000` clamps everything nearer
than `sqrt(|bias|)` to `d2 = 0`, selecting the finest band. It does not extend
the object cull radius.

The game's in-session LOD checkboxes write `0`, `625`, `2500`, and `10000`.
`autoconfig_MERCS.exe` writes Low `2500`, Medium `900`, High `400`, and
Ultra High `-25000` through its switch table at `0x00402110`.

The bias feeds the scan/fade and sub-object variant paths, including
`0x004B40B0`/`0x004B4230`, `0x004B5950`/`0x004B5B80`, and
`0x004B0BB0`/`0x004B1590`/`0x004B252B`/`0x004B49CB`.

## options.ini call sites

The string `"options.ini"` appears at `0x0076C6B4` and `0x0077826C`. Load/save
calls are spread across the options function `FUN_00406ED7` (the large
`0x00406ED7`-`0x00407BD8` block) and the network, render, input, and session
paths. Representative call sites include `0x00401E03`/`0x00401E27`,
`0x00402DAB`/`0x00402E44`, `0x00403046`/`0x004037FE`, `0x004046E0`/
`0x0040478C`, `0x004066A1`/`0x0040671D`, `0x00406F7F`/`0x00406FC7`,
`0x00407586`, `0x0040793D`/`0x004079CE`, `0x00407A08`/`0x00407B09`,
`0x0050A639`/`0x0050A695`, `0x0050B5CF`, `0x0050C9DD`/`0x0050CB13`,
`0x005264A3`, `0x005265DA`, `0x00536857`/`0x005368B9`, `0x0053FB63`,
`0x005449AE`, and `0x0061A36E`.

The load constructor's third argument selects the required mode. `options.ini`
is loaded with mode `1` at several sites, including `0x00401D10` and
`0x00406ED7`.

## Option names and consumers

Known option names and sections include:

| Name / section | Consumer |
|----------------|----------|
| `LOD` / `Graphics Options` | LOD bias and shape selection |
| `MaxLights` | render lighting |
| `EffectLOD` | effect detail |
| `Compositing` | render compositing |
| `Sound Options` | audio settings |
| `Network Options` | connection defaults |
| `DefaultConnection` | network selection |
| `allowzoom` | zoom eligibility |
| `[server] allowed*` | server-side masks (hex) |

The option registry is the schema the UI and the file writer share. A key that
is not in the registry is still preserved as raw text when the file is
rewritten, but it has no typed normalization or game binding.

## Invariants and failure modes

- The file is rewritten from the in-memory tree; manual edits do not survive an
  automatic save.
- The loader reads the last duplicate key in a section.
- Mode `1` requires a non-empty tree; an empty file asserts rather than silently
  loading defaults.
- The dirty flag and path must both be set for a save to write anything.
- The LOD gosScript registration is dead code; do not treat the four
  getter/setter pairs as a live control path.
- LOD bias changes LOD selection, not the cull radius.
- Hex values are written lowercase without a `0x` prefix.
- Float values are written with six decimal places.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x0040DCA0` | ini | config-file load constructor |
| `0x0040E4A0` | ini | save the dirty tree |
| `0x0040E450` | ini | serialize one section |
| `0x0040ECC0` | ini | look up a named entry |
| `0x0040EDA0` | ini | look up or create a section |
| `0x00411A10` | ini | find a key node |
| `0x00411B00` | ini | create a key node |
| `0x00411C40` | ini | set a key value |
| `0x00411D60` | options | bind a key to a global |
| `0x00411DC0` | options | write a value back |
| `0x00406ED7` | options | options.ini registry/load/save |
| `0x004BC290` | options | LOD registration (dead gos path) |
| `0x004BC4A0` | options | LOD teardown write-back |
| `0x006FC4D0` | ini | raw file read |
| `0x0041DEE0` | ini | parse into the tree |
| `0x0041DE80` | ini | open the writer |
| `0x0041DEC0` | ini | close the writer |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| options | 8 | options.ini load/save, option registry, and LOD bias persistence. |
| ini | 5 | Generic config-file tree, section/key lookup, and serialization. |

## Coverage

All 13 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
