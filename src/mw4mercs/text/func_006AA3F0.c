/*
 * FUN_006AA3F0 (42 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_006AA3F0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x48]
        mov    edx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [edx + 4]
        fld    dword ptr [eax + 0xc]
        fsub   dword ptr [eax + 8]
        mov    eax, dword ptr [ecx + 0x30]
        cmp    eax, 0xbf800000
        jne    L_6aa40d
        fadd   dword ptr [ecx + 0x10]
        ret
L_6aa40d:
        fld    st(0)
        fadd   dword ptr [ecx + 0x10]
        fxch   st(1)
        fmul   dword ptr [ecx + 0x30]
        fsubp  st(1), st(0)
        ret
    }
}
