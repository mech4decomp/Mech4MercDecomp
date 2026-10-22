/*
 * FUN_005b8050 (30 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Calls FUN_005b8070(); if (param & 1) calls FUN_004084e0(this).
 * Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005b8070(void);
extern void __fastcall FUN_004084e0(void);

__declspec(naked) void *__fastcall FUN_005b8050(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b8070
        test    byte ptr [esp + 0x8], 1
        jz      L_8068
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_8068:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
