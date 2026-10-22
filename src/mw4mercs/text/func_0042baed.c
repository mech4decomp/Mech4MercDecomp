/*
 * FUN_0042baed (extent 0x42baed-0x42bb61) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0042baed(void)
{
    __asm {
        nop    
        nop    
        nop    
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], edx
        ret    0x10
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
        mov    eax, 6
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
        mov    eax, dword ptr [ecx + 0xa8]
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
        jmp    L_bb60
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
L_bb60:
        ret    
    }
}
