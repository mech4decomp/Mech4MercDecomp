/*
 * FUN_006afeb0 (43 B) — __thiscall FPU math.
 *
 * Computes param_1[0] = (this[1] - this[0]) * g_76d070 + this[0],
 * param_1[1] = 0, param_1[2] = this[3] + g_770168. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d070;   /* 0x0076d070 */
extern float g_770168;   /* 0x00770168 */

__declspec(naked) void FUN_006afeb0(void)
{
    __asm {
        fld     dword ptr [ecx + 0x4]
        mov     eax, dword ptr [esp + 0x4]
        fsub    dword ptr [ecx]
        mov     dword ptr [eax + 0x4], 0x0
        fmul    dword ptr [g_76d070]
        fadd    dword ptr [ecx]
        fld     dword ptr [ecx + 0xc]
        fadd    dword ptr [g_770168]
        fxch
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
