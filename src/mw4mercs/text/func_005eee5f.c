/*
 * FUN_005eee5f (extent 0x5eee5f-0x5eeeae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005eef70(void);

__declspec(naked) void FUN_005eee5f(void)
{
    __asm {
        nop    
        xor    al, al
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
        ret    0x14
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
        call    FUN_005eef70
        test    byte ptr [esp + 8], 1
        je    L_eea8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_eea8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
