/*
 * FUN_006A09F0 (8 B) — Vtable 0x799CD8 slot 9: return global float.
 *
 * Returns float from global 0x76C5B0.
 *
 * __thiscall (ECX = this), RET 4.
 *
 * Disassembly:
 *   D9 05 B0 C5 76 00    fld     dword ptr [0x76C5B0]
 *   C2 04 00             ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006a09f0(void)
{
    __asm {
        _emit   0xD9
        _emit   0x05
        _emit   0xB0
        _emit   0xC5
        _emit   0x76
        _emit   0x00
        ret     4
    }
}
