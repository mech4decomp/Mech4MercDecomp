/*
 * FUN_006C7660 — setter: stores param at this+0x08.
 *
 * __thiscall (ECX = this), RET 0x4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c7660(int val)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 8], eax
        ret     4
    }
}
