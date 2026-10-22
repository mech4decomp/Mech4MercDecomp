/*
 * FUN_006e5923 (extent 0x6e5923-0x6e5deb) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b540;
extern int    g_0076b544;
extern int    g_0076b54c;
extern int    g_0076b550;
extern int    g_0076b554;
extern int    g_0076b558;
extern int    g_0076b560;
extern int    g_0076b564;
extern int    g_0076b568;
extern int    g_0076b56c;
extern int    g_0076b570;
extern int    g_0076b5a4;
extern int    g_007b82b4;
extern int    g_00841758;
extern int    g_00841760;
extern int    g_0084176c;
extern char   g_00848c94;
extern int    g_00848ca4;
extern int    g_00848d74;
extern void __cdecl FUN_006e5bf0(void);
extern void __cdecl FUN_006ee5e0(void);
extern void __cdecl FUN_006ee660(void);
extern void __cdecl FUN_006f0c60(void);

__declspec(naked) void FUN_006e5923(void)
{
    __asm {
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
        mov    eax, dword ptr [g_0084176c]
        test    eax, eax
        mov    dword ptr [g_00848ca4], 2
        je    L_5956
        push    1
        push    eax
        call    dword ptr [g_0076b570]
        mov    dword ptr [g_0084176c], 0
L_5956:
        mov    eax, dword ptr [g_00841760]
        push    esi
        mov    esi, dword ptr [g_0076b5a4]
        push    edi
        push    1
        push    0x40d
        push    eax
        call    esi
        mov    edi, dword ptr [g_0076b544]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    1
        push    0x40c
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    1
        push    0x4b6
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    1
        push    0x4b7
        push    eax
        call    esi
        push    eax
        call    edi
        pop    edi
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
        nop    
L_59c0:
        mov    eax, dword ptr [g_00841760]
        push    eax
        mov    dword ptr [g_00848ca4], 0
        call    dword ptr [g_0076b540]
        test    eax, eax
        je    L_5a56
        mov    ecx, dword ptr [g_00841760]
        push    esi
        push    edi
        push    ecx
        call    FUN_006f0c60
        mov    edi, dword ptr [g_00848d74]
        xor    edx, edx
        test    edi, edi
        sete    dl
        push    edx
        call    FUN_006e5bf0
        mov    eax, dword ptr [g_00841760]
        mov    esi, dword ptr [g_0076b5a4]
        add    esp, 8
        push    1
        push    0x40e
        push    eax
        call    esi
        mov    edi, dword ptr [g_0076b544]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    1
        push    0x40d
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    1
        push    0x4b6
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    1
        push    0x4b7
        push    eax
        call    esi
        push    eax
        call    edi
        pop    edi
        pop    esi
L_5a56:
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
        jmp    L_59c0
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
        sub    esp, 0x3c
        mov    eax, dword ptr [g_00841760]
        push    ebx
        push    esi
        mov    esi, dword ptr [g_0076b5a4]
        push    edi
        push    0
        push    0x40e
        push    eax
        mov    dword ptr [g_00848ca4], 1
        call    esi
        mov    edi, dword ptr [g_0076b544]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    0
        push    0x40d
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    0
        push    0x40c
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    0
        push    0x4b6
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    0
        push    0x4b7
        push    ecx
        call    esi
        push    eax
        call    edi
        push    0
        call    FUN_006e5bf0
        mov    edx, dword ptr [g_00841758]
        mov    eax, dword ptr [g_007b82b4]
        add    esp, 4
        push    0
        push    0
        push    edx
        push    0x87
        push    eax
        call    dword ptr [g_0076b564]
        mov    edx, dword ptr [g_00841758]
        mov    esi, dword ptr [g_0076b56c]
        lea    ecx, [esp + 0x1c]
        push    ecx
        push    edx
        mov    dword ptr [g_0084176c], eax
        call    esi
        mov    ecx, dword ptr [g_0084176c]
        lea    eax, [esp + 0xc]
        push    eax
        push    ecx
        call    esi
        mov    eax, dword ptr [esp + 0xc]
        mov    ebx, dword ptr [esp + 0x10]
        mov    ecx, dword ptr [esp + 0x14]
        mov    esi, dword ptr [esp + 0x18]
        sub    ecx, eax
        mov    eax, dword ptr [esp + 0x24]
        sub    esi, ebx
        mov    ebx, dword ptr [esp + 0x1c]
        sub    eax, ebx
        sub    eax, ecx
        cdq    
        sub    eax, edx
        mov    edi, eax
        mov    eax, dword ptr [esp + 0x28]
        sar    edi, 1
        add    edi, ebx
        mov    dword ptr [esp + 0xc], edi
        mov    ebx, dword ptr [esp + 0x20]
        sub    eax, ebx
        sub    eax, esi
        cdq    
        push    0
        sub    eax, edx
        mov    edx, dword ptr [g_0084176c]
        push    esi
        sar    eax, 1
        push    ecx
        add    eax, ebx
        push    eax
        push    edi
        push    edx
        mov    dword ptr [esp + 0x28], eax
        call    dword ptr [g_0076b54c]
        mov    eax, dword ptr [g_0084176c]
        push    5
        push    eax
        call    dword ptr [g_0076b568]
        mov    esi, dword ptr [g_0076b550]
        push    1
        push    0
        push    0
        push    0
        lea    ecx, [esp + 0x3c]
        push    ecx
        call    esi
        test    eax, eax
        je    L_5be8
        mov    edi, dword ptr [g_0076b554]
        mov    ebx, dword ptr [g_0076b558]
L_5bc0:
        cmp    dword ptr [esp + 0x30], 0x12
        je    L_5be8
        lea    edx, [esp + 0x2c]
        push    edx
        call    edi
        lea    eax, [esp + 0x2c]
        push    eax
        call    ebx
        push    1
        push    0
        push    0
        push    0
        lea    ecx, [esp + 0x3c]
        push    ecx
        call    esi
        test    eax, eax
        jne    L_5bc0
L_5be8:
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x3c
        ret    
        nop    
        mov    eax, dword ptr [g_00841760]
        push    ebx
        mov    ebx, dword ptr [esp + 8]
        push    ebp
        push    esi
        mov    esi, dword ptr [g_0076b5a4]
        push    edi
        push    ebx
        push    0x40a
        push    eax
        call    esi
        mov    edi, dword ptr [g_0076b544]
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x3f6
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    0x4c5
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    ebx
        push    0x4c6
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x420
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    0x424
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    ebx
        push    0x426
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x427
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    0x499
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    ebx
        push    0x4d8
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x4d0
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    0x423
        push    edx
        call    esi
        push    eax
        call    edi
        mov    eax, dword ptr [g_00841760]
        push    ebx
        push    0x4cd
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x421
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    ebp, 0x412
L_5d00:
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    ebp
        push    edx
        call    esi
        push    eax
        call    edi
        inc    ebp
        cmp    ebp, 0x41f
        jle    L_5d00
        mov    eax, dword ptr [g_00841760]
        push    0
        push    0
        push    0x147
        push    0x412
        push    eax
        call    esi
        push    eax
        call    dword ptr [g_0076b560]
        cmp    eax, -1
        je    L_5d99
        mov    eax, dword ptr [eax*4 + 0x841d88]
        cmp    eax, 4
        je    L_5d74
        cmp    eax, 0xa
        je    L_5d74
        cmp    byte ptr [g_00848c94], 1
        je    L_5d74
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    0x417
        push    ecx
        call    esi
        push    eax
        call    edi
        mov    edx, dword ptr [g_00841760]
        push    ebx
        push    0x4dc
        push    edx
        jmp    L_5d94
L_5d74:
        mov    eax, dword ptr [g_00841760]
        push    0
        push    0x417
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    0
        push    0x4dc
        push    ecx
L_5d94:
        call    esi
        push    eax
        call    edi
L_5d99:
        mov    ebp, 0x49b
L_5d9e:
        mov    eax, dword ptr [g_00841760]
        push    ebx
        lea    edx, [ebp - 0x72]
        push    edx
        push    eax
        call    esi
        push    eax
        call    edi
        mov    ecx, dword ptr [g_00841760]
        push    ebx
        push    ebp
        push    ecx
        call    esi
        push    eax
        call    edi
        inc    ebp
        lea    edx, [ebp - 0x49b]
        cmp    edx, 0x18
        jl    L_5d9e
        pop    edi
        pop    esi
        pop    ebp
        test    ebx, ebx
        pop    ebx
        je    L_5dea
        mov    eax, dword ptr [g_00841760]
        push    eax
        call    FUN_006ee660
        mov    ecx, dword ptr [g_00841760]
        push    ecx
        call    FUN_006ee5e0
        add    esp, 8
L_5dea:
        ret    
    }
}
