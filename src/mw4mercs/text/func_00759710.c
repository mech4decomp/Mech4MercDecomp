/*
 * FUN_00759710 (extent 0x759710-0x759737) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00759710(void)
{
    __asm {
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax], 0x7aee80
        mov    byte ptr [eax + 0xe], cl
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
        mov    dword ptr [ecx], 0x7aee80
        ret    
    }
}
