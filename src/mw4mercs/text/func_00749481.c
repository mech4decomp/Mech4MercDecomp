/*
 * FUN_00749481 (extent 0x749481-0x7494ce) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00857f34;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00749850(void);

__declspec(naked) void FUN_00749481(void)
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
        nop    
        nop    
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
    }
}
