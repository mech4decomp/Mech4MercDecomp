/*
 * FUN_0041A3E0 (extent 0x41A3E0-0x41A453, 115 B) - .text data block.
 * __thiscall-style (this in ecx), ret 8. Scales a 3x4 matrix by a vector.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void __stdcall FUN_0041A3E0(void)
{
    __asm {
        mov    edx, dword ptr [esp + 8]
        mov    eax, ecx
        mov    ecx, dword ptr [esp + 4]
        fld    dword ptr [ecx]
        fmul   dword ptr [edx]
        fstp   dword ptr [eax]
        fld    dword ptr [ecx + 4]
        fmul   dword ptr [edx]
        fstp   dword ptr [eax + 4]
        fld    dword ptr [ecx + 8]
        fmul   dword ptr [edx]
        fstp   dword ptr [eax + 8]
        fld    dword ptr [ecx + 0xc]
        fmul   dword ptr [edx]
        fstp   dword ptr [eax + 0xc]
        fld    dword ptr [ecx + 0x10]
        fmul   dword ptr [edx + 4]
        fstp   dword ptr [eax + 0x10]
        fld    dword ptr [ecx + 0x14]
        fmul   dword ptr [edx + 4]
        fstp   dword ptr [eax + 0x14]
        fld    dword ptr [ecx + 0x18]
        fmul   dword ptr [edx + 4]
        fstp   dword ptr [eax + 0x18]
        fld    dword ptr [ecx + 0x1c]
        fmul   dword ptr [edx + 4]
        fstp   dword ptr [eax + 0x1c]
        fld    dword ptr [ecx + 0x20]
        fmul   dword ptr [edx + 8]
        fstp   dword ptr [eax + 0x20]
        fld    dword ptr [ecx + 0x24]
        fmul   dword ptr [edx + 8]
        fstp   dword ptr [eax + 0x24]
        fld    dword ptr [ecx + 0x28]
        fmul   dword ptr [edx + 8]
        fstp   dword ptr [eax + 0x28]
        fld    dword ptr [ecx + 0x2c]
        fmul   dword ptr [edx + 8]
        fstp   dword ptr [eax + 0x2c]
        ret    8
    }
}
