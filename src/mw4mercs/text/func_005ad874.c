/*
 * FUN_005ad874 (extent 0x5ad874-0x5ad8ae) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005ad8b0(void);

__declspec(naked) void FUN_005ad874(void)
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
        mov    eax, 0xe
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
        call    FUN_005ad8b0
        test    byte ptr [esp + 8], 1
        je    L_d8a8
        push    esi
        call    FUN_004084e0
        add    esp, 4
L_d8a8:
        mov    eax, esi
        pop    esi
        ret    4
    }
}
