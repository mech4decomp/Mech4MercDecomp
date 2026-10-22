/*
 * FUN_006F2F10 (8 B) — Thunk: adjust ECX by +0x08, tail-call FUN_0041fd80.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   83 C1 08          add     ecx, 0x8
 *   E9 68 CE D2 FF    jmp     0x0041fd80
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

int __fastcall FUN_0041fd80(int);

__declspec(naked) int __fastcall FUN_006f2f10(void)
{
    __asm {
        add     ecx, 0x8
        jmp     FUN_0041fd80
    }
}
