/*
 * FUN_0040c4e0 (3 B) — returns 0 (AL = 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c4e0(void)
{
    __asm {
        xor     al, al
        ret
    }
}
