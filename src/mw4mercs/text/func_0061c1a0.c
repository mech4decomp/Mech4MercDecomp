/*
 * FUN_0061c1a0 (6 B) — getter: returns global byte 0x007f2940 in AL.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_007f2940;

__declspec(naked) void FUN_0061c1a0(void)
{
    __asm {
        mov     al, byte ptr [g_007f2940]
        ret
    }
}
