/*
 * FUN_005E7D0B (6 B) — alignment pad (5 nops) + ret.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005E7D0B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        ret
    }
}
