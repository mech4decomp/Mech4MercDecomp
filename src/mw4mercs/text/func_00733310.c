/*
 * FUN_00733310 (7 B) — increments DAT_008b2880.
 *
 *   INC dword ptr [0x008b2880]
 *   RET
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008b2880;

__declspec(naked) void FUN_00733310(void)
{
    __asm {
        inc     dword ptr [g_008b2880]
        ret
    }
}
