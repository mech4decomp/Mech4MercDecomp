/*
 * FUN_006B0670 (10 B) — Vtable slot 9 of vtable 0x798c44.
 *
 * Sets field at +0x14 to 0.
 *
 * __thiscall (ECX = this), RET 4 (one stack param, unused).
 *
 * Disassembly:
 *   C7 41 14 00 00 00 00    mov     dword ptr [ecx+0x14], 0
 *   C2 04 00                ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0670(void)
{
    __asm {
        mov     dword ptr [ecx + 0x14], 0
        ret     4
    }
}
