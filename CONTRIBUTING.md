# Contributing

This repository is the frozen oracle. The recompiled sources are complete and
byte-identical; changing them would break that guarantee.
**Documentation contributions are welcome. Code contributions are not.**

## What we accept

- Corrections to documentation, comments, and annotations.
- New explanatory docs that help readers understand the oracle source.
- Build-guide improvements and troubleshooting notes.
- Verification evidence for a documented claim (address, disassembly, hash).

## What we do not accept

- Changes to `src/`, `include/`, `Makefile`, or build tooling that alter the
  oracle output.
- Game binaries, game assets, extracted data sections, or other copyrighted
  material.
- Personal information, tokens, or private paths.

If you believe a source transcription is wrong, open an issue first. Include:

1. The target binary and its SHA-256 (see `reference/SHA256.txt`).
2. The function VA and the exact source file.
3. The reference bytes and disassembly that contradict the source.
4. The smallest reproducible evidence (a `nmake diff` / `nmake nomask` result
   is ideal).

## Documentation style

- Use Markdown with relative links.
- Prefer repository-relative paths (`src/mw4mercs/text/...`), not absolute
  Windows paths.
- Cite evidence: binary, VA, section, and hash.
- Do not paste large blocks of original game data or assets. Short
  disassembly/hex excerpts for evidence are fine.
- Keep the tone factual; this is a reference project, not a showcase.

## Licensing of contributions

By contributing documentation you agree that it may be published under the
documentation license in [`LICENSE`](LICENSE) (CC BY 4.0). You retain copyright
in your contribution. Do not contribute material you do not have the right to
publish.

## Documentation site

The site is built from `docs/` with MkDocs Material. To preview changes:

```text
python -m pip install -r requirements.txt
mkdocs serve
```

The GitHub Actions workflow in `.github/workflows/pages.yml` rebuilds and
publishes the site on every push to `main`.

## Pull requests

- Keep changes focused on documentation.
- Explain what was wrong and how you verified the correction.
- Do not include generated build outputs, reference binaries, or data dumps.
- A maintainer will review for accuracy and scope.
