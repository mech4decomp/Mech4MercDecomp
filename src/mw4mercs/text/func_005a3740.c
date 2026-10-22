/*
 * FUN_005a3740 (107 B) — Armor type string parser.
 *
 * Compares param_1 against "FerroFiberus", "Reactive", "Reflective"
 * using _stricmp (via indirect call through 0x0076b2ac).
 * Returns 0, 1, 2 respectively, or -1 if no match.
 * Calls assert-like FUN_006fabf0 on failure.
 *
 * __cdecl (one stack param), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fabf0(char *fmt, char *str);

__declspec(naked) void __cdecl FUN_005a3740(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        push    edi

        mov edi, dword ptr [DAT_0076b2ac]
        push    0x78413C
        push    esi

        call edi
        add     esp, 8
        test    eax, eax
        jnz     L_check2
        pop     edi
        pop     esi
        pop     ebp
        ret
L_check2:
        push    0x784130
        push    esi

        call edi
        add     esp, 8
        test    eax, eax
        jnz     L_check3
        pop     edi
        mov     eax, 1
        pop     esi
        pop     ebp
        ret
L_check3:
        push    0x784124
        push    esi

        call edi
        add     esp, 8
        test    eax, eax
        jnz     L_fail
        pop     edi
        mov     eax, 2
        pop     esi
        pop     ebp
        ret
L_fail:
        push    esi
        push    0x784104
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      L_ret_minus1
        int     3
L_ret_minus1:
        pop     edi
        or      eax, 0xFFFFFFFF
        pop     esi
        pop     ebp
        ret
    }


}
