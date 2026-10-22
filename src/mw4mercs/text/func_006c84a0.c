/*
 * FUN_006C84A0 — calls FUN_007347E0(this->field_3C, 2) if field_3C != 0.
 *
 * __fastcall (ECX = this), no stack params, RET 0.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

/* FUN_007347E0 — __cdecl, takes (int param1, int mode). */
extern void __cdecl func_007347e0(int param1, int mode);

__declspec(naked) void __fastcall func_006c84a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x3c]
        test    eax, eax
        jz      L_done
        push    2
        push    eax
        call    func_007347e0
    L_done:
        ret
    }
}
