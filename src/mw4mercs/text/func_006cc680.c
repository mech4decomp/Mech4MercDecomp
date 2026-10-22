/*
 * FUN_006CC680 — copies field at +0x0C to +0x10.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_006cc680(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0xc]
        mov     dword ptr [ecx + 0x10], eax
        ret
    }
}
