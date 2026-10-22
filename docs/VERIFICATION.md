# Verification

The acceptance criterion is **byte identity with the canonical reference**,
not a similarity score. The default build is reference-free: it uses the
committed data sources and `.bin` artifacts. The hash gate is the
reference-free acceptance check; the byte-diff checks are optional diagnostics
that run when a reference binary is present.

## 1. Hash gate

```bat
nmake verify
```

`tools/verify_hashes.py` compares the built images to the canonical hashes in
`reference/SHA256.txt`:

| Binary | SHA-256 |
|---|---|
| `MW4Mercs.exe` | `deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f` |
| `blade.dll` | `d774c9fd2473e069c5c183333e07518392f2782b35582e2672a9479164652c6a` |
| `GunDll.dll` | `1e441bc27cf7779d893dc59d2cf52b39c28dee17172f0ae08edd183e481b2410` |
| `MW4Stats.dll` | `61de52cb1606422181e03f87e1eeb944b705d69da1ab1e564a566d588ab814d5` |
| `ZlogLib.dll` | `03af8be5d047ba02076253009523461ab25922376e2af6a3db1d523df259b295` |
| `Language.dll` | `8cacab8c2eb11ba1829ca2e57920bd8e191be8c8178dbb7e00352e65ef80c1d6` |
| `MissionLang_MERCS.dll` | `280d422c13d428bc4b4b17d7809ace628b10927047c2f5e37aadeb337f0db1b3` |

This gate does not read the reference binaries.

## 2. Full-image byte diff (optional)

```bat
nmake exe
nmake dll-all MOD=gundll
```

When `reference/MW4Mercs.exe` or the module's reference DLL is present, the
assembler compares the complete image to it with no masking. This is an
additional diagnostic and catches:

- function ordering and overlap errors,
- missing or wrong inter-function padding,
- section composition errors,
- unresolved or mis-resolved relocations,
- data-section placement errors.

If the reference file is absent, the diff is skipped and the build still
succeeds.

A successful diff prints:

```
diff: byte-identical to reference (SHA-256 ...)
```

or, for a module:

```
== <module>: byte-identical to reference (no masking, reference-free build) ==
```

## 3. Per-function checks (optional)

```bat
nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

`tools/diff.py` slices the reference function's bytes from the binary and
compares them to the compiled object's `.text` section. Four-byte relocation
sites are masked because an unlinked object still contains placeholder values
there.

`tools/verify_nomask.py` places the object at its reference VA, resolves every
relocation from the symbol name and the committed
`src\<target>\artifacts\extern_addrs.csv` table, and compares every byte. This
catches misaligned or spurious relocation sites that the masked diff hides.

Both checks need the corresponding reference binary.

## Reproducibility notes

- The EXE PE timestamp/checksum/Rich header are pinned by the committed
  `pe_headers.bin`; module headers are pinned by each module's `header.bin`.
  Neither depends on the current clock.
- The generated non-`.text` data sources and `.bin` artifacts are committed.
  The default build reads no reference content.
- `nmake data`, `nmake init`, and `nmake dll-init` are the optional
  regeneration path; they read a reference binary to rebuild the committed
  data/artifacts.
- The build is not run in GitHub Actions: the pinned MSVC6 toolchain is not
  available on hosted runners. Verification is a local Windows gate.

## Known limitations

- The hash gate is keyed to the canonical hashes. A different source tree or
  toolchain will fail it.
- The per-function diff uses `reference/functions/*.csv` for sizes. Functions
  missing from that inventory can be checked with an explicit `SIZE=...`.
- gundll intentionally has out-of-scope `.text` ranges; its coverage report
  uses `reference/in_scope/gundll.txt`. The full-image diff is still available
  when the reference DLL is present.
