/*
 * func_006A9780 - FPU math helper (thiscall)
 * result = ((ecx[0x20]/ecx[0x3c] + ecx[0x10]) * ecx[0x2c]) + ecx[0x28]
 */

__declspec(naked) void func_006A9780()
{
    __asm {
        fld     dword ptr [ecx + 0x20]
        fdiv    dword ptr [ecx + 0x3c]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [ecx + 0x2c]
        fadd    dword ptr [ecx + 0x28]
        ret
    }
}
