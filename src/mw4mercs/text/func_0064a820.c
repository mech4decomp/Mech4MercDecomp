/*
 * FUN_0064a820 (20 B) — if the g_007b5a38 flag is set, zeroes g_0080d998.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_007b5a38;
extern int  g_0080d998;

__declspec(naked) void FUN_0064a820(void)
{
    __asm {
        mov     al, byte ptr [g_007b5a38]
        test    al, al
        jz      L1
        mov     dword ptr [g_0080d998], 0
L1:
        ret
    }
}
