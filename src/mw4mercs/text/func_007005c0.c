/*
 * FUN_007005c0 (13 B) - sets global DAT_0085683c = 1, returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0085683c;   /* DAT_0085683c */

__declspec(naked) int FUN_007005c0(void)
{
    __asm {
        mov     dword ptr [g_0085683c], 0x1
        xor     eax, eax
        ret
    }
}
