/*
 * FUN_006F10F0 (8 B) — Thunk: adjust ECX by +0x14, tail-call FUN_006f39c0.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   83 C1 14          add     ecx, 0x14
 *   E9 C8 28 00 00    jmp     0x006f39c0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f39c0(void);

__declspec(naked) void __fastcall FUN_006f10f0(void)
{
    __asm {
        add     ecx, 0x14
        jmp     FUN_006f39c0
    }
}
