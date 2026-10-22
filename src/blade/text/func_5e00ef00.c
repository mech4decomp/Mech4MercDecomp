/*
 * FUN_5e00ef00 (16 B) — __stdcall (RET 0x4), 1 arg.
 * Calls virtual method at vtable+0xc on the sub-object at [arg+0x20].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00ef00(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0xc]
        ret     4
    }
}
