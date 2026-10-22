/*
 * FUN_10006090 (4 B) - __fastcall getter: returns *(int*)(this + 0x1c).
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_10006090(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        ret
    }
}
