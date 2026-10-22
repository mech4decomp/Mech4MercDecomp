# autoconfig_MERCS.exe — GameOS AutoConfig / Driver-Diagnostics Tool (deep-dive)

> Reference record; not an oracle target. Analysis via the Ghidra project at
> `build\ghidra\modules\autoconfig\autoconfig_proj` (dumps in
> `build\ghidra\modules\autoconfig\dumps\`). No source tree, no byte-identity gate.

## 1. Binary facts

| | |
|---|---|
| File | `reference\autoconfig_MERCS.exe` |
| Size | 913,408 B (0xDF000) |
| SHA-256 | `844058f3ba1ad4bd4cedd81028e3f8ed71260433fd00b0b39cc83902c62f5f5c` |
| Toolchain | MSVC6, Linker 6.0, TimeDateStamp 2002-09-30 21:04:19Z |
| Machine / Subsystem | x86 (0x014C) / GUI (2) |
| ImageBase / Entry | 0x00400000 / 0x00542A6 |
| Rich header | XOR key 0x5C43216D, DanS @ 0x80 (MSVC6 tools) |
| Functions | 1,128 (Ghidra) |

Sections (4 — no SafeDisc `.txt2`):

| Section | RVA | VSize | RawSize | Notes |
|---|---|---|---|---|
| `.text`  | 0x1000   | 0x5544E | 0x56000 | GameOS core + app shell |
| `.rdata` | 0x57000  | 0xED6E  | 0xF000  | strings (huge D3D/DDERR/DIERR error tables), vtables |
| `.data`  | 0x66000  | 0x76818 | 0x2000  | mostly zero-init GameOS global state (~0x74818 BSS tail) |
| `.rsrc`  | 0xDD000  | 0x18C8  | 0x2000  | dialog resources |

Imports (10 DLLs): **MFC42 112** (dynamic MFC shell), MSVCRT 66, KERNEL32
84, USER32 63, GDI32 12, ADVAPI32 12, ole32 3, MSACM32 7, VERSION 3,
WINMM 5 — the same import set family as NFMEditor (same FASA shell base).

## 2. Purpose

This is **not** a lightweight graphics-settings editor. It is the GameOS
**"AutoConfig"** driver-diagnostics tool (version string `50.06.09.3002`,
build tag `Version 1.1 11/2/2000`):

1. **Probes the machine** — processor details, PCI card info, DirectX
   version, audio/video codec install, modem/lobby providers (`GetMachine
   Details`, `GetProcessorDetails`, `GetDirectXDetails`, `GetGameDetails`,
   `GetInstallAudioVideoCodecs`, `GetPCICardInfo`).
2. **Runs the GameOS renderer/driver test suite** — enumerates D3D devices,
   display modes, texture formats and caps, render states, gamma
   calibration, video memory (local/non-local/AGP), AGP miniport mode
   (`viaagp1.sys` detection, TURBO/NORMAL), and DirectSound devices —
   exactly the same driver probes the game's own startup autoconfig runs.
3. **Writes the results** — the selected device/options into `options.ini`
   (§4), a `VideoCard.txt` driver report, and the game registry key
   `Software\Microsoft\Microsoft Games\<game>` (§5).
4. **Reports bugs** — can submit a crash/report to the FASA "Raid" SQL
   database (`DRIVER={SQL Server};SERVER=%s;...;APP=RAID4`).

The tool is the standalone, interactive form of the game's built-in
autoconfig — the same GameOS code paths that MW4Mercs' `-noautoconfig`
switch skips.

## 3. Layout — .text regions

| Range | Size | Content |
|---|---|---|
| 0x401000–0x404xxx | ~20 KB | App shell + the `options.ini` writer (`FUN_00401b70`) |
| 0x405xxx–0x406xxx | ~10 KB | INI/section writer helpers (0x403a50, 0x404bd0, 0x4065c0, 0x4067d0) |
| 0x40xxxx–0x44xxxx | ~300 KB | **GameOS core** — the same framework as the game EXE: config/CLI (`FUN_00413c50` parses `/gosconfig`, `/gosnovideo`, `/gosnosound`), registry (`FUN_0041c9b0`), renderer state, texture manager, DirectSound mixer, input |
| 0x45xxxx+ | — | `VideoCard.txt` reporter (`FUN_00428a30`), PCI-card detail (`FUN_00441dc0`), sound-device details (`FUN_004201c0`) |
| 0x404xxx–0x456xxx | — | `.rdata`: the full D3D/DDERR/DIERR/DSERR error-string tables + render-state enums |

## 4. `options.ini` — what AutoConfig writes

The writer (`FUN_00401b70`, thiscall on a config object) emits an INI with
three sections and the game's option keys as `name=value` lines:

```
[Graphics Options]
VideoDriverIndex          DetailTexture    MultiTexture    LightMaps
Culturals                 Footsteps        MissionMusic     NoBlend
AntiAlias                 VertexLighting   SimpleLighting   MipBias
ShadowMode                screenwidth      screenheight     bitdepth
FancyWater                MovieTextures    MaxLights        Compositing
EffectLOD                 LoadRadius       AllowDecalTransfer
[Sound Options]
LowEndSound               Radius
[Special Commands]
KillGame
```

Plus the font keys `fontsmall` / `fontmedium` / `fontlarge` /
`fontlarge2` / `fontlarge3` and `server`. Values are read from the config
object's fields (`+0x240`, `+0x340`, `+0x440`, ... — per-option), converted
to text via a 0x147-typed formatter, and written through the section writer
helpers (0x4067d0 / 0x4065c0). `screenwidth`/`screenheight`/`bitdepth` are
the display-mode selection; `VideoDriverIndex` picks the D3D device.

These keys are the same option names the MW4Mercs option table consumes
(the game EXE's option table at `0x0076C918` + `-noautoconfig` interplay —
cross-reference only).

## 5. Registry / file side effects

- `Software\Microsoft\Microsoft Games\%s` (0x45959C, written from
  `FUN_0041c9b0`) — the per-game config key; `%s` is the game/product name.
- `Software\Microsoft\Multimedia\Sound Mapper\` (0x45AD00) + `\DirectSound\
  Mixer Defaults` / `Device Presence` — sound device selection.
- `Software\Microsoft\Windows Messaging Subsystem` (0x45CEA8) and
  `Config Manager\Enum\` (0x61AC0, hardware key `DeviceDesc`,
  `HardWareKey`, `DriverDate`, `videoram` from `FUN_00441dc0`) — PCI/device
  enumeration.
- `VideoCard.txt` (0x45BD04, written by `FUN_00428a30`) — a driver report
  (driver file/version/date/size, video memory, renderer caps).
- `Screen.bmp` (0x5D088) — screen-capture output (GameOS `@Kscreen%04d.%s`
  screenshot naming).

## 6. Per-card compatibility flags

`.rdata` holds the **GameOS per-card workaround registry** — the same
compatibility knobs the game applies for broken drivers:

`SceneRenderer`, `NoMultitexture`, `NoAlphaTest`, `NoStretchTexture`,
`RenderEqualZ`, `BrokenAlphaTest`, `ForceSquareTextures`,
`LimitTextureSize`, `Limit500VidTextures`, `AllowLowMemoryCard`,
`DisableTextureDeletes`, `SlowDisplayModeChange`, `TextureOffset`,
`LowEndCard`.

These are the auto-selected renderer/tuning flags; AutoConfig tests the
device and enables the appropriate ones before writing the option set.

## 7. Key functions

| VA | Role |
|---|---|
| 0x00401B70 | `options.ini` writer (sections + all option keys) |
| 0x00403A50 / 0x00404BD0 | INI open / section begin |
| 0x004065C0 / 0x004067D0 | option value writer helpers |
| 0x00413C50 | GameOS CLI/config init (`/gosconfig`, `/gosnovideo`, `/gosnosound`) |
| 0x0041C9B0 | game registry key reader/writer (`Microsoft Games\%s`) |
| 0x00428A30 | `VideoCard.txt` reporter |
| 0x00441DC0 | PCI/device registry enumeration (`DeviceDesc`, `HardWareKey`) |
| 0x004201C0 | sound-device details (`PrimaryBuffers`, `DSBCAPS_*`) |
| 0x00425940 | version-string handler (`Version 1.1 11/2/2000`) |
| 0x0041F070 | DirectX-details failure reporter (`Driver version/date/size`) |
| 0x004011B0 | app window title (`AutoConfig`, `AutoConfig Version %s`) |

## 8. Notable strings

`AutoConfig` (0x466050) · `\Tools\AutoConfig` (0x46605C) ·
`AutoConfig Version %s` (0x466458) · `50.06.09.3002` (0x466448) ·
`Version 1.1 11/2/2000` (0x66A24) · `options.ini` (0x466470) ·
`Graphics Options` / `Sound Options` / `Special Commands` (0x46647C/90/A0) ·
`KillGame` (0x4664B4) · all option keys (0x4664C0–0x466724, §4) ·
`VideoCard.txt` (0x45BD04) · `Screen.bmp` (0x45D088) ·
`@Kscreen%04d.%s` (0x45903C) · `Software\Microsoft\Microsoft Games\%s`
(0x45959C) · `Software\Microsoft\Multimedia\Sound Mapper\` (0x45AD00) ·
`Config Manager\Enum` (0x61AD8) · `viaagp1.sys` (0x6192C) ·
`- AGP miniport driver in TURBO/NORMAL mode` (0x61828/50) ·
`No software rasterizer available` (0x4592C8) ·
`DRIVER={SQL Server};...APP=RAID4` (0x63AF4) · `/gosconfig` (0x458E34) ·
`/gosnovideo` (0x458EA0) · `/gosnosound` (0x458EAC) ·
`PLACEHOLDER DEVICE` (0x66434) · `GeForce` (0x667BC) ·
`%ix%ix%i` (0x667B0) · `No Rendering Devices Found` (0x66768).

## 9. Notes

- The tool shares its GameOS core with the game EXE and the other editor
  tools (identical CLI switches, registry paths, D3D error tables) — it is
  the best standalone reference for **what the game's startup autoconfig
  does** and **which `options.ini` keys the game reads**.
- `.data` VSize (0x76818) is ~95% BSS — the GameOS renderer/sound/input
  global state, mirroring the game's own globals; no layout captured here.
- No `.txt2`/SafeDisc section (unlike MW4Ed2).
