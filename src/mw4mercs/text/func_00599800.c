/*
 * FUN_00599800 — __thiscall (ECX = this), 1 stack param (source ptr), RET 4.
 * Copies a pointer (with refcount increment) and a byte from source to this.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_00599800(void *this)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        test    edx, edx
        mov     dword ptr [eax], edx
        je      L_skip_inc
        inc     byte ptr [edx - 1]
    L_skip_inc:
        mov     cl, byte ptr [ecx + 4]
        mov     byte ptr [eax + 4], cl
        ret     4
    }
}
