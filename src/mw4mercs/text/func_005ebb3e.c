/*
 * FUN_005ebb3e (extent 0x5ebb3e-0x5ebc75) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b8810;
extern int    g_007b8c14;
extern int    g_007f1f8c;
extern int    g_007f1f90;
extern int    g_007f2590;
extern int    g_007f2594;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415d70(void);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_004168e0(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416bf0(void);

__declspec(naked) void FUN_005ebb3e(void)
{
    __asm {
        nop    
        nop    
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
        mov    eax, dword ptr [g_007f1f90]
        push    esi
        push    edi
        mov    edi, ecx
        mov    ecx, eax
        inc    eax
        test    ecx, ecx
        mov    dword ptr [g_007f1f90], eax
        jne    L_bba6
        mov    edx, dword ptr [g_007b8810]
        push    edx
        push    0x2c
        call    FUN_004084c0
        mov    esi, eax
        add    esp, 8
        test    esi, esi
        je    L_bb9c
        mov    eax, dword ptr [g_007b8c14]
        push    eax
        push    0x76ceb8
        push    0x64
        push    0x64
        push    0x20
        mov    ecx, esi
        call    FUN_00415d70
        mov    dword ptr [g_007f1f8c], esi
        jmp    L_bba6
L_bb9c:
        mov    dword ptr [g_007f1f8c], 0
L_bba6:
        mov    ecx, dword ptr [g_007f1f8c]
        call    FUN_00416110
        mov    esi, eax
        test    esi, esi
        je    L_bbe0
        mov    ecx, dword ptr [esp + 0xc]
        push    ecx
        push    edi
        mov    ecx, esi
        call    FUN_004168e0
        mov    eax, dword ptr [esp + 0x10]
        mov    edx, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        mov    dword ptr [esi + 0x18], edx
        mov    dword ptr [esi + 0x1c], eax
        pop    edi
        mov    dword ptr [esi], 0x7823b4
        mov    eax, esi
        pop    esi
        ret    8
L_bbe0:
        pop    edi
        xor    eax, eax
        pop    esi
        ret    8
        nop    
        nop    
        nop    
        nop    
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
        je    L_bc17
        push    edi
        mov    ecx, esi
        call    FUN_00416bf0
        pop    edi
        mov    dword ptr [esi], 0x789a3c
        mov    eax, esi
        pop    esi
        ret    
L_bc17:
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
        je    L_bc6f
        mov    ecx, dword ptr [g_007f2590]
        push    esi
        call    FUN_00416130
        dec    dword ptr [g_007f2594]
        jne    L_bc6f
        push    edi
        mov    edi, dword ptr [g_007f2590]
        test    edi, edi
        je    L_bc5e
        mov    ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add    esp, 4
L_bc5e:
        pop    edi
        mov    eax, esi
        mov    dword ptr [g_007f2590], 0
        pop    esi
        ret    4
L_bc6f:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
