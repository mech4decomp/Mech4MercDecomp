# Tools

## Build and verification

| Tool | Purpose |
|---|---|
| `env.bat` | Set the VC6/DX8.1/Python environment |
| `build_text_objs.py` | Compile `.text` sources for the EXE or a module |
| `exe_data_assemble.py` | Compile committed EXE non-`.text` data; `--compile` is reference-free |
| `exe_text_assemble.py` | EXE `.text` placement and relocation helpers |
| `exe_extract_externs.py` | Build the residual extern-address table |
| `exe_image_assemble.py` | Assemble and diff `build\MW4Mercs.exe` |
| `data_assemble.py` | Compile committed module data; `--compile` is reference-free |
| `text_assemble.py` | Module `.text` placement and relocation helpers |
| `image_assemble.py` | Assemble and diff a module DLL |
| `pe_dump.py` | Minimal PE reader used by the assemblers |
| `diff.py` | Masked per-function diff |
| `verify_nomask.py` | No-mask per-function verification |
| `verify_hashes.py` | Full-image SHA-256 gate |
| `compile_one.bat` | Compile one source file with the pinned flags |

## Annotation and provenance

| Tool | Purpose |
|---|---|
| `annotate_data.py` | Annotate EXE data runs and regenerate the EXE index |
| `module_annotate_data.py` | Annotate a module's data runs |
| `gen_data.py` | Emit an in-`.text` data block (provenance for committed tables) |
| `gen_bigfunc.py` | Emit a large function transcription (provenance) |

## Optional local helpers

| Tool | Purpose |
|---|---|
| `deploy_exe.py` | Copy the built EXE to a game install and hash-check it |
| `gen_symbol_map.py` | Emit an x64dbg `labelset` from the committed inventory |
| `run_debug.ps1` | Launch the game windowed and attach x32dbg |
| `publish_docs.ps1` | Build the MkDocs site and publish it to `gh-pages` |

## Repository policy

`audit_public_export.py` enforces the public export policy (no reference
binaries, no build trees, no tokens or private paths).
The documentation site is built from `docs/` with MkDocs; see `mkdocs.yml`.

The default build and verification pipeline uses only the committed sources,
data sections, artifacts, and function inventories. Reference binaries are
optional and are needed only for regeneration or byte diffs. No external
analysis project is required.
