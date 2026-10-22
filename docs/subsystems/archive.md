# Archive Subsystem

> **Binary:** `MW4Mercs.exe` | **VAs:** 285 | **Exhaustive index:** [MW4Mercs.exe](../master_index/MW4Mercs_exe.md)

`#VBD` archives, streams, file I/O, and path handling.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The archive layer owns the #VBD directory, entry hash chains, lazy member fetch/decompression, and the stream vtable. Open and close are at 0x004145E0 and 0x004148F0; open-from-stream is 0x00414820; the empty-archive initializer is 0x00413E90.

Member fetch is 0x00413830; the by-index, by-name, and iterator dispatchers are 0x00413BE0, 0x00413C70, and 0x00413D20. The writer path is 0x00413540; the LZW compressor/decompressor are 0x006FBE80 and 0x006FC220.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x004145E0 | vbd | archive open |
| 0x00414820 | stream | open from stream |
| 0x004148F0 | vbd | archive close |
| 0x00413E90 | vbd | empty-archive initializer |
| 0x00413830 | vbd | lazy member fetch/decompress |
| 0x00413BE0 | vbd | fetch by index |
| 0x00413C70 | vbd | fetch by name |
| 0x00413D20 | vbd | archive iterator |
| 0x00413540 | vbd | archive writer |
| 0x006FBE80 | codec | LZW compressor |
| 0x006FC220 | codec | LZW decompressor |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| vbd | 253 | #VBD archive directory, entry hashing, and member fetch. |
| stream | 30 | Stream vtable and memory/file stream implementations. |
| (general) | 2 |  |

## VAs

Every VA in this subsystem is listed below, grouped by detail. `Evidence` is the classification source (`surface`, `range`, `keyword`, `band`, `structural`, or `section`).

