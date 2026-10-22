/*
 * FUN_005c16d9 (extent 0x5c16d9-0x5c1761) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2460;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005c44c0(void);
extern void __cdecl FUN_005c6bd0(void);
extern void __cdecl FUN_005dd750(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_005c16d9(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        test    byte ptr [esp + 4], 1
        push    esi
        mov    esi, ecx
        mov    dword ptr [esi], 0x787b98
        je    L_16f9
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_16f9:
        mov    eax, esi
        pop    esi
        ret    4
        nop    
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
        mov    eax, dword ptr [g_007f2460]
        push    esi
        push    eax
        mov    esi, ecx
        call    FUN_006f4950
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        je    L_1741
        mov    ecx, esi
        call    FUN_005c44c0
L_1741:
        push    0
        mov    ecx, esi
        call    FUN_005dd750
        cmp    byte ptr [esp + 8], 1
        jne    L_1758
        mov    ecx, esi
        call    FUN_005c6bd0
L_1758:
        call    FUN_006f49a0
        pop    esi
        ret    4
    }
}
