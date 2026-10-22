/*
 * FUN_0040c360 (3 B) — returns 0 (false).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c360(void)
{
    __asm {
        xor     al, al
        ret
    }
}
