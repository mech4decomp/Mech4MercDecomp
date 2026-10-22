/*
 * FUN_006CC620 — linked-list iterator: removes current node.
 *   If field_10 != NULL:
 *     field_10 = field_10->next (at +0x08)
 *   If field_10 != NULL:
 *     field_04 -= 1
 *     return 1
 *   Else:
 *     return 0
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __fastcall func_006cc620(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_check
        mov     eax, dword ptr [eax + 8]
        mov     dword ptr [ecx + 0x10], eax
    L_check:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_null
        dec     dword ptr [ecx + 4]
        mov     al, 1
        ret
    L_null:
        xor     al, al
        ret
    }
}
