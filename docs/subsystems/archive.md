# Archive Subsystem

> **Binary:** `MW4Mercs.exe` | **Classified VAs:** 285 | **Exhaustive index:** [MW4Mercs.exe](../va_index/MW4Mercs_exe.md)

`#VBD` archives, streams, file I/O, and path handling.

## Role and boundary

The archive layer owns the game's `#VBD` container format, its directory and
hash chains, lazy member fetch/decompression, the stream interface, and the
file/path handling around archives. It is used by gameplay, render, UI, and the
database for content loading.

The archive is a directory plus member blobs:

- the header identifies the file as `#VBD` (signature `0x44425623`) and stores
  the format version, maximum entry count, directory offset, and two keys;
- the directory is a serialized list of entries, each with a file time,
  uncompressed size, stored size, data offset, entry index, and name;
- member data is stored either uncompressed or LZW-compressed, depending on
  whether compression was favorable.

## Header and directory

The empty-archive initializer `FUN_00413E90` sets:

| Offset | Meaning |
|--------|---------|
| `+0x00` | header pointer |
| `+0x04` | signature `0x44425623` (`#VBD`) |
| `+0x08` | version (4) |
| `+0x0C` | maximum entries |
| `+0x10` | file/directory base |
| `+0x14` | key 1 |
| `+0x16` | key 2 |

It also zeroes two hash tables at `+0x18` and `+0x100C`; each is 1021 dwords
(0x3FD buckets). The bucket count is fixed.

The reader opener `FUN_00413EE0` validates the signature and version (version
must be `<= 4`), reads the directory blob, initializes a stream over it, and
calls the directory populator `FUN_00414110`. If validation fails or the file
has fewer entries than requested, it creates an empty archive context instead.

The writer opener `FUN_00414040` is the twin for a pre-initialized stream. It
reads the same header fields and calls the populator with absolute-offset
computation enabled; it does not allocate a directory buffer or perform file
I/O.

`FUN_00414110` reads each directory entry, allocates an internal entry record,
populates it with `FUN_00413480`, and inserts it into both hash tables:

- table 1 at `+0x18`, indexed by `entry_index % 1021`, chained through
  `entry->field_0C`;
- table 2 at `+0x100C`, indexed by `name_hash % 1021`, chained through
  `entry->field_10`.

The name hash `FUN_00413500` is a modified ELF hash: it folds the low nibble of
each character, XOR-folds the high nibble into the low nibble when set, and
forces bit 31 in the result. The fold makes ASCII letters case-insensitive.
Name lookup compares the hash first, then uses `_stricmp` for collisions.

## Lazy member fetch

`FUN_00413830` is the member-fetch routine. For a file-backed archive:

1. Seek to `header->field_10 + entry->data_off`.
2. Allocate `entry->stored_size` bytes.
3. Read the stored bytes into the buffer.
4. Store the buffer in `entry->field_08` and set `entry->field_26 = 1`.

For an in-memory archive, it computes
`entry->field_08 = header->field_10 + context->dir_file_offset + entry->data_off`
instead.

If `entry->stored_size < entry->uncompressed_size`, the member is compressed:
the loader allocates an `uncompressed_size` buffer and calls the LZW
decompressor `FUN_006FC220` to produce the final bytes. The raw reader
`FUN_004138D0` performs the same seek/read but never decompresses; it is used
by the writer serializer.

The fetch dispatchers all share this loader:

- `FUN_00413BE0` - find by entry index in table 1, then load if requested;
- `FUN_00413C70` - find by name in table 2, then load if requested;
- `FUN_00413D20` - iterator fetch; always loads when the guard conditions are
  met and has no load-flag parameter.

The iterator advance helpers `FUN_00413D60`/`FUN_00413D80` load the current
entry and copy `entry->field_08` into the iterator's data slot.

## Writer path

`FUN_00413540` serializes one entry. It calls the LZW compressor
`FUN_006FBE80` when the compression ratio is favorable, then writes the entry
metadata and member bytes to the stream.

`FUN_00414260` serializes the whole archive:

1. Walk all 0x3FD buckets and sum the serialized size
   (`name_len + 0x17` per entry plus `stored_size`).
