/*
 * FUN_005917fa (extent 0x5917fa-0x59182e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00591830(void);

__declspec(naked) void FUN_005917fa(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
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
        push    esi
        mov    esi, ecx
        call    FUN_00591830
        test    byte ptr [esp + 8], 1
        je    L_1828
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1828:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
