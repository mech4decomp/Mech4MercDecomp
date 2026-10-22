/*
 * FUN_0042A380 (18 B) — zeroes three global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b96c4;
extern int g_007b96c0;
extern int g_007b96bc;

__declspec(naked) void FUN_0042A380(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_007b96c4], eax
        mov     dword ptr [g_007b96c0], eax
        mov     dword ptr [g_007b96bc], eax
        ret
    }
}
