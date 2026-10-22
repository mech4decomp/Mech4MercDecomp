/*
 * FUN_00738c90 (extent 0x738c90-0x738d15) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_0076b0ec;

__declspec(naked) void FUN_00738c90(void)
{
    __asm {
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax], ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 4], 0xffffffff
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
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
        mov    eax, ecx
        xor    ecx, ecx
        mov    dword ptr [eax + 4], ecx
        mov    dword ptr [eax + 8], ecx
        mov    dword ptr [eax + 0xc], ecx
        mov    dword ptr [eax + 0x10], ecx
        mov    dword ptr [eax + 0x14], ecx
        mov    dword ptr [eax + 0x18], ecx
        mov    dword ptr [eax + 0x1c], ecx
        mov    dword ptr [eax + 0x20], 0xffffffff
        mov    dword ptr [eax + 0x24], 1
        mov    dword ptr [eax + 0x2c], ecx
        mov    dword ptr [eax + 0x48], ecx
        mov    dword ptr [eax + 0x4c], ecx
        mov    dword ptr [eax + 0x50], ecx
        mov    dword ptr [eax + 0x54], ecx
        mov    dword ptr [eax], 0x7a70fc
        ret    
        nop    
        nop    
        nop    
        mov    dword ptr [ecx], 0x7a70fc
        mov    ecx, dword ptr [ecx + 0x50]
        test    ecx, ecx
        je    L_8d14
        push    ecx
        call    dword ptr [g_0076b0ec]
L_8d14:
        ret    
    }
}
