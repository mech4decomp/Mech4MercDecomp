/*
 * FUN_006C7600 — setter: stores three params at this+0x30, +0x34, +0x38.
 *
 * __thiscall (ECX = this), RET 0xC.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c7600(int val1, int val2, int val3)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x30], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + 0x34], edx
        mov     dword ptr [ecx + 0x38], eax
        ret     0xc
    }
}
