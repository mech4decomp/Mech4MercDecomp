/*
 * FUN_0063bfe0 (11 B) — clears global g_007f2d24 to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2d24;

__declspec(naked) void FUN_0063bfe0(void)
{
    __asm {
        mov     dword ptr [g_007f2d24], 0x0
        ret
    }
}
