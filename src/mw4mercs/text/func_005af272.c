/*
 * FUN_005af272 (extent 0x5af272-0x5af2ae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005af250(void);

__declspec(naked) void FUN_005af272(void)
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
        mov    eax, 0xa
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
        call    FUN_005af250
        test    byte ptr [esp + 8], 1
        je    L_f2a8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_f2a8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
