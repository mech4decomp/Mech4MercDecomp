/*
 * FUN_006C7620 — setter: stores two params at this+0x10 and this+0x14.
 *
 * __thiscall (ECX = this), RET 0xC.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c7620(int val1, int val2)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [ecx + 0x10], eax
        mov     dword ptr [ecx + 0x14], edx
        ret     0xc
    }
}
