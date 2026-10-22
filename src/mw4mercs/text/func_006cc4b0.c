/*
 * FUN_006CC4B0 — zero-initializes 5 dwords (0x00..0x10) of the object.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_006cc4b0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x10], ecx
        ret
    }
}
