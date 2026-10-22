/*
 * FUN_006B0780 (14 B) — Vtable slot 5 of vtable 0x798c44.
 *
 * Sets field at +0x04 from stack param, sets byte at +0x19 to 1.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params, only first used).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]
 *   89 41 04          mov     [ecx+4], eax
 *   C6 41 19 01       mov     byte ptr [ecx+0x19], 1
 *   C2 0C 00          ret     0xC
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 4], eax
        mov     byte ptr [ecx + 0x19], 1
        ret     0xc
    }
}
