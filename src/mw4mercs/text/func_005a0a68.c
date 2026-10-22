/*
 * FUN_005a0a68 (extent 0x5a0a68-0x5a0acd) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007f2028;
extern int    g_007f25bc;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dd270(void);

__declspec(naked) void FUN_005a0a68(void)
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
        push    esi
        push    0x24
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_0ac1
        mov    eax, dword ptr [g_007f25bc]
        push    0x5052a0
        push    0x5a0b00
        push    0x783ca0
        push    2
        push    eax
        push    0x783cd0
        push    0x4b5
        mov    ecx, esi
        call    FUN_004dd270
        mov    dword ptr [g_007f2028], esi
        pop    esi
        ret    
L_0ac1:
        mov    dword ptr [g_007f2028], 0
        pop    esi
        ret    
    }
}