2. Build a stream with `FUN_0041EE70`/`FUN_0041E690`.
3. Write the header fields through the stream's vtable write method.
4. Iterate entries by index (`FUN_00413BE0`) and serialize each with
   `FUN_00413540`.
5. Finalize with `FUN_004149C0` and release the streams.

`FUN_004143D0` is the writer variant. `FUN_00414970`/`FUN_00414990`/
`FUN_004149A0` are flush-on-demand helpers.

## Open, close, and naming

`FUN_004145E0` is the primary file-backed opener. It stores the archive name
with refcounting (`FUN_00412780`), resolves the file path (including the CD
path from the registry), checks existence, and opens the file. `FUN_00414820`
is the stream-based opener: it stores the name, initializes the global
database object on first use, registers the archive name, and opens from the
existing stream.

`FUN_004148F0` closes an archive:

1. Free all directory entries and the header.
2. Close the file handle, or the alternate stream object.
3. Decrement the archive-name refcount.
4. Decrement the global archive refcount; at zero, release the global
   database object.
5. Release the name buffer when its refcount reaches zero.

## Streams and path handling

The `stream` detail is the stream vtable used by the archive and database
layers: read/write, seek, advance/retreat, and bit-buffer variants. The
stream object is initialized by `FUN_0041E690`; read/write are `FUN_0041E720`/
`FUN_0041E950`; bit operations are `FUN_0041EA60`/`FUN_0041EAE0` and
`FUN_0041EB40`/`FUN_0041EC50`.

Path handling lives in the archive opener and its helpers: archive name
storage, `_mbsrchr` filename extraction, CD-path lookup, and the path
normalization helpers around `FUN_00412570`/`FUN_004125E0`.

## Invariants and failure modes

- The `#VBD` signature is `0x44425623`; a mismatched signature is not a valid
  archive.
- The format version must be `<= 4`; later versions are not accepted by the
  reader.
- The directory hash tables have 1021 buckets; the writer and reader must
  agree on the bucket count and hash function.
- The name hash is case-insensitive by construction; lookup still resolves
  collisions with `_stricmp`.
- A member is decompressed only when `stored_size < uncompressed_size`; equal
  sizes mean the member is stored raw.
- `entry->data_off == -1` means the entry has no data and must not be loaded.
- Lazy fetch caches the buffer in `entry->field_08` and marks it with
  `field_26`; a second fetch reuses the cached buffer.
- The in-memory archive path computes offsets from the header base plus the
  directory offset; it does not perform file I/O.
- The writer's size pass and write pass must use the same bucket count and
  entry order, or the directory offsets are wrong.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| `0x00413E90` | vbd | empty-archive initializer |
| `0x00413EE0` | vbd | reader opener |
| `0x00414040` | vbd | writer opener |
| `0x00414110` | vbd | directory populator |
| `0x00413480` | vbd | per-entry directory parser |
| `0x00413500` | vbd | entry-name hash |
| `0x00413830` | vbd | lazy member fetch/decompress |
| `0x004138D0` | vbd | raw member read |
| `0x00413BE0` | vbd | fetch by index |
| `0x00413C70` | vbd | fetch by name |
| `0x00413D20` | vbd | iterator fetch |
| `0x00413D60`/`0x00413D80` | vbd | iterator advance/load |
| `0x00413540` | vbd | entry serializer |
| `0x00414260` | vbd | archive writer |
| `0x004143D0` | vbd | archive writer variant |
| `0x004145E0` | vbd | file-backed archive open |
| `0x00414820` | stream | archive open from stream |
| `0x004148F0` | vbd | archive close |
| `0x00414A70` | vbd | entry data hash/digest |
| `0x006FBE80` | codec | LZW compressor |
| `0x006FC220` | codec | LZW decompressor |
| `0x0041E690` | stream | stream initializer |
| `0x0041E720` | stream | stream read |
| `0x0041E950` | stream | stream write |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| vbd | 253 | #VBD archive directory, entry hashing, and member fetch. |
| stream | 30 | Stream vtable and memory/file stream implementations. |
| (general) | 2 | Archive helpers outside the #VBD/stream details. |

## Coverage

All 285 classified VAs are in [the MW4Mercs.exe index](../va_index/MW4Mercs_exe.md), which lists role, size, source, and evidence.
