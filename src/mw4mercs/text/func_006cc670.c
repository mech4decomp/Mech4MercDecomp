/*
 * FUN_006CC670 — copies field at +0x08 to +0x10.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_006cc670(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 8]
        mov     dword ptr [ecx + 0x10], eax
        ret
    }
}
