/*
 * FUN_00561280 (1 B) — thunk: bare RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00561280(void)
{
    __asm {
        ret
    }
}
