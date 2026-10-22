/*
 * FUN_0059CED0 — __thiscall (ECX = this), no stack params, plain RET.
 * If (field_0x10 & 1), returns array[field_0x28] where array is at field_0x54.
 * Otherwise tail-calls FUN_0059CF70.
 *
 * CFLAGS: /O1 (pinned)
 */

#include <mw4/common.h>

/* FUN_0059CF70 — __thiscall, no stack params. */
extern void __fastcall func_0059cf70(void *this);

__declspec(naked) int __fastcall func_0059ced0(void *this)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        and     eax, 1
        cmp     al, 1
        je      L_load
        jmp     func_0059cf70
    L_load:
        mov     edx, dword ptr [ecx + 0x28]
        mov     eax, dword ptr [ecx + 0x54]
        mov     eax, dword ptr [eax + edx*4]
        ret
    }
}
