/*
 * FUN_005ced20 (13 B) — __thiscall. Calls virtual method at vtable+0x180
 * with two zero args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005ced20(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        push    0
        push    0
        call    dword ptr [eax + 0x180]
        ret
    }
}
