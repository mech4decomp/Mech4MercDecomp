/*
 * FUN_00767400 (extent 0x767400-0x76745b) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_00767400(void)
{
    __asm {
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 0xc], edx
        mov    edx, dword ptr [ecx + 0x10]
        mov    dword ptr [eax + 0x10], edx
        mov    edx, dword ptr [ecx + 0x14]
        mov    dword ptr [eax + 0x14], edx
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    ecx, dword ptr [ecx + 8]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    4
    }
}
