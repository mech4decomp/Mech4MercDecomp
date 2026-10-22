/*
 * FUN_0059F010 — __thiscall (ECX = this), 1 stack param, RET 4.
 * Initializes struct fields at offsets 0, 4, 8 to zero.
 * Reads first byte of input param but it's dead code (overwritten).
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_0059f010(void *this)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 8], dl
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], ecx
        ret     4
    }
}
