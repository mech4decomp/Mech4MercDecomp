/*
 * FUN_006B0790 (3 B) — Vtable slot 6 of vtable 0x798c44.
 *
 * No-op: just returns.
 *
 * __thiscall (ECX = this), RET 0xC (three stack params, unused).
 *
 * Disassembly:
 *   C2 0C 00    ret     0xC
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0790(void)
{
    __asm {
        ret     0xc
    }
}
