/*
 * FUN_005b7bc0 (30 B) — __thiscall destructor (ECX = this), RET 4.
 * Calls FUN_005b7c30, then frees via FUN_004084e0 if the flag arg's
 * bit 0 is set; returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b7c30(void);
extern void FUN_004084e0(void *);

__declspec(naked) void *__fastcall FUN_005b7bc0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b7c30
        test    byte ptr [esp + 0x8], 0x1
        jz      L_7bd8
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_7bd8:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
