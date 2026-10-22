/*
 * FUN_006C9750 — wrapper: calls FUN_006C9B80(param_2, param_3) with
 *   ECX = param_1.
 *
 * __stdcall, RET 0xC.
 *   [ESP+4] = param_1 (this for callee)
 *   [ESP+8] = param_2
 *   [ESP+C] = param_3
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006C9B80 — texture_decode: __thiscall (ECX = this), RET 0x8. */
extern void __stdcall texture_decode(int param2, int param3);

__declspec(naked) void __stdcall func_006c9750(int param1, int param2, int param3)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, dword ptr [esp + 0xc]
        call    texture_decode
        ret     0xc
    }
}
