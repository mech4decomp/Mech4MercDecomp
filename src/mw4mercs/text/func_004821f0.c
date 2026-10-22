/*
 * FUN_004821F0 (43 B) — Set inner/outer radius (__thiscall, RET 8).
 *
 * Stores inner at this+0x80, outer at this+0x84, computes
 * this+0x88 = DAT_0076d064 / (outer - inner).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0076d064;   /* constant */

__declspec(naked) void __fastcall FUN_004821f0(void *this, float inner, float outer)
{
    __asm {
        fld     dword ptr [esp + 8]          ; outer
        mov     eax, dword ptr [esp + 4]     ; inner
        fsub    dword ptr [esp + 4]          ; ST(0) = outer - inner
        mov     edx, dword ptr [esp + 8]     ; outer
        mov     dword ptr [ecx + 0x80], eax  ; this->inner = inner
        mov     dword ptr [ecx + 0x84], edx  ; this->outer = outer
        fdivr   dword ptr [DAT_0076d064]     ; FDIVR dword ptr [0x0076d064]
        fstp    dword ptr [ecx + 0x88]       ; FSTP dword ptr [ecx + 0x88]
        ret     8
    }
}
