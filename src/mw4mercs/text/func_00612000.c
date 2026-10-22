/*
 * FUN_00612000 (1 B) — empty function, just returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00612000(void)
{
    __asm {
        ret
    }
}
