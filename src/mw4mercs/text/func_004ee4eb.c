/*
 * FUN_004ee4eb (extent 0x4ee4eb-0x4ee51e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041fc90(void);

__declspec(naked) void FUN_004ee4eb(void)
{
    __asm {
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
        call    FUN_0041fc90
        test    byte ptr [esp + 8], 1
        je    L_e518
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_e518:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
