/*
 * FUN_006aff10 (45 B) — __thiscall.
 *
 * Computes out[0] = this->[4] + g_770168, out[1] = 0.0, and
 * out[2] = (this->[0xc] - this->[8]) * g_76d070 + this->[8].
 * Returns with RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_770168;
extern float g_76d070;

__declspec(naked) void FUN_006aff10(void)
{
    __asm {
        fld     dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        fadd    dword ptr [g_770168]
        mov     dword ptr [eax + 0x4], 0x0
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ecx + 0x8]
        fxch    st(1)
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
