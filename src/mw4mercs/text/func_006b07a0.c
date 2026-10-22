/*
 * FUN_006B07A0 (10 B) — Vtable slot 7 of vtable 0x798c44.
 *
 * Sets field at +0x04 from stack param.
 *
 * __thiscall (ECX = this), RET 0x10 (four stack params, only first used).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]
 *   89 41 04          mov     [ecx+4], eax
 *   C2 10 00          ret     0x10
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b07a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 4], eax
        ret     0x10
    }
}
