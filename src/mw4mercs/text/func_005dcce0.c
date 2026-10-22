/*
 * FUN_005DCCE0 (3 B) — Empty __stdcall stub, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005DCCE0(void)
{
    __asm {
        ret     4
    }
}
