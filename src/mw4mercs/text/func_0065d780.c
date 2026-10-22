/*
 * FUN_0065d780 (6 B) -- returns global dword DAT_0080da6c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0080da6c;   /* DAT_0080da6c */

__declspec(naked) int FUN_0065d780(void)
{
    __asm {
        mov     eax, dword ptr [g_0080da6c]
        ret
    }
}
