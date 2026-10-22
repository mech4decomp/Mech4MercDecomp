/*
 * FUN_006C7670 — setter: stores param at this+0x0C.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c7670(int val)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0xc], eax
        ret     4
    }
}