### vbd

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004028FD | core | - | `src/mw4mercs/text/func_004028FD.c` | keyword |
| 0x00403790 | core | 237 | `src/mw4mercs/text/func_00403790.c` | keyword |
| 0x00413030 | core | 30 | `src/mw4mercs/text/func_00413030.c` | range |
| 0x00413050 | core | 36 | `src/mw4mercs/text/func_00413050.c` | range |
| 0x00413080 | core | 113 | `src/mw4mercs/text/func_00413080.c` | range |
| 0x004130F1 | core | - | `src/mw4mercs/text/func_004130f1.c` | range |
| 0x00413240 | core | 30 | `src/mw4mercs/text/func_00413240.c` | range |
| 0x00413260 | core | 250 | `src/mw4mercs/text/func_00413260.c` | range |
| 0x00413360 | core | 277 | `src/mw4mercs/text/func_00413360.c` | range |
| 0x00413480 | core | 118 | `src/mw4mercs/text/func_00413480.c` | range |
| 0x00413500 | core | 50 | `src/mw4mercs/text/func_00413500.c` | range |
| 0x00413540 | core | 439 | `src/mw4mercs/text/func_00413540.c` | range |
| 0x00413700 | core | 290 | `src/mw4mercs/text/func_00413700.c` | range |
| 0x00413830 | core | 155 | `src/mw4mercs/text/func_00413830.c` | range |
| 0x004138D0 | core | 97 | `src/mw4mercs/text/func_004138d0.c` | range |
| 0x00413940 | core | 41 | `src/mw4mercs/text/func_00413940.c` | range |
| 0x00413970 | core | 22 | `src/mw4mercs/text/func_00413970.c` | range |
| 0x00413990 | core | 149 | `src/mw4mercs/text/func_00413990.c` | range |
| 0x00413B90 | core | 68 | `src/mw4mercs/text/func_00413b90.c` | range |
| 0x00413D20 | core | 64 | `src/mw4mercs/text/func_00413d20.c` | range |
| 0x00413D60 | core | 23 | `src/mw4mercs/text/func_00413d60.c` | range |
| 0x00413D80 | core | 23 | `src/mw4mercs/text/func_00413d80.c` | range |
| 0x00413DA0 | core | 14 | `src/mw4mercs/text/func_00413da0.c` | range |
| 0x00413DAE | core | - | `src/mw4mercs/text/func_00413DAE.c` | range |
| 0x00413DC0 | core | - | `src/mw4mercs/text/func_00413dc0.c` | range |
| 0x00413DF0 | core | - | `src/mw4mercs/text/func_00413DF0.c` | range |
| 0x00413E80 | core | - | `src/mw4mercs/text/func_00413E80.c` | range |
| 0x00413E90 | core | 72 | `src/mw4mercs/text/func_00413e90.c` | range |
| 0x00413EE0 | core | 345 | `src/mw4mercs/text/func_00413ee0.c` | range |
| 0x00414040 | core | 193 | `src/mw4mercs/text/func_00414040.c` | range |
| 0x00414110 | core | 331 | `src/mw4mercs/text/func_00414110.c` | range |
| 0x00414260 | core | 353 | `src/mw4mercs/text/func_00414260.c` | range |
| 0x004143D0 | core | 436 | `src/mw4mercs/text/func_004143d0.c` | range |
| 0x00414590 | core | 74 | `src/mw4mercs/text/func_00414590.c` | range |
| 0x004145E0 | core | 574 | `src/mw4mercs/text/func_004145e0.c` | range |
| 0x00414820 | core | 195 | `src/mw4mercs/text/func_00414820.c` | range |
| 0x004148F0 | core | 118 | `src/mw4mercs/text/func_004148f0.c` | range |
| 0x00414970 | core | 23 | `src/mw4mercs/text/func_00414970.c` | range |
| 0x00414990 | core | 16 | `src/mw4mercs/text/func_00414990.c` | range |
| 0x004149A0 | core | 31 | `src/mw4mercs/text/func_004149a0.c` | range |
| 0x004149C0 | core | 85 | `src/mw4mercs/text/func_004149c0.c` | range |
| 0x00414A20 | core | 1 | `src/mw4mercs/text/func_00414a20.c` | range |
| 0x00414A30 | core | 43 | `src/mw4mercs/text/func_00414a30.c` | range |
| 0x00414A70 | core | 171 | `src/mw4mercs/text/func_00414a70.c` | range |
| 0x00414B1B | core | - | `src/mw4mercs/text/func_00414B1B.c` | range |
| 0x00414B30 | core | - | `src/mw4mercs/text/func_00414B30.c` | range |
| 0x00414B40 | core | - | `src/mw4mercs/text/func_00414B40.c` | range |
| 0x00414B60 | core | - | `src/mw4mercs/text/func_00414B60.c` | range |
| 0x00414B80 | core | 389 | `src/mw4mercs/text/func_00414b80.c` | range |
| 0x00414D05 | core | - | `src/mw4mercs/text/func_00414d05.c` | range |
| 0x00414E80 | core | 136 | `src/mw4mercs/text/func_00414e80.c` | range |
| 0x00414F10 | core | 48 | `src/mw4mercs/text/func_00414f10.c` | range |
| 0x00414F40 | core | 35 | `src/mw4mercs/text/func_00414f40.c` | range |
| 0x00414F70 | core | 94 | `src/mw4mercs/text/func_00414f70.c` | range |
| 0x0041F090 | core | 30 | `src/mw4mercs/text/func_0041f090.c` | keyword |
| 0x0041F0D0 | core | - | `src/mw4mercs/text/func_0041f0d0.c` | keyword |
| 0x0041F0E0 | core | - | `src/mw4mercs/text/func_0041f0e0.c` | keyword |
| 0x0041F100 | core | - | `src/mw4mercs/text/func_0041f100.c` | keyword |
| 0x0041F120 | core | - | `src/mw4mercs/text/func_0041f120.c` | keyword |
| 0x0041F140 | core | - | `src/mw4mercs/text/func_0041f140.c` | keyword |
| 0x0041F290 | core | 65 | `src/mw4mercs/text/func_0041f290.c` | keyword |
| 0x0041F2E0 | core | 26 | `src/mw4mercs/text/func_0041f2e0.c` | keyword |
| 0x0041F300 | core | 60 | `src/mw4mercs/text/func_0041f300.c` | keyword |
| 0x0041F570 | core | 137 | `src/mw4mercs/text/func_0041f570.c` | keyword |
| 0x0041F680 | core | 96 | `src/mw4mercs/text/func_0041f680.c` | keyword |
| 0x0041F6E0 | core | 110 | `src/mw4mercs/text/func_0041f6e0.c` | keyword |
| 0x0041F7B0 | core | 80 | `src/mw4mercs/text/func_0041f7b0.c` | keyword |
| 0x0041F800 | core | 105 | `src/mw4mercs/text/func_0041f800.c` | keyword |
| 0x00422C30 | core | 512 | `src/mw4mercs/text/func_00422c30.c` | keyword |
| 0x00429730 | core | 177 | `src/mw4mercs/text/func_00429730.c` | keyword |
| 0x00430CD0 | core | 174 | `src/mw4mercs/text/func_00430cd0.c` | keyword |
| 0x00430D80 | core | 250 | `src/mw4mercs/text/func_00430d80.c` | keyword |
| 0x00439D60 | core | 175 | `src/mw4mercs/text/func_00439d60.c` | keyword |
| 0x0043E360 | core | 228 | `src/mw4mercs/text/func_0043e360.c` | keyword |
| 0x0045DAE0 | core | 156 | `src/mw4mercs/text/func_0045dae0.c` | keyword |
| 0x0045DE40 | core | 1227 | `src/mw4mercs/text/func_0045de40.c` | keyword |
| 0x004617E0 | core | 191 | `src/mw4mercs/text/func_004617e0.c` | keyword |
| 0x004650B0 | core | 230 | `src/mw4mercs/text/func_004650b0.c` | keyword |
| 0x0046BD00 | core | 191 | `src/mw4mercs/text/func_0046bd00.c` | keyword |
| 0x0046BEE0 | core | - | `src/mw4mercs/text/func_0046BEE0.c` | keyword |
| 0x00472E50 | core | 1120 | `src/mw4mercs/text/func_00472e50.c` | keyword |
| 0x004755D0 | core | 1667 | `src/mw4mercs/text/func_004755d0.c` | keyword |
| 0x00482160 | core | 51 | `src/mw4mercs/text/func_00482160.c` | keyword |
| 0x004821A0 | core | 57 | `src/mw4mercs/text/func_004821a0.c` | keyword |
| 0x0048C0A0 | core | 185 | `src/mw4mercs/text/func_0048c0a0.c` | keyword |
| 0x00490310 | core | 90 | `src/mw4mercs/text/func_00490310.c` | keyword |
| 0x00490370 | core | 189 | `src/mw4mercs/text/func_00490370.c` | keyword |
| 0x00492260 | core | 108 | `src/mw4mercs/text/func_00492260.c` | keyword |
| 0x00493420 | core | 53 | `src/mw4mercs/text/func_00493420.c` | keyword |
| 0x00495EA0 | core | 127 | `src/mw4mercs/text/func_00495ea0.c` | keyword |
| 0x004A1840 | core | 181 | `src/mw4mercs/text/func_004a1840.c` | keyword |
| 0x004A1CC0 | core | 68 | `src/mw4mercs/text/func_004a1cc0.c` | keyword |
| 0x004AE5A0 | core | 246 | `src/mw4mercs/text/func_004ae5a0.c` | keyword |
| 0x004B4D70 | core | 1831 | `src/mw4mercs/text/func_004b4d70.c` | keyword |
| 0x004CCDE0 | core | 2205 | `src/mw4mercs/text/func_004ccde0.c` | keyword |
| 0x004CD950 | core | 1469 | `src/mw4mercs/text/func_004cd950.c` | keyword |
| 0x004CF0F0 | core | - | `src/mw4mercs/text/func_004CF0F0.c` | keyword |
| 0x004D2910 | core | - | `src/mw4mercs/text/func_004D2910.c` | keyword |
| 0x004D2A40 | core | 66 | `src/mw4mercs/text/func_004d2a40.c` | keyword |
| 0x004DA960 | core | 115 | `src/mw4mercs/text/func_004da960.c` | keyword |
| 0x004DA9E0 | core | 64 | `src/mw4mercs/text/func_004da9e0.c` | keyword |
| 0x004E6D10 | core | 1086 | `src/mw4mercs/text/func_004e6d10.c` | keyword |
| 0x004E7150 | core | 175 | `src/mw4mercs/text/func_004e7150.c` | keyword |
| 0x004E9D00 | core | 524 | `src/mw4mercs/text/func_004e9d00.c` | keyword |
| 0x004EE3E0 | core | 87 | `src/mw4mercs/text/func_004ee3e0.c` | keyword |
| 0x004EE590 | core | 575 | `src/mw4mercs/text/func_004ee590.c` | keyword |
| 0x004EE920 | core | 254 | `src/mw4mercs/text/func_004ee920.c` | keyword |
| 0x004EEA40 | core | 577 | `src/mw4mercs/text/func_004eea40.c` | keyword |
| 0x004EEC90 | core | 159 | `src/mw4mercs/text/func_004eec90.c` | keyword |
| 0x004F07A0 | core | 104 | `src/mw4mercs/text/func_004f07a0.c` | keyword |
| 0x004F1470 | core | 69 | `src/mw4mercs/text/func_004f1470.c` | keyword |
| 0x004F14F0 | core | 115 | `src/mw4mercs/text/func_004f14f0.c` | keyword |
| 0x004F1570 | core | 96 | `src/mw4mercs/text/func_004f1570.c` | keyword |
| 0x004F1D50 | core | 158 | `src/mw4mercs/text/func_004f1d50.c` | keyword |
| 0x004F2250 | core | 102 | `src/mw4mercs/text/func_004f2250.c` | keyword |
| 0x004FC7B0 | core | 366 | `src/mw4mercs/text/func_004fc7b0.c` | keyword |
| 0x004FC920 | core | 317 | `src/mw4mercs/text/func_004fc920.c` | keyword |
| 0x004FDFC0 | core | 310 | `src/mw4mercs/text/func_004fdfc0.c` | keyword |
| 0x004FE1E0 | core | 418 | `src/mw4mercs/text/func_004fe1e0.c` | keyword |
| 0x004FEC10 | core | 91 | `src/mw4mercs/text/func_004fec10.c` | keyword |
| 0x0052B4F0 | core | 270 | `src/mw4mercs/text/func_0052b4f0.c` | keyword |
| 0x0052B600 | core | 390 | `src/mw4mercs/text/func_0052b600.c` | keyword |
| 0x0052B790 | core | 562 | `src/mw4mercs/text/func_0052b790.c` | keyword |
| 0x00534880 | core | - | `src/mw4mercs/text/func_00534880.c` | keyword |
| 0x00539690 | core | 711 | `src/mw4mercs/text/func_00539690.c` | keyword |
| 0x0053A280 | core | 542 | `src/mw4mercs/text/func_0053a280.c` | keyword |
| 0x0053A5D0 | core | 226 | `src/mw4mercs/text/func_0053a5d0.c` | keyword |
| 0x0053AB70 | core | 1455 | `src/mw4mercs/text/func_0053ab70.c` | keyword |
| 0x0053B120 | core | 173 | `src/mw4mercs/text/func_0053b120.c` | keyword |
| 0x0053DF10 | core | 614 | `src/mw4mercs/text/func_0053df10.c` | keyword |
| 0x0053E180 | core | 260 | `src/mw4mercs/text/func_0053e180.c` | keyword |
| 0x0053E290 | core | 1305 | `src/mw4mercs/text/func_0053e290.c` | keyword |
| 0x0053E7B0 | core | 170 | `src/mw4mercs/text/func_0053e7b0.c` | keyword |
| 0x0053E8B0 | core | 875 | `src/mw4mercs/text/func_0053e8b0.c` | keyword |
| 0x0053EC40 | core | 881 | `src/mw4mercs/text/func_0053ec40.c` | keyword |
| 0x0053EFC0 | core | 370 | `src/mw4mercs/text/func_0053efc0.c` | keyword |
| 0x005436F0 | core | 947 | `src/mw4mercs/text/func_005436f0.c` | keyword |
| 0x00544310 | core | 263 | `src/mw4mercs/text/func_00544310.c` | keyword |
| 0x005444E0 | core | 257 | `src/mw4mercs/text/func_005444e0.c` | keyword |
| 0x005477A0 | core | 447 | `src/mw4mercs/text/func_005477a0.c` | keyword |
| 0x00567550 | core | - | `src/mw4mercs/text/func_00567550.c` | keyword |
| 0x00567730 | core | - | `src/mw4mercs/text/func_00567730.c` | keyword |
| 0x00567880 | core | - | `src/mw4mercs/text/func_00567880.c` | keyword |
| 0x00567990 | core | - | `src/mw4mercs/text/func_00567990.c` | keyword |
| 0x005693C0 | core | 593 | `src/mw4mercs/text/func_005693c0.c` | keyword |
| 0x00569620 | core | 636 | `src/mw4mercs/text/func_00569620.c` | keyword |
| 0x00569A20 | core | 392 | `src/mw4mercs/text/func_00569a20.c` | keyword |
| 0x00569DD0 | core | 537 | `src/mw4mercs/text/func_00569dd0.c` | keyword |
| 0x0056CC10 | core | 334 | `src/mw4mercs/text/func_0056CC10.c` | keyword |
| 0x0056DAF0 | core | 427 | `src/mw4mercs/text/func_0056DAF0.c` | keyword |
| 0x0056DCA0 | core | 1416 | `src/mw4mercs/text/func_0056DCA0.c` | keyword |
| 0x0056E320 | core | 800 | `src/mw4mercs/text/func_0056e320.c` | keyword |
| 0x0056E9F0 | core | - | `src/mw4mercs/text/func_0056E9F0.c` | keyword |
| 0x005731B0 | core | 661 | `src/mw4mercs/text/func_005731b0.c` | keyword |
| 0x00573450 | core | 661 | `src/mw4mercs/text/func_00573450.c` | keyword |
| 0x005736F0 | core | 661 | `src/mw4mercs/text/func_005736f0.c` | keyword |
| 0x00573990 | core | 454 | `src/mw4mercs/text/func_00573990.c` | keyword |
| 0x00573B60 | core | 290 | `src/mw4mercs/text/func_00573b60.c` | keyword |
| 0x00573C90 | core | 526 | `src/mw4mercs/text/func_00573c90.c` | keyword |
| 0x00573EA0 | core | 792 | `src/mw4mercs/text/func_00573ea0.c` | keyword |
| 0x005748E0 | core | 274 | `src/mw4mercs/text/func_005748e0.c` | keyword |
| 0x00577B30 | core | 240 | `src/mw4mercs/text/func_00577b30.c` | keyword |
| 0x00578180 | core | 240 | `src/mw4mercs/text/func_00578180.c` | keyword |
| 0x0057C4B0 | core | 478 | `src/mw4mercs/text/func_0057c4b0.c` | keyword |
| 0x0057D450 | core | 175 | `src/mw4mercs/text/func_0057d450.c` | keyword |
| 0x0057DBF0 | core | 1165 | `src/mw4mercs/text/func_0057dbf0.c` | keyword |
| 0x005923F0 | core | 1481 | `src/mw4mercs/text/func_005923f0.c` | keyword |
| 0x00594000 | core | 286 | `src/mw4mercs/text/func_00594000.c` | keyword |
| 0x005944B0 | core | 226 | `src/mw4mercs/text/func_005944b0.c` | keyword |
| 0x005945A0 | core | 258 | `src/mw4mercs/text/func_005945a0.c` | keyword |
| 0x005946B0 | core | 78 | `src/mw4mercs/text/func_005946b0.c` | keyword |
| 0x00594BB0 | core | 211 | `src/mw4mercs/text/func_00594bb0.c` | keyword |
| 0x00594D30 | core | 3199 | `src/mw4mercs/text/func_00594d30.c` | keyword |
| 0x00596AB0 | core | 1654 | `src/mw4mercs/text/func_00596ab0.c` | keyword |
| 0x0059B230 | core | 223 | `src/mw4mercs/text/func_0059b230.c` | keyword |
| 0x0059B380 | core | 179 | `src/mw4mercs/text/func_0059b380.c` | keyword |
| 0x0059B6F0 | core | 187 | `src/mw4mercs/text/func_0059b6f0.c` | keyword |
| 0x0059C870 | core | 562 | `src/mw4mercs/text/func_0059c870.c` | keyword |
| 0x0059DBA0 | core | 455 | `src/mw4mercs/text/func_0059dba0.c` | keyword |
| 0x0059DE20 | core | 238 | `src/mw4mercs/text/func_0059de20.c` | keyword |
| 0x0059DF10 | core | 533 | `src/mw4mercs/text/func_0059df10.c` | keyword |
| 0x0059E450 | core | 148 | `src/mw4mercs/text/func_0059e450.c` | keyword |
| 0x0059E4F0 | core | 196 | `src/mw4mercs/text/func_0059e4f0.c` | keyword |
| 0x0059F250 | core | 477 | `src/mw4mercs/text/func_0059f250.c` | keyword |
| 0x0059F530 | core | 148 | `src/mw4mercs/text/func_0059f530.c` | keyword |
| 0x0059F840 | core | 230 | `src/mw4mercs/text/func_0059f840.c` | keyword |
| 0x005A7CB0 | core | 339 | `src/mw4mercs/text/func_005a7cb0.c` | keyword |
| 0x005A9B9B | core | - | `src/mw4mercs/text/func_005A9B9B.c` | keyword |
| 0x005B69AB | core | - | `src/mw4mercs/text/func_005B69AB.c` | keyword |
| 0x005B90B0 | core | 62 | `src/mw4mercs/text/func_005b90b0.c` | keyword |
| 0x005C9960 | core | 1214 | `src/mw4mercs/text/func_005c9960.c` | keyword |
| 0x005CDFF0 | core | 834 | `src/mw4mercs/text/func_005cdff0.c` | keyword |
| 0x005CE340 | core | 1331 | `src/mw4mercs/text/func_005ce340.c` | keyword |
| 0x005D7CB0 | core | 493 | `src/mw4mercs/text/func_005d7cb0.c` | keyword |
| 0x005F9560 | core | 137 | `src/mw4mercs/text/func_005f9560.c` | keyword |
| 0x005FA610 | core | 385 | `src/mw4mercs/text/func_005fa610.c` | keyword |
| 0x005FA7A0 | core | 336 | `src/mw4mercs/text/func_005fa7a0.c` | keyword |
| 0x005FA8F0 | core | 401 | `src/mw4mercs/text/func_005fa8f0.c` | keyword |
| 0x005FAA90 | core | 333 | `src/mw4mercs/text/func_005faa90.c` | keyword |
| 0x005FABE0 | core | 363 | `src/mw4mercs/text/func_005fabe0.c` | keyword |
| 0x005FAD50 | core | 334 | `src/mw4mercs/text/func_005fad50.c` | keyword |
| 0x00606870 | core | 138 | `src/mw4mercs/text/func_00606870.c` | keyword |
| 0x00606900 | core | 100 | `src/mw4mercs/text/func_00606900.c` | keyword |
| 0x00607E50 | core | 39 | `src/mw4mercs/text/func_00607e50.c` | keyword |
| 0x00608D70 | core | 1234 | `src/mw4mercs/text/func_00608d70.c` | keyword |
| 0x00609250 | core | 423 | `src/mw4mercs/text/func_00609250.c` | keyword |
| 0x00609400 | core | 197 | `src/mw4mercs/text/func_00609400.c` | keyword |
| 0x006094D0 | core | 51 | `src/mw4mercs/text/func_006094d0.c` | keyword |
| 0x0060DEA0 | core | 126 | `src/mw4mercs/text/func_0060dea0.c` | keyword |
| 0x00613E90 | core | 229 | `src/mw4mercs/text/func_00613e90.c` | keyword |
| 0x00615EA0 | core | 165 | `src/mw4mercs/text/func_00615ea0.c` | keyword |
| 0x00615FF0 | core | 2106 | `src/mw4mercs/text/func_00615ff0.c` | keyword |
| 0x0061B5E0 | core | 280 | `src/mw4mercs/text/func_0061b5e0.c` | keyword |
| 0x0061B700 | core | 174 | `src/mw4mercs/text/func_0061b700.c` | keyword |
| 0x0061BA40 | core | 651 | `src/mw4mercs/text/func_0061ba40.c` | keyword |
| 0x00648FE0 | core | 2049 | `src/mw4mercs/text/func_00648fe0.c` | keyword |
| 0x00649380 | core | 446 | `src/mw4mercs/text/func_00649380.c` | keyword |
| 0x0064B2C0 | core | 235 | `src/mw4mercs/text/func_0064b2c0.c` | keyword |
| 0x0064B3B0 | core | 1018 | `src/mw4mercs/text/func_0064b3b0.c` | keyword |
| 0x0064D050 | core | 282 | `src/mw4mercs/text/func_0064d050.c` | keyword |
| 0x0066BA60 | core | 309 | `src/mw4mercs/text/func_0066ba60.c` | keyword |
| 0x0066BD70 | core | 94 | `src/mw4mercs/text/func_0066bd70.c` | keyword |
| 0x00679410 | core | 336 | `src/mw4mercs/text/func_00679410.c` | keyword |
| 0x00685100 | core | 447 | `src/mw4mercs/text/func_00685100.c` | keyword |
| 0x006855E0 | core | 160 | `src/mw4mercs/text/func_006855e0.c` | keyword |
| 0x00685680 | core | 150 | `src/mw4mercs/text/func_00685680.c` | keyword |
| 0x006884B0 | core | - | `src/mw4mercs/text/func_006884b0.c` | keyword |
| 0x006884E0 | core | - | `src/mw4mercs/text/func_006884e0.c` | keyword |
| 0x0068AAC0 | core | 159 | `src/mw4mercs/text/func_0068aac0.c` | keyword |
| 0x0068B690 | core | 194 | `src/mw4mercs/text/func_0068b690.c` | keyword |
| 0x0068D8A0 | core | 1659 | `src/mw4mercs/text/func_0068d8a0.c` | keyword |
| 0x0068F020 | core | 230 | `src/mw4mercs/text/func_0068f020.c` | keyword |
| 0x0068F48E | core | - | `src/mw4mercs/text/func_0068F48E.c` | keyword |
| 0x0068F580 | core | - | `src/mw4mercs/text/func_0068F580.c` | keyword |
| 0x006A3600 | core | 283 | `src/mw4mercs/text/func_006a3600.c` | keyword |
| 0x006B0460 | core | 184 | `src/mw4mercs/text/func_006b0460.c` | keyword |
| 0x006B0520 | core | 228 | `src/mw4mercs/text/func_006b0520.c` | keyword |
| 0x006B19A0 | core | 135 | `src/mw4mercs/text/func_006b19a0.c` | keyword |
| 0x006B1AC0 | core | 173 | `src/mw4mercs/text/func_006b1ac0.c` | keyword |
| 0x006D2AC0 | core | 120 | `src/mw4mercs/text/func_006d2ac0.c` | keyword |
| 0x006D2ED0 | core | 123 | `src/mw4mercs/text/func_006d2ed0.c` | keyword |
| 0x006D3B90 | core | 404 | `src/mw4mercs/text/func_006d3b90.c` | keyword |
| 0x006D3F20 | core | 147 | `src/mw4mercs/text/func_006d3f20.c` | keyword |
| 0x006D4910 | core | 673 | `src/mw4mercs/text/func_006d4910.c` | keyword |
| 0x006D4F60 | core | - | `src/mw4mercs/text/func_006d4f60.c` | keyword |
| 0x006DCB90 | core | 365 | `src/mw4mercs/text/func_006dcb90.c` | keyword |
| 0x006DCD00 | core | 365 | `src/mw4mercs/text/func_006dcd00.c` | keyword |
| 0x006DCE70 | core | 365 | `src/mw4mercs/text/func_006dce70.c` | keyword |
| 0x006DCFE0 | core | 365 | `src/mw4mercs/text/func_006dcfe0.c` | keyword |
| 0x006E0620 | core | 316 | `src/mw4mercs/text/func_006e0620.c` | keyword |
| 0x006E0F80 | core | - | `src/mw4mercs/text/func_006e0f80.c` | keyword |
| 0x006FB6A0 | core | 48 | `src/mw4mercs/text/func_006fb6a0.c` | keyword |
| 0x007034F0 | core | 1323 | `src/mw4mercs/text/func_007034f0.c` | keyword |

