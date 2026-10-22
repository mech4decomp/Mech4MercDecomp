/*
 * FUN_0062c5f0 (13 B) — ABL/game-logic FPU helper. Adds a global double
 * constant to [ECX+0x64] and stores the result to [ECX+0x6c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double g_0077a4a8;

__declspec(naked) void FUN_0062c5f0(void)
{
    __asm {
        fld     qword ptr [ecx + 0x64]
        fadd    qword ptr [g_0077a4a8]
        fstp    qword ptr [ecx + 0x6c]
        ret
    }
}
