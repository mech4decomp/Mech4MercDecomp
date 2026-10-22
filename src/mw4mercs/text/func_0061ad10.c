/*
 * FUN_0061ad10 (11 B) — clears a global dword flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2938;

__declspec(naked) void FUN_0061ad10(void)
{
    __asm {
        mov     dword ptr [g_007f2938], 0
        ret
    }
}
