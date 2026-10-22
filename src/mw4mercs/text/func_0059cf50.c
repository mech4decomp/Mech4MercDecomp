/*
 * FUN_0059CF50 — __thiscall (ECX = this), no stack params, plain RET.
 * If (field_0x10 & 0x10), returns array[field_0x28] where array is at field_0x84.
 * Otherwise tail-calls FUN_0059CFB0.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_0059CFB0 — __thiscall, no stack params. */
extern void __fastcall func_0059cfb0(void *this);

__declspec(naked) int __fastcall func_0059cf50(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 0x10
        cmp     al, 0x10
        je      L_load
        jmp     func_0059cfb0
    L_load:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x84]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
