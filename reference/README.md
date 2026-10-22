# Reference binaries

Place your own copies of the canonical reference binaries in this directory.
They are copyrighted and are **not** committed.

Required for the EXE oracle:

- `MW4Mercs.exe` (SafeDisc-unwrapped install-root executable)

Required for the module oracles:

- `blade.dll`
- `GunDll.dll`
- `MW4Stats.dll`
- `ZlogLib.dll`
- `Language.dll`
- `MissionLang_MERCS.dll`

Verify them against [`SHA256.txt`](SHA256.txt) before building. The build tools
read the reference only to generate data sections/artifacts and to run the
final `--diff` verification.

`functions/` contains per-binary function inventories (metadata only) used by
the per-function diff tooling. `in_scope/gundll.txt` is the gundll in-scope VA
list used for its coverage report.
