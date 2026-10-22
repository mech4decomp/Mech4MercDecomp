/*
 * FUN_005816f0 (extent 0x5816f0-0x583248) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_0076d064;
extern float  g_0076d5f0;
extern float  g_0076d978;
extern float  g_0076e1ec;
extern float  g_0076e1f0;
extern float  g_0077016c;
extern float  g_007704c4;
extern float  g_00781f5c;
extern float  g_00781f60;
extern float  g_00781f64;
extern int    g_007b540c;
extern int    g_007b5410;
extern int    g_007f1f78;
extern int    g_007f1f84;
extern int    g_007f25c0;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_005008e0(void);
extern void __cdecl FUN_00500ec0(void);
extern void __cdecl FUN_00501a20(void);
extern void __cdecl FUN_0070f090(void);

__declspec(naked) void FUN_005816f0(void)
{
    __asm {
        push    esi
        push    0xa8
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_175e
        mov    eax, dword ptr [g_007f1f78]
        mov    ecx, dword ptr [g_007f25c0]
        push    0x502c60
        push    0x5028b0
        push    0x6680a0
        push    0x62ec80
        push    0x6678d0
        push    eax
        push    0x667770
        push    0x583280
        push    0x781598
        push    2
        push    ecx
        push    0x781f48
        push    0x429
        mov    ecx, esi
        call    FUN_00501a20
        mov    dword ptr [esi + 0xa4], 0x603670
        mov    dword ptr [g_007f1f84], esi
        jmp    L_1768
L_175e:
        mov    dword ptr [g_007f1f84], 0
L_1768:
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1795
        push    0x2f8
        push    3
        push    0x781f3c
        push    0x33
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_1797
L_1795:
        xor    esi, esi
L_1797:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_17d3
        push    0x2fc
        push    3
        push    0x781f30
        push    0x34
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77cabc
        jmp    L_17d5
L_17d3:
        xor    esi, esi
L_17d5:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1810
        push    0x344
        push    2
        push    0x781f18
        push    0x35
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1812
L_1810:
        xor    esi, esi
L_1812:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_184e
        push    0x300
        push    2
        push    0x781f04
        push    0x36
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1850
L_184e:
        xor    esi, esi
L_1850:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_188c
        push    0x30c
        push    2
        push    0x781eec
        push    0x37
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_188e
L_188c:
        xor    esi, esi
L_188e:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_18c9
        push    0x310
        push    2
        push    0x781ed4
        push    0x38
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_18cb
L_18c9:
        xor    esi, esi
L_18cb:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1907
        push    0x314
        push    2
        push    0x781eb8
        push    0x39
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1909
L_1907:
        xor    esi, esi
L_1909:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1945
        push    0x318
        push    2
        push    0x781e9c
        push    0x3a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1947
L_1945:
        xor    esi, esi
L_1947:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1982
        push    0x304
        push    2
        push    0x781e80
        push    0x3b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1984
L_1982:
        xor    esi, esi
L_1984:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_19c0
        push    0x308
        push    2
        push    0x781e60
        push    0x3c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_19c2
L_19c0:
        xor    esi, esi
L_19c2:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_19fe
        push    0x31c
        push    2
        push    0x781e4c
        push    0x3d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1a00
L_19fe:
        xor    esi, esi
L_1a00:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1a3b
        push    0x320
        push    2
        push    0x781e3c
        push    0x3e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1a3d
L_1a3b:
        xor    esi, esi
L_1a3d:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1a79
        push    0x324
        push    2
        push    0x781e28
        push    0x3f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1a7b
L_1a79:
        xor    esi, esi
L_1a7b:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1ab7
        push    0x328
        push    2
        push    0x781e18
        push    0x40
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1ab9
L_1ab7:
        xor    esi, esi
L_1ab9:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1af4
        push    0x32c
        push    2
        push    0x781e00
        push    0x41
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1af6
L_1af4:
        xor    esi, esi
L_1af6:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1b32
        push    0x330
        push    2
        push    0x781dec
        push    0x42
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1b34
L_1b32:
        xor    esi, esi
L_1b34:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1b70
        push    0x334
        push    2
        push    0x781dd8
        push    0x43
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1b72
L_1b70:
        xor    esi, esi
L_1b72:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1bad
        push    0x338
        push    2
        push    0x781dc4
        push    0x44
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1baf
L_1bad:
        xor    esi, esi
L_1baf:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1beb
        push    0x33c
        push    2
        push    0x781db0
        push    0x45
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1bed
L_1beb:
        xor    esi, esi
L_1bed:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c29
        push    0x340
        push    2
        push    0x781d94
        push    0x46
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1c2b
L_1c29:
        xor    esi, esi
L_1c2b:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1c66
        push    0x348
        push    2
        push    0x781d80
        push    0x47
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1c68
L_1c66:
        xor    esi, esi
L_1c68:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1ca4
        push    0x34c
        push    2
        push    0x781d70
        push    0x48
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1ca6
L_1ca4:
        xor    esi, esi
L_1ca6:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1ce2
        push    0x350
        push    2
        push    0x781d5c
        push    0x49
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1ce4
L_1ce2:
        xor    esi, esi
L_1ce4:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1d1f
        push    0x354
        push    2
        push    0x781d3c
        push    0x4a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1d21
L_1d1f:
        xor    esi, esi
L_1d21:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1d5d
        push    0x358
        push    2
        push    0x781d14
        push    0x4b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1d5f
L_1d5d:
        xor    esi, esi
L_1d5f:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1d9b
        push    0x35c
        push    2
        push    0x781cf8
        push    0x4c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1d9d
L_1d9b:
        xor    esi, esi
L_1d9d:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1dd8
        push    0x360
        push    2
        push    0x781cdc
        push    0x4d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1dda
L_1dd8:
        xor    esi, esi
L_1dda:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1e16
        push    0x364
        push    2
        push    0x781cc0
        push    0x4e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1e18
L_1e16:
        xor    esi, esi
L_1e18:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1e54
        push    0x368
        push    2
        push    0x781cac
        push    0x4f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1e56
L_1e54:
        xor    esi, esi
L_1e56:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1e91
        push    0x36c
        push    2
        push    0x781c94
        push    0x50
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1e93
L_1e91:
        xor    esi, esi
L_1e93:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1ecf
        push    0x370
        push    2
        push    0x781c78
        push    0x51
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1ed1
L_1ecf:
        xor    esi, esi
L_1ed1:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1f0d
        push    0x374
        push    2
        push    0x781c60
        push    0x52
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1f0f
L_1f0d:
        xor    esi, esi
L_1f0f:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1f4a
        push    0x378
        push    2
        push    0x781c4c
        push    0x53
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1f4c
L_1f4a:
        xor    esi, esi
L_1f4c:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1f88
        push    0x37c
        push    2
        push    0x781c30
        push    0x54
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1f8a
L_1f88:
        xor    esi, esi
L_1f8a:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_1fc6
        push    0x380
        push    2
        push    0x781c14
        push    0x55
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_1fc8
L_1fc6:
        xor    esi, esi
L_1fc8:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2003
        push    0x384
        push    2
        push    0x781bf8
        push    0x56
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2005
L_2003:
        xor    esi, esi
L_2005:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2041
        push    0x388
        push    2
        push    0x781be4
        push    0x57
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2043
L_2041:
        xor    esi, esi
L_2043:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_207f
        push    0x38c
        push    2
        push    0x781bc8
        push    0x58
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2081
L_207f:
        xor    esi, esi
L_2081:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_20bc
        push    0x390
        push    2
        push    0x781ba8
        push    0x59
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_20be
L_20bc:
        xor    esi, esi
L_20be:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_20fa
        push    0x394
        push    2
        push    0x781b84
        push    0x5a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_20fc
L_20fa:
        xor    esi, esi
L_20fc:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2138
        push    0x398
        push    2
        push    0x781b64
        push    0x5b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_213a
L_2138:
        xor    esi, esi
L_213a:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2175
        push    0x39c
        push    2
        push    0x781b48
        push    0x5c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2177
L_2175:
        xor    esi, esi
L_2177:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_21b3
        push    0x3a0
        push    2
        push    0x781b2c
        push    0x5d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_21b5
L_21b3:
        xor    esi, esi
L_21b5:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_21f1
        push    0x3a4
        push    2
        push    0x781b0c
        push    0x5e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_21f3
L_21f1:
        xor    esi, esi
L_21f3:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_222e
        push    0x3a8
        push    2
        push    0x781ae8
        push    0x5f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2230
L_222e:
        xor    esi, esi
L_2230:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_226c
        push    0x3ac
        push    2
        push    0x781ac8
        push    0x60
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_226e
L_226c:
        xor    esi, esi
L_226e:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_22aa
        push    0x3b0
        push    2
        push    0x781aac
        push    0x61
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_22ac
L_22aa:
        xor    esi, esi
L_22ac:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_22e7
        push    0x3b4
        push    2
        push    0x781a8c
        push    0x62
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_22e9
L_22e7:
        xor    esi, esi
L_22e9:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2325
        push    0x3b8
        push    2
        push    0x781a68
        push    0x63
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2327
L_2325:
        xor    esi, esi
L_2327:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2363
        push    0x3bc
        push    2
        push    0x781a40
        push    0x64
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2365
L_2363:
        xor    esi, esi
L_2365:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_23a0
        push    0x3c0
        push    2
        push    0x781a1c
        push    0x65
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_23a2
L_23a0:
        xor    esi, esi
L_23a2:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_23de
        push    0x3c4
        push    2
        push    0x7819fc
        push    0x66
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_23e0
L_23de:
        xor    esi, esi
L_23e0:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_241c
        push    0x3c8
        push    2
        push    0x7819e8
        push    0x67
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_241e
L_241c:
        xor    esi, esi
L_241e:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2459
        push    0x3cc
        push    2
        push    0x7819d0
        push    0x68
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_245b
L_2459:
        xor    esi, esi
L_245b:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2497
        push    0x3d0
        push    2
        push    0x7819b4
        push    0x69
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2499
L_2497:
        xor    esi, esi
L_2499:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_24d5
        push    0x3d4
        push    2
        push    0x78199c
        push    0x6a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_24d7
L_24d5:
        xor    esi, esi
L_24d7:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2512
        push    0x3d8
        push    2
        push    0x781988
        push    0x6b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2514
L_2512:
        xor    esi, esi
L_2514:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2550
        push    0x3dc
        push    5
        push    0x781970
        push    0x6c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_2552
L_2550:
        xor    esi, esi
L_2552:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_258e
        push    0x3e8
        push    5
        push    0x78195c
        push    0x6d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_2590
L_258e:
        xor    esi, esi
L_2590:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_25cb
        push    0x3f4
        push    5
        push    0x78194c
        push    0x6e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_25cd
L_25cb:
        xor    esi, esi
L_25cd:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2609
        push    0x400
        push    5
        push    0x781934
        push    0x6f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x77543c
        jmp    L_260b
L_2609:
        xor    esi, esi
L_260b:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_264a
        push    0x40c
        push    0x231
        push    0x781924
        push    0x70
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_264c
L_264a:
        xor    esi, esi
L_264c:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2687
        push    0x424
        push    0xf
        push    0x781910
        push    0x71
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x781900
        jmp    L_2689
L_2687:
        xor    esi, esi
L_2689:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_26c5
        push    0x524
        push    0xf
        push    0x7818e8
        push    0x72
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x781900
        jmp    L_26c7
L_26c5:
        xor    esi, esi
L_26c7:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2706
        push    0x418
        push    0x231
        push    0x7818d4
        push    0x73
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2708
L_2706:
        xor    esi, esi
L_2708:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2746
        push    0x414
        push    0x231
        push    0x7818bc
        push    0x74
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2748
L_2746:
        xor    esi, esi
L_2748:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2784
        push    0x628
        push    2
        push    0x7818b4
        push    0x75
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2786
L_2784:
        xor    esi, esi
L_2786:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_27c2
        push    0x634
        push    1
        push    0x7818ac
        push    0x76
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_27c4
L_27c2:
        xor    esi, esi
L_27c4:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_27ff
        push    0x640
        push    0xe
        push    0x78189c
        push    0x77
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_2801
L_27ff:
        xor    esi, esi
L_2801:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_283d
        push    0x641
        push    0xe
        push    0x781890
        push    0x78
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_283f
L_283d:
        xor    esi, esi
L_283f:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_287b
        push    0x642
        push    0xe
        push    0x781880
        push    0x79
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_287d
L_287b:
        xor    esi, esi
L_287d:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_28b8
        push    0x643
        push    0xe
        push    0x781870
        push    0x7a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_28ba
L_28b8:
        xor    esi, esi
L_28ba:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_28f6
        push    0x644
        push    0xe
        push    0x781864
        push    0x7b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_28f8
L_28f6:
        xor    esi, esi
L_28f8:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2934
        push    0x645
        push    0xe
        push    0x781858
        push    0x7c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_2936
L_2934:
        xor    esi, esi
L_2936:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2971
        push    0x648
        push    2
        push    0x781848
        push    0x7d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2973
L_2971:
        xor    esi, esi
L_2973:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_29af
        push    0x638
        push    1
        push    0x78183c
        push    0x7e
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_29b1
L_29af:
        xor    esi, esi
L_29b1:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_29f0
        push    0x64c
        push    0x231
        push    0x781828
        push    0x7f
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_29f2
L_29f0:
        xor    esi, esi
L_29f2:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2a30
        push    0x650
        push    2
        push    0x78180c
        push    0x80
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2a32
L_2a30:
        xor    esi, esi
L_2a32:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2a74
        push    0x654
        push    0x231
        push    0x7817fc
        push    0x81
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2a76
L_2a74:
        xor    esi, esi
L_2a76:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2ab8
        push    0x658
        push    0x231
        push    0x7817e8
        push    0x82
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2aba
L_2ab8:
        xor    esi, esi
L_2aba:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2afb
        push    0x65c
        push    0x231
        push    0x7817d4
        push    0x83
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2afd
L_2afb:
        xor    esi, esi
L_2afd:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2b3f
        push    0x41c
        push    0x231
        push    0x7817cc
        push    0x84
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2b41
L_2b3f:
        xor    esi, esi
L_2b41:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2b83
        push    0x420
        push    0x231
        push    0x7817b8
        push    0x85
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2b85
L_2b83:
        xor    esi, esi
L_2b85:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2bc6
        push    0x410
        push    0x231
        push    0x7817a8
        push    0x86
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x773cd0
        jmp    L_2bc8
L_2bc6:
        xor    esi, esi
L_2bc8:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2c07
        push    0x660
        push    1
        push    0x781798
        push    0x87
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775588
        jmp    L_2c09
L_2c07:
        xor    esi, esi
L_2c09:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2c48
        push    0x668
        push    0xe
        push    0x781780
        push    0x88
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_2c4a
L_2c48:
        xor    esi, esi
L_2c4a:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2c88
        push    0x669
        push    0xe
        push    0x78176c
        push    0x89
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_2c8a
L_2c88:
        xor    esi, esi
L_2c8a:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2cc9
        push    0x66a
        push    0xe
        push    0x781758
        push    0x8a
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x7731e0
        jmp    L_2ccb
L_2cc9:
        xor    esi, esi
L_2ccb:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2d0a
        push    0x664
        push    2
        push    0x781744
        push    0x8b
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2d0c
L_2d0a:
        xor    esi, esi
L_2d0c:
        mov    eax, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2d4a
        push    0x66c
        push    2
        push    0x781734
        push    0x8c
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2d4c
L_2d4a:
        xor    esi, esi
L_2d4c:
        mov    ecx, dword ptr [g_007f1f84]
        push    esi
        add    ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_2d8b
        push    0x670
        push    2
        push    0x781720
        push    0x8d
        mov    ecx, esi
        call    FUN_005008e0
        mov    dword ptr [esi], 0x775948
        jmp    L_2d8d
L_2d8b:
        xor    esi, esi
L_2d8d:
        mov    edx, dword ptr [g_007f1f84]
        push    esi
        lea    ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0
        push    0
        push    0x582f00
        push    0x582ef0
        push    0x781700
        call    FUN_0070f090
        push    0
        push    0
        push    0x582f30
        push    0x582f20
        push    0x7816d8
        call    FUN_0070f090
        push    0
        push    0
        push    0
        push    0
        push    0x7816c4
        call    FUN_0070f090
        push    0
        push    0
        push    0x583090
        push    0x582f50
        push    0x7816ac
        call    FUN_0070f090
        push    0
        push    0
        push    0x5830a0
        push    0x582f70
        push    0x781694
        call    FUN_0070f090
        push    0
        push    0
        push    0x5830d0
        push    0x582f90
        push    0x78167c
        call    FUN_0070f090
        push    0
        push    0
        push    0x583100
        push    0x582fb0
        push    0x781664
        call    FUN_0070f090
        push    0
        push    0
        push    0x583130
        push    0x582fd0
        push    0x78164c
        call    FUN_0070f090
        push    0
        push    0
        push    0x583160
        push    0x582ff0
        push    0x781634
        call    FUN_0070f090
        push    0
        push    0
        push    0x583190
        push    0x583010
        push    0x78161c
        call    FUN_0070f090
        push    0
        push    0
        push    0x5831c0
        push    0x583030
        push    0x781604
        call    FUN_0070f090
        push    0
        push    0
        push    0x5831f0
        push    0x583050
        push    0x7815ec
        call    FUN_0070f090
        push    0
        push    0
        push    0x583220
        push    0x583070
        push    0x7815d4
        call    FUN_0070f090
        push    0
        push    0
        push    0
        push    0
        push    0x7816c4
        call    FUN_0070f090
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b540c]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        ret    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b540c]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    dword ptr [g_007b540c], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [g_007b540c]
        xor    eax, eax
        cmp    ecx, 2
        sete    al
        ret    
        nop    
        mov    ecx, dword ptr [g_007b540c]
        xor    eax, eax
        cmp    ecx, 2
        setne    al
        inc    eax
        mov    dword ptr [g_007b540c], eax
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0076d064]
        fnstsw  ax
        test    ah, 0x40
        je    L_2f69
        mov    eax, 1
        ret    
L_2f69:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0076e1ec]
        fnstsw  ax
        test    ah, 0x40
        je    L_2f89
        mov    eax, 1
        ret    
L_2f89:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_00781f5c]
        fnstsw  ax
        test    ah, 0x40
        je    L_2fa9
        mov    eax, 1
        ret    
L_2fa9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_00781f60]
        fnstsw  ax
        test    ah, 0x40
        je    L_2fc9
        mov    eax, 1
        ret    
L_2fc9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_00781f64]
        fnstsw  ax
        test    ah, 0x40
        je    L_2fe9
        mov    eax, 1
        ret    
L_2fe9:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3009
        mov    eax, 1
        ret    
L_3009:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0076e1f0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3029
        mov    eax, 1
        ret    
L_3029:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_007704c4]
        fnstsw  ax
        test    ah, 0x40
        je    L_3049
        mov    eax, 1
        ret    
L_3049:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0076d978]
        fnstsw  ax
        test    ah, 0x40
        je    L_3069
        mov    eax, 1
        ret    
L_3069:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        fcomp    dword ptr [g_0077016c]
        fnstsw  ax
        test    ah, 0x40
        je    L_3089
        mov    eax, 1
        ret    
L_3089:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    dword ptr [g_007b5410], 0x3f800000
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x3f99999a
        fcomp    dword ptr [g_0076e1ec]
        fnstsw  ax
        test    ah, 0x40
        je    L_30c7
        mov    dword ptr [g_007b5410], 0x3f800000
L_30c7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x3fb33333
        fcomp    dword ptr [g_00781f5c]
        fnstsw  ax
        test    ah, 0x40
        je    L_30f7
        mov    dword ptr [g_007b5410], 0x3f800000
L_30f7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x3fcccccd
        fcomp    dword ptr [g_00781f60]
        fnstsw  ax
        test    ah, 0x40
        je    L_3127
        mov    dword ptr [g_007b5410], 0x3f800000
L_3127:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x3fe66666
        fcomp    dword ptr [g_00781f64]
        fnstsw  ax
        test    ah, 0x40
        je    L_3157
        mov    dword ptr [g_007b5410], 0x3f800000
L_3157:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x40000000
        fcomp    dword ptr [g_0076d5f0]
        fnstsw  ax
        test    ah, 0x40
        je    L_3187
        mov    dword ptr [g_007b5410], 0x3f800000
L_3187:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x40200000
        fcomp    dword ptr [g_0076e1f0]
        fnstsw  ax
        test    ah, 0x40
        je    L_31b7
        mov    dword ptr [g_007b5410], 0x3f800000
L_31b7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x40400000
        fcomp    dword ptr [g_007704c4]
        fnstsw  ax
        test    ah, 0x40
        je    L_31e7
        mov    dword ptr [g_007b5410], 0x3f800000
L_31e7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x40800000
        fcomp    dword ptr [g_0076d978]
        fnstsw  ax
        test    ah, 0x40
        je    L_3217
        mov    dword ptr [g_007b5410], 0x3f800000
L_3217:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007b5410]
        mov    dword ptr [g_007b5410], 0x40a00000
        fcomp    dword ptr [g_0077016c]
        fnstsw  ax
        test    ah, 0x40
        je    L_3247
        mov    dword ptr [g_007b5410], 0x3f800000
L_3247:
        ret    
    }
}
