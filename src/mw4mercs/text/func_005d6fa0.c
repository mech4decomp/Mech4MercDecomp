/*
 * FUN_005d6fa0 (25 B) — __thiscall (ECX = this, 1 stack param, RET 0x4).
 * Copies a 3-float vector from param to this.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_005d6fa0(int param1)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
