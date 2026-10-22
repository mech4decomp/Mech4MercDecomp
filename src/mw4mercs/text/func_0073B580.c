/*
 * FUN_0073B580 (8 B) — toggles bit 0 of a global dword.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aaec4;

__declspec(naked) void FUN_0073B580(void)
{
    __asm {
        xor     dword ptr [g_008aaec4], 1
        ret
    }
}
