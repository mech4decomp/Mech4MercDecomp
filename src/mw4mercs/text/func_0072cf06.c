/*
 * FUN_0072cf06 (extent 0x72cf06-0x72cf41) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_00881a58;
extern int    g_008825c8;
extern void __cdecl FUN_0072ce60(void);
extern void __cdecl FUN_0072cf50(void);

__declspec(naked) void FUN_0072cf06(void)
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
        mov    eax, dword ptr [esp + 4]
        cmp    eax, 2
        jb    L_cf3e
        cmp    eax, 3
        ja    L_cf3e
        cmp    dword ptr [g_008825c8], 0x3b5
        jne    L_cf2f
        mov    eax, 3
L_cf2f:
        mov    dword ptr [g_00881a58], eax
        call    FUN_0072ce60
        call    FUN_0072cf50
L_cf3e:
        ret    4
    }
}
