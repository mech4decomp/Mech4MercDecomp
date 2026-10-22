/*
 * FUN_00485680 (18 B) — zeroes three global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6fc;
extern int g_007da6f8;
extern int g_007da6f4;

__declspec(naked) void FUN_00485680(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_007da6fc], eax
        mov     dword ptr [g_007da6f8], eax
        mov     dword ptr [g_007da6f4], eax
        ret
    }
}
