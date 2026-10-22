/*
 * FUN_10005d10 (5 B) - __fastcall. Returns this (ECX).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void * __cdecl FUN_10005d10(void)
{
    __asm {
        mov     eax, ecx
        ret     4
    }
}
