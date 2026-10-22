/*
 * FUN_006F2400 (11 B) — Thunk: adjust ECX by +0xA8, tail-call FUN_006f39c0.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   81 C1 A8 00 00 00 add     ecx, 0xa8
 *   E9 B5 15 00 00    jmp     0x006f39c0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f39c0(void);

__declspec(naked) void __fastcall FUN_006f2400(void)
{
    __asm {
        add     ecx, 0xa8
        jmp     FUN_006f39c0
    }
}
