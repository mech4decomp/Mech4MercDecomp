/*
 * FUN_006C9430 — pixel setter: writes param_3 at (param_1, param_2)
 *   in the texture surface.
 *   offset = field_0C * param_2 + param_1 * 4 + field_14
 *   *(int*)(offset) = param_3
 *
 * __thiscall (ECX = this), RET 0xC.
 *   [ESP+4] = param_1 (x)
 *   [ESP+8] = param_2 (y)
 *   [ESP+C] = param_3 (value)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006c9430(int x, int y, int val)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        imul    eax, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 4]
        mov     ecx, dword ptr [ecx + 0x14]
        lea     eax, [eax + edx * 4]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + ecx], edx
        ret     0xc
    }
}
