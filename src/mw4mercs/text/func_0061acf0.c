/*
 * FUN_0061acf0 (6 B) — getter: returns global dword DAT_007f2938.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2938;

__declspec(naked) void FUN_0061acf0(void)
{
    __asm {
        mov     eax, dword ptr [g_007f2938]
        ret
    }
}
