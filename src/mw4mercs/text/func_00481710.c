/*
 * FUN_00481710 (51 B) — Set scaled angle + compute tan/cos.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: float *src).
 * Multiplies *src by constant 0x0076F964, stores at this+0x90,
 * computes tan -> this+0x94, cos -> this+0x98.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern float DAT_0076f964;   /* scale constant */

__declspec(naked) void __fastcall FUN_00481710(void *this, float *src)
{
    __asm {
        fld     dword ptr [DAT_0076f964]     ; fld dword ptr [0x0076f964]
        mov     eax, dword ptr [esp + 4]
        fmul    dword ptr [eax]
        fstp    dword ptr [ecx + 0x90]
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
