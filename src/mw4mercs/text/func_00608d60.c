/*
 * FUN_00608d60 (3 B) — returns 1 (bool true).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00608d60(void)
{
    __asm {
        mov     al, 1
        ret
    }
}
