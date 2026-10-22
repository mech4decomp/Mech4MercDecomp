/*
 * FUN_00706f10 (3 B) — returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00706f10(void)
{
    __asm {
        xor     eax, eax
        ret
    }
}
