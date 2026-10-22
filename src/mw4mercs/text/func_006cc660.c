/*
 * FUN_006CC660 — getter: if field_10 != NULL, return *(field_10 + 0x10).
 *               Otherwise return 0.
 *
 * __fastcall (ECX = this), RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

__declspec(naked) int __fastcall func_006cc660(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x10]
        test    eax, eax
        jz      L_null
        mov     eax, dword ptr [eax + 0x10]
        ret
    L_null:
        xor     eax, eax
        ret
    }
}
