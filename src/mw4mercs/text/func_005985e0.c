/*
 * FUN_005985E0 — __thiscall (ECX = this), 2 stack params, RET 8.
 * Copies a pointer (with refcount increment) from param1->field_0 to this->field_0,
 * and a byte from *param2 to this->field_4.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

__declspec(naked) void __fastcall func_005985e0(void *this)
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
        mov     edx, dword ptr [esp + 8]
        mov     cl, byte ptr [edx]
        mov     byte ptr [eax + 4], cl
        ret     8
    }
}
