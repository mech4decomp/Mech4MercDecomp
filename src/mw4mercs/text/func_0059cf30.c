/*
 * FUN_0059CF30 — __thiscall (ECX = this), no stack params, plain RET.
 * If (field_0x10 & 8), returns array[field_0x28] where array is at field_0x78.
 * Otherwise tail-calls FUN_0059CFA0.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_0059CFA0 — __thiscall, no stack params. */
extern void __fastcall func_0059cfa0(void *this);

__declspec(naked) int __fastcall func_0059cf30(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 8
        cmp     al, 8
        je      L_load
        jmp     func_0059cfa0
    L_load:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x78]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
