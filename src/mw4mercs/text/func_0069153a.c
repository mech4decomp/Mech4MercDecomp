/*
 * FUN_0069153a (extent 0x69153a-0x6918e6) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2464;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005d8cc0(void);
extern void __cdecl FUN_00691540(void);
extern void __cdecl FUN_00691a10(void);
extern void __cdecl FUN_00691ac0(void);
extern void __cdecl FUN_00691ae0(void);
extern void __cdecl FUN_00691af0(void);
extern void __cdecl FUN_00691c00(void);
extern void __cdecl FUN_00691ca0(void);
extern void __cdecl FUN_00691d30(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_0069153a(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 8
        mov    eax, dword ptr [g_007f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 8]
        mov    edi, dword ptr [esp + 0x20]
        mov    ebx, dword ptr [esp + 0x24]
        cmp    edi, ebx
        mov    edx, dword ptr [eax + ebx*8]
        mov    ecx, dword ptr [eax + edi*8]
        mov    ebp, dword ptr [eax + edi*8 + 4]
        mov    eax, dword ptr [eax + ebx*8 + 4]
        mov    dword ptr [esp + 0x24], edx
        mov    dword ptr [esp + 0x20], eax
        jl    L_160f
        mov    esi, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [esi + 4]
        cmp    eax, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x10], ecx
        mov    dword ptr [esp + 0x14], ebp
        je    L_15a6
        test    eax, eax
        je    L_159e
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 4], ecx
L_159e:
        add    eax, 8
        mov    dword ptr [esi + 4], eax
        jmp    L_15b9
L_15a6:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00691af0
        mov    edx, dword ptr [esp + 0x24]
L_15b9:
        mov    eax, dword ptr [esp + 0x20]
        mov    ecx, dword ptr [esi + 8]
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esi + 4]
        cmp    eax, ecx
        mov    dword ptr [esp + 0x10], edx
        je    L_15f1
        test    eax, eax
        je    L_15dc
        mov    dword ptr [eax], edx
        mov    ecx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 4], ecx
L_15dc:
        add    eax, 8
        mov    dword ptr [esi + 4], eax
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
L_15f1:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        mov    ecx, esi
        call    FUN_00691af0
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
L_160f:
        mov    al, byte ptr [esi + 0x27]
        test    al, al
        sete    al
        push    eax
        xor    eax, eax
        mov    ax, word ptr [esi + 0x2c]
        push    eax
        mov    eax, dword ptr [esp + 0x28]
        push    eax
        push    edx
        push    ebp
        push    ecx
        mov    ecx, dword ptr [esi + 0x30]
        call    FUN_005d8cc0
        test    al, al
        je    L_168d
        mov    ecx, dword ptr [esp + 0x20]
        mov    edx, dword ptr [esp + 0x24]
        mov    dword ptr [esp + 0x14], ecx
        mov    ecx, dword ptr [esp + 0x1c]
        mov    eax, dword ptr [ecx + 4]
        cmp    eax, dword ptr [ecx + 8]
        mov    dword ptr [esp + 0x10], edx
        je    L_1671
        test    eax, eax
        je    L_165c
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [esp + 0x14]
        mov    dword ptr [eax + 4], edx
L_165c:
        add    eax, 8
        mov    dword ptr [ecx + 4], eax
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
L_1671:
        push    1
        lea    edx, [esp + 0x14]
        push    edx
        push    eax
        call    FUN_00691af0
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
L_168d:
        lea    ebp, [edi + ebx]
        sar    ebp, 1
        push    ebp
        push    edi
        mov    edi, dword ptr [esp + 0x24]
        push    edi
        mov    ecx, esi
        call    FUN_00691540
        push    ebx
        inc    ebp
        push    ebp
        push    edi
        mov    ecx, esi
        call    FUN_00691540
        call    FUN_006f49a0
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        add    esp, 8
        ret    0xc
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        sub    esp, 0x18
        push    ebx
        push    esi
        push    edi
        lea    eax, [esp + 0xf]
        mov    ebx, ecx
        push    eax
        lea    ecx, [esp + 0x1c]
        call    FUN_00691a10
        mov    ecx, dword ptr [g_007f2464]
        push    ecx
        call    FUN_006f4950
        mov    edx, dword ptr [ebx + 0xc]
        mov    edi, dword ptr [ebx + 8]
        lea    esi, [ebx + 8]
        sub    edx, edi
        sar    edx, 3
        cmp    edx, 2
        ja    L_1719
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        sub    ecx, eax
        sar    ecx, 3
        push    ecx
        push    eax
        lea    ecx, [esp + 0x28]
        call    FUN_00691ac0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x18
        ret    
L_1719:
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x1c]
        push    edx
        push    eax
        push    eax
        call    FUN_00691c00
        mov    edi, dword ptr [esi + 4]
        mov    ecx, dword ptr [esi]
        mov    edx, dword ptr [esp + 0x2c]
        sub    edi, ecx
        add    esp, 0xc
        sar    edi, 4
        cmp    eax, edx
        mov    dword ptr [esp + 0x1c], eax
        je    L_1757
        test    eax, eax
        je    L_1750
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], ecx
L_1750:
        add    dword ptr [esp + 0x1c], 8
        jmp    L_1764
L_1757:
        push    1
        push    ecx
        push    eax
        lea    ecx, [esp + 0x24]
        call    FUN_00691af0
L_1764:
        lea    edx, [edi - 1]
        push    edx
        push    0
        lea    eax, [esp + 0x20]
        push    eax
        mov    ecx, ebx
        call    FUN_00691540
        mov    ecx, dword ptr [esi + 4]
        sub    ecx, dword ptr [esi]
        sar    ecx, 3
        dec    ecx
        push    ecx
        push    edi
        lea    edx, [esp + 0x20]
        push    edx
        mov    ecx, ebx
        call    FUN_00691540
        lea    eax, [esp + 0x18]
        cmp    eax, esi
        je    L_1861
        mov    edx, dword ptr [esp + 0x1c]
        mov    ebx, dword ptr [esi + 8]
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esi]
        push    ebp
        mov    edi, edx
        mov    ebp, ebx
        sub    edi, ecx
        sub    ebp, eax
        sar    edi, 3
        sar    ebp, 3
        cmp    edi, ebp
        jbe    L_1814
        test    edi, edi
        mov    dword ptr [esp + 0x14], edx
        mov    dword ptr [esp + 0x18], ecx
        je    L_17d9
        lea    ecx, [edi*8]
        push    ecx
        call    FUN_004084d0
        add    esp, 4
        mov    ebp, eax
        jmp    L_17db
L_17d9:
        xor    ebp, ebp
L_17db:
        mov    edx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [esp + 0x14]
        mov    ecx, dword ptr [esp + 0x18]
        push    edx
        push    ebp
        push    eax
        push    ecx
        call    FUN_00691d30
        mov    eax, dword ptr [esi]
        sub    ebx, eax
        add    esp, 0x10
        sar    ebx, 3
        push    ebx
        lea    ebx, [esi + 8]
        push    eax
        mov    ecx, ebx
        mov    dword ptr [esp + 0x20], eax
        call    FUN_00691ac0
        lea    edx, [ebp + edi*8]
        mov    dword ptr [esi], ebp
        mov    dword ptr [ebx], edx
        jmp    L_1858
L_1814:
        mov    ebp, dword ptr [esi + 4]
        mov    ebx, ebp
        sub    ebx, eax
        sar    ebx, 3
        cmp    ebx, edi
        push    eax
        jb    L_1833
        push    edx
        push    ecx
        call    FUN_00691ca0
        add    esp, 0xc
        mov    dword ptr [esp + 0x18], eax
        jmp    L_1858
L_1833:
        lea    eax, [ecx + ebx*8]
        push    eax
        push    ecx
        call    FUN_00691ca0
        mov    ecx, dword ptr [esp + 0x24]
        mov    edx, dword ptr [esp + 0x2c]
        mov    eax, dword ptr [esp + 0x28]
        push    ecx
        push    ebp
        push    edx
        lea    ecx, [eax + ebx*8]
        push    ecx
        call    FUN_00691d30
        add    esp, 0x1c
L_1858:
        mov    edx, dword ptr [esi]
        lea    eax, [edx + edi*8]
        mov    dword ptr [esi + 4], eax
        pop    ebp
L_1861:
        call    FUN_006f49a0
        mov    eax, dword ptr [esp + 0x18]
        mov    ecx, dword ptr [esp + 0x20]
        sub    ecx, eax
        sar    ecx, 3
        push    ecx
        push    eax
        call    FUN_00691ae0
        add    esp, 8
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x18
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
        mov    eax, dword ptr [g_007f2464]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        mov    eax, dword ptr [esi + 0xc]
        mov    ecx, dword ptr [esi + 8]
        cmp    ecx, eax
        jae    L_18c9
        push    edi
L_18a9:
        mov    edi, dword ptr [eax - 8]
        mov    edx, dword ptr [ecx]
        mov    esi, dword ptr [ecx + 4]
        sub    eax, 8
        mov    dword ptr [ecx], edi
        mov    edi, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edi
        add    ecx, 8
        cmp    ecx, eax
        mov    dword ptr [eax], edx
        mov    dword ptr [eax + 4], esi
        jb    L_18a9
        pop    edi
L_18c9:
        call    FUN_006f49a0
        pop    esi
        ret    
        push    ecx
        mov    eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89  // mov dword ptr [esp], eax with explicit disp8=0 (MSVC6 drops the 00 byte)
        __emit 0x44
        __emit 0x24
        __emit 0x00
        je    L_18e4
        push    eax
        call    FUN_004084e0
        add    esp, 4
L_18e4:
        pop    ecx
        ret    
    }
}
