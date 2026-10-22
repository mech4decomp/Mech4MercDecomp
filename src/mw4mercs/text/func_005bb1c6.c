/*
 * FUN_005bb1c6 (extent 0x5bb1c6-0x5bb20e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005bb210(void);

__declspec(naked) void FUN_005bb1c6(void)
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
        mov    esi, ecx
        call    FUN_005bb210
        test    byte ptr [esp + 8], 1
        je    L_b208
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_b208:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
