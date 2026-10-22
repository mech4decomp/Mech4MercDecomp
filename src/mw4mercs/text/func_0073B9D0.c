/*
 * FUN_0073B9D0 (18 B) — returns (g_007B73DC == 0x280).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b73dc;

__declspec(naked) void FUN_0073B9D0(void)
{
    __asm {
        mov     ecx, dword ptr [g_007b73dc]
        xor     eax, eax
        cmp     ecx, 0x280
        sete    al
        ret
    }
}
