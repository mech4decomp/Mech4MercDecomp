/*
 * FUN_1000dd00 (7 B) - sets vtable ptr 0x100214e4.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000dd00(void)
{
    __asm {
        mov     dword ptr [ecx], 0x100214e4
        ret
    }
}
