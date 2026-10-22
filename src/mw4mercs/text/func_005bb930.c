/*
 * FUN_005bb930 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_005bb950 on this; if (param & 1), frees this (FUN_004084e0).
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005bb950(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void FUN_005bb930(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005bb950
        test    byte ptr [esp + 8], 1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
