/*
 * FUN_0067dc33 (extent 0x67dc33-0x67dc7d) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)


__declspec(naked) void FUN_0067dc33(void)
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
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [esp + 0xc]
        mov    byte ptr [eax + ecx + 0x36d4], 1
        lea    eax, [eax + eax*2]
        lea    eax, [ecx + eax*4 + 0x20e4]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [eax], ecx
        mov    ecx, dword ptr [esp + 0x10]
        mov    dword ptr [eax + 4], edx
        mov    dword ptr [eax + 8], ecx
        ret    0x10
    }
}
