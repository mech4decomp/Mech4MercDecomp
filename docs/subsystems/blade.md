# blade.dll

> **VAs:** 739 | **Exhaustive index:** [blade.dll](../va_index/blade_dll.md)

DirectDraw proxy DLL with COM exports, a large facade state machine, caps/accessor wrappers, and a software rasterizer.

## Contents

- [How it works](#how-it-works)
- [Key entry points](#key-entry-points)
- [Details](#details)
- [VAs](#vas)
- [Related](#related)

## How it works

The exports start at 0x5E001040 and proxy the DirectDraw COM surface. The facade detail owns the device/surface state machine; caps and accessors expose format/capability queries; the wrapper detail performs lazy `ddraw.dll` loading and forwarding.

The render detail contains the software rasterizer and blit paths. The module also carries CRT and stub ranges, which are listed separately in the VA table.

## Key entry points

| VA | Detail | What it does |
|----|--------|--------------|
| 0x5E001040 | exports | first DirectDraw export |

## Details

| Detail | VAs | Responsibility |
|--------|-----|----------------|
| wrapper | 228 | DirectDraw COM wrapper/forwarding. |
| crt | 155 | Statically linked C runtime. |
| facade | 116 | Device/surface state machine. |
| caps | 108 | Capability/format queries. |
| accessors | 53 | Surface/device accessors. |
| render | 47 | Software rasterizer and blit paths. |
| stubs | 17 | Minimal stubs for unsupported paths. |
| exports | 9 | DirectDraw exports. |
| data | 3 |  |
| rdata | 3 |  |

## VAs

Every VA in this module is listed below, grouped by detail.

### wrapper

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E00EB00 | core | 12 | `src/blade/text/func_5e00eb00.c` | module-map |
| 0x5E00EB0C | core | - | `src/blade/text/func_5e00eb0c.c` | module-map |
| 0x5E00ECF0 | core | 364 | `src/blade/text/func_5e00ecf0.c` | module-map |
| 0x5E00EE5C | core | - | `src/blade/text/func_5e00ee5c.c` | module-map |
| 0x5E00EE60 | core | 16 | `src/blade/text/func_5e00ee60.c` | module-map |
| 0x5E00EE70 | core | 142 | `src/blade/text/func_5e00ee70.c` | module-map |
| 0x5E00EEFE | core | - | `src/blade/text/func_5e00eefe.c` | module-map |
| 0x5E00EF00 | core | 16 | `src/blade/text/func_5e00ef00.c` | module-map |
| 0x5E00EF10 | core | 31 | `src/blade/text/func_5e00ef10.c` | module-map |
| 0x5E00EF2F | core | - | `src/blade/text/func_5e00ef2f.c` | module-map |
| 0x5E00EF30 | core | 36 | `src/blade/text/func_5e00ef30.c` | module-map |
| 0x5E00EF54 | core | - | `src/blade/text/func_5e00ef54.c` | module-map |
| 0x5E00EF60 | core | 258 | `src/blade/text/func_5e00ef60.c` | module-map |
| 0x5E00F062 | core | - | `src/blade/text/func_5e00f062.c` | module-map |
| 0x5E00F070 | core | 322 | `src/blade/text/func_5e00f070.c` | module-map |
| 0x5E00F1B2 | core | - | `src/blade/text/func_5e00f1b2.c` | module-map |
| 0x5E00F380 | core | 16 | `src/blade/text/func_5e00f380.c` | module-map |
| 0x5E00F390 | core | 376 | `src/blade/text/func_5e00f390.c` | module-map |
| 0x5E00F508 | core | - | `src/blade/text/func_5e00f508.c` | module-map |
| 0x5E00F530 | core | 26 | `src/blade/text/func_5e00f530.c` | module-map |
| 0x5E00F54A | core | - | `src/blade/text/func_5e00f54a.c` | module-map |
| 0x5E00F570 | core | 21 | `src/blade/text/func_5e00f570.c` | module-map |
| 0x5E00F585 | core | - | `src/blade/text/func_5e00f585.c` | module-map |
| 0x5E00F590 | core | 21 | `src/blade/text/func_5e00f590.c` | module-map |
| 0x5E00F5A5 | core | - | `src/blade/text/func_5e00f5a5.c` | module-map |
| 0x5E00F5B0 | core | 21 | `src/blade/text/func_5e00f5b0.c` | module-map |
| 0x5E00F5C5 | core | - | `src/blade/text/func_5e00f5c5.c` | module-map |
| 0x5E00F5D0 | core | 21 | `src/blade/text/func_5e00f5d0.c` | module-map |
| 0x5E00F5E5 | core | - | `src/blade/text/func_5e00f5e5.c` | module-map |
| 0x5E00F5F0 | core | 16 | `src/blade/text/func_5e00f5f0.c` | module-map |
| 0x5E00F600 | core | 39 | `src/blade/text/func_5e00f600.c` | module-map |
| 0x5E00F627 | core | - | `src/blade/text/func_5e00f627.c` | module-map |
| 0x5E00F650 | core | 26 | `src/blade/text/func_5e00f650.c` | module-map |
| 0x5E00F66A | core | - | `src/blade/text/func_5e00f66a.c` | module-map |
| 0x5E00F6B0 | core | 197 | `src/blade/text/func_5e00f6b0.c` | module-map |
| 0x5E00F775 | core | - | `src/blade/text/func_5e00f775.c` | module-map |
| 0x5E00F820 | core | 69 | `src/blade/text/func_5e00f820.c` | module-map |
| 0x5E00F865 | core | - | `src/blade/text/func_5e00f865.c` | module-map |
| 0x5E00F8B0 | core | 72 | `src/blade/text/func_5e00f8b0.c` | module-map |
| 0x5E00F8F8 | core | - | `src/blade/text/func_5e00f8f8.c` | module-map |
| 0x5E00F900 | core | 43 | `src/blade/text/func_5e00f900.c` | module-map |
| 0x5E00F92B | core | - | `src/blade/text/func_5e00f92b.c` | module-map |
| 0x5E00F970 | core | 28 | `src/blade/text/func_5e00f970.c` | module-map |
| 0x5E00F98C | core | - | `src/blade/text/func_5e00f98c.c` | module-map |
| 0x5E00F990 | core | 25 | `src/blade/text/func_5e00f990.c` | module-map |
| 0x5E00F9A9 | core | - | `src/blade/text/func_5e00f9a9.c` | module-map |
| 0x5E00FB68 | core | - | `src/blade/text/func_5e00fb68.c` | module-map |
| 0x5E00FB70 | core | 63 | `src/blade/text/func_5e00fb70.c` | module-map |
| 0x5E00FBAF | core | - | `src/blade/text/func_5e00fbaf.c` | module-map |
| 0x5E00FBF0 | core | 152 | `src/blade/text/func_5e00fbf0.c` | module-map |
| 0x5E00FC88 | core | - | `src/blade/text/func_5e00fc88.c` | module-map |
| 0x5E00FEB0 | core | 256 | `src/blade/text/func_5e00feb0.c` | module-map |
| 0x5E00FFB0 | core | 28 | `src/blade/text/func_5e00ffb0.c` | module-map |
| 0x5E00FFCC | core | - | `src/blade/text/func_5e00ffcc.c` | module-map |
| 0x5E00FFD0 | core | 28 | `src/blade/text/func_5e00ffd0.c` | module-map |
| 0x5E00FFEC | core | - | `src/blade/text/func_5e00ffec.c` | module-map |
| 0x5E00FFF0 | core | 18 | `src/blade/text/func_5e00fff0.c` | module-map |
| 0x5E010002 | core | - | `src/blade/text/func_5e010002.c` | module-map |
| 0x5E010010 | core | 51 | `src/blade/text/func_5e010010.c` | module-map |
| 0x5E010043 | core | - | `src/blade/text/func_5e010043.c` | module-map |
| 0x5E0104C9 | core | - | `src/blade/text/func_5e0104c9.c` | module-map |
| 0x5E0104E0 | core | - | `src/blade/text/func_5e0104e0.c` | module-map |
| 0x5E0104F0 | core | - | `src/blade/text/func_5e0104f0.c` | module-map |
| 0x5E010500 | core | - | `src/blade/text/func_5e010500.c` | module-map |
| 0x5E010510 | core | - | `src/blade/text/func_5e010510.c` | module-map |
| 0x5E010520 | core | - | `src/blade/text/func_5e010520.c` | module-map |
| 0x5E010530 | core | - | `src/blade/text/func_5e010530.c` | module-map |
| 0x5E010540 | core | - | `src/blade/text/func_5e010540.c` | module-map |
| 0x5E010550 | core | - | `src/blade/text/func_5e010550.c` | module-map |
| 0x5E010560 | core | - | `src/blade/text/func_5e010560.c` | module-map |
| 0x5E010570 | core | - | `src/blade/text/func_5e010570.c` | module-map |
| 0x5E010580 | core | - | `src/blade/text/func_5e010580.c` | module-map |
| 0x5E010590 | core | - | `src/blade/text/func_5e010590.c` | module-map |
| 0x5E0105A0 | core | - | `src/blade/text/func_5e0105a0.c` | module-map |
| 0x5E0105B0 | core | - | `src/blade/text/func_5e0105b0.c` | module-map |
| 0x5E0105C0 | core | - | `src/blade/text/func_5e0105c0.c` | module-map |
| 0x5E0105D0 | core | - | `src/blade/text/func_5e0105d0.c` | module-map |
| 0x5E0105E0 | core | - | `src/blade/text/func_5e0105e0.c` | module-map |
| 0x5E0105F0 | core | - | `src/blade/text/func_5e0105f0.c` | module-map |
| 0x5E010600 | core | - | `src/blade/text/func_5e010600.c` | module-map |
| 0x5E010610 | core | - | `src/blade/text/func_5e010610.c` | module-map |
| 0x5E010620 | core | - | `src/blade/text/func_5e010620.c` | module-map |
| 0x5E010630 | core | - | `src/blade/text/func_5e010630.c` | module-map |
| 0x5E010640 | core | - | `src/blade/text/func_5e010640.c` | module-map |
| 0x5E010650 | core | - | `src/blade/text/func_5e010650.c` | module-map |
| 0x5E010660 | core | - | `src/blade/text/func_5e010660.c` | module-map |
| 0x5E010670 | core | - | `src/blade/text/func_5e010670.c` | module-map |
| 0x5E010680 | core | - | `src/blade/text/func_5e010680.c` | module-map |
| 0x5E010690 | core | - | `src/blade/text/func_5e010690.c` | module-map |
| 0x5E0106A0 | core | - | `src/blade/text/func_5e0106a0.c` | module-map |
| 0x5E0106B0 | core | - | `src/blade/text/func_5e0106b0.c` | module-map |
| 0x5E0106C0 | core | - | `src/blade/text/func_5e0106c0.c` | module-map |
| 0x5E0106D0 | core | - | `src/blade/text/func_5e0106d0.c` | module-map |
| 0x5E0106E0 | core | - | `src/blade/text/func_5e0106e0.c` | module-map |
| 0x5E0106F0 | core | - | `src/blade/text/func_5e0106f0.c` | module-map |
| 0x5E010700 | core | - | `src/blade/text/func_5e010700.c` | module-map |
| 0x5E010710 | core | - | `src/blade/text/func_5e010710.c` | module-map |
| 0x5E010720 | core | - | `src/blade/text/func_5e010720.c` | module-map |
| 0x5E010730 | core | - | `src/blade/text/func_5e010730.c` | module-map |
| 0x5E010740 | core | - | `src/blade/text/func_5e010740.c` | module-map |
| 0x5E010750 | core | - | `src/blade/text/func_5e010750.c` | module-map |
| 0x5E010760 | core | - | `src/blade/text/func_5e010760.c` | module-map |
| 0x5E010770 | core | - | `src/blade/text/func_5e010770.c` | module-map |
| 0x5E010780 | core | - | `src/blade/text/func_5e010780.c` | module-map |
| 0x5E010790 | core | - | `src/blade/text/func_5e010790.c` | module-map |
| 0x5E0107A0 | core | - | `src/blade/text/func_5e0107a0.c` | module-map |
| 0x5E0107B0 | core | - | `src/blade/text/func_5e0107b0.c` | module-map |
| 0x5E0107C0 | core | - | `src/blade/text/func_5e0107c0.c` | module-map |
| 0x5E0107D0 | core | - | `src/blade/text/func_5e0107d0.c` | module-map |
| 0x5E0107E0 | core | - | `src/blade/text/func_5e0107e0.c` | module-map |
| 0x5E0107F0 | core | - | `src/blade/text/func_5e0107f0.c` | module-map |
| 0x5E010800 | core | - | `src/blade/text/func_5e010800.c` | module-map |
| 0x5E010810 | core | - | `src/blade/text/func_5e010810.c` | module-map |
| 0x5E010820 | core | - | `src/blade/text/func_5e010820.c` | module-map |
| 0x5E010830 | core | - | `src/blade/text/func_5e010830.c` | module-map |
| 0x5E010840 | core | - | `src/blade/text/func_5e010840.c` | module-map |
| 0x5E010850 | core | - | `src/blade/text/func_5e010850.c` | module-map |
| 0x5E010860 | core | - | `src/blade/text/func_5e010860.c` | module-map |
| 0x5E010870 | core | - | `src/blade/text/func_5e010870.c` | module-map |
| 0x5E010880 | core | - | `src/blade/text/func_5e010880.c` | module-map |
| 0x5E010890 | core | - | `src/blade/text/func_5e010890.c` | module-map |
| 0x5E0108A0 | core | - | `src/blade/text/func_5e0108a0.c` | module-map |
| 0x5E0108B0 | core | - | `src/blade/text/func_5e0108b0.c` | module-map |
| 0x5E0108C0 | core | - | `src/blade/text/func_5e0108c0.c` | module-map |
| 0x5E0108D0 | core | - | `src/blade/text/func_5e0108d0.c` | module-map |
| 0x5E0108E0 | core | - | `src/blade/text/func_5e0108e0.c` | module-map |
| 0x5E0108F0 | core | - | `src/blade/text/func_5e0108f0.c` | module-map |
| 0x5E010900 | core | - | `src/blade/text/func_5e010900.c` | module-map |
| 0x5E010910 | core | - | `src/blade/text/func_5e010910.c` | module-map |
| 0x5E010920 | core | - | `src/blade/text/func_5e010920.c` | module-map |
| 0x5E010930 | core | - | `src/blade/text/func_5e010930.c` | module-map |
| 0x5E010940 | core | - | `src/blade/text/func_5e010940.c` | module-map |
| 0x5E010950 | core | - | `src/blade/text/func_5e010950.c` | module-map |
| 0x5E010960 | core | - | `src/blade/text/func_5e010960.c` | module-map |
| 0x5E010970 | core | - | `src/blade/text/func_5e010970.c` | module-map |
| 0x5E010980 | core | - | `src/blade/text/func_5e010980.c` | module-map |
| 0x5E010990 | core | - | `src/blade/text/func_5e010990.c` | module-map |
| 0x5E0109A0 | core | - | `src/blade/text/func_5e0109a0.c` | module-map |
| 0x5E0109B0 | core | - | `src/blade/text/func_5e0109b0.c` | module-map |
| 0x5E0109C0 | core | - | `src/blade/text/func_5e0109c0.c` | module-map |
| 0x5E0109D0 | core | - | `src/blade/text/func_5e0109d0.c` | module-map |
| 0x5E0109E0 | core | - | `src/blade/text/func_5e0109e0.c` | module-map |
| 0x5E0109F0 | core | - | `src/blade/text/func_5e0109f0.c` | module-map |
| 0x5E010A00 | core | - | `src/blade/text/func_5e010a00.c` | module-map |
| 0x5E010A10 | core | - | `src/blade/text/func_5e010a10.c` | module-map |
| 0x5E010A20 | core | - | `src/blade/text/func_5e010a20.c` | module-map |
| 0x5E010A30 | core | - | `src/blade/text/func_5e010a30.c` | module-map |
| 0x5E010A40 | core | - | `src/blade/text/func_5e010a40.c` | module-map |
| 0x5E010A50 | core | - | `src/blade/text/func_5e010a50.c` | module-map |
| 0x5E010A60 | core | - | `src/blade/text/func_5e010a60.c` | module-map |
| 0x5E010A70 | core | - | `src/blade/text/func_5e010a70.c` | module-map |
| 0x5E010BA0 | core | 16 | `src/blade/text/func_5e010ba0.c` | module-map |
| 0x5E010BB0 | core | 120 | `src/blade/text/func_5e010bb0.c` | module-map |
| 0x5E010C28 | core | - | `src/blade/text/func_5e010c28.c` | module-map |
| 0x5E010CB0 | core | 33 | `src/blade/text/func_5e010cb0.c` | module-map |
| 0x5E010CD1 | core | - | `src/blade/text/func_5e010cd1.c` | module-map |
| 0x5E010D30 | core | 43 | `src/blade/text/func_5e010d30.c` | module-map |
| 0x5E010D5B | core | - | `src/blade/text/func_5e010d5b.c` | module-map |
| 0x5E010DB0 | core | 100 | `src/blade/text/func_5e010db0.c` | module-map |
| 0x5E010E14 | core | - | `src/blade/text/func_5e010e14.c` | module-map |
| 0x5E010E20 | core | 38 | `src/blade/text/func_5e010e20.c` | module-map |
| 0x5E010E46 | core | - | `src/blade/text/func_5e010e46.c` | module-map |
| 0x5E010E50 | core | 43 | `src/blade/text/func_5e010e50.c` | module-map |
| 0x5E010E7B | core | - | `src/blade/text/func_5e010e7b.c` | module-map |
| 0x5E010FF0 | core | 33 | `src/blade/text/func_5e010ff0.c` | module-map |
| 0x5E011011 | core | - | `src/blade/text/func_5e011011.c` | module-map |
| 0x5E011020 | core | 33 | `src/blade/text/func_5e011020.c` | module-map |
| 0x5E011041 | core | - | `src/blade/text/func_5e011041.c` | module-map |
| 0x5E011050 | core | 33 | `src/blade/text/func_5e011050.c` | module-map |
| 0x5E011071 | core | - | `src/blade/text/func_5e011071.c` | module-map |
| 0x5E011088 | core | - | `src/blade/text/func_5e011088.c` | module-map |
| 0x5E011090 | core | 33 | `src/blade/text/func_5e011090.c` | module-map |
| 0x5E0110B1 | core | - | `src/blade/text/func_5e0110b1.c` | module-map |
| 0x5E0110C0 | core | 33 | `src/blade/text/func_5e0110c0.c` | module-map |
| 0x5E0110E1 | core | - | `src/blade/text/func_5e0110e1.c` | module-map |
| 0x5E0110F0 | core | 38 | `src/blade/text/func_5e0110f0.c` | module-map |
| 0x5E011116 | core | - | `src/blade/text/func_5e011116.c` | module-map |
| 0x5E011120 | core | 33 | `src/blade/text/func_5e011120.c` | module-map |
| 0x5E011141 | core | - | `src/blade/text/func_5e011141.c` | module-map |
| 0x5E011150 | core | 33 | `src/blade/text/func_5e011150.c` | module-map |
| 0x5E011171 | core | - | `src/blade/text/func_5e011171.c` | module-map |
| 0x5E011180 | core | 55 | `src/blade/text/func_5e011180.c` | module-map |
| 0x5E0111B7 | core | - | `src/blade/text/func_5e0111b7.c` | module-map |
| 0x5E0111C0 | core | 38 | `src/blade/text/func_5e0111c0.c` | module-map |
| 0x5E0111E6 | core | - | `src/blade/text/func_5e0111e6.c` | module-map |
| 0x5E0111F0 | core | 28 | `src/blade/text/func_5e0111f0.c` | module-map |
| 0x5E01120C | core | - | `src/blade/text/func_5e01120c.c` | module-map |
| 0x5E011210 | core | 51 | `src/blade/text/func_5e011210.c` | module-map |
| 0x5E011243 | core | - | `src/blade/text/func_5e011243.c` | module-map |
| 0x5E011250 | core | 33 | `src/blade/text/func_5e011250.c` | module-map |
| 0x5E011271 | core | - | `src/blade/text/func_5e011271.c` | module-map |
| 0x5E011280 | core | 28 | `src/blade/text/func_5e011280.c` | module-map |
| 0x5E01129C | core | - | `src/blade/text/func_5e01129c.c` | module-map |
| 0x5E0112A0 | core | 33 | `src/blade/text/func_5e0112a0.c` | module-map |
| 0x5E0112C1 | core | - | `src/blade/text/func_5e0112c1.c` | module-map |
| 0x5E0112D8 | core | - | `src/blade/text/func_5e0112d8.c` | module-map |
| 0x5E0112E0 | core | 38 | `src/blade/text/func_5e0112e0.c` | module-map |
| 0x5E011306 | core | - | `src/blade/text/func_5e011306.c` | module-map |
| 0x5E011310 | core | 33 | `src/blade/text/func_5e011310.c` | module-map |
| 0x5E011331 | core | - | `src/blade/text/func_5e011331.c` | module-map |
| 0x5E011340 | core | 36 | `src/blade/text/func_5e011340.c` | module-map |
| 0x5E011364 | core | - | `src/blade/text/func_5e011364.c` | module-map |
| 0x5E0113B0 | core | 36 | `src/blade/text/func_5e0113b0.c` | module-map |
| 0x5E0113D4 | core | - | `src/blade/text/func_5e0113d4.c` | module-map |
| 0x5E011720 | core | 33 | `src/blade/text/func_5e011720.c` | module-map |
| 0x5E011741 | core | - | `src/blade/text/func_5e011741.c` | module-map |
| 0x5E011750 | core | 263 | `src/blade/text/func_5e011750.c` | module-map |
| 0x5E011857 | core | - | `src/blade/text/func_5e011857.c` | module-map |
| 0x5E011870 | core | 282 | `src/blade/text/func_5e011870.c` | module-map |
| 0x5E01198A | core | - | `src/blade/text/func_5e01198a.c` | module-map |
| 0x5E011990 | core | 36 | `src/blade/text/func_5e011990.c` | module-map |
| 0x5E0119B4 | core | - | `src/blade/text/func_5e0119b4.c` | module-map |
| 0x5E011A50 | core | 50 | `src/blade/text/func_5e011a50.c` | module-map |
| 0x5E011A82 | core | - | `src/blade/text/func_5e011a82.c` | module-map |
| 0x5E011A98 | core | - | `src/blade/text/func_5e011a98.c` | module-map |
| 0x5E011AA8 | core | - | `src/blade/text/func_5e011aa8.c` | module-map |
| 0x5E011AB8 | core | - | `src/blade/text/func_5e011ab8.c` | module-map |
| 0x5E011AC8 | core | - | `src/blade/text/func_5e011ac8.c` | module-map |
| 0x5E011AD8 | core | - | `src/blade/text/func_5e011ad8.c` | module-map |
| 0x5E011AE8 | core | - | `src/blade/text/func_5e011ae8.c` | module-map |
| 0x5E011AF8 | core | - | `src/blade/text/func_5e011af8.c` | module-map |
| 0x5E011B08 | core | - | `src/blade/text/func_5e011b08.c` | module-map |
| 0x5E011BD0 | core | 18 | `src/blade/text/func_5e011bd0.c` | module-map |
| 0x5E011BE2 | core | - | `src/blade/text/func_5e011be2.c` | module-map |
| 0x5E011BF0 | core | 448 | `src/blade/text/func_5e011bf0.c` | module-map |
| 0x5E011DB0 | core | - | `src/blade/text/func_5e011db0.c` | module-map |
| 0x5E011EB0 | core | 141 | `src/blade/text/func_5e011eb0.c` | module-map |
| 0x5E011F3D | core | - | `src/blade/text/func_5e011f3d.c` | module-map |

### crt

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E02B468 | core | - | `src/blade/text/func_5e02b468.c` | module-map |
| 0x5E02B46C | core | 23 | `src/blade/text/func_5e02b46c.c` | module-map |
| 0x5E02B483 | core | - | `src/blade/text/func_5e02b483.c` | module-map |
| 0x5E02B484 | core | 56 | `src/blade/text/func_5e02b484.c` | module-map |
| 0x5E02B4BC | core | - | `src/blade/text/func_5e02b4bc.c` | module-map |
| 0x5E02B4F3 | core | 217 | `src/blade/text/func_5e02b4f3.c` | module-map |
| 0x5E02B5CC | core | 157 | `src/blade/text/func_5e02b5cc.c` | module-map |
| 0x5E02E35D | core | - | `src/blade/text/func_5e02e35d.c` | module-map |
| 0x5E02E360 | core | - | `src/blade/text/func_5e02e360.c` | module-map |
| 0x5E02E370 | core | 664 | `src/blade/text/func_5e02e370.c` | module-map |
| 0x5E02E6B0 | core | 123 | `src/blade/text/func_5e02e6b0.c` | module-map |
| 0x5E02E72B | core | - | `src/blade/text/func_5e02e72b.c` | module-map |
| 0x5E02E734 | core | 141 | `src/blade/text/func_5e02e734.c` | module-map |
| 0x5E02E7C1 | core | 318 | `src/blade/text/func_5e02e7c1.c` | module-map |
| 0x5E02E8FF | core | 58 | `src/blade/text/func_5e02e8ff.c` | module-map |
| 0x5E02E939 | core | 429 | `src/blade/text/func_5e02e939.c` | module-map |
| 0x5E02EAE6 | core | 74 | `src/blade/text/func_5e02eae6.c` | module-map |
| 0x5E02EB30 | core | 51 | `src/blade/text/func_5e02eb30.c` | module-map |
| 0x5E02EB63 | core | 41 | `src/blade/text/func_5e02eb63.c` | module-map |
| 0x5E02EB8C | core | 389 | `src/blade/text/func_5e02eb8c.c` | module-map |
| 0x5E02ED11 | core | - | `src/blade/text/func_5e02ed11.c` | module-map |
| 0x5E02ED21 | core | 28 | `src/blade/text/func_5e02ed21.c` | module-map |
| 0x5E02ED3D | core | - | `src/blade/text/func_5e02ed3d.c` | module-map |
| 0x5E02ED40 | core | 664 | `src/blade/text/func_5e02ed40.c` | module-map |
| 0x5E02F075 | core | 137 | `src/blade/text/func_5e02f075.c` | module-map |
| 0x5E02F0FE | core | - | `src/blade/text/func_5e02f0fe.c` | module-map |
| 0x5E02F100 | core | 254 | `src/blade/text/func_5e02f100.c` | module-map |
| 0x5E02F1FE | core | 386 | `src/blade/text/func_5e02f1fe.c` | module-map |
| 0x5E02F380 | core | - | `src/blade/text/func_5e02f380.c` | module-map |
| 0x5E02F3E2 | core | 386 | `src/blade/text/func_5e02f3e2.c` | module-map |
| 0x5E02F564 | core | 61 | `src/blade/text/func_5e02f564.c` | module-map |
| 0x5E02F5A1 | core | - | `src/blade/text/func_5e02f5a1.c` | module-map |
| 0x5E02F5B3 | core | 318 | `src/blade/text/func_5e02f5b3.c` | module-map |
| 0x5E02F6FC | core | 582 | `src/blade/text/func_5e02f6fc.c` | module-map |
| 0x5E02F942 | core | 283 | `src/blade/text/func_5e02f942.c` | module-map |
| 0x5E02FA5D | core | 185 | `src/blade/text/func_5e02fa5d.c` | module-map |
| 0x5E02FB16 | core | 280 | `src/blade/text/func_5e02fb16.c` | module-map |
| 0x5E02FC2E | core | - | `src/blade/text/func_5e02fc2e.c` | module-map |
| 0x5E02FC31 | core | 37 | `src/blade/text/func_5e02fc31.c` | module-map |
| 0x5E02FC56 | core | 204 | `src/blade/text/func_5e02fc56.c` | module-map |
| 0x5E02FD22 | core | 83 | `src/blade/text/func_5e02fd22.c` | module-map |
| 0x5E02FD75 | core | 511 | `src/blade/text/func_5e02fd75.c` | module-map |
| 0x5E02FF99 | core | 43 | `src/blade/text/func_5e02ff99.c` | module-map |
| 0x5E02FFC4 | core | 33 | `src/blade/text/func_5e02ffc4.c` | module-map |
| 0x5E02FFE5 | core | 94 | `src/blade/text/func_5e02ffe5.c` | module-map |
| 0x5E030043 | core | 46 | `src/blade/text/func_5e030043.c` | module-map |
| 0x5E030071 | core | 45 | `src/blade/text/func_5e030071.c` | module-map |
| 0x5E03009E | core | 199 | `src/blade/text/func_5e03009e.c` | module-map |
| 0x5E030165 | core | 1185 | `src/blade/text/func_5e030165.c` | module-map |
| 0x5E030606 | core | - | `src/blade/text/func_5e030606.c` | module-map |
| 0x5E030636 | core | 60 | `src/blade/text/func_5e030636.c` | module-map |
| 0x5E030672 | core | 659 | `src/blade/text/func_5e030672.c` | module-map |
| 0x5E030905 | core | - | `src/blade/text/func_5e030905.c` | module-map |
| 0x5E030978 | core | 9 | `src/blade/text/func_5e030978.c` | module-map |
| 0x5E030981 | core | 9 | `src/blade/text/func_5e030981.c` | module-map |
| 0x5E03098A | core | - | `src/blade/text/func_5e03098a.c` | module-map |
| 0x5E03098C | core | 32 | `src/blade/text/func_5e03098c.c` | module-map |
| 0x5E0309AC | core | - | `src/blade/text/func_5e0309ac.c` | module-map |
| 0x5E0309CE | core | 104 | `src/blade/text/func_5e0309ce.c` | module-map |
| 0x5E030A36 | core | - | `src/blade/text/func_5e030a36.c` | module-map |
| 0x5E030A62 | core | 24 | `src/blade/text/func_5e030a62.c` | module-map |
| 0x5E030A7A | core | - | `src/blade/text/func_5e030a7a.c` | module-map |
| 0x5E030B41 | core | 27 | `src/blade/text/func_5e030b41.c` | module-map |
| 0x5E030B5C | core | - | `src/blade/text/func_5e030b5c.c` | module-map |
| 0x5E030B60 | core | 47 | `src/blade/text/func_5e030b60.c` | module-map |
| 0x5E030B8F | core | - | `src/blade/text/func_5e030b8f.c` | module-map |
| 0x5E030C20 | core | 846 | `src/blade/text/func_5e030c20.c` | module-map |
| 0x5E030F6E | core | 400 | `src/blade/text/func_5e030f6e.c` | module-map |
| 0x5E0310FE | core | - | `src/blade/text/func_5e0310fe.c` | module-map |
| 0x5E0312D3 | core | 55 | `src/blade/text/func_5e0312d3.c` | module-map |
| 0x5E03130A | core | - | `src/blade/text/func_5e03130a.c` | module-map |
| 0x5E0313D5 | core | 290 | `src/blade/text/func_5e0313d5.c` | module-map |
| 0x5E0314F7 | core | 55 | `src/blade/text/func_5e0314f7.c` | module-map |
| 0x5E03152E | core | 78 | `src/blade/text/func_5e03152e.c` | module-map |
| 0x5E03157C | core | 581 | `src/blade/text/func_5e03157c.c` | module-map |
| 0x5E0317C1 | core | - | `src/blade/text/func_5e0317c1.c` | module-map |
| 0x5E0317D0 | core | 129 | `src/blade/text/func_5e0317d0.c` | module-map |
| 0x5E031854 | core | - | `src/blade/text/func_5e031854.c` | module-map |
| 0x5E031860 | core | 62 | `src/blade/text/func_5e031860.c` | module-map |
| 0x5E03189E | core | - | `src/blade/text/func_5e03189e.c` | module-map |
| 0x5E0318A0 | core | 56 | `src/blade/text/func_5e0318a0.c` | module-map |
| 0x5E0318D8 | core | - | `src/blade/text/func_5e0318d8.c` | module-map |
| 0x5E0318E0 | core | 58 | `src/blade/text/func_5e0318e0.c` | module-map |
| 0x5E03191A | core | 381 | `src/blade/text/func_5e03191a.c` | module-map |
| 0x5E031A97 | core | 88 | `src/blade/text/func_5e031a97.c` | module-map |
| 0x5E031AEF | core | 135 | `src/blade/text/func_5e031aef.c` | module-map |
| 0x5E031B76 | core | 516 | `src/blade/text/func_5e031b76.c` | module-map |
| 0x5E031D7A | core | 86 | `src/blade/text/func_5e031d7a.c` | module-map |
| 0x5E031DD0 | core | 189 | `src/blade/text/func_5e031dd0.c` | module-map |
| 0x5E031E8D | core | 55 | `src/blade/text/func_5e031e8d.c` | module-map |
| 0x5E031EC4 | core | 134 | `src/blade/text/func_5e031ec4.c` | module-map |
| 0x5E031F4A | core | 26 | `src/blade/text/func_5e031f4a.c` | module-map |
| 0x5E031F64 | core | 102 | `src/blade/text/func_5e031f64.c` | module-map |
| 0x5E031FCA | core | 31 | `src/blade/text/func_5e031fca.c` | module-map |
| 0x5E031FE9 | core | 98 | `src/blade/text/func_5e031fe9.c` | module-map |
| 0x5E03204B | core | 54 | `src/blade/text/func_5e03204b.c` | module-map |
| 0x5E032081 | core | 230 | `src/blade/text/func_5e032081.c` | module-map |
| 0x5E032167 | core | 57 | `src/blade/text/func_5e032167.c` | module-map |
| 0x5E0321A0 | core | 33 | `src/blade/text/func_5e0321a0.c` | module-map |
| 0x5E0321C1 | core | 544 | `src/blade/text/func_5e0321c1.c` | module-map |
| 0x5E0323E1 | core | 124 | `src/blade/text/func_5e0323e1.c` | module-map |
| 0x5E03245D | core | 143 | `src/blade/text/func_5e03245d.c` | module-map |
| 0x5E0324EC | core | 149 | `src/blade/text/func_5e0324ec.c` | module-map |
| 0x5E032581 | core | 562 | `src/blade/text/func_5e032581.c` | module-map |
| 0x5E0327B3 | core | - | `src/blade/text/func_5e0327b3.c` | module-map |
| 0x5E0327CE | core | 250 | `src/blade/text/func_5e0327ce.c` | module-map |
| 0x5E0328C8 | core | 1007 | `src/blade/text/func_5e0328c8.c` | module-map |
| 0x5E032CB7 | core | 39 | `src/blade/text/func_5e032cb7.c` | module-map |
| 0x5E032CDE | core | 111 | `src/blade/text/func_5e032cde.c` | module-map |
| 0x5E032D4D | core | 73 | `src/blade/text/func_5e032d4d.c` | module-map |
| 0x5E032D96 | core | 719 | `src/blade/text/func_5e032d96.c` | module-map |
| 0x5E033065 | core | 312 | `src/blade/text/func_5e033065.c` | module-map |
| 0x5E03319D | core | - | `src/blade/text/func_5e03319d.c` | module-map |
| 0x5E0331A3 | core | 423 | `src/blade/text/func_5e0331a3.c` | module-map |
| 0x5E033368 | core | 45 | `src/blade/text/func_5e033368.c` | module-map |
| 0x5E033395 | core | 92 | `src/blade/text/func_5e033395.c` | module-map |
| 0x5E0333F1 | core | 42 | `src/blade/text/func_5e0333f1.c` | module-map |
| 0x5E03341B | core | - | `src/blade/text/func_5e03341b.c` | module-map |
| 0x5E033436 | core | 49 | `src/blade/text/func_5e033436.c` | module-map |
| 0x5E033467 | core | 134 | `src/blade/text/func_5e033467.c` | module-map |
| 0x5E0334ED | core | 27 | `src/blade/text/func_5e0334ed.c` | module-map |
| 0x5E033508 | core | - | `src/blade/text/func_5e033508.c` | module-map |
| 0x5E033510 | core | 208 | `src/blade/text/func_5e033510.c` | module-map |
| 0x5E0335E0 | core | 257 | `src/blade/text/func_5e0335e0.c` | module-map |
| 0x5E0336E1 | core | 139 | `src/blade/text/func_5e0336e1.c` | module-map |
| 0x5E03376C | core | - | `src/blade/text/func_5e03376c.c` | module-map |
| 0x5E033831 | core | 46 | `src/blade/text/func_5e033831.c` | module-map |
| 0x5E03385F | core | - | `src/blade/text/func_5e03385f.c` | module-map |
| 0x5E033875 | core | 647 | `src/blade/text/func_5e033875.c` | module-map |
| 0x5E033AFC | core | - | `src/blade/text/func_5e033afc.c` | module-map |
| 0x5E033B1D | core | 428 | `src/blade/text/func_5e033b1d.c` | module-map |
| 0x5E033CC9 | core | 320 | `src/blade/text/func_5e033cc9.c` | module-map |
| 0x5E033E09 | core | 264 | `src/blade/text/func_5e033e09.c` | module-map |
| 0x5E033F1C | core | 275 | `src/blade/text/func_5e033f1c.c` | module-map |
| 0x5E03403A | core | - | `src/blade/text/func_5e03403a.c` | module-map |
| 0x5E034040 | core | 104 | `src/blade/text/func_5e034040.c` | module-map |
| 0x5E0340A8 | core | - | `src/blade/text/func_5e0340a8.c` | module-map |
| 0x5E0340B0 | core | 117 | `src/blade/text/func_5e0340b0.c` | module-map |
| 0x5E034125 | core | - | `src/blade/text/func_5e034125.c` | module-map |
| 0x5E034185 | core | 125 | `src/blade/text/func_5e034185.c` | module-map |
| 0x5E034202 | core | 63 | `src/blade/text/func_5e034202.c` | module-map |
| 0x5E034241 | core | 110 | `src/blade/text/func_5e034241.c` | module-map |
| 0x5E0342AF | core | 597 | `src/blade/text/func_5e0342af.c` | module-map |
| 0x5E03452C | core | 43 | `src/blade/text/func_5e03452c.c` | module-map |
| 0x5E034557 | core | 391 | `src/blade/text/func_5e034557.c` | module-map |
| 0x5E0346DE | core | 88 | `src/blade/text/func_5e0346de.c` | module-map |
| 0x5E034736 | core | 103 | `src/blade/text/func_5e034736.c` | module-map |
| 0x5E03479D | core | 312 | `src/blade/text/func_5e03479d.c` | module-map |
| 0x5E0348D5 | core | 151 | `src/blade/text/func_5e0348d5.c` | module-map |
| 0x5E03496C | core | 43 | `src/blade/text/func_5e03496c.c` | module-map |
| 0x5E034997 | core | - | `src/blade/text/func_5e034997.c` | module-map |
| 0x5E0349B0 | core | 193 | `src/blade/text/func_5e0349b0.c` | module-map |
| 0x5E034A6C | core | - | `src/blade/text/func_5e034a6c.c` | module-map |
| 0x5E034B98 | core | 6 | `src/blade/text/func_5e034b98.c` | module-map |
| 0x5E034B9E | core | - | `src/blade/text/func_5e034b9e.c` | module-map |

### facade

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E001032 | core | - | `src/blade/text/func_5e001032.c` | module-map |
| 0x5E0011B1 | core | - | `src/blade/text/func_5e0011b1.c` | module-map |
| 0x5E0013B3 | core | - | `src/blade/text/func_5e0013b3.c` | module-map |
| 0x5E0013E8 | core | - | `src/blade/text/func_5e0013e8.c` | module-map |
| 0x5E001413 | core | - | `src/blade/text/func_5e001413.c` | module-map |
| 0x5E001443 | core | - | `src/blade/text/func_5e001443.c` | module-map |
| 0x5E001478 | core | - | `src/blade/text/func_5e001478.c` | module-map |
| 0x5E0014E4 | core | - | `src/blade/text/func_5e0014e4.c` | module-map |
| 0x5E001510 | core | 241 | `src/blade/text/func_5e001510.c` | module-map |
| 0x5E001601 | core | - | `src/blade/text/func_5e001601.c` | module-map |
| 0x5E0019B0 | core | 16 | `src/blade/text/func_5e0019b0.c` | module-map |
| 0x5E0019C0 | core | - | `src/blade/text/func_5e0019c0.c` | module-map |
| 0x5E001AB0 | core | 16 | `src/blade/text/func_5e001ab0.c` | module-map |
| 0x5E001AC0 | core | - | `src/blade/text/func_5e001ac0.c` | module-map |
| 0x5E001B00 | core | 48 | `src/blade/text/func_5e001b00.c` | module-map |
| 0x5E001B30 | core | - | `src/blade/text/func_5e001b30.c` | module-map |
| 0x5E001B60 | core | 640 | `src/blade/text/func_5e001b60.c` | module-map |
| 0x5E001DE0 | core | 450 | `src/blade/text/func_5e001de0.c` | module-map |
| 0x5E001FA2 | core | - | `src/blade/text/func_5e001fa2.c` | module-map |
| 0x5E001FD0 | core | 77 | `src/blade/text/func_5e001fd0.c` | module-map |
| 0x5E00201D | core | - | `src/blade/text/func_5e00201d.c` | module-map |
| 0x5E002020 | core | 253 | `src/blade/text/func_5e002020.c` | module-map |
| 0x5E00211D | core | - | `src/blade/text/func_5e00211d.c` | module-map |
| 0x5E002120 | core | 167 | `src/blade/text/func_5e002120.c` | module-map |
| 0x5E0021C7 | core | - | `src/blade/text/func_5e0021c7.c` | module-map |
| 0x5E002220 | core | 276 | `src/blade/text/func_5e002220.c` | module-map |
| 0x5E002334 | core | - | `src/blade/text/func_5e002334.c` | module-map |
| 0x5E0023DB | core | - | `src/blade/text/func_5e0023db.c` | module-map |
| 0x5E00242B | core | - | `src/blade/text/func_5e00242b.c` | module-map |
| 0x5E002430 | core | 448 | `src/blade/text/func_5e002430.c` | module-map |
| 0x5E0025F0 | core | 138 | `src/blade/text/func_5e0025f0.c` | module-map |
| 0x5E00267A | core | - | `src/blade/text/func_5e00267a.c` | module-map |
| 0x5E0026A0 | core | 391 | `src/blade/text/func_5e0026a0.c` | module-map |
| 0x5E002827 | core | - | `src/blade/text/func_5e002827.c` | module-map |
| 0x5E002B70 | core | 315 | `src/blade/text/func_5e002b70.c` | module-map |
| 0x5E002CAB | core | - | `src/blade/text/func_5e002cab.c` | module-map |
| 0x5E002E50 | core | 16 | `src/blade/text/func_5e002e50.c` | module-map |
| 0x5E002E60 | core | - | `src/blade/text/func_5e002e60.c` | module-map |
| 0x5E002F30 | core | 56 | `src/blade/text/func_5e002f30.c` | module-map |
| 0x5E002F68 | core | - | `src/blade/text/func_5e002f68.c` | module-map |
| 0x5E003000 | core | 41 | `src/blade/text/func_5e003000.c` | module-map |
| 0x5E003029 | core | - | `src/blade/text/func_5e003029.c` | module-map |
| 0x5E003050 | core | 31 | `src/blade/text/func_5e003050.c` | module-map |
| 0x5E00306F | core | - | `src/blade/text/func_5e00306f.c` | module-map |
| 0x5E003070 | core | 28 | `src/blade/text/func_5e003070.c` | module-map |
| 0x5E00308C | core | - | `src/blade/text/func_5e00308c.c` | module-map |
| 0x5E003390 | core | 103 | `src/blade/text/func_5e003390.c` | module-map |
| 0x5E0033F7 | core | - | `src/blade/text/func_5e0033f7.c` | module-map |
| 0x5E003400 | core | 22 | `src/blade/text/func_5e003400.c` | module-map |
| 0x5E003416 | core | - | `src/blade/text/func_5e003416.c` | module-map |
| 0x5E003420 | core | 286 | `src/blade/text/func_5e003420.c` | module-map |
| 0x5E00353E | core | - | `src/blade/text/func_5e00353e.c` | module-map |
| 0x5E003550 | core | 85 | `src/blade/text/func_5e003550.c` | module-map |
| 0x5E0035A5 | core | - | `src/blade/text/func_5e0035a5.c` | module-map |
| 0x5E003630 | core | 83 | `src/blade/text/func_5e003630.c` | module-map |
| 0x5E003683 | core | - | `src/blade/text/func_5e003683.c` | module-map |
| 0x5E003750 | core | 48 | `src/blade/text/func_5e003750.c` | module-map |
| 0x5E003780 | core | 286 | `src/blade/text/func_5e003780.c` | module-map |
| 0x5E00389E | core | - | `src/blade/text/func_5e00389e.c` | module-map |
| 0x5E003910 | core | 30 | `src/blade/text/func_5e003910.c` | module-map |
| 0x5E00392E | core | - | `src/blade/text/func_5e00392e.c` | module-map |
| 0x5E003930 | core | 30 | `src/blade/text/func_5e003930.c` | module-map |
| 0x5E00394E | core | - | `src/blade/text/func_5e00394e.c` | module-map |
| 0x5E003950 | core | 10 | `src/blade/text/func_5e003950.c` | module-map |
| 0x5E00395A | core | - | `src/blade/text/func_5e00395a.c` | module-map |
| 0x5E003960 | core | 8 | `src/blade/text/func_5e003960.c` | module-map |
| 0x5E003968 | core | - | `src/blade/text/func_5e003968.c` | module-map |
| 0x5E003970 | core | 257 | `src/blade/text/func_5e003970.c` | module-map |
| 0x5E003A71 | core | - | `src/blade/text/func_5e003a71.c` | module-map |
| 0x5E003A80 | core | 568 | `src/blade/text/func_5e003a80.c` | module-map |
| 0x5E003CB8 | core | - | `src/blade/text/func_5e003cb8.c` | module-map |
| 0x5E0040A6 | core | - | `src/blade/text/func_5e0040a6.c` | module-map |
| 0x5E0042BE | core | - | `src/blade/text/func_5e0042be.c` | module-map |
| 0x5E00448E | core | - | `src/blade/text/func_5e00448e.c` | module-map |
| 0x5E0045AC | core | - | `src/blade/text/func_5e0045ac.c` | module-map |
| 0x5E004676 | core | - | `src/blade/text/func_5e004676.c` | module-map |
| 0x5E00479C | core | - | `src/blade/text/func_5e00479c.c` | module-map |
| 0x5E004866 | core | - | `src/blade/text/func_5e004866.c` | module-map |
| 0x5E00498C | core | - | `src/blade/text/func_5e00498c.c` | module-map |
| 0x5E004A56 | core | - | `src/blade/text/func_5e004a56.c` | module-map |
| 0x5E004B81 | core | - | `src/blade/text/func_5e004b81.c` | module-map |
| 0x5E004C5C | core | - | `src/blade/text/func_5e004c5c.c` | module-map |
| 0x5E004D7C | core | - | `src/blade/text/func_5e004d7c.c` | module-map |
| 0x5E004E46 | core | - | `src/blade/text/func_5e004e46.c` | module-map |
| 0x5E004F71 | core | - | `src/blade/text/func_5e004f71.c` | module-map |
| 0x5E00504C | core | - | `src/blade/text/func_5e00504c.c` | module-map |
| 0x5E005217 | core | - | `src/blade/text/func_5e005217.c` | module-map |
| 0x5E005416 | core | - | `src/blade/text/func_5e005416.c` | module-map |
| 0x5E005588 | core | - | `src/blade/text/func_5e005588.c` | module-map |
| 0x5E005590 | core | 130 | `src/blade/text/func_5e005590.c` | module-map |
| 0x5E00562A | core | - | `src/blade/text/func_5e00562a.c` | module-map |
| 0x5E005630 | core | 115 | `src/blade/text/func_5e005630.c` | module-map |
| 0x5E0056A3 | core | - | `src/blade/text/func_5e0056a3.c` | module-map |
| 0x5E0056B0 | core | 208 | `src/blade/text/func_5e0056b0.c` | module-map |
| 0x5E005780 | core | - | `src/blade/text/func_5e005780.c` | module-map |
| 0x5E0092D2 | core | - | `src/blade/text/func_5e0092d2.c` | module-map |
| 0x5E00DF0A | core | - | `src/blade/text/func_5e00df0a.c` | module-map |
| 0x5E00DFD8 | core | - | `src/blade/text/func_5e00dfd8.c` | module-map |
| 0x5E00DFE8 | core | - | `src/blade/text/func_5e00dfe8.c` | module-map |
| 0x5E00E018 | core | - | `src/blade/text/func_5e00e018.c` | module-map |
| 0x5E00E020 | core | 54 | `src/blade/text/func_5e00e020.c` | module-map |
| 0x5E00E056 | core | - | `src/blade/text/func_5e00e056.c` | module-map |
| 0x5E00E060 | core | 140 | `src/blade/text/func_5e00e060.c` | module-map |
| 0x5E00E0EC | core | - | `src/blade/text/func_5e00e0ec.c` | module-map |
| 0x5E00E0F0 | core | 18 | `src/blade/text/func_5e00e0f0.c` | module-map |
| 0x5E00E102 | core | - | `src/blade/text/func_5e00e102.c` | module-map |
| 0x5E00E111 | core | - | `src/blade/text/func_5e00e111.c` | module-map |
| 0x5E00E120 | core | 54 | `src/blade/text/func_5e00e120.c` | module-map |
| 0x5E00E156 | core | - | `src/blade/text/func_5e00e156.c` | module-map |
| 0x5E00E160 | core | 45 | `src/blade/text/func_5e00e160.c` | module-map |
| 0x5E00E18D | core | - | `src/blade/text/func_5e00e18d.c` | module-map |
| 0x5E00E190 | core | 129 | `src/blade/text/func_5e00e190.c` | module-map |
| 0x5E00E211 | core | - | `src/blade/text/func_5e00e211.c` | module-map |
| 0x5E00E342 | core | - | `src/blade/text/func_5e00e342.c` | module-map |
| 0x5E02852D | core | 925 | `src/blade/text/func_5e02852d.c` | module-map |
| 0x5E0288CA | core | - | `src/blade/text/func_5e0288ca.c` | module-map |

### caps

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E01220D | core | - | `src/blade/text/func_5e01220d.c` | module-map |
| 0x5E012426 | core | - | `src/blade/text/func_5e012426.c` | module-map |
| 0x5E012CF0 | core | 246 | `src/blade/text/func_5e012cf0.c` | module-map |
| 0x5E012DE6 | core | - | `src/blade/text/func_5e012de6.c` | module-map |
| 0x5E012DF0 | core | 186 | `src/blade/text/func_5e012df0.c` | module-map |
| 0x5E012EAA | core | - | `src/blade/text/func_5e012eaa.c` | module-map |
| 0x5E0131F2 | core | - | `src/blade/text/func_5e0131f2.c` | module-map |
| 0x5E013200 | core | 1122 | `src/blade/text/func_5e013200.c` | module-map |
| 0x5E013662 | core | - | `src/blade/text/func_5e013662.c` | module-map |
| 0x5E013670 | core | 15 | `src/blade/text/func_5e013670.c` | module-map |
| 0x5E01367F | core | - | `src/blade/text/func_5e01367f.c` | module-map |
| 0x5E013680 | core | 48 | `src/blade/text/func_5e013680.c` | module-map |
| 0x5E0136B0 | core | 15 | `src/blade/text/func_5e0136b0.c` | module-map |
| 0x5E0136BF | core | - | `src/blade/text/func_5e0136bf.c` | module-map |
| 0x5E0136C0 | core | 15 | `src/blade/text/func_5e0136c0.c` | module-map |
| 0x5E0136CF | core | - | `src/blade/text/func_5e0136cf.c` | module-map |
| 0x5E013730 | core | 582 | `src/blade/text/func_5e013730.c` | module-map |
| 0x5E013976 | core | - | `src/blade/text/func_5e013976.c` | module-map |
| 0x5E013980 | core | 449 | `src/blade/text/func_5e013980.c` | module-map |
| 0x5E013B41 | core | - | `src/blade/text/func_5e013b41.c` | module-map |
| 0x5E013B50 | core | 114 | `src/blade/text/func_5e013b50.c` | module-map |
| 0x5E013BC2 | core | - | `src/blade/text/func_5e013bc2.c` | module-map |
| 0x5E013BD0 | core | 225 | `src/blade/text/func_5e013bd0.c` | module-map |
| 0x5E013CB1 | core | - | `src/blade/text/func_5e013cb1.c` | module-map |
| 0x5E013CC0 | core | 911 | `src/blade/text/func_5e013cc0.c` | module-map |
| 0x5E01404F | core | - | `src/blade/text/func_5e01404f.c` | module-map |
| 0x5E014050 | core | 1096 | `src/blade/text/func_5e014050.c` | module-map |
| 0x5E014498 | core | - | `src/blade/text/func_5e014498.c` | module-map |
| 0x5E0144A0 | core | 449 | `src/blade/text/func_5e0144a0.c` | module-map |
| 0x5E014661 | core | - | `src/blade/text/func_5e014661.c` | module-map |
| 0x5E014670 | core | 306 | `src/blade/text/func_5e014670.c` | module-map |
| 0x5E0147A2 | core | - | `src/blade/text/func_5e0147a2.c` | module-map |
| 0x5E0147B0 | core | 1026 | `src/blade/text/func_5e0147b0.c` | module-map |
| 0x5E014BB2 | core | - | `src/blade/text/func_5e014bb2.c` | module-map |
| 0x5E014BC0 | core | 1017 | `src/blade/text/func_5e014bc0.c` | module-map |
| 0x5E014FB9 | core | - | `src/blade/text/func_5e014fb9.c` | module-map |
| 0x5E014FC0 | core | 714 | `src/blade/text/func_5e014fc0.c` | module-map |
| 0x5E01528A | core | - | `src/blade/text/func_5e01528a.c` | module-map |
| 0x5E015290 | core | 186 | `src/blade/text/func_5e015290.c` | module-map |
| 0x5E01534A | core | - | `src/blade/text/func_5e01534a.c` | module-map |
| 0x5E015350 | core | 566 | `src/blade/text/func_5e015350.c` | module-map |
| 0x5E015586 | core | - | `src/blade/text/func_5e015586.c` | module-map |
| 0x5E015590 | core | 783 | `src/blade/text/func_5e015590.c` | module-map |
| 0x5E01589F | core | - | `src/blade/text/func_5e01589f.c` | module-map |
| 0x5E0158A0 | core | 222 | `src/blade/text/func_5e0158a0.c` | module-map |
| 0x5E01597E | core | - | `src/blade/text/func_5e01597e.c` | module-map |
| 0x5E015980 | core | 818 | `src/blade/text/func_5e015980.c` | module-map |
| 0x5E015CB2 | core | - | `src/blade/text/func_5e015cb2.c` | module-map |
| 0x5E015CC0 | core | 449 | `src/blade/text/func_5e015cc0.c` | module-map |
| 0x5E015E81 | core | - | `src/blade/text/func_5e015e81.c` | module-map |
| 0x5E015E90 | core | 2100 | `src/blade/text/func_5e015e90.c` | module-map |
| 0x5E0166C4 | core | - | `src/blade/text/func_5e0166c4.c` | module-map |
| 0x5E0166D0 | core | 652 | `src/blade/text/func_5e0166d0.c` | module-map |
| 0x5E01695C | core | - | `src/blade/text/func_5e01695c.c` | module-map |
| 0x5E016960 | core | 150 | `src/blade/text/func_5e016960.c` | module-map |
| 0x5E0169F6 | core | - | `src/blade/text/func_5e0169f6.c` | module-map |
| 0x5E016A00 | core | 503 | `src/blade/text/func_5e016a00.c` | module-map |
| 0x5E016BF7 | core | - | `src/blade/text/func_5e016bf7.c` | module-map |
| 0x5E016C00 | core | 721 | `src/blade/text/func_5e016c00.c` | module-map |
| 0x5E016ED1 | core | - | `src/blade/text/func_5e016ed1.c` | module-map |
| 0x5E016EE0 | core | 186 | `src/blade/text/func_5e016ee0.c` | module-map |
| 0x5E016F9A | core | - | `src/blade/text/func_5e016f9a.c` | module-map |
| 0x5E016FA0 | core | 752 | `src/blade/text/func_5e016fa0.c` | module-map |
| 0x5E017290 | core | 449 | `src/blade/text/func_5e017290.c` | module-map |
| 0x5E017451 | core | - | `src/blade/text/func_5e017451.c` | module-map |
| 0x5E017460 | core | 1823 | `src/blade/text/func_5e017460.c` | module-map |
| 0x5E017B7F | core | - | `src/blade/text/func_5e017b7f.c` | module-map |
| 0x5E017B80 | core | 1224 | `src/blade/text/func_5e017b80.c` | module-map |
| 0x5E018048 | core | - | `src/blade/text/func_5e018048.c` | module-map |
| 0x5E018050 | core | 378 | `src/blade/text/func_5e018050.c` | module-map |
| 0x5E0181CA | core | - | `src/blade/text/func_5e0181ca.c` | module-map |
| 0x5E0181D0 | core | 1399 | `src/blade/text/func_5e0181d0.c` | module-map |
| 0x5E018747 | core | - | `src/blade/text/func_5e018747.c` | module-map |
| 0x5E018750 | core | 1293 | `src/blade/text/func_5e018750.c` | module-map |
| 0x5E018C5D | core | - | `src/blade/text/func_5e018c5d.c` | module-map |
| 0x5E018C60 | core | 414 | `src/blade/text/func_5e018c60.c` | module-map |
| 0x5E018DFE | core | - | `src/blade/text/func_5e018dfe.c` | module-map |
| 0x5E018E00 | core | 1627 | `src/blade/text/func_5e018e00.c` | module-map |
| 0x5E01945B | core | - | `src/blade/text/func_5e01945b.c` | module-map |
| 0x5E019460 | core | 449 | `src/blade/text/func_5e019460.c` | module-map |
| 0x5E019621 | core | - | `src/blade/text/func_5e019621.c` | module-map |
| 0x5E019630 | core | 1783 | `src/blade/text/func_5e019630.c` | module-map |
| 0x5E019D27 | core | - | `src/blade/text/func_5e019d27.c` | module-map |
| 0x5E019D30 | core | 1332 | `src/blade/text/func_5e019d30.c` | module-map |
| 0x5E01A264 | core | - | `src/blade/text/func_5e01a264.c` | module-map |
| 0x5E01A290 | core | 1230 | `src/blade/text/func_5e01a290.c` | module-map |
| 0x5E01A75E | core | - | `src/blade/text/func_5e01a75e.c` | module-map |
| 0x5E01A760 | core | 449 | `src/blade/text/func_5e01a760.c` | module-map |
| 0x5E01A921 | core | - | `src/blade/text/func_5e01a921.c` | module-map |
| 0x5E01A930 | core | 362 | `src/blade/text/func_5e01a930.c` | module-map |
| 0x5E01AA9A | core | - | `src/blade/text/func_5e01aa9a.c` | module-map |
| 0x5E01AAA0 | core | 1593 | `src/blade/text/func_5e01aaa0.c` | module-map |
| 0x5E01B0D9 | core | - | `src/blade/text/func_5e01b0d9.c` | module-map |
| 0x5E01B670 | core | 1358 | `src/blade/text/func_5e01b670.c` | module-map |
| 0x5E01BBBE | core | - | `src/blade/text/func_5e01bbbe.c` | module-map |
| 0x5E01BBC0 | core | 434 | `src/blade/text/func_5e01bbc0.c` | module-map |
| 0x5E01BD72 | core | - | `src/blade/text/func_5e01bd72.c` | module-map |
| 0x5E01BD80 | core | 1964 | `src/blade/text/func_5e01bd80.c` | module-map |
| 0x5E01C52C | core | - | `src/blade/text/func_5e01c52c.c` | module-map |
| 0x5E01C530 | core | 1426 | `src/blade/text/func_5e01c530.c` | module-map |
| 0x5E01CAC2 | core | - | `src/blade/text/func_5e01cac2.c` | module-map |
| 0x5E01CAD0 | core | 470 | `src/blade/text/func_5e01cad0.c` | module-map |
| 0x5E01CCA6 | core | - | `src/blade/text/func_5e01cca6.c` | module-map |
| 0x5E01CCB0 | core | 2192 | `src/blade/text/func_5e01ccb0.c` | module-map |
| 0x5E01D540 | core | 449 | `src/blade/text/func_5e01d540.c` | module-map |
| 0x5E01D701 | core | - | `src/blade/text/func_5e01d701.c` | module-map |
| 0x5E01D710 | core | 2247 | `src/blade/text/func_5e01d710.c` | module-map |
| 0x5E01DFE0 | core | 1792 | `src/blade/text/func_5e01dfe0.c` | module-map |

### accessors

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E00E350 | core | 45 | `src/blade/text/func_5e00e350.c` | module-map |
| 0x5E00E37D | core | - | `src/blade/text/func_5e00e37d.c` | module-map |
| 0x5E00E380 | core | 29 | `src/blade/text/func_5e00e380.c` | module-map |
| 0x5E00E39D | core | - | `src/blade/text/func_5e00e39d.c` | module-map |
| 0x5E00E3A0 | core | 28 | `src/blade/text/func_5e00e3a0.c` | module-map |
| 0x5E00E3BC | core | - | `src/blade/text/func_5e00e3bc.c` | module-map |
| 0x5E00E3C0 | core | 7 | `src/blade/text/func_5e00e3c0.c` | module-map |
| 0x5E00E3C7 | core | - | `src/blade/text/func_5e00e3c7.c` | module-map |
| 0x5E00E3D0 | core | 48 | `src/blade/text/func_5e00e3d0.c` | module-map |
| 0x5E00E400 | core | 59 | `src/blade/text/func_5e00e400.c` | module-map |
| 0x5E00E43B | core | - | `src/blade/text/func_5e00e43b.c` | module-map |
| 0x5E00E440 | core | 56 | `src/blade/text/func_5e00e440.c` | module-map |
| 0x5E00E478 | core | - | `src/blade/text/func_5e00e478.c` | module-map |
| 0x5E00E480 | core | 46 | `src/blade/text/func_5e00e480.c` | module-map |
| 0x5E00E4AE | core | - | `src/blade/text/func_5e00e4ae.c` | module-map |
| 0x5E00E4B0 | core | 41 | `src/blade/text/func_5e00e4b0.c` | module-map |
| 0x5E00E4D9 | core | - | `src/blade/text/func_5e00e4d9.c` | module-map |
| 0x5E00E4E0 | core | 78 | `src/blade/text/func_5e00e4e0.c` | module-map |
| 0x5E00E52E | core | - | `src/blade/text/func_5e00e52e.c` | module-map |
| 0x5E00E530 | core | 70 | `src/blade/text/func_5e00e530.c` | module-map |
| 0x5E00E576 | core | - | `src/blade/text/func_5e00e576.c` | module-map |
| 0x5E00E580 | core | 120 | `src/blade/text/func_5e00e580.c` | module-map |
| 0x5E00E5F8 | core | - | `src/blade/text/func_5e00e5f8.c` | module-map |
| 0x5E00E600 | core | 15 | `src/blade/text/func_5e00e600.c` | module-map |
| 0x5E00E60F | core | - | `src/blade/text/func_5e00e60f.c` | module-map |
| 0x5E00E610 | core | 14 | `src/blade/text/func_5e00e610.c` | module-map |
| 0x5E00E61E | core | - | `src/blade/text/func_5e00e61e.c` | module-map |
| 0x5E00E620 | core | 7 | `src/blade/text/func_5e00e620.c` | module-map |
| 0x5E00E627 | core | - | `src/blade/text/func_5e00e627.c` | module-map |
| 0x5E00E630 | core | 7 | `src/blade/text/func_5e00e630.c` | module-map |
| 0x5E00E637 | core | - | `src/blade/text/func_5e00e637.c` | module-map |
| 0x5E00E640 | core | 7 | `src/blade/text/func_5e00e640.c` | module-map |
| 0x5E00E647 | core | - | `src/blade/text/func_5e00e647.c` | module-map |
| 0x5E00E650 | core | 7 | `src/blade/text/func_5e00e650.c` | module-map |
| 0x5E00E657 | core | - | `src/blade/text/func_5e00e657.c` | module-map |
| 0x5E00E660 | core | 10 | `src/blade/text/func_5e00e660.c` | module-map |
| 0x5E00E66A | core | - | `src/blade/text/func_5e00e66a.c` | module-map |
| 0x5E00E670 | core | 12 | `src/blade/text/func_5e00e670.c` | module-map |
| 0x5E00E67C | core | - | `src/blade/text/func_5e00e67c.c` | module-map |
| 0x5E00E680 | core | 7 | `src/blade/text/func_5e00e680.c` | module-map |
| 0x5E00E687 | core | - | `src/blade/text/func_5e00e687.c` | module-map |
| 0x5E00EA50 | core | 30 | `src/blade/text/func_5e00ea50.c` | module-map |
| 0x5E00EA6E | core | - | `src/blade/text/func_5e00ea6e.c` | module-map |
| 0x5E00EA70 | core | 14 | `src/blade/text/func_5e00ea70.c` | module-map |
| 0x5E00EA7E | core | - | `src/blade/text/func_5e00ea7e.c` | module-map |
| 0x5E00EA80 | core | 15 | `src/blade/text/func_5e00ea80.c` | module-map |
| 0x5E00EA8F | core | - | `src/blade/text/func_5e00ea8f.c` | module-map |
| 0x5E00EA90 | core | 15 | `src/blade/text/func_5e00ea90.c` | module-map |
| 0x5E00EA9F | core | - | `src/blade/text/func_5e00ea9f.c` | module-map |
| 0x5E00EAA0 | core | 38 | `src/blade/text/func_5e00eaa0.c` | module-map |
| 0x5E00EAC6 | core | - | `src/blade/text/func_5e00eac6.c` | module-map |
| 0x5E00EAD0 | core | 38 | `src/blade/text/func_5e00ead0.c` | module-map |
| 0x5E00EAF6 | core | - | `src/blade/text/func_5e00eaf6.c` | module-map |

### render

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E002340 | core | 155 | `src/blade/text/func_5e002340.c` | module-map |
| 0x5E0023E0 | core | 75 | `src/blade/text/func_5e0023e0.c` | module-map |
| 0x5E003CC0 | core | 998 | `src/blade/text/func_5e003cc0.c` | module-map |
| 0x5E0040B0 | core | 526 | `src/blade/text/func_5e0040b0.c` | module-map |
| 0x5E0042C0 | core | 462 | `src/blade/text/func_5e0042c0.c` | module-map |
| 0x5E004490 | core | 284 | `src/blade/text/func_5e004490.c` | module-map |
| 0x5E0045B0 | core | 198 | `src/blade/text/func_5e0045b0.c` | module-map |
| 0x5E004680 | core | 284 | `src/blade/text/func_5e004680.c` | module-map |
| 0x5E0047A0 | core | 198 | `src/blade/text/func_5e0047a0.c` | module-map |
| 0x5E004870 | core | 284 | `src/blade/text/func_5e004870.c` | module-map |
| 0x5E004990 | core | 198 | `src/blade/text/func_5e004990.c` | module-map |
| 0x5E004A60 | core | 289 | `src/blade/text/func_5e004a60.c` | module-map |
| 0x5E004B90 | core | 204 | `src/blade/text/func_5e004b90.c` | module-map |
| 0x5E004C60 | core | 284 | `src/blade/text/func_5e004c60.c` | module-map |
| 0x5E004D80 | core | 198 | `src/blade/text/func_5e004d80.c` | module-map |
| 0x5E004E50 | core | 289 | `src/blade/text/func_5e004e50.c` | module-map |
| 0x5E004F80 | core | 204 | `src/blade/text/func_5e004f80.c` | module-map |
| 0x5E005050 | core | 455 | `src/blade/text/func_5e005050.c` | module-map |
| 0x5E005220 | core | 502 | `src/blade/text/func_5e005220.c` | module-map |
| 0x5E005420 | core | 360 | `src/blade/text/func_5e005420.c` | module-map |
| 0x5E0057C0 | core | 15122 | `src/blade/text/func_5e0057c0.c` | module-map |
| 0x5E0093A0 | core | 19306 | `src/blade/text/func_5e0093a0.c` | module-map |
| 0x5E00E220 | core | 290 | `src/blade/text/func_5e00e220.c` | module-map |
| 0x5E0121D0 | core | 61 | `src/blade/text/func_5e0121d0.c` | module-map |
| 0x5E012210 | core | 534 | `src/blade/text/func_5e012210.c` | module-map |
| 0x5E012EB0 | core | 834 | `src/blade/text/func_5e012eb0.c` | module-map |
| 0x5E01E6E0 | core | 22 | `src/blade/text/func_5e01e6e0.c` | module-map |
| 0x5E01E6F6 | core | - | `src/blade/text/func_5e01e6f6.c` | module-map |
| 0x5E01E700 | core | 26 | `src/blade/text/func_5e01e700.c` | module-map |
| 0x5E01E71A | core | - | `src/blade/text/func_5e01e71a.c` | module-map |
| 0x5E01E721 | core | - | `src/blade/text/func_5e01e721.c` | module-map |
| 0x5E01E730 | core | 86 | `src/blade/text/func_5e01e730.c` | module-map |
| 0x5E01E786 | core | - | `src/blade/text/func_5e01e786.c` | module-map |
| 0x5E01E7B0 | core | 301 | `src/blade/text/func_5e01e7b0.c` | module-map |
| 0x5E01E8DD | core | - | `src/blade/text/func_5e01e8dd.c` | module-map |
| 0x5E01E930 | core | 102 | `src/blade/text/func_5e01e930.c` | module-map |
| 0x5E01E996 | core | - | `src/blade/text/func_5e01e996.c` | module-map |
| 0x5E01E9A0 | core | 111 | `src/blade/text/func_5e01e9a0.c` | module-map |
| 0x5E01EA0F | core | - | `src/blade/text/func_5e01ea0f.c` | module-map |
| 0x5E01EA10 | core | 101 | `src/blade/text/func_5e01ea10.c` | module-map |
| 0x5E01EA75 | core | - | `src/blade/text/func_5e01ea75.c` | module-map |
| 0x5E0280B5 | core | - | `src/blade/text/func_5e0280b5.c` | module-map |
| 0x5E028100 | core | 346 | `src/blade/text/func_5e028100.c` | module-map |
| 0x5E02825A | core | - | `src/blade/text/func_5e02825a.c` | module-map |
| 0x5E028260 | core | 477 | `src/blade/text/func_5e028260.c` | module-map |
| 0x5E02843D | core | - | `src/blade/text/func_5e02843d.c` | module-map |
| 0x5E0284E0 | core | 77 | `src/blade/text/func_5e0284e0.c` | module-map |

### stubs

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E00DFD0 | core | 8 | `src/blade/text/func_5e00dfd0.c` | module-map |
| 0x5E00DFE0 | core | 8 | `src/blade/text/func_5e00dfe0.c` | module-map |
| 0x5E00E010 | core | 8 | `src/blade/text/func_5e00e010.c` | module-map |
| 0x5E00E110 | core | 1 | `src/blade/text/func_5e00e110.c` | module-map |
| 0x5E00FB60 | core | 8 | `src/blade/text/func_5e00fb60.c` | module-map |
| 0x5E011080 | core | 8 | `src/blade/text/func_5e011080.c` | module-map |
| 0x5E0112D0 | core | 8 | `src/blade/text/func_5e0112d0.c` | module-map |
| 0x5E011860 | core | 16 | `src/blade/text/func_5e011860.c` | module-map |
| 0x5E011A90 | core | 8 | `src/blade/text/func_5e011a90.c` | module-map |
| 0x5E011AA0 | core | 8 | `src/blade/text/func_5e011aa0.c` | module-map |
| 0x5E011AB0 | core | 8 | `src/blade/text/func_5e011ab0.c` | module-map |
| 0x5E011AC0 | core | 8 | `src/blade/text/func_5e011ac0.c` | module-map |
| 0x5E011AD0 | core | 8 | `src/blade/text/func_5e011ad0.c` | module-map |
| 0x5E011AE0 | core | 8 | `src/blade/text/func_5e011ae0.c` | module-map |
| 0x5E011AF0 | core | 8 | `src/blade/text/func_5e011af0.c` | module-map |
| 0x5E011B00 | core | 8 | `src/blade/text/func_5e011b00.c` | module-map |
| 0x5E01E720 | core | 1 | `src/blade/text/func_5e01e720.c` | module-map |

### exports

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E001000 | core | 50 | `src/blade/text/func_5e001000.c` | module-map |
| 0x5E001040 | core | 369 | `src/blade/text/func_5e001040.c` | module-map |
| 0x5E0011C0 | core | 499 | `src/blade/text/func_5e0011c0.c` | module-map |
| 0x5E0013C0 | core | 40 | `src/blade/text/func_5e0013c0.c` | module-map |
| 0x5E0013F0 | core | 35 | `src/blade/text/func_5e0013f0.c` | module-map |
| 0x5E001420 | core | 35 | `src/blade/text/func_5e001420.c` | module-map |
| 0x5E001450 | core | 40 | `src/blade/text/func_5e001450.c` | module-map |
| 0x5E001480 | core | 100 | `src/blade/text/func_5e001480.c` | module-map |
| 0x5E010480 | core | 73 | `src/blade/text/func_5e010480.c` | module-map |

### data

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E038000 | data | - | `src/blade/data/data_0x5e038000.c` | section |
| 0x5E039000 | data | - | `src/blade/data/data_0x5e039000.c` | section |
| 0x5E03A000 | data | - | `src/blade/data/data_0x5e03a000.c` | section |

### rdata

| VA | Role | Size | Source | Evidence |
|----|------|------|--------|----------|
| 0x5E035000 | data | - | `src/blade/rdata/data_0x5e035000.c` | section |
| 0x5E036000 | data | - | `src/blade/rdata/data_0x5e036000.c` | section |
| 0x5E037000 | data | - | `src/blade/rdata/data_0x5e037000.c` | section |

## Related

- [All subsystems](README.md)
- [Boundary seams](../SUBSYSTEM_SEAMS.md)
- [Exhaustive per-VA index](../va_index/blade_dll.md)
