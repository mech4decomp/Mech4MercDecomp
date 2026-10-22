/*
 * FUN_0063bfc0 (17 B) — setter: stores arg into global g_007f2d24 and
 * sets the g_007f2d28 flag to 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007f2d24;
extern char  g_007f2d28;

__declspec(naked) void FUN_0063bfc0(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     dword ptr [g_007f2d24], eax
        mov     byte ptr [g_007f2d28], 0x1
        ret
    }
}
