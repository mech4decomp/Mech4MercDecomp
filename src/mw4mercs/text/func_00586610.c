/*
 * FUN_00586610 (30 B) — Negate three floats from this+0x10/0x14/0x18,
 * store to output float[3].
 *
 * __thiscall (ECX = this), RET 4, 1 stack param (float *out).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00586610(void)
{
    __asm {
        FLD dword ptr [ECX + 0x10]
        MOV EAX, dword ptr [ESP + 0x4]
        FCHS
        FSTP dword ptr [EAX]
        FLD dword ptr [ECX + 0x14]
        FCHS
        FSTP dword ptr [EAX + 0x4]
        FLD dword ptr [ECX + 0x18]
        FCHS
        FSTP dword ptr [EAX + 0x8]
        RET 0x4
    }
}
