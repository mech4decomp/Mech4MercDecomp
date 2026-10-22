/*
 * FUN_007006a0 (11 B) - clears global DAT_00856838.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00856838;   /* DAT_00856838 */

__declspec(naked) void FUN_007006a0(void)
{
    __asm {
        mov     dword ptr [g_00856838], 0x0
        ret
    }
}
