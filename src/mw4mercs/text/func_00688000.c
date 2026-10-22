/*
 * FUN_00688000 (10 B) — Vtable 0x798C44 slot 14: set byte_1A.
 *
 * Sets byte at this+0x1A from the parameter.
 *
 * __thiscall (ECX = this), RET 4 (one stack param: byte value).
 *
 * Disassembly:
 *   8A 44 24 04       mov     al, [esp+4]
 *   88 41 1A          mov     [ecx+0x1A], al
 *   C2 04 00          ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00688000(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        mov     byte ptr [ecx + 0x1A], al
        ret     4
    }
}
