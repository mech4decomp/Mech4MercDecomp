/*
 * FUN_00688830 (30 B) — __thiscall destructor. Calls FUN_00688850,
 * frees the object via FUN_004084e0 if the flag bit 0 is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00688850(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void* FUN_00688830(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00688850
        test    byte ptr [esp+8], 1
        jz      L_688848
        push    esi
        call    FUN_004084e0
        add     esp, 4
    L_688848:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
