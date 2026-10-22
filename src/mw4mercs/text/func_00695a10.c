/*
 * FUN_00695a10 (6 B) — returns global dword DAT_0082db20.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082db20;

__declspec(naked) void FUN_00695a10(void)
{
    __asm {
        mov     eax, dword ptr [g_0082db20]
        ret
    }
}
