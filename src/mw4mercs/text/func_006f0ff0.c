/*
 * FUN_006F0FF0 (20 B) — Destructor-like: calls FUN_006f3950 on this+0x14,
 * then on this.
 *
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   8D 4E 14             lea     ecx, [esi + 0x14]
 *   E8 55 29 00 00       call    0x006f3950
 *   8B CE                mov     ecx, esi
 *   E8 4E 29 00 00       call    0x006f3950
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_006f3950(void);

__declspec(naked) void __fastcall FUN_006f0ff0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x14]
        call    FUN_006f3950
        mov     ecx, esi
        call    FUN_006f3950
        pop     esi
        ret
    }
}
