/*
 * FUN_00415a6b (extent 0x415a6b-0x415a8e) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00415a6b(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
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
        mov    eax, dword ptr [ecx + 0x10]
        test    eax, eax
        je    L_5a8b
        mov    eax, dword ptr [eax + 0xc]
        ret    
L_5a8b:
        xor    eax, eax
        ret    
    }
}
