/*
 * FUN_004979e0 (extent 0x4979e0-0x498a08) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0044cd30(void);
extern void __cdecl FUN_0044cdf0(void);

__declspec(naked) void FUN_004979e0(void)
{
    __asm {
        sub    esp, 0x17c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x174]
        cmp    eax, 7
        ja    L_89fb
        jmp    dword ptr [eax*4 + 0x498a08]
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 2
        je    L_7aa6
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7a36
        push    0x454eb0
        push    2
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_7a3e
L_7a36:
        mov    dword ptr [esp + 0x10], 0
L_7a3e:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_7a92
        cmp    ebx, 2
        mov    eax, 2
        ja    L_7a54
        mov    eax, ebx
L_7a54:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_7a83
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_7a70:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_7a70
L_7a83:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7a92:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 2
L_7aa6:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0xcc]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0xd0], 0x3f800000
        mov    dword ptr [esp + 0xd4], 0
        mov    dword ptr [esp + 0xd8], 0
        call    FUN_0040c410
        lea    eax, [esp + 0x12c]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x130], 0xbf800000
        mov    dword ptr [esp + 0x134], 0
        mov    dword ptr [esp + 0x138], 0
        call    FUN_0040c410
        mov    ebx, dword ptr [edi + 0x188]
        cmp    ebx, 2
        je    L_7b8d
        push    0x10
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7b39
        push    0x423b70
        push    2
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_7b3b
L_7b39:
        xor    esi, esi
L_7b3b:
        mov    ebp, dword ptr [edi + 0x184]
        test    ebp, ebp
        je    L_7b7d
        cmp    ebx, 2
        mov    edx, 2
        ja    L_7b51
        mov    edx, ebx
L_7b51:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_7b74
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_7b60:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_7b60
L_7b74:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_7b7d:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x188], 2
L_7b8d:
        mov    edi, dword ptr [edi + 0x184]
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi], edx
        mov    dword ptr [esp + 0x14], 0
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [edi + 0xc], edx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 2
        je    L_7c7d
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7c0d
        push    0x454eb0
        push    2
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_7c15
L_7c0d:
        mov    dword ptr [esp + 0x10], 0
L_7c15:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_7c69
        cmp    ebx, 2
        mov    eax, 2
        ja    L_7c2b
        mov    eax, ebx
L_7c2b:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_7c5a
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_7c47:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_7c47
L_7c5a:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7c69:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 2
L_7c7d:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0x3c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x40], 0
        mov    dword ptr [esp + 0x44], 0
        mov    dword ptr [esp + 0x48], 0xbf800000
        call    FUN_0040c410
        lea    eax, [esp + 0xe4]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0xe8], 0
        mov    dword ptr [esp + 0xec], 0
        mov    dword ptr [esp + 0xf0], 0x3f800000
        call    FUN_0040c410
        mov    ebx, dword ptr [edi + 0x188]
        cmp    ebx, 2
        je    L_7d58
        push    0x10
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7d04
        push    0x423b70
        push    2
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_7d06
L_7d04:
        xor    esi, esi
L_7d06:
        mov    ebp, dword ptr [edi + 0x184]
        test    ebp, ebp
        je    L_7d48
        cmp    ebx, 2
        mov    edx, 2
        ja    L_7d1c
        mov    edx, ebx
L_7d1c:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_7d3f
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_7d2b:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_7d2b
L_7d3f:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_7d48:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x188], 2
L_7d58:
        mov    edi, dword ptr [edi + 0x184]
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi], edx
        mov    dword ptr [esp + 0x14], 0
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [edi + 0xc], edx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 4
        je    L_7e48
        push    0x30
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7dd8
        push    0x454eb0
        push    4
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_7de0
L_7dd8:
        mov    dword ptr [esp + 0x10], 0
L_7de0:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_7e34
        cmp    ebx, 4
        mov    eax, 4
        ja    L_7df6
        mov    eax, ebx
L_7df6:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_7e25
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_7e12:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_7e12
L_7e25:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_7e34:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 4
L_7e48:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0x54]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x58], 0
        mov    dword ptr [esp + 0x5c], 0
        mov    dword ptr [esp + 0x60], 0x3f800000
        call    FUN_0040c410
        lea    eax, [esp + 0x150]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x154], 0xbf5db3d7
        mov    dword ptr [esp + 0x158], 0
        mov    dword ptr [esp + 0x15c], 0xbf000000
        call    FUN_0040c410
        lea    ecx, [esp + 0x6c]
        push    ecx
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esp + 0x70], 0x3f5db3d7
        mov    dword ptr [esp + 0x74], 0
        mov    dword ptr [esp + 0x78], 0xbf000000
        call    FUN_0040c410
        lea    edx, [esp + 0xfc]
        push    edx
        lea    ecx, [esi + 0x24]
        mov    dword ptr [esp + 0x100], 0
        mov    dword ptr [esp + 0x104], 0
        mov    dword ptr [esp + 0x108], 0x3f800000
        call    FUN_0040c410
        mov    ebx, dword ptr [edi + 0x188]
        cmp    ebx, 4
        je    L_7f79
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_7f25
        push    0x423b70
        push    4
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_7f27
L_7f25:
        xor    esi, esi
L_7f27:
        mov    ebp, dword ptr [edi + 0x184]
        test    ebp, ebp
        je    L_7f69
        cmp    ebx, 4
        mov    edx, 4
        ja    L_7f3d
        mov    edx, ebx
L_7f3d:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_7f60
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_7f4c:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_7f4c
L_7f60:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_7f69:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x188], 4
L_7f79:
        mov    edi, dword ptr [edi + 0x184]
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi], ecx
        mov    dword ptr [esp + 0x14], 0
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 4], edx
        mov    dword ptr [esp + 0x10], 0
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 8], eax
        mov    dword ptr [esp + 0x14], 0x3eaaaaab
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0xc], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x10], edx
        mov    dword ptr [esp + 0x14], 0x3f2aaaab
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x14], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x18], ecx
        mov    dword ptr [edi + 0x1c], edx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 5
        je    L_80a5
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_8035
        push    0x454eb0
        push    5
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_803d
L_8035:
        mov    dword ptr [esp + 0x10], 0
L_803d:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_8091
        cmp    ebx, 5
        mov    eax, 5
        ja    L_8053
        mov    eax, ebx
L_8053:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_8082
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_806f:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_806f
L_8082:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8091:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 5
L_80a5:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0x84]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x88], 0
        mov    dword ptr [esp + 0x8c], 0
        mov    dword ptr [esp + 0x90], 0x3f800000
        call    FUN_0040c410
        lea    eax, [esp + 0x144]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x148], 0xbf800000
        mov    dword ptr [esp + 0x14c], 0
        mov    dword ptr [esp + 0x150], 0
        call    FUN_0040c410
        lea    ecx, [esp + 0x9c]
        push    ecx
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esp + 0xa0], 0
        mov    dword ptr [esp + 0xa4], 0
        mov    dword ptr [esp + 0xa8], 0xbf800000
        call    FUN_0040c410
        lea    edx, [esp + 0x114]
        push    edx
        lea    ecx, [esi + 0x24]
        mov    dword ptr [esp + 0x118], 0x3f800000
        mov    dword ptr [esp + 0x11c], 0
        mov    dword ptr [esp + 0x120], 0
        call    FUN_0040c410
        lea    eax, [esp + 0xb4]
        push    eax
        lea    ecx, [esi + 0x30]
        mov    dword ptr [esp + 0xb8], 0
        mov    dword ptr [esp + 0xbc], 0
        mov    dword ptr [esp + 0xc0], 0x3f800000
        call    FUN_0040c410
        mov    ebx, dword ptr [edi + 0x188]
        cmp    ebx, 5
        je    L_821f
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_81cb
        push    0x423b70
        push    5
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_81cd
L_81cb:
        xor    esi, esi
L_81cd:
        mov    ebp, dword ptr [edi + 0x184]
        test    ebp, ebp
        je    L_820f
        cmp    ebx, 5
        mov    edx, 5
        ja    L_81e3
        mov    edx, ebx
L_81e3:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_8206
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_81f2:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_81f2
L_8206:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_820f:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x188], 5
L_821f:
        mov    edi, dword ptr [edi + 0x184]
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi], edx
        mov    dword ptr [esp + 0x14], 0
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [esp + 0x14], 0x3e800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0xc], edx
        mov    dword ptr [esp + 0x10], 0
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x10], eax
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x14], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x18], edx
        mov    dword ptr [esp + 0x14], 0x3f400000
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x1c], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x20], ecx
        mov    dword ptr [edi + 0x24], edx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 5
        je    L_8369
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_82f9
        push    0x454eb0
        push    5
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_8301
L_82f9:
        mov    dword ptr [esp + 0x10], 0
L_8301:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_8355
        cmp    ebx, 5
        mov    eax, 5
        ja    L_8317
        mov    eax, ebx
L_8317:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_8346
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_8333:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_8333
L_8346:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_8355:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 5
L_8369:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0x15c]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x160], 0
        mov    dword ptr [esp + 0x164], 0
        mov    dword ptr [esp + 0x168], 0
        call    FUN_0040c410
        lea    eax, [esp + 0x18]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x1c], 0
        mov    dword ptr [esp + 0x20], 0
        mov    dword ptr [esp + 0x24], 0x3f800000
        call    FUN_0040c410
        lea    ecx, [esp + 0x24]
        push    ecx
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esp + 0x28], 0xbf800000
        mov    dword ptr [esp + 0x2c], 0
        mov    dword ptr [esp + 0x30], 0
        call    FUN_0040c410
        lea    edx, [esp + 0x30]
        push    edx
        lea    ecx, [esi + 0x24]
        mov    dword ptr [esp + 0x34], 0
        mov    dword ptr [esp + 0x38], 0
        mov    dword ptr [esp + 0x3c], 0xbf800000
        call    FUN_0040c410
        lea    eax, [esp + 0x48]
        push    eax
        lea    ecx, [esi + 0x30]
        mov    dword ptr [esp + 0x4c], 0x3f800000
        mov    dword ptr [esp + 0x50], 0
        mov    dword ptr [esp + 0x54], 0
        call    FUN_0040c410
        mov    ebx, dword ptr [edi + 0x188]
        cmp    ebx, 5
        je    L_84b3
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_845f
        push    0x423b70
        push    5
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_8461
L_845f:
        xor    esi, esi
L_8461:
        mov    ebp, dword ptr [edi + 0x184]
        test    ebp, ebp
        je    L_84a3
        cmp    ebx, 5
        mov    edx, 5
        ja    L_8477
        mov    edx, ebx
L_8477:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_849a
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_8486:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_8486
L_849a:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_84a3:
        mov    dword ptr [edi + 0x184], esi
        mov    dword ptr [edi + 0x188], 5
L_84b3:
        mov    edi, dword ptr [edi + 0x184]
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi], edx
        mov    dword ptr [esp + 0x14], 0
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 4], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 8], ecx
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0xc], edx
        mov    dword ptr [esp + 0x10], 0
        mov    eax, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x10], eax
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x14], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x18], edx
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    eax, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x1c], eax
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [edi + 0x20], ecx
        mov    dword ptr [edi + 0x24], edx
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    ebx, dword ptr [edi + 0x180]
        cmp    ebx, 6
        je    L_85fd
        push    0x48
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_858d
        push    0x454eb0
        push    6
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_8595
L_858d:
        mov    dword ptr [esp + 0x10], 0
L_8595:
        mov    eax, dword ptr [edi + 0x17c]
        test    eax, eax
        je    L_85e9
        cmp    ebx, 6
        mov    eax, 6
        ja    L_85ab
        mov    eax, ebx
L_85ab:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_85da
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x17c]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_85c7:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_85c7
L_85da:
        mov    eax, dword ptr [edi + 0x17c]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_85e9:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x17c], ecx
        mov    dword ptr [edi + 0x180], 6
L_85fd:
        mov    esi, dword ptr [edi + 0x17c]
        lea    edx, [esp + 0x60]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0x64], 0
        mov    dword ptr [esp + 0x68], 0
        mov    dword ptr [esp + 0x6c], 0x3f800000
        call    FUN_0040c410
        lea    eax, [esp + 0x78]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x7c], 0xbf737870
        mov    dword ptr [esp + 0x80], 0
        mov    dword ptr [esp + 0x84], 0x3e9e377a
        call    FUN_0040c410
        lea    ecx, [esp + 0x90]
        push    ecx
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esp + 0x94], 0xbf167918
        mov    dword ptr [esp + 0x98], 0
        mov    dword ptr [esp + 0x9c], 0xbf4f1bb8
        call    FUN_0040c410
        lea    edx, [esp + 0xa8]
        push    edx
        lea    ecx, [esi + 0x24]
        mov    dword ptr [esp + 0xac], 0x3f167918
        mov    dword ptr [esp + 0xb0], 0
        mov    dword ptr [esp + 0xb4], 0xbf4f1bb8
        call    FUN_0040c410
        lea    eax, [esp + 0xc0]
        push    eax
        lea    ecx, [esi + 0x30]
        mov    dword ptr [esp + 0xc4], 0x3f737870
        mov    dword ptr [esp + 0xc8], 0
        mov    dword ptr [esp + 0xcc], 0x3e9e377a
        call    FUN_0040c410
        lea    ecx, [esp + 0xd8]
        push    ecx
        lea    ecx, [esi + 0x3c]
        mov    dword ptr [esp + 0xdc], 0
        mov    dword ptr [esp + 0xe0], 0
        mov    dword ptr [esp + 0xe4], 0x3f800000
        call    FUN_0040c410
        add    edi, 0x184
        push    6
        mov    ecx, edi
        call    FUN_0044cdf0
        mov    eax, dword ptr [edi]
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax], edx
        mov    dword ptr [esp + 0x14], 0
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [esp + 0x14], 0x3e4ccccd
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [esp + 0x14], 0x3ecccccd
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x18], edx
        mov    dword ptr [esp + 0x14], 0x3f19999a
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f4ccccd
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x20], edx
        mov    dword ptr [esp + 0x10], 0
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x24], ecx
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    ecx, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        mov    dword ptr [eax + 0x28], edx
        mov    dword ptr [eax + 0x2c], ecx
        pop    ebx
        add    esp, 0x17c
        ret    
        lea    esi, [edi + 0x17c]
        push    7
        mov    ecx, esi
        call    FUN_0044cd30
        mov    esi, dword ptr [esi]
        lea    edx, [esp + 0xf0]
        push    edx
        mov    ecx, esi
        mov    dword ptr [esp + 0xf4], 0
        mov    dword ptr [esp + 0xf8], 0
        mov    dword ptr [esp + 0xfc], 0x3f800000
        call    FUN_0040c410
        lea    eax, [esp + 0x108]
        push    eax
        lea    ecx, [esi + 0xc]
        mov    dword ptr [esp + 0x10c], 0xbf5db3d7
        mov    dword ptr [esp + 0x110], 0
        mov    dword ptr [esp + 0x114], 0x3f000000
        call    FUN_0040c410
        lea    ecx, [esp + 0x120]
        push    ecx
        lea    ecx, [esi + 0x18]
        mov    dword ptr [esp + 0x124], 0xbf5db3d7
        mov    dword ptr [esp + 0x128], 0
        mov    dword ptr [esp + 0x12c], 0xbf000000
        call    FUN_0040c410
        lea    edx, [esp + 0x138]
        push    edx
        lea    ecx, [esi + 0x24]
        mov    dword ptr [esp + 0x13c], 0
        mov    dword ptr [esp + 0x140], 0
        mov    dword ptr [esp + 0x144], 0xbf800000
        call    FUN_0040c410
        push    0xbf000000
        push    0
        push    0x3f5db3d7
        lea    ecx, [esp + 0x174]
        call    FUN_0040c9c0
        push    eax
        lea    ecx, [esi + 0x30]
        call    FUN_0040c410
        push    0x3f000000
        push    0
        push    0x3f5db3d7
        lea    ecx, [esp + 0x180]
        call    FUN_0040c9c0
        push    eax
        lea    ecx, [esi + 0x3c]
        call    FUN_0040c410
        push    0x3f800000
        push    0
        push    0
        lea    ecx, [esp + 0x18c]
        call    FUN_0040c9c0
        push    eax
        lea    ecx, [esi + 0x48]
        call    FUN_0040c410
        lea    esi, [edi + 0x184]
        push    7
        mov    ecx, esi
        call    FUN_0044cdf0
        mov    eax, dword ptr [esi]
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax], ecx
        mov    dword ptr [esp + 0x14], 0
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3e2aaaab
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3eaaaaab
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [esp + 0x14], 0x3f000000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x1c], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 0x20], ecx
        mov    dword ptr [esp + 0x14], 0x3f2aaaab
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x24], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f555555
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x28], ecx
        mov    dword ptr [eax + 0x2c], edx
        mov    dword ptr [esp + 0x10], 0
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [esp + 0x14], 0x3f800000
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 0x30], ecx
        mov    dword ptr [eax + 0x34], edx
L_89fb:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    edi, edi
        // jump-table data @ 0x00498A08 (16 relocated pointers)
        __emit 0x02
        __emit 0x7A
        __emit 0x49
        __emit 0x00
        __emit 0x02
        __emit 0x7A
        __emit 0x49
        __emit 0x00
        __emit 0xA4
        __emit 0x7D
        __emit 0x49
        __emit 0x00
        __emit 0x01
        __emit 0x80
        __emit 0x49
        __emit 0x00
        __emit 0xC5
        __emit 0x82
        __emit 0x49
        __emit 0x00
        __emit 0x59
        __emit 0x85
        __emit 0x49
        __emit 0x00
        __emit 0xE5
        __emit 0x87
        __emit 0x49
        __emit 0x00
        __emit 0xD9
        __emit 0x7B
        __emit 0x49
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x56
        __emit 0x6A
        __emit 0x1C
        __emit 0xE8
        __emit 0x98
        __emit 0xFA
        __emit 0xF6
        __emit 0xFF
        __emit 0x8B
        __emit 0xF0
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x85
        __emit 0xF6
        __emit 0x74
        __emit 0x2D
        __emit 0xA1
        __emit 0x3C
        __emit 0xA9
        __emit 0x7D
        __emit 0x00
        __emit 0x50
        __emit 0x68
    }
}
