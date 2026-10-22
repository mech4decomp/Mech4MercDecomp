/*
 * FUN_004f3a84 (extent 0x4f3a84-0x4f3abe) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004f3ac0(void);

__declspec(naked) void FUN_004f3a84(void)
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
        mov    eax, 2
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
        call    FUN_004f3ac0
        test    byte ptr [esp + 8], 1
        je    L_3ab8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_3ab8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
