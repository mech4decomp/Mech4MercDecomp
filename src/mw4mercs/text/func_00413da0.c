/*
 * FUN_00413da0 — returns *(int*)(**param_1 + 0x10) + param_1[7][8].
 *
 * Calling convention: __fastcall (ecx = param_1), 0 stack params, ret.
 * CFLAGS: pinned /O1 (no deviation).
 *
 * Match: 100%.
 */

#include <mw4/archive.h>

__declspec(naked) void func_00413da0(void)
{
    __asm {
        mov     eax, [ecx]          ; eax = *param_1
        mov     edx, [eax]          ; edx = **param_1
        mov     ecx, [ecx+0x1c]     ; ecx = param_1[7]
        mov     eax, [edx+0x10]     ; eax = *(int*)(**param_1 + 0x10)
        add     eax, [ecx+0x20]     ; eax += param_1[7][8]
        ret
    }
}
