/*
 * FUN_00699cc0 (6 B) - HUD helper: returns global dword DAT_0082db24.
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082db24;   /* DAT_0082db24 */

__declspec(naked) int FUN_00699cc0(void)
{
    __asm {
        mov     eax, dword ptr [g_0082db24]
        ret
    }
}
