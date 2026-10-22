/*
 * FUN_00482CE0 (18 B) — zeroes three global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da6b8;
extern int g_007da6b4;
extern int g_007da6b0;

__declspec(naked) void FUN_00482CE0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_007da6b8], eax
        mov     dword ptr [g_007da6b4], eax
        mov     dword ptr [g_007da6b0], eax
        ret
    }
}
