/*
 * FUN_0070e37c (extent 0x70e37c-0x70e3ba) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0070e37c(void)
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
        mov    eax, dword ptr [esp + 4]
        xor    ecx, ecx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax], 0x67452301
        mov    dword ptr [eax + 4], 0xefcdab89
        mov    dword ptr [eax + 8], 0x98badcfe
        mov    dword ptr [eax + 0xc], 0x10325476
        ret    4
    }
}
