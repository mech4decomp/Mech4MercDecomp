/*
 * FUN_006CEB40 — setter: stores float, negated float, and int values.
 *
 * __thiscall (ECX = this), RET 8.
 * Stack params: float param_1 at [esp+4], int param_2 at [esp+8].
 *
 * Stores:
 *   this+0x14 = param_2
 *   this+0x18 = -param_1
 *   this+0x24 = param_1
 *   this+0x28 = param_2
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006ceb40(float param_1, int param_2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        fld     dword ptr [esp + 4]
        mov     edx, eax
        fchs
        mov     dword ptr [ecx + 0x14], eax
        fstp    dword ptr [ecx + 0x18]
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x28], edx
        mov     dword ptr [ecx + 0x24], eax
        ret     8
    }
}
