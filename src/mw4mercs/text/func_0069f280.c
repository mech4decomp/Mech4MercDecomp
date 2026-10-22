/*
 * FUN_0069F280 (3 B) — Vtable 0x799CD8 slot 5: no-op (RET 4).
 *
 * __thiscall (ECX = this), RET 4.
 *
 * Disassembly:
 *   C2 04 00    ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0069f280(void)
{
    __asm {
        ret     4
    }
}
