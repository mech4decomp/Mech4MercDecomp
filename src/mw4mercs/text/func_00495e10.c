/*
 * FUN_00495E10 (27 B) — __thiscall (ECX = coeffs), RET 0x8.
 * Cubic polynomial evaluation: ((x*c3 + c2)*x + c1)*x + c0
 *   where c0=coeffs[1], c1=coeffs[2], c2=coeffs[3], c3=coeffs[4]
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __fastcall FUN_00495e10(void)
{
    __asm {
        fld     dword ptr [esp + 0x04]
        fmul    dword ptr [ecx + 0x0c]
        fadd    dword ptr [ecx + 0x10]
        fmul    dword ptr [esp + 0x04]
        fadd    dword ptr [ecx + 0x08]
        fmul    dword ptr [esp + 0x04]
        fadd    dword ptr [ecx + 0x04]
        ret     0x08
    }
}
