/*
 * FUN_005330b0 (1 B) — empty function, just returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005330b0(void)
{
    __asm {
        ret
    }
}
