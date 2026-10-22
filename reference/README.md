# Reference binaries (optional)

The default build does **not** require the game binaries. The generated
non-`.text` data sources and the reference-derived `.bin` artifacts are
committed elsewhere in the repository.

The reference binaries are only needed for optional operations:

- `nmake data` / `nmake module-data` - regenerate data sources.
- `nmake init` / `nmake dll-init` - regenerate metadata artifacts.
- `nmake exe` / `nmake dll` - run the byte diff when the file is present.
- `nmake diff` / `nmake nomask` - per-function comparison.

If you want those checks, place your own copies here:

- `MW4Mercs.exe` (PR1 build; provenance hash in `SHA256.txt`)
- `blade.dll`
- `GunDll.dll`
- `MW4Stats.dll`
- `ZlogLib.dll`
- `Language.dll`
- `MissionLang_MERCS.dll`

They are copyrighted and are **not** committed. Verify them against
[`SHA256.txt`](SHA256.txt).

`functions/` contains per-binary function inventories (metadata only) used by
the per-function diff tooling. `in_scope/gundll.txt` is the gundll in-scope VA
list used for its coverage report.
