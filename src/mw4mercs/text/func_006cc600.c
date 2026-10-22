/*
 * FUN_006CC600 — linked-list iterator: advances to next node.
 *   If field_10 != NULL:
 *     field_04 += 1
 *     field_10 = field_10->next (at +0x04)
 *   Returns (field_10 != NULL) as byte (0/1).
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __fastcall func_006cc600(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_check
        mov     edx, dword ptr [ecx + 4]
        mov     eax, dword ptr [eax + 4]
        inc     edx
        mov     dword ptr [ecx + 4], edx
        mov     dword ptr [ecx + 0x10], eax
    L_check:
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        setnz   al
        ret
    }
}
