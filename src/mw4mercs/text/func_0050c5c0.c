/*
 * FUN_0050c5c0 (1 B) — trivial empty function: just RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0050c5c0(void)
{
    __asm {
        ret
    }
}
