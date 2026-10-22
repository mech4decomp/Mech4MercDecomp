/*
 * FUN_0049d3d4 (extent 0x49d3d4-0x49d425) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0049d3d4(void)
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
        mov    eax, ecx
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
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        ret    4
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 4], ecx
        ret    4
    }
}
