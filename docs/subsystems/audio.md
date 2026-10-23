# Audio Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 8 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

Sound, music, and audio-device delivery.

## Role and boundary

The audio surface in the EXE is small. Most sound content is data-driven, and
the device delivery goes through the platform layer (DirectSound and the
Windows audio APIs). The EXE-side code owns the sound-channel objects, their
per-frame update, and the game's audio init/shutdown hooks.

The module-level audio path is not a separate DLL; it is part of the EXE and is
called from gameplay, UI, and mission code.

## Sound channels

`FUN_00505A40` is the sound-channel object constructor/initializer. The channel
object owns a five-slot vtable array at `+0x24`-`+0x30`; the small helpers in
the `0x505D5F` block iterate that array and call vtable `+0x0C` on each
non-null slot. This is the per-channel service/update interface.

`FUN_00505E10` is the sound-channel update. It performs panning and
spatialization with FPU comparisons and calls the audio helpers at
`FUN_00722660`, `FUN_007225B0`, and `FUN_00505D30`. The channel's position and
listener state determine the pan/volume applied to the voice.

`FUN_00559810` and `FUN_00559960` are object methods that check flags and
dispatch sound-related calls. They are mirror implementations with different
field offsets; one is used by the normal object path and the other by its
variant.

## Audio init and shutdown

The game init `FUN_00532970` initializes audio along with the decal system,
window/display settings, and global state. The cleanup `FUN_005309A0` stops
audio, releases resources, frees allocations, and resets global state.

These functions are the EXE-side lifecycle hooks. They do not own the
DirectSound device itself; the device and buffer creation are handled by the
platform/audio delivery layer.

## Speaker configuration

`FUN_00752680` builds a DirectSound speaker-configuration string into the
`0x008B9150` buffer. It selects the `DSSPEAKER_*` name strings from the bit
flags in its argument and returns the buffer address. The result is used when
describing or selecting the speaker layout.

## Invariants and failure modes

- The channel object's five vtable slots are independent; a null slot is
  skipped, not treated as an error.
- The channel update expects a valid listener/position state; an uninitialized
  channel produces invalid pan/spatialization values.
- The audio init path must run before any channel update; the cleanup path
  stops audio before releasing the channel objects.
- Speaker flags are a bitmask; an unknown bit does not select a valid
  `DSSPEAKER_*` name.
- The EXE does not own the device buffers; device loss/restore is a platform
  concern, not a sound-channel concern.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x00505A40` | channel | sound-channel constructor/initializer |
| `0x00505D5F` | channel | five-slot vtable iteration/query block |
| `0x00505E10` | channel | panning/spatialization update |
| `0x005309A0` | lifecycle | game cleanup/shutdown (stops audio) |
| `0x00532970` | lifecycle | game init/setup (starts audio) |
| `0x00559810` | channel | sound-related object method |
| `0x00559960` | channel | sound-related object method (mirror) |
| `0x00752680` | device | DirectSound speaker-config string |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| (general) | 8 | Sound/music entry points that remain in the EXE. |

## Coverage

All 8 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
