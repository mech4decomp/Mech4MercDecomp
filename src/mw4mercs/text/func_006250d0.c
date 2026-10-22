/*
 * FUN_006250d0 (1 B) — empty function: just RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006250d0(void)
{
    __asm {
        ret
    }
}
