/*
 * FUN_006AFEE0 (44 B) — __thiscall (ECX = this, RET 0x4). Computes
 * out[0] = this[0] - g_00770168, out[1] = 0,
 * out[2] = (this[3] - this[2]) * g_0076d070 + this[2].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_00770168;
extern float g_0076d070;

__declspec(naked) void FUN_006afee0(void *out)
{
    __asm {
        fld     dword ptr [ecx]
        mov     eax, dword ptr [esp + 0x4]
        fsub    dword ptr [g_00770168]
        mov     dword ptr [eax + 0x4], 0
        fld     dword ptr [ecx + 0xc]
        fsub    dword ptr [ecx + 0x8]
        fmul    dword ptr [g_0076d070]
        fadd    dword ptr [ecx + 0x8]
        fxch
        fstp    dword ptr [eax]
        fstp    dword ptr [eax + 0x8]
        ret     0x4
    }
}
