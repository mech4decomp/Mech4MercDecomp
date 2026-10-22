/*
 * FUN_0053d080 (33 B) — Array element zero + call helper.
 *
 * Computes index = arg * 1031, sets byte at this->array[0x353E + index] = 0,
 * then calls FUN_0053DB90(arg).
 * __thiscall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __stdcall FUN_0053db90(int arg);

__declspec(naked) void FUN_0053d080(void)
{
    __asm {
        mov     eax, [esp + 4]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        push    eax
        mov     byte ptr [ecx + edx*8 + 0x353E], 0
        call    FUN_0053db90
        ret     8
    }
}
