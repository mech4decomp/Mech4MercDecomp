/*
 * FUN_00482220 (29 B) — Get inner/outer radius (__thiscall, RET 8).
 *
 * Reads inner from this+0x80 into *param1, outer from this+0x84 into *param2,
 * returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) int __fastcall FUN_00482220(void *this, float *p_inner, float *p_outer)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x80]
        mov     edx, dword ptr [esp + 4]
        mov     dword ptr [edx], eax
        mov     eax, dword ptr [ecx + 0x84]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [ecx], eax
        mov     al, 1
        ret     8
    }
}
