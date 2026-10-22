# Contributing

This is the frozen oracle. Documentation corrections are welcome; code changes
are not.

## Accept

- Corrections to docs, comments, and annotations.
- Build-guide improvements and troubleshooting notes.
- New explanatory docs with evidence.

## Do not submit

- Changes to `src/`, `include/`, or build tooling that alter output.
- Game binaries, assets, extracted data sections, or other copyrighted
  material.
- Personal information, tokens, or absolute private paths.

## Reporting a documentation error

Include:

1. Target binary and SHA-256.
2. Function VA and source file.
3. The reference bytes/disassembly that contradict the claim.
4. A `nmake diff` or `nmake nomask` result if applicable.

See the repository's `CONTRIBUTING.md` for the full policy.
