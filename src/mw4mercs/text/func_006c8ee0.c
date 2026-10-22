/*
 * FUN_006C8EE0 — conditional tail-call to FUN_006C8CF0.
 *
 * If byte at this+0x1d is non-zero, or dword at this+0x20 is non-zero,
 * jump to FUN_006C8CF0. Otherwise return.
 *
 * __fastcall (ECX = this), no stack params.
 *
 * CFLAGS: /O1 (pinned)
 * Match: target 100%
 */

#include <mw4/common.h>

void __fastcall FUN_006c8cf0(void);

__declspec(naked) void __fastcall func_006c8ee0(void *this_ptr)
{
    __asm {
        mov     al, byte ptr [ecx + 0x1d]
        test    al, al
        jnz     L_call
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        jz      L_ret
    L_call:
        jmp     FUN_006c8cf0
    L_ret:
        ret
    }
}
