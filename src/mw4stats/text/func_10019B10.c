/*
 * FUN_10019b10 (30 B) - __thiscall destructor. Calls FUN_10019b30 (cleanup),
 * then frees `this` via FUN_1001ee22 if the flag arg bit 0 is set.
 *
 * __thiscall (ECX = this, 1 arg, RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10019b30(void);
extern void __cdecl FUN_1001ee22(void);

__declspec(naked) void __cdecl FUN_10019b10(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10019b30
        test    byte ptr [esp + 8], 1
        jz      short L1
        push    esi
        call    FUN_1001ee22
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
