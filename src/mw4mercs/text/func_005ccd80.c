/*
 * FUN_005CCD80 (66 B) — __cdecl, RET 0 (3 params: out, in, delta).
 * Writes 6 floats: out[i] = in[i/2] -/+ delta alternating.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

__declspec(naked) void FUN_005ccd80(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [esp + 0x4]
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [eax]
        fstp    dword ptr [ecx + 0x4]
        fld     dword ptr [eax + 0x4]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 0x8]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [eax + 0x4]
        fstp    dword ptr [ecx + 0xc]
        fld     dword ptr [eax + 0x8]
        fsub    dword ptr [esp + 0xc]
        fstp    dword ptr [ecx + 0x10]
        fld     dword ptr [esp + 0xc]
        fadd    dword ptr [eax + 0x8]
        fstp    dword ptr [ecx + 0x14]
        ret
    }
}
