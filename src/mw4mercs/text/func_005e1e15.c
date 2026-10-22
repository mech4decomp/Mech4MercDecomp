/*
 * FUN_005e1e15 (extent 0x5e1e15-0x5e1e4e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005e1e50(void);

__declspec(naked) void FUN_005e1e15(void)
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
        mov    eax, 6
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
        call    FUN_005e1e50
        test    byte ptr [esp + 8], 1
        je    L_1e48
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_1e48:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
