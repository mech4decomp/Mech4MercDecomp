/*
 * FUN_0073B160 (21 B) — __cdecl (RET 0). Reads a global counter, maps
 * (value-0xb) through a sign-extend trick to 0 or 0xb, and stores back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0087b688;

__declspec(naked) void FUN_0073B160(void)
{
    __asm {
        mov     eax, dword ptr [g_0087b688]
        sub     eax, 0xb
        neg     eax
        sbb     eax, eax
        and     eax, 0xb
        mov     dword ptr [g_0087b688], eax
        ret
    }
}
