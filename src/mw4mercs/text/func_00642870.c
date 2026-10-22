/*
 * FUN_00642870 (39 B) — Vector transform.
 *
 * __thiscall (ECX = this, 1 stack param). Computes
 * out[0] = (this[0xc] - this[0x4]) * this[0x14],
 * out[1] = (this[0x10] - this[0x8]) * this[0x18],
 * out[2] = 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00642870(float *out)
{
    __asm {
        fld     dword ptr [ecx + 0xc]
        mov     eax, dword ptr [esp + 0x4]
        fsub    dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x8], 0x0
        fmul    dword ptr [ecx + 0x14]
        fld     dword ptr [ecx + 0x10]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [ecx + 0x18]
        fxch
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x4]
        ret     4
    }
}
