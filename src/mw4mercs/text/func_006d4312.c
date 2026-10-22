/*
 * FUN_006d4312 (extent 0x6d4312-0x6d436c) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_006d4312(void)
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
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [ecx + 0xc]
        mov    ecx, dword ptr [ecx + 0x18]
        mov    dword ptr [eax + 0xc], edx
        mov    dword ptr [eax + 0x18], ecx
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
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax], ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], ecx
        mov    byte ptr [eax + 0x14], cl
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        ret    
    }
}
