/*
 * FUN_0062ba20 (22 B) — ABL/game-logic destructor helper. Frees the
 * pointer stored at [ECX] via operator delete (0x4084e0) if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0062ba20(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        /* __emit: MSVC6 drops the 00 disp byte for [esp] store (89 04 24); ref needs 89 44 24 00 */
        __emit 0x89
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L_62ba34
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_62ba34:
        pop     ecx
        ret
    }
}
