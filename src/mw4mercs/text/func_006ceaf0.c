/*
 * FUN_006CEAF0 — copy 16 dwords from source to this (rep movsd).
 *
 * __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __stdcall func_006ceaf0(void *src)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, ecx
        mov     ecx, 0x10
        rep movsd
        pop     edi
        pop     esi
        ret     4
    }
}
