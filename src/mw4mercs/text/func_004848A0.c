/*
 * FUN_004848A0 (18 B) — zeroes three global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6dc;
extern int g_007da6d8;
extern int g_007da6d4;

__declspec(naked) void FUN_004848A0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_007da6dc], eax
        mov     dword ptr [g_007da6d8], eax
        mov     dword ptr [g_007da6d4], eax
        ret
    }
}
