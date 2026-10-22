/*
 * FUN_0065e620 (6 B) — getter: returns the global singleton pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080da70;   /* DAT_0080da70 */

__declspec(naked) void FUN_0065e620(void)
{
    __asm {
        mov     eax, dword ptr [g_0080da70]
        ret
    }
}
