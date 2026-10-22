/*
 * FUN_5e00f570 (21 B) — forwards to inner object's vtable[0x3c/4] method.
 *
 * __stdcall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f570(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        push    edx
        mov     eax, dword ptr [eax + 0x20]
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x3c]
        ret     0x8
    }
}
