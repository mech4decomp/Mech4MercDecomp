/*
 * FUN_006212d0 (6 B) — getter: returns global dword at 0x007f2ba8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2ba8;

__declspec(naked) void FUN_006212d0(void)
{
    __asm {
        mov     eax, dword ptr [g_007f2ba8]
        ret
    }
}
