/*
 * FUN_004d3a0b (extent 0x4d3a0b-0x4d3b4b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc12c;
extern int    g_007dc6b8;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004dfd70(void);
extern void __cdecl FUN_004dfec0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_004d3a0b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, 3
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
        push    esi
        mov    esi, ecx
        lea    ecx, [esi + 0x10]
        call    FUN_004169c0
        mov    ecx, esi
        call    FUN_00415380
        test    byte ptr [esp + 8], 1
        je    L_3a42
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3a42:
        mov    eax, esi
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
        mov    eax, dword ptr [g_007dc12c]
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx + 0xc]
        push    0x10
        xor    esi, 0x85739531
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_3a99
        mov    eax, dword ptr [g_007dc6b8]
        push    eax
        mov    ecx, edi
        call    FUN_004dfd70
        mov    dword ptr [edi], 0x772978
        jmp    L_3a9b
L_3a99:
        xor    edi, edi
L_3a9b:
        mov    esi, dword ptr [esi + 0x60]
        push    edi
        mov    ecx, esi
        call    FUN_004dfec0
        push    0x10
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_3acc
        mov    ecx, dword ptr [g_007dc6b8]
        push    ecx
        mov    ecx, edi
        call    FUN_004dfd70
        mov    dword ptr [edi], 0x772970
        jmp    L_3ace
L_3acc:
        xor    edi, edi
L_3ace:
        push    edi
        mov    ecx, esi
        call    FUN_004dfec0
        push    0x10
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_3afc
        mov    edx, dword ptr [g_007dc6b8]
        push    edx
        mov    ecx, edi
        call    FUN_004dfd70
        mov    dword ptr [edi], 0x772968
        jmp    L_3afe
L_3afc:
        xor    edi, edi
L_3afe:
        push    edi
        mov    ecx, esi
        call    FUN_004dfec0
        push    0x10
        call    FUN_004084d0
        mov    edi, eax
        add    esp, 4
        test    edi, edi
        je    L_3b39
        mov    eax, dword ptr [g_007dc6b8]
        push    eax
        mov    ecx, edi
        call    FUN_004dfd70
        push    edi
        mov    ecx, esi
        mov    dword ptr [edi], 0x772960
        call    FUN_004dfec0
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    
L_3b39:
        xor    edi, edi
        push    edi
        mov    ecx, esi
        call    FUN_004dfec0
        call    FUN_006f49a0
        pop    edi
        pop    esi
        ret    
    }
}
