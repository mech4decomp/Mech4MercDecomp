/*
 * FUN_0072dfd3 (extent 0x72dfd3-0x72dfff) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0072dfd3(void)
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
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 0x10]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xc]
        mov    dword ptr [edx], ecx
        mov    edx, dword ptr [esp + 0x14]
        xor    ecx, ecx
        mov    cx, word ptr [eax + 0xe]
        mov    dword ptr [edx], ecx
        ret    0x14
    }
}
