/*
 * FUN_005e8334 (extent 0x5e8334-0x5e836e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005e8450(void);

__declspec(naked) void FUN_005e8334(void)
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
        mov    al, 1
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
        push    esi
        mov    esi, ecx
        call    FUN_005e8450
        test    byte ptr [esp + 8], 1
        je    L_8368
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_8368:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
