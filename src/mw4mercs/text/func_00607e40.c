/*
 * FUN_00607e40 (11 B) — clears global g_007f27c8 to 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27c8;

__declspec(naked) void FUN_00607e40(void)
{
    __asm {
        mov     dword ptr [g_007f27c8], 0x0
        ret
    }
}
