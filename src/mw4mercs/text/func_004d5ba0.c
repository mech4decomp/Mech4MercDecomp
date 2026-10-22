/*
 * FUN_004D5BA0 (30 B) — Destructor wrapper (__stdcall, RET 4).
 *
 * Calls FUN_004D5B70(this->field_18), then if this != NULL calls
 * vtable[0](1) (virtual destructor). Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004d5b70(int arg);

__declspec(naked) void __stdcall FUN_004d5ba0(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 0x08]       ; esi = this
        mov     eax, [esi + 0x18]       ; eax = this->field_18
        push    eax
        call    FUN_004d5b70
        test    esi, esi
        jz      l_done
        mov     edx, [esi]              ; edx = vtable
        push    1
        mov     ecx, esi                ; ecx = this (thiscall)
        call    dword ptr [edx]         ; vtable[0](1)
    l_done:
        pop     esi
        ret     4
    }
}
