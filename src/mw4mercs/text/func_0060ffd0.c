/*
 * FUN_0060ffd0 (1 B) — empty thunk: just RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0060ffd0(void)
{
    __asm {
        ret
    }
}
