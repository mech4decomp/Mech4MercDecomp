/*
 * FUN_006CEB10 — initialize 16 dwords to 0, then set 4 specific slots to 1.0f.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_006ceb10(void *this_ptr)
{
    __asm {
        mov     edx, ecx
        push    edi
        xor     eax, eax
        mov     ecx, 0x10
        mov     edi, edx
        rep stosd
        mov     eax, 0x3f800000
        mov     dword ptr [edx], eax
        mov     dword ptr [edx + 0x14], eax
        mov     dword ptr [edx + 0x28], eax
        mov     dword ptr [edx + 0x3c], eax
        pop     edi
        ret
    }
}