### stream

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x0041E054 | core | - | `src/mw4mercs/text/func_0041e054.c` | range |
| 0x0041E130 | core | 31 | `src/mw4mercs/text/func_0041e130.c` | range |
| 0x0041E160 | core | 253 | `src/mw4mercs/text/func_0041e160.c` | range |
| 0x0041E260 | core | 30 | `src/mw4mercs/text/func_0041e260.c` | range |
| 0x0041E27E | core | - | `src/mw4mercs/text/func_0041e27e.c` | range |
| 0x0041E360 | core | 85 | `src/mw4mercs/text/func_0041e360.c` | range |
| 0x0041E3C0 | core | 64 | `src/mw4mercs/text/func_0041e3c0.c` | range |
| 0x0041E400 | core | 30 | `src/mw4mercs/text/func_0041e400.c` | range |
| 0x0041E41E | core | - | `src/mw4mercs/text/func_0041e41e.c` | range |
| 0x0041E430 | core | 113 | `src/mw4mercs/text/func_0041e430.c` | range |
| 0x0041E4A1 | core | - | `src/mw4mercs/text/func_0041e4a1.c` | range |
| 0x0041E620 | core | 52 | `src/mw4mercs/text/func_0041e620.c` | range |
| 0x0041E660 | core | 39 | `src/mw4mercs/text/func_0041e660.c` | range |
| 0x0041E754 | core | - | `src/mw4mercs/text/func_0041e754.c` | range |
| 0x0041E790 | core | 184 | `src/mw4mercs/text/func_0041e790.c` | range |
| 0x0041E84A | core | - | `src/mw4mercs/text/func_0041e84a.c` | range |
| 0x0041E910 | core | 50 | `src/mw4mercs/text/func_0041e910.c` | range |
| 0x0041E950 | core | 52 | `src/mw4mercs/text/func_0041e950.c` | range |
| 0x0041E984 | core | - | `src/mw4mercs/text/func_0041e984.c` | range |
| 0x0041EA40 | core | 31 | `src/mw4mercs/text/func_0041ea40.c` | range |
| 0x0041EA60 | core | 113 | `src/mw4mercs/text/func_0041ea60.c` | range |
| 0x0041EAE0 | core | 89 | `src/mw4mercs/text/func_0041eae0.c` | range |
| 0x0041EB40 | core | 263 | `src/mw4mercs/text/func_0041eb40.c` | range |
| 0x0041ED40 | core | 66 | `src/mw4mercs/text/func_0041ed40.c` | range |
| 0x0041ED90 | core | 58 | `src/mw4mercs/text/func_0041ed90.c` | range |
| 0x0041EDD0 | core | 66 | `src/mw4mercs/text/func_0041edd0.c` | range |
| 0x0041EE20 | core | 58 | `src/mw4mercs/text/func_0041ee20.c` | range |
| 0x0041EEC0 | core | - | `src/mw4mercs/text/func_0041EEC0.c` | range |
| 0x0041EF30 | core | 46 | `src/mw4mercs/text/func_0041ef30.c` | range |
| 0x0041EF90 | core | 145 | `src/mw4mercs/text/func_0041ef90.c` | range |

### (general)

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x004D2E00 | core | 219 | `src/mw4mercs/text/func_004d2e00.c` | range |
| 0x004D2EE0 | core | 132 | `src/mw4mercs/text/func_004d2ee0.c` | range |

## Related

- [All subsystems](README.md)
- [Shared VAs](shared.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../master_index/MW4Mercs_exe.md)
