/*
 * FUN_00648600 (19 B) — Copies an 8-byte struct from stack param to
 * *this (ECX). __thiscall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00648600(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret     0x4
    }
}
