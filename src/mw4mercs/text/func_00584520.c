/*
 * FUN_00584520 — __thiscall (ECX = this), 1 stack param (source ptr), RET 4.
 * Copies 12 bytes (3 dwords) from source struct to this struct at offsets 0, 4, 8.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_00584520(void *this)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], edx
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
