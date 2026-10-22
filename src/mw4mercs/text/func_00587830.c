/*
 * FUN_00587830 — __thiscall (ECX = this), 3 stack params, RET 0xC.
 * Copies three dword params into struct fields at offsets 0, 4, 8.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_00587830(void *this)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        ret     0xc
    }
}
