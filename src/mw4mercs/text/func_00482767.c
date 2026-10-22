/*
 * FUN_00482767 (extent 0x482767-0x4827ae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007da6ac;
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00482810(void);
extern void __cdecl FUN_0048fca0(void);

__declspec(naked) void FUN_00482767(void)
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
        mov    eax, dword ptr [g_007da6ac]
        push    esi
        mov    esi, ecx
        push    eax
        call    FUN_0048fca0
        mov    dword ptr [esi], 0x76faf8
        mov    dword ptr [esi + 0x78], 0x120
        mov    eax, esi
        pop    esi
        ret    
        nop    
        push    esi
        mov    esi, ecx
        call    FUN_00482810
        test    byte ptr [esp + 8], 1
        je    L_27a8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_27a8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
