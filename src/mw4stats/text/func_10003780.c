/*
 * FUN_10003780 (16 B) - ctor: zero this+4, set vtable 0x100211ec.
 *
 * __fastcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_10003780(void)
{
    __asm {
        mov     eax, ecx
        mov     dword ptr [eax + 4], 0
        mov     dword ptr [eax], 0x100211ec
        ret
    }
}
