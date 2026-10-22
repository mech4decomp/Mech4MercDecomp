/*
 * FUN_006f33ff (extent 0x6f33ff-0x6f3625) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007b8ef4;
extern int    g_007b8ef8;
extern int    g_007dc7f8;
extern int    g_00848d80;
extern int    g_00848d84;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416a90(void);
extern void __cdecl FUN_00416bf0(void);
extern void __cdecl FUN_004edca0(void);

__declspec(naked) void FUN_006f33ff(void)
{
    __asm {
        nop    
        push    esi
        mov    esi, dword ptr [esp + 8]
        mov    eax, dword ptr [esi]
        push    edi
        mov    edi, ecx
        mov    ecx, esi
        call    dword ptr [eax + 8]
        test    eax, eax
        jbe    L_344e
        add    edi, 0x10
L_3416:
        push    0x28
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_3435
        mov    ecx, dword ptr [g_007dc7f8]
        push    esi
        push    ecx
        mov    ecx, eax
        call    FUN_004edca0
        jmp    L_3437
L_3435:
        xor    eax, eax
L_3437:
        lea    edx, [eax + 0x10]
        push    edx
        push    eax
        mov    ecx, edi
        call    FUN_00416a90
        mov    eax, dword ptr [esi]
        mov    ecx, esi
        call    dword ptr [eax + 8]
        test    eax, eax
        ja    L_3416
L_344e:
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
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_34b6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_34ac
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_34b6
L_34ac:
        mov    dword ptr [g_007b8ef4], 0
L_34b6:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_34f4
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_34f4:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007b8ef8]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007b8ef8], eax
        jne    L_3556
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_354c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x1c
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007b8ef4], esi
        jmp    L_3556
L_354c:
        mov    dword ptr [g_007b8ef4], 0
L_3556:
        mov    ecx, dword ptr [g_007b8ef4]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_3594
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    edx, dword ptr [esp + 0x10]
        lea    ecx, [esi + 0x18]
        mov    dword ptr [ecx], 0
        push    edx
        mov    dword ptr [esi], 0x76d754
        call    FUN_00412740
        pop    edi
        mov    eax, esi
        pop    esi
        ret    8
L_3594:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
        nop    
        push    esi
        push    edi
        push    0x14
        mov    edi, ecx
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_35c7
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x79f6f0
        mov    eax, esi
        pop    esi
        ret    
L_35c7:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    
        nop    
        nop    
        nop    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        je    L_361f
        mov    ecx, dword ptr [g_00848d84]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_00848d80]
        jne    L_361f
        push    edi
        mov    edi, dword ptr [g_00848d84]
        test    edi, edi
        je    L_360e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_360e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_00848d84], 0
        pop    esi
        ret    4
L_361f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
