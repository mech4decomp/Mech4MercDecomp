/*
 * FUN_0073B350 (21 B) — __cdecl (RET 0). Reads a global counter, maps
 * (value-2) through a sign-extend trick to 0 or 2, and stores it back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aae40;

__declspec(naked) void FUN_0073B350(void)
{
    __asm {
        mov     eax, dword ptr [g_008aae40]
        sub     eax, 2
        neg     eax
        sbb     eax, eax
        and     eax, 2
        mov     dword ptr [g_008aae40], eax
        ret
    }
}
