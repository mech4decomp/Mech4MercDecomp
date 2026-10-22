/*
 * FUN_0046C510 (18 B) — zeroes three global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007d9964;
extern int g_007d9960;
extern int g_007d995c;

__declspec(naked) void FUN_0046C510(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_007d9964], eax
        mov     dword ptr [g_007d9960], eax
        mov     dword ptr [g_007d995c], eax
        ret
    }
}
