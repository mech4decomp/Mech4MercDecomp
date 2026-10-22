/*
 * FUN_5e00f380 (16 B) — forwards to inner object's vtable[0x28/4] method.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f380(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x28]
        ret     0x4
    }
}
