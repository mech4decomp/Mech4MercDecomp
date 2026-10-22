/*
 * FUN_006F1040 (24 B) — Calls FUN_006f3960(this, 0.0, 0x3ff80000) (double 2.0),
 * sets this+0x28 to 10.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   68 00 00 F8 3F       push    0x3ff80000
 *   8B F1                mov     esi, ecx
 *   6A 00                push    0x0
 *   E8 11 29 00 00       call    0x006f3960
 *   C7 46 28 0A 00 00 00 mov     dword ptr [esi + 0x28], 0xa
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_006f3960(int, double);

__declspec(naked) void __fastcall FUN_006f1040(int this)
{
    __asm {
        push    esi
        push    0x3ff80000
        mov     esi, ecx
        push    0x0
        call    FUN_006f3960
        mov     dword ptr [esi + 0x28], 0xa
        pop     esi
        ret
    }
}
