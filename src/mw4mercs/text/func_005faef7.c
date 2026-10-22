/*
 * FUN_005faef7 (extent 0x5faef7-0x5faf2c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_005faef7(void)
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
        mov    eax, dword ptr [ecx + 0x3d4]
        test    eax, eax
        je    L_af11
        mov    eax, dword ptr [eax + 0x184]
        ret    
L_af11:
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
        mov    eax, dword ptr [ecx + 0x3d8]
        test    eax, eax
        setne    al
        ret    
    }
}
