/*
 * FUN_0062bac0 (14 B) — ABL/game-logic destructor helper. Frees the
 * pointer stored at [ECX] via operator delete (0x4084e0) if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0062bac0(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      L_62bacd
        push    eax
        call    FUN_004084e0
        pop     ecx
L_62bacd:
        ret
    }
}
