/*
 * FUN_0073AD60 (21 B) — __cdecl (RET 0). Reads a global counter, maps
 * (value-3) through a sign-extend trick to 0 or 3, and stores it back.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_008aae6c;

__declspec(naked) void FUN_0073AD60(void)
{
    __asm {
        mov     eax, dword ptr [g_008aae6c]
        sub     eax, 3
        neg     eax
        sbb     eax, eax
        and     eax, 3
        mov     dword ptr [g_008aae6c], eax
        ret
    }
}
