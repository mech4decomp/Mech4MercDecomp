# Build the MkDocs site and publish it to the gh-pages branch.
# Requires: python -m pip install -r requirements.txt

$ErrorActionPreference = "Stop"

python -m mkdocs build --strict
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

ghp-import -n -p -f -m "docs: publish site" site
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
