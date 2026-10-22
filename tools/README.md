# Tools

## Required for the oracle build

| Tool | Purpose |
|---|---|
| `env.bat` | Set VC6/DX8.1/Python environment |
| `build_text_objs.py` | Compile all `.text` sources for the EXE or a module |
| `exe_data_assemble.py` | Generate/compile EXE non-`.text` data sections |
| `exe_image_assemble.py` | Assemble/diff `build\MW4Mercs.exe` |
| `exe_text_assemble.py` | EXE `.text` placement/relocation helpers |
| `exe_extract_externs.py` | Build the residual extern-address table |
| `data_assemble.py` | Generate/compile module data sections |
| `image_assemble.py` | Assemble/diff a module DLL |
| `text_assemble.py` | Module `.text` placement/relocation helpers |
| `pe_dump.py` | Minimal PE reader used by the assemblers |
| `diff.py` | Masked per-function diff |
| `verify_nomask.py` | No-mask per-function verification |
| `verify_hashes.py` | Full-image SHA-256 gate |

## Annotation / documentation

| Tool | Purpose |
|---|---|
| `annotate_data.py` | Annotate EXE data runs + regenerate `docs/data_annotation.md` |
| `module_annotate_data.py` | Annotate a module's data runs |
| `write_data_runs.py` | Helper for data-run emission |
| `gen_data.py` | Emit a single in-`.text` data block |
| `gen_textdata_funcs.py` | Find functions hidden in in-`.text` data blocks |
| `module_gen_textdata.py` | Module variant of the above |
| `module_classify_subsystem.py` | Module subsystem mapping (read-only) |
| `audit_doc_addresses.py` | Report doc/address disagreements |
| `text_audit.py` | Per-function disagreement audit |
| `text_layout.py`, `text_tiny.py` | Layout/size analysis helpers |
| `check_capstone.py`, `check_dups.py` | Source/coverage sanity checks |
| `scan_emit_debt.py` | Report `__emit` usage |
| `analyze_decomp.py` | Source statistics |

## Optional RE / debugging

| Tool | Purpose |
|---|---|
| `disasm.py`, `disasm_range.py` | Capstone disassembly |
| `extract_disasm.py`, `extract_raw.py` | Raw byte/disassembly extraction |
| `gaptext_disasm.py`, `gaptext_find_funcs.py` | Gap analysis |
| `find_containing.py`, `lookup_funcs.py`, `read_vtable.py` | Address/vtable lookup |
| `pe_skeleton_diff.py`, `pe_fingerprint.ps1`, `dump_rich.ps1` | PE structure analysis |
| `vbd_dump.py` | `.mw4` `#VBD` archive inspector |
| `phase3_inventory.py`, `phase3_validate_vtables.py` | Inventory/vtable audits |
| `fix_asm.py`, `fix_common_asm.py`, `fix_mismatch.py` | Source repair helpers |
| `patch_emit_stubs.py` | Replace emit stubs with reference bytes |
| `verify_large_pass.py`, `gen_bigfunc.py`, `obj_compare.py`, `diff_file.py`, `diff_all.py` | Large-function/whole-file checks |
| `link_module.py` | Baseline module link experiment (not the oracle gate) |
| `deploy_exe.py`, `run_debug.ps1`, `run_debug.cmd`, `gen_symbol_map.py` | Local deploy/debug helpers |
| `ghidra_decomp.py`, `ghidra_disasm.py`, `ghidra_decomp_vtable.py`, `ghidra_dump_phase3.py` | Optional Ghidra scripts |

## Repository policy

`audit_public_export.py` enforces the public export policy (no reference
binaries, no generated data sections, no tokens or private paths).
`publish_wiki.ps1` publishes `docs/wiki/*.md` to the GitHub wiki.

Additional analysis tooling is intentionally not included.
