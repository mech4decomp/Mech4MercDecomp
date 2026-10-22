/*
 * FUN_0049e22f (extent 0x49e22f-0x49f558) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da920;
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0044cd30(void);
extern void __cdecl FUN_0044cdf0(void);
extern void __cdecl FUN_004939d0(void);
extern void __cdecl FUN_004a1680(void);
extern void __cdecl FUN_004a1740(void);
extern void __cdecl FUN_004adf10(void);
extern void __cdecl FUN_004ae4c0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0049e22f(void)
{
    __asm {
        nop    
        push    esi
        push    edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push    edi
        call    FUN_004939d0
        mov    eax, dword ptr [g_007da920]
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [edi + 0x64]
        mov    edx, dword ptr [edi + 0x6c]
        mov    eax, dword ptr [edi + 0x78]
        mov    dword ptr [esi + 0x64], ecx
        mov    ecx, dword ptr [edi + 0x74]
        mov    dword ptr [esi + 0x6c], edx
        mov    edx, dword ptr [edi + 0x84]
        mov    dword ptr [esi + 0x74], ecx
        mov    ecx, dword ptr [edi + 0x90]
        mov    dword ptr [esi + 0x78], eax
        mov    eax, dword ptr [edi + 0x80]
        mov    dword ptr [esi + 0x84], edx
        mov    edx, dword ptr [edi + 0x8c]
        mov    dword ptr [esi + 0x90], ecx
        mov    dword ptr [esi + 0x80], eax
        mov    eax, dword ptr [edi + 0x98]
        lea    ecx, [edi + 0x9c]
        push    ecx
        mov    dword ptr [esi + 0x8c], edx
        lea    ecx, [esi + 0x9c]
        mov    dword ptr [esi + 0x98], eax
        call    FUN_004ae4c0
        lea    edx, [edi + 0xac]
        push    edx
        lea    ecx, [esi + 0xac]
        call    FUN_004ae4c0
        lea    eax, [edi + 0xb8]
        push    eax
        lea    ecx, [esi + 0xb8]
        call    FUN_004adf10
        mov    cl, byte ptr [edi + 0xcc]
        lea    edx, [edi + 0xd4]
        mov    byte ptr [esi + 0xcc], cl
        push    edx
        lea    ecx, [esi + 0xd4]
        call    FUN_004ae4c0
        lea    eax, [edi + 0xe0]
        push    eax
        lea    ecx, [esi + 0xe0]
        call    FUN_004adf10
        mov    cl, byte ptr [edi + 0xf4]
        lea    edx, [edi + 0xfc]
        mov    byte ptr [esi + 0xf4], cl
        push    edx
        lea    ecx, [esi + 0xfc]
        call    FUN_004ae4c0
        mov    eax, dword ptr [edi + 0x110]
        mov    ecx, dword ptr [edi + 0x10c]
        mov    dl, byte ptr [edi + 0x114]
        mov    dword ptr [esi + 0x110], eax
        lea    eax, [edi + 0x11c]
        mov    dword ptr [esi + 0x10c], ecx
        push    eax
        lea    ecx, [esi + 0x11c]
        mov    byte ptr [esi + 0x114], dl
        call    FUN_004ae4c0
        mov    ecx, dword ptr [edi + 0x130]
        mov    edx, dword ptr [edi + 0x12c]
        mov    al, byte ptr [edi + 0x134]
        mov    dword ptr [esi + 0x130], ecx
        lea    ecx, [edi + 0x13c]
        push    ecx
        lea    ecx, [esi + 0x13c]
        mov    dword ptr [esi + 0x12c], edx
        mov    byte ptr [esi + 0x134], al
        call    FUN_004ae4c0
        mov    edx, dword ptr [edi + 0x150]
        mov    eax, dword ptr [edi + 0x14c]
        mov    cl, byte ptr [edi + 0x154]
        mov    dword ptr [esi + 0x150], edx
        mov    dword ptr [esi + 0x14c], eax
        mov    byte ptr [esi + 0x154], cl
        lea    edx, [edi + 0x15c]
        push    edx
        lea    ecx, [esi + 0x15c]
        call    FUN_004ae4c0
        mov    eax, dword ptr [edi + 0x170]
        mov    ecx, dword ptr [edi + 0x16c]
        mov    dl, byte ptr [edi + 0x174]
        mov    dword ptr [esi + 0x170], eax
        lea    eax, [edi + 0x17c]
        mov    dword ptr [esi + 0x16c], ecx
        push    eax
        lea    ecx, [esi + 0x17c]
        mov    byte ptr [esi + 0x174], dl
        call    FUN_004ae4c0
        lea    ecx, [edi + 0x188]
        push    ecx
        lea    ecx, [esi + 0x188]
        call    FUN_004adf10
        mov    dl, byte ptr [edi + 0x19c]
        lea    eax, [edi + 0x1a4]
        push    eax
        lea    ecx, [esi + 0x1a4]
        mov    byte ptr [esi + 0x19c], dl
        call    FUN_004ae4c0
        lea    ecx, [edi + 0x1b0]
        push    ecx
        lea    ecx, [esi + 0x1b0]
        call    FUN_004adf10
        mov    dl, byte ptr [edi + 0x1c4]
        lea    eax, [edi + 0x1cc]
        push    eax
        lea    ecx, [esi + 0x1cc]
        mov    byte ptr [esi + 0x1c4], dl
        call    FUN_004adf10
        lea    ecx, [edi + 0x1e0]
        push    ecx
        lea    ecx, [esi + 0x1e0]
        call    FUN_004adf10
        mov    dl, byte ptr [edi + 0x1f4]
        lea    eax, [edi + 0x1fc]
        push    eax
        lea    ecx, [esi + 0x1fc]
        mov    byte ptr [esi + 0x1f4], dl
        call    FUN_004adf10
        lea    ecx, [edi + 0x210]
        push    ecx
        lea    ecx, [esi + 0x210]
        call    FUN_004adf10
        mov    dl, byte ptr [edi + 0x224]
        mov    ecx, dword ptr [edi + 0x22c]
        mov    eax, dword ptr [edi + 0x228]
        mov    byte ptr [esi + 0x224], dl
        lea    edx, [edi + 0x234]
        mov    dword ptr [esi + 0x22c], ecx
        push    edx
        lea    ecx, [esi + 0x234]
        mov    dword ptr [esi + 0x228], eax
        call    FUN_004a1680
        lea    eax, [edi + 0x23c]
        push    eax
        lea    ecx, [esi + 0x23c]
        call    FUN_004a1740
        mov    cl, byte ptr [edi + 0x230]
        mov    dl, byte ptr [edi + 0x231]
        mov    eax, dword ptr [edi + 0x244]
        mov    byte ptr [esi + 0x230], cl
        mov    cl, byte ptr [edi + 0x232]
        mov    byte ptr [esi + 0x231], dl
        mov    dl, byte ptr [edi + 0x233]
        mov    dword ptr [esi + 0x244], eax
        mov    byte ptr [esi + 0x232], cl
        mov    byte ptr [esi + 0x233], dl
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x17c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov    edi, ecx
        mov    eax, dword ptr [edi + 0x22c]
        cmp    eax, 7
        ja    L_f54b
        jmp    dword ptr [eax*4 + 0x49f558]
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 2
        je    L_e5f6
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e586
        push    0x454eb0
        push    2
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_e58e
L_e586:
        mov    dword ptr [esp + 0x10], 0
L_e58e:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_e5e2
        cmp    ebx, 2
        mov    eax, 2
        ja    L_e5a4
        mov    eax, ebx
L_e5a4:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_e5d3
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_e5c0:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_e5c0
L_e5d3:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e5e2:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 2
L_e5f6:
        mov    esi, dword ptr [edi + 0x234]
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
        mov    ebx, dword ptr [edi + 0x240]
        cmp    ebx, 2
        je    L_e6dd
        push    0x10
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e689
        push    0x423b70
        push    2
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_e68b
L_e689:
        xor    esi, esi
L_e68b:
        mov    ebp, dword ptr [edi + 0x23c]
        test    ebp, ebp
        je    L_e6cd
        cmp    ebx, 2
        mov    edx, 2
        ja    L_e6a1
        mov    edx, ebx
L_e6a1:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_e6c4
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_e6b0:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_e6b0
L_e6c4:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_e6cd:
        mov    dword ptr [edi + 0x23c], esi
        mov    dword ptr [edi + 0x240], 2
L_e6dd:
        mov    edi, dword ptr [edi + 0x23c]
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
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 2
        je    L_e7cd
        push    0x18
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e75d
        push    0x454eb0
        push    2
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_e765
L_e75d:
        mov    dword ptr [esp + 0x10], 0
L_e765:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_e7b9
        cmp    ebx, 2
        mov    eax, 2
        ja    L_e77b
        mov    eax, ebx
L_e77b:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_e7aa
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_e797:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_e797
L_e7aa:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e7b9:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 2
L_e7cd:
        mov    esi, dword ptr [edi + 0x234]
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
        mov    ebx, dword ptr [edi + 0x240]
        cmp    ebx, 2
        je    L_e8a8
        push    0x10
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e854
        push    0x423b70
        push    2
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_e856
L_e854:
        xor    esi, esi
L_e856:
        mov    ebp, dword ptr [edi + 0x23c]
        test    ebp, ebp
        je    L_e898
        cmp    ebx, 2
        mov    edx, 2
        ja    L_e86c
        mov    edx, ebx
L_e86c:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_e88f
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_e87b:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_e87b
L_e88f:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_e898:
        mov    dword ptr [edi + 0x23c], esi
        mov    dword ptr [edi + 0x240], 2
L_e8a8:
        mov    edi, dword ptr [edi + 0x23c]
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
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 4
        je    L_e998
        push    0x30
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_e928
        push    0x454eb0
        push    4
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_e930
L_e928:
        mov    dword ptr [esp + 0x10], 0
L_e930:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_e984
        cmp    ebx, 4
        mov    eax, 4
        ja    L_e946
        mov    eax, ebx
L_e946:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_e975
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_e962:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_e962
L_e975:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_e984:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 4
L_e998:
        mov    esi, dword ptr [edi + 0x234]
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
        mov    ebx, dword ptr [edi + 0x240]
        cmp    ebx, 4
        je    L_eac9
        push    0x20
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ea75
        push    0x423b70
        push    4
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_ea77
L_ea75:
        xor    esi, esi
L_ea77:
        mov    ebp, dword ptr [edi + 0x23c]
        test    ebp, ebp
        je    L_eab9
        cmp    ebx, 4
        mov    edx, 4
        ja    L_ea8d
        mov    edx, ebx
L_ea8d:
        mov    eax, edx
        dec    edx
        test    eax, eax
        je    L_eab0
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_ea9c:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_ea9c
L_eab0:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_eab9:
        mov    dword ptr [edi + 0x23c], esi
        mov    dword ptr [edi + 0x240], 4
L_eac9:
        mov    edi, dword ptr [edi + 0x23c]
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
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 5
        je    L_ebf5
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_eb85
        push    0x454eb0
        push    5
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_eb8d
L_eb85:
        mov    dword ptr [esp + 0x10], 0
L_eb8d:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_ebe1
        cmp    ebx, 5
        mov    eax, 5
        ja    L_eba3
        mov    eax, ebx
L_eba3:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_ebd2
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_ebbf:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_ebbf
L_ebd2:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_ebe1:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 5
L_ebf5:
        mov    esi, dword ptr [edi + 0x234]
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
        mov    ebx, dword ptr [edi + 0x240]
        cmp    ebx, 5
        je    L_ed6f
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ed1b
        push    0x423b70
        push    5
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_ed1d
L_ed1b:
        xor    esi, esi
L_ed1d:
        mov    ebp, dword ptr [edi + 0x23c]
        test    ebp, ebp
        je    L_ed5f
        cmp    ebx, 5
        mov    edx, 5
        ja    L_ed33
        mov    edx, ebx
L_ed33:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_ed56
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_ed42:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_ed42
L_ed56:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_ed5f:
        mov    dword ptr [edi + 0x23c], esi
        mov    dword ptr [edi + 0x240], 5
L_ed6f:
        mov    edi, dword ptr [edi + 0x23c]
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
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 5
        je    L_eeb9
        push    0x3c
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_ee49
        push    0x454eb0
        push    5
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_ee51
L_ee49:
        mov    dword ptr [esp + 0x10], 0
L_ee51:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_eea5
        cmp    ebx, 5
        mov    eax, 5
        ja    L_ee67
        mov    eax, ebx
L_ee67:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_ee96
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_ee83:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_ee83
L_ee96:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_eea5:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 5
L_eeb9:
        mov    esi, dword ptr [edi + 0x234]
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
        mov    ebx, dword ptr [edi + 0x240]
        cmp    ebx, 5
        je    L_f003
        push    0x28
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_efaf
        push    0x423b70
        push    5
        push    8
        push    esi
        call    FUN_00406c90
        jmp    L_efb1
L_efaf:
        xor    esi, esi
L_efb1:
        mov    ebp, dword ptr [edi + 0x23c]
        test    ebp, ebp
        je    L_eff3
        cmp    ebx, 5
        mov    edx, 5
        ja    L_efc7
        mov    edx, ebx
L_efc7:
        mov    ecx, edx
        dec    edx
        test    ecx, ecx
        je    L_efea
        mov    ecx, ebp
        lea    eax, [esi + edx*8]
        sub    ecx, esi
        inc    edx
L_efd6:
        mov    ebx, dword ptr [ecx + eax]
        mov    dword ptr [eax], ebx
        mov    ebx, dword ptr [ecx + eax + 4]
        mov    dword ptr [eax + 4], ebx
        dec    edx
        sub    eax, 8
        test    edx, edx
        ja    L_efd6
L_efea:
        push    ebp
        call    FUN_004084e0
        add    esp, 4
L_eff3:
        mov    dword ptr [edi + 0x23c], esi
        mov    dword ptr [edi + 0x240], 5
L_f003:
        mov    edi, dword ptr [edi + 0x23c]
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
        mov    ebx, dword ptr [edi + 0x238]
        cmp    ebx, 6
        je    L_f14d
        push    0x48
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_f0dd
        push    0x454eb0
        push    6
        push    0xc
        push    esi
        call    FUN_00406c90
        mov    dword ptr [esp + 0x10], esi
        jmp    L_f0e5
L_f0dd:
        mov    dword ptr [esp + 0x10], 0
L_f0e5:
        mov    eax, dword ptr [edi + 0x234]
        test    eax, eax
        je    L_f139
        cmp    ebx, 6
        mov    eax, 6
        ja    L_f0fb
        mov    eax, ebx
L_f0fb:
        mov    ecx, eax
        dec    eax
        test    ecx, ecx
        je    L_f12a
        mov    ecx, dword ptr [esp + 0x10]
        mov    ebp, dword ptr [edi + 0x234]
        lea    edx, [eax + eax*2]
        lea    esi, [ecx + edx*4]
        sub    ebp, ecx
        lea    ebx, [eax + 1]
L_f117:
        lea    eax, [esi + ebp]
        push    eax
        mov    ecx, esi
        call    FUN_0040ccd0
        dec    ebx
        sub    esi, 0xc
        test    ebx, ebx
        ja    L_f117
L_f12a:
        mov    eax, dword ptr [edi + 0x234]
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_f139:
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [edi + 0x234], ecx
        mov    dword ptr [edi + 0x238], 6
L_f14d:
        mov    esi, dword ptr [edi + 0x234]
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
        add    edi, 0x23c
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
        lea    esi, [edi + 0x234]
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
        lea    esi, [edi + 0x23c]
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
L_f54b:
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 0x17c
        ret    
        mov    edi, edi
        // jump-table data @ 0x0049F558 (0 relocated pointers)
    }
}
