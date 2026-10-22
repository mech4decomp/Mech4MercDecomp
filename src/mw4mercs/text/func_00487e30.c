/*
 * FUN_00487E30 (13 B) — Array lookup (__thiscall, RET 4).
 *
 * Returns field_14[index] where field_14 is an int pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void *__fastcall FUN_00487e30(void *this, int index)
{
    __asm {
        mov     eax, [ecx + 0x14]           ; array
        mov     ecx, [esp + 4]              ; index (stack param for __thiscall)
        mov     eax, [eax + ecx * 4]        ; array[index]
        ret     4
    }
}
