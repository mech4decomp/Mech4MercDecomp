/*
 * FUN_0073B1A0 (21 B) — __cdecl (RET 0). Reads a global counter, maps
 * (value-2) through a sign-extend trick to 0 or 2, and stores it back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087b688;

__declspec(naked) void FUN_0073B1A0(void)
{
    __asm {
        mov     eax, dword ptr [g_0087b688]
        sub     eax, 2
        neg     eax
        sbb     eax, eax
        and     eax, 2
        mov     dword ptr [g_0087b688], eax
        ret
    }
}
