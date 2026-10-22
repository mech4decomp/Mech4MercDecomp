/*
 * FUN_0073B1E0 (21 B) — __cdecl (RET 0). Reads a global counter, maps
 * (value-8) through a sign-extend trick to 0 or 8, and stores it back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087b688;

__declspec(naked) void FUN_0073B1E0(void)
{
    __asm {
        mov     eax, dword ptr [g_0087b688]
        sub     eax, 8
        neg     eax
        sbb     eax, eax
        and     eax, 8
        mov     dword ptr [g_0087b688], eax
        ret
    }
}
