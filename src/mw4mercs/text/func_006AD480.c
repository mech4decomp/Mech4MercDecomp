/*
 * FUN_006AD480 (6 B) — returns constant 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006AD480(void)
{
    __asm {
        mov     eax, 4
        ret
    }
}
