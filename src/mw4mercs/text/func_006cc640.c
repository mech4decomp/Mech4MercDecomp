/*
 * FUN_006CC640 — getter: if field_10 != NULL, return *(field_10).
 *               Otherwise return 0.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __fastcall func_006cc640(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_null
        mov     eax, dword ptr [eax]
        ret
    L_null:
        xor     eax, eax
        ret
    }
}
