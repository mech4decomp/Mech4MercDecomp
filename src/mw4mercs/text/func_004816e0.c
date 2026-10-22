/*
 * FUN_004816E0 (45 B) — Set angle + compute tan/cos.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: float *src).
 * Copies float from *src to this+0x90, computes tan -> this+0x94,
 * cos -> this+0x98.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void __fastcall FUN_004816e0(void *this, float *src)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [ecx + 0x90], edx
        fld     dword ptr [ecx + 0x90]
        fptan
        fstp    st(0)
        fstp    dword ptr [ecx + 0x94]
        fld     dword ptr [ecx + 0x90]
        fcos
        fstp    dword ptr [ecx + 0x98]
        ret     4
    }
}
