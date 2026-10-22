/*
 * FUN_00590440 (21 B) — Constructor-like initializer.
 *
 * Calls FUN_005A15B0(this), then sets this->field_0x998 = 1.
 * __fastcall (ECX = this).
 *
 * Disassembly:
 *   56                   push    esi
 *   8B F1                mov     esi, ecx
 *   56                   push    esi
 *   E8 67 11 01 00       call    FUN_005A15B0
 *   83 C4 04             add     esp, 4
 *   C6 86 98 09 00 00 01 mov     byte ptr [esi+0x998], 1
 *   5E                   pop     esi
 *   C3                   ret
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __fastcall FUN_005A15B0(void *this);

__declspec(naked) void __fastcall func_00590440(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    esi
        call    FUN_005A15B0
        add     esp, 4
        mov     byte ptr [esi+0x998], 1
        pop     esi
        ret
    }
}
