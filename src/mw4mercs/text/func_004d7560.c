/*
 * FUN_004D7560 (35 B) — Conditional cleanup (__thiscall, RET 4).
 *
 * If param_1->field_17B8 is non-zero, calls FUN_004D7DB0(param_1)
 * and clears field_17B8. Always returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004d7db0(void);

__declspec(naked) int __fastcall FUN_004d7560(void)
{
    __asm {
        push    esi
        mov     esi, [esp + 8]
        mov     al, byte ptr [esi + 0x17b8]
        test    al, al
        jz      l_done
        mov     ecx, esi
        call    FUN_004d7db0
        mov     byte ptr [esi + 0x17b8], 0
    l_done:
        mov     al, 1
        pop     esi
        ret     4
    }
}
