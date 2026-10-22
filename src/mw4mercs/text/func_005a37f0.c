/*
 * FUN_005a37f0 (83 B) — Internal Structure string lookup.
 *
 * Compares param_1 against "Standard" (returns 0) and "EndoSteel" (returns 1).
 * If neither, logs an error and returns -1.
 *
 * __cdecl, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(char *, char *);

__declspec(naked) int __cdecl FUN_005a37f0(char *param_1)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x771d4c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_not_standard
        pop     edi
        pop     esi
        pop     ebp
        ret
L_not_standard:
        push    0x78418c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_not_endosteel
        pop     edi
        mov     eax, 1
        pop     esi
        pop     ebp
        ret
L_not_endosteel:
        push    esi
        push    0x784168
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_skip_int3
        int     3
L_skip_int3:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        pop     ebp
        ret
    }


}
