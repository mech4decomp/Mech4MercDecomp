/*
 * FUN_00480BD0 (23 B) — Field initializer.
 *
 * __thiscall (ECX = this), RET 8 (one stack param: byte).
 * Sets this+0x44 = 0, this+0x0A = 0xFFFF, this+0x10 = param.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_00480bd0(void *param1, unsigned char param2)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        mov     dword ptr [ecx + 0x44], 0
        mov     word ptr [ecx + 0x0a], 0xffff
        mov     byte ptr [ecx + 0x10], al
        ret     8
    }
}
