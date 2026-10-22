/*
 * FUN_00758c96 (extent 0x758c96-0x758cc7) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00758c96(void)
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
        mov    eax, dword ptr [ecx + 0x18]
        test    eax, eax
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [ecx + 0x14], edx
        je    L_8cc4
L_8cae:
        mov    dword ptr [eax + 0x10], edx
        mov    dword ptr [eax + 0x30], edx
        mov    dword ptr [eax + 0x50], edx
        mov    dword ptr [eax + 0x70], edx
        mov    eax, dword ptr [eax + 0x80]
        test    eax, eax
        jne    L_8cae
L_8cc4:
        ret    4
    }
}
