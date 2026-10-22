/*
 * FUN_006F23E0 (11 B) — Thunk: adjust ECX by +0x10C, tail-call FUN_006f39a0.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   81 C1 0C 01 00 00 add     ecx, 0x10c
 *   E9 B5 15 00 00    jmp     0x006f39a0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f39a0(void);

__declspec(naked) void __fastcall FUN_006f23e0(void)
{
    __asm {
        add     ecx, 0x10c
        jmp     FUN_006f39a0
    }
}
