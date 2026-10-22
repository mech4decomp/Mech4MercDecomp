/*
 * FUN_00701700 (6 B) - returns global DAT_0085686c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085686c;   /* DAT_0085686c */

__declspec(naked) int FUN_00701700(void)
{
    __asm {
        mov     eax, dword ptr [g_0085686c]
        ret
    }
}
