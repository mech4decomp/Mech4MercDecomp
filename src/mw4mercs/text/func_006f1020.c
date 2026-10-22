/*
 * FUN_006F1020 (21 B) — Calls FUN_006f39c0, sets byte at this+0x2c to 1,
 * then calls FUN_006f1040.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   E8 98 29 00 00       call    0x006f39c0
 *   8B CE                mov     ecx, esi
 *   C6 46 2C 01          mov     byte ptr [esi + 0x2c], 1
 *   E8 0D 00 00 00       call    0x006f1040
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f39c0(void);
void __fastcall FUN_006f1040(int);

__declspec(naked) void __fastcall FUN_006f1020(int this)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006f39c0
        mov     ecx, esi
        mov     byte ptr [esi + 0x2c], 1
        call    FUN_006f1040
        pop     esi
        ret
    }
}
