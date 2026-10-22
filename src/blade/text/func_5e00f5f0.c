/*
 * FUN_5e00f5f0 (16 B) — forwards to inner object's vtable[0x4c/4] method.
 *
 * __stdcall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f5f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x4c]
        ret     0x4
    }
}
