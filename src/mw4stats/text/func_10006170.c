/*
 * FUN_10006170 (9 B) - __fastcall: zeroes this[0], returns.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10006170(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax], 0
        ret
    }
}
