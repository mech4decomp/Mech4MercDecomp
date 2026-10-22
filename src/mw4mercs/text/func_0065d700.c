/*
 * FUN_0065d700 (3 B) — __fastcall getter: returns *this (dword at [ECX]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0065d700(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        ret
    }
}
