/*
 * FUN_00482BD0 (41 B) — MLR method (__thiscall, RET 0x10).
 *
 * Sets field_9C = param1, field_A0 = param4, then calls
 * vtable[1](param1, param2, param3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_00482bd0(void *this, int param1, int param2, int param3, int param4)
{
    __asm {
        mov     eax, [esp + 0x04]
        mov     edx, [esp + 0x10]
        push    esi
        mov     esi, [esp + 0x10]
        push    esi
        mov     esi, [esp + 0x10]
        push    esi
        mov     dword ptr [ecx + 0xa0], edx
        mov     edx, [ecx]
        push    eax
        mov     dword ptr [ecx + 0x9c], eax
        call    dword ptr [edx + 4]
        pop     esi
        ret     0x10
    }
}
