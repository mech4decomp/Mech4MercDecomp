/*
 * FUN_00637b40 (6 B) — getter: returns g_007f2d1c (the singleton pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2d1c;   /* DAT_007f2d1c */

__declspec(naked) void FUN_00637b40(void)
{
    __asm {
        mov     eax, dword ptr [g_007f2d1c]
        ret
    }
}
