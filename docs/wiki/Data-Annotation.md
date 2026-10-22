# Data annotation

The EXE and module data sections are transcribed as byte-exact `data_0x*.c`
runs with inline semantic annotations:

- IAT/ILT entries and import descriptors
- vtables and method pointers
- ASCII strings and float runs
- data pointers into `.text`/`.rdata`/`.data`

The **indexes** are committed:

- [`docs/data_annotation.md`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/docs/data_annotation.md) — EXE
- [`docs/module_data_annotation/`](https://github.com/mech4decomp/Mech4MercDecomp/tree/main/docs/module_data_annotation) — modules

The data sources themselves are generated locally from your reference:

```bat
nmake data
nmake module-data MOD=gundll
```

They are gitignored. Regenerate the annotated sources with:

```bat
python tools\annotate_data.py
python tools\module_annotate_data.py gundll
```
