/*
 * FUN_006B0750 (3 B) — Vtable slot 4 of vtable 0x798c44.
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

__declspec(naked) void __stdcall FUN_006b0750(void)
{
    __asm {
        ret     4
    }
}
