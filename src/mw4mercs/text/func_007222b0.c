/*
 * FUN_007222b0 (33 B) — Zeroes six global dwords.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_87e1f0;
extern unsigned int g_87e1ec;
extern unsigned int g_87dde8;
extern unsigned int g_87dde4;
extern unsigned int g_87e5f4;
extern unsigned int g_87dd0c;

__declspec(naked) void FUN_007222b0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [g_87e1f0], eax
        mov     dword ptr [g_87e1ec], eax
        mov     dword ptr [g_87dde8], eax
        mov     dword ptr [g_87dde4], eax
        mov     dword ptr [g_87e5f4], eax
        mov     dword ptr [g_87dd0c], eax
        ret
    }
}
