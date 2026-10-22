/*
 * FUN_0069F2A0 (10 B) — Vtable 0x799CD8 slot 10: set *param = 1, RET 0xC.
 *
 * Sets the dword pointed to by the parameter to 1.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params).
 *
 * Disassembly:
 *   8B 44 24 04       mov     eax, [esp+4]
 *   C7 00 01 00 00 00 mov     dword ptr [eax], 1
 *   C2 0C 00          ret     0xC
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0069f2a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [eax], 1
        ret     0x0C
    }
}
