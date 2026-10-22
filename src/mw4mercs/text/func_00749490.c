/*
 * FUN_00749490 (extent 0x749490-0x74950b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00857f34;
extern int    g_008aadc8;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_007497a0(void);
extern void __cdecl FUN_00749850(void);

__declspec(naked) void FUN_00749490(void)
{
    __asm {
        push    esi
        mov    esi, dword ptr [g_00857f34]
        test    esi, esi
        je    L_94c2
        push    edi
L_949c:
        test    esi, esi
        mov    edi, dword ptr [esi + 0x38]
        je    L_94b3
        mov    ecx, esi
        call    FUN_00749850
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_94b3:
        test    edi, edi
        mov    esi, edi
        jne    L_949c
        mov    dword ptr [g_00857f34], edi
        pop    edi
        pop    esi
        ret    
L_94c2:
        mov    dword ptr [g_00857f34], 0
        pop    esi
        ret    
        nop    
        nop    
        mov    eax, dword ptr [g_008aadc8]
        push    eax
        push    0x40
        call    FUN_004084c0
        add    esp, 8
        test    eax, eax
        je    L_94f2
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        mov    ecx, eax
        call    FUN_007497a0
        jmp    L_94f4
L_94f2:
        xor    eax, eax
L_94f4:
        mov    ecx, dword ptr [g_00857f34]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    dword ptr [eax + 0x38], ecx
        mov    dword ptr [g_00857f34], eax
        ret    8
    }
}
