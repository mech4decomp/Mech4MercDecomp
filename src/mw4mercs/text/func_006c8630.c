/*
 * FUN_006C8630 — wrapper: calls FUN_006C8F00(param2) with ECX = param1.
 *
 * __cdecl, RET 0x8.
 *   [ESP+4] = param1 (this for callee)
 *   [ESP+8] = param2 (fill value)
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_006C8F00 — __thiscall, fills surface with a value.
 *   ECX = this (texture object)
 *   [ESP+4] = fill value */
extern void __stdcall texture_fill(int val);

__declspec(naked) void __stdcall func_006c8630(int param1, int param2)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    eax
        call    texture_fill
        ret     8
    }
}
