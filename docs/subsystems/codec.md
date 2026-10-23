# Codec Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 2 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

LZW compression/decompression and related byte codecs.

## Role and boundary

The codec subsystem is the shared LZW primitive used by the `#VBD` archive and
by texture formats 5/6/7. It is a pure byte codec: it has no game state and no
dependency on the archive or texture objects.

The two entry points are:

| VA | Function |
|----|----------|
| `0x006FBE80` | LZW compressor (`__stdcall`, `RET 0x10`, four params) |
| `0x006FC220` | LZW decompressor (`__stdcall`, `RET 0xC`, three params: out, in, in_size) |

The compressor uses a global dictionary at `0x00849EC8` and a set of globals in
`0x008567xx`. It is pure computation with `rep stosb`/`stosw`/`lodsb`; it makes
no external calls.

The decompressor is GIF-style LZW: variable 9-12-bit codes, LSB-first, with a
dictionary of 3-byte entries at `0x849EC8`. It reads codes from the input
stream, walks the dictionary, writes the decoded run to the output buffer, and
returns the number of output bytes.

## Usage

The archive uses the compressor when writing an entry and the decompressor when
`stored_size < uncompressed_size`. The texture decoders use the same primitive
for the compressed texture formats. Because the codec is shared, a change to
the dictionary/bit order affects both archive members and textures.

## Invariants and failure modes

- The code stream is LSB-first with 9-12-bit codes; a different bit order
  produces garbage.
- The dictionary is global and reset per stream; a decoder must start from the
  initial dictionary state.
- The decompressor returns the output byte count; a short return means the
  input ended before a complete run.
- The compressor and decompressor must agree on the dictionary size and code
  width growth.
- The codec does not validate the output buffer size; the caller must provide
  enough space for the uncompressed data.
- The codec is not a general-purpose file compressor; it is tuned for the
  game's archive/texture payloads.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x006FBE80` | lzw | compressor |
| `0x006FC220` | lzw | decompressor |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| lzw | 2 | LZW compressor/decompressor used by #VBD and textures. |

## Coverage

All 2 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
