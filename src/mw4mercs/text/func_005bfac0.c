/*
 * FUN_005bfac0 (8 B) — Tail-call thunk.
 *
 * Adjusts this (ECX) by +0x14 then tail-jumps to FUN_004179f0.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004179f0(void);

__declspec(naked) void FUN_005bfac0(void)
{
    __asm {
        add     ecx, 0x14
        jmp     FUN_004179f0
    }
}
