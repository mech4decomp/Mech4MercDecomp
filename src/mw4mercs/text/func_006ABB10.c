/*
 * func_006ABB10 - thiscall FPU interpolation helper
 * Computes a lerp value from [ecx+0x8c] data and [ecx+0x28]/[ecx+0x2c]
 */

__declspec(naked) void func_006ABB10()
{
    __asm {
        mov     edx, dword ptr [ecx + 0x8c]
        mov     eax, dword ptr [edx + 0x18]
        fld     dword ptr [edx + 0x10]
        mov     eax, dword ptr [eax + 4]
        fsub    dword ptr [eax + 8]
        fld     dword ptr [eax + 0xc]
        fsub    dword ptr [eax + 8]
        fdivp   st(1), st(0)
        fmul    dword ptr [ecx + 0x2c]
        fadd    dword ptr [ecx + 0x28]
        ret
    }
}
