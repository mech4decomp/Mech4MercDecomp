/*
 * FUN_006B0740 (3 B) — Vtable slot 3 of vtable 0x798c44.
 *
 * No-op: just returns.
 *
 * __thiscall (ECX = this), RET 4 (one stack param, unused).
 *
 * Disassembly:
 *   C2 04 00    ret     4
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_006b0740(void)
{
    __asm {
        ret     4
    }
}
