/*
 * FUN_0040c380 (3 B) — returns 0 (false).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c380(void)
{
    __asm {
        xor     al, al
        ret
    }
}
