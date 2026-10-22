/*
 * FUN_006CEB80 — setter: stores float, negated float, and int values.
 *
 * __thiscall (ECX = this), RET 8.
 * Stack params: float param_1 at [esp+4], int param_2 at [esp+8].
 *
 * Stores:
 *   this+0x00 = param_2
 *   this+0x04 = -param_1
 *   this+0x10 = param_1
 *   this+0x14 = param_2
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006ceb80(float param_1, int param_2)
{
    __asm {
        fld     dword ptr [esp + 4]
        mov     eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        fchs
        fstp    dword ptr [ecx + 4]
        mov     dword ptr [ecx], eax
        mov     dword ptr [ecx + 0x10], edx
        mov     dword ptr [ecx + 0x14], eax
        ret     8
    }
}
