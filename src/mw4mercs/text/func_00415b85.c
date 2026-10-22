/*
 * FUN_00415b85 (extent 0x415b85-0x415bbc) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_00415b85(void)
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
        push    0x76d478
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_5ba2
        int 3    
L_5ba2:
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
        mov    eax, ecx
        mov    dword ptr [eax + 4], 0
        ret    4
    }
}
