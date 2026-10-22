/*
 * FUN_0048a8a0 (26 B) — Init: calls FUN_00415180 then sets field at +0x0c.
 *
 * __thiscall (ECX = this), RET 0x08 (2 stack params).
 * Calls FUN_00415180(param1) to set vtable, then stores param2 at this+0x0c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00415180(void *this, int param);

__declspec(naked) int __fastcall FUN_0048a8a0(int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [esp + 0x04]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ecx, dword ptr [esp + 0x0c]
        mov     dword ptr [esi + 0x0c], ecx
        mov     eax, esi
        pop     esi
        ret     0x08
    }
}
