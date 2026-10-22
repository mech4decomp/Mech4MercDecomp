/*
 * FUN_006C7640 — setter: converts three int params to float and stores
 *                at this+0x18, +0x1C, +0x20.
 *
 * __thiscall (ECX = this), RET 0xC.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c7640(int val1, int val2, int val3)
{
    __asm {
        fild    dword ptr [esp + 4]
        fstp    dword ptr [ecx + 0x18]
        fild    dword ptr [esp + 8]
        fstp    dword ptr [ecx + 0x1c]
        fild    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 0x20]
        ret     0xc
    }
}
