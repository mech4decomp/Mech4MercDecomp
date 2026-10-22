/*
 * FUN_006F23F0 (11 B) — Thunk: adjust ECX by +0xF8, tail-call FUN_006f39a0.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   81 C1 F8 00 00 00 add     ecx, 0xf8
 *   E9 A5 15 00 00    jmp     0x006f39a0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f39a0(void);

__declspec(naked) void __fastcall FUN_006f23f0(void)
{
    __asm {
        add     ecx, 0xf8
        jmp     FUN_006f39a0
    }
}
