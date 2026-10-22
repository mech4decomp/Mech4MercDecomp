/*
 * FUN_0061bf2f (extent 0x61bf2f-0x61bfa4) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0061bf2f(void)
{
    __asm {
        nop    
        mov    eax, dword ptr [ecx + 0x5bdc]
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
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [ecx + 0x5be0]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x5be4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 0x5be8]
        mov    dword ptr [eax + 8], edx
        mov    edx, dword ptr [ecx + 0x5bec]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 0x5bf0]
        mov    ecx, dword ptr [ecx + 0x5bf4]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    8
        nop    
        fild    dword ptr [ecx + 0x24]
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 8]
        fmul    dword ptr [ecx + 0x18]
        fstp    dword ptr [eax]
        mov    eax, dword ptr [ecx + 0x18]
        fild    dword ptr [ecx + 0x20]
        fmul    dword ptr [ecx + 0x18]
        mov    ecx, dword ptr [esp + 0xc]
        mov    dword ptr [ecx], eax
        fstp    dword ptr [edx]
        ret    0xc
    }
}
