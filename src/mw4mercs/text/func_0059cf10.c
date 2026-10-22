/*
 * FUN_0059CF10 — __thiscall (ECX = this), no stack params, plain RET.
 * If (field_0x10 & 4), returns array[field_0x28] where array is at field_0x6c.
 * Otherwise tail-calls FUN_0059CF90.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_0059CF90 — __thiscall, no stack params. */
extern void __fastcall func_0059cf90(void *this);

__declspec(naked) int __fastcall func_0059cf10(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 4
        cmp     al, 4
        je      L_load
        jmp     func_0059cf90
    L_load:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x6c]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
