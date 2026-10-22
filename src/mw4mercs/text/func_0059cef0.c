/*
 * FUN_0059CEF0 — __thiscall (ECX = this), no stack params, plain RET.
 * If (field_0x10 & 2), returns array[field_0x28] where array is at field_0x60.
 * Otherwise tail-calls FUN_0059CF80.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_0059CF80 — __thiscall, no stack params. */
extern void __fastcall func_0059cf80(void *this);

__declspec(naked) int __fastcall func_0059cef0(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 2
        cmp     al, 2
        je      L_load
        jmp     func_0059cf80
    L_load:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x60]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
