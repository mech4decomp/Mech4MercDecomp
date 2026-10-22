/*
 * FUN_5e00f650 (26 B) — forwards to inner object's vtable[0x58/4] method.
 *
 * __stdcall, RET 0xc (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e00f650(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0xc]
        push    edx
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0x20]
        push    edx
        push    eax
        mov     ecx, dword ptr [eax]
        call    dword ptr [ecx + 0x58]
        ret     0xc
    }
}
