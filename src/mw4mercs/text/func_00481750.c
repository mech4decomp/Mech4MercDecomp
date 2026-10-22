/*
 * FUN_00481750 (17 B) — Get angle getter.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: float *dst).
 * Copies this+0x90 to *dst, returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_00481750(void *this, float *dst)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x90]
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [ecx], eax
        mov     al, 1
        ret     4
    }
}
