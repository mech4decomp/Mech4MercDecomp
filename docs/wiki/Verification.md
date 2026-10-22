# Verification

The gate is **byte identity**, not a similarity score.

## 1. Masked per-function diff

```bat
nmake diff FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

Compares the object against the reference function, masking 4-byte relocation
slots. Fast iteration tool.

## 2. No-mask per-function check

```bat
nmake nomask FUNC=0x00401000 OBJNAME=build\obj\func_00401000.obj
```

Places the object at its VA, resolves every relocation, and compares every
byte. Catches misaligned/spurious relocation sites.

## 3. Full-image gate

```bat
nmake exe
nmake dll-all MOD=gundll
```

Assembles the complete image and compares it to the reference with no masking.
This is the authoritative gate.

## 4. Hash gate

```bat
nmake verify
```

Compares built images to `reference/SHA256.txt`:

| Binary | SHA-256 |
|---|---|
| `MW4Mercs.exe` | `deb0cb7f97e26c9db850d768900bdfb7648db7d10a090e7cdf6cecdc7686134f` |
| `blade.dll` | `d774c9fd2473e069c5c183333e07518392f2782b35582e2672a9479164652c6a` |
| `GunDll.dll` | `1e441bc27cf7779d893dc59d2cf52b39c28dee17172f0ae08edd183e481b2410` |
| `MW4Stats.dll` | `61de52cb1606422181e03f87e1eeb944b705d69da1ab1e564a566d588ab814d5` |
| `ZlogLib.dll` | `03af8be5d047ba02076253009523461ab25922376e2af6a3db1d523df259b295` |
| `Language.dll` | `8cacab8c2eb11ba1829ca2e57920bd8e191be8c8178dbb7e00352e65ef80c1d6` |
| `MissionLang_MERCS.dll` | `280d422c13d428bc4b4b17d7809ace628b10927047c2f5e37aadeb337f0db1b3` |

Full methodology:
[`docs/VERIFICATION.md`](https://github.com/mech4decomp/Mech4MercDecomp/blob/main/docs/VERIFICATION.md).
