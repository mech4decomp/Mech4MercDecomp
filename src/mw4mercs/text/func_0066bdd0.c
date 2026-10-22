/*
 * FUN_0066bdd0 (3 B) - trivial stub: RET 0x4 (__stdcall, 1 arg, no-op).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0066bdd0(void)
{
    __asm {
        ret     0x4
    }
}
