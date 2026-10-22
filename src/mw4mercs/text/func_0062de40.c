/*
 * FUN_0062de40 (227 B) — String-to-movetype-enum lookup. Calls
 * _stricmp (via global fn ptr at 0x0076b2ac) against a series of
 * string literals, returning the matching enum index.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;   /* 0x0076b2ac _stricmp fn ptr */

__declspec(naked) int __stdcall FUN_0062de40(char *name)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        push    edi
        jnz     L_52
        pop     edi
        mov     eax, 7
        pop     esi
        ret
L_52:
        mov     edi, dword ptr [g_76b2ac]
        push    0x78d194
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_6a
        pop     edi
        pop     esi
        ret
L_6a:
        push    0x78d184
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_81
        pop     edi
        mov     eax, 1
        pop     esi
        ret
L_81:
        push    0x78d174
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_98
        pop     edi
        mov     eax, 2
        pop     esi
        ret
L_98:
        push    0x78d164
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_af
        pop     edi
        mov     eax, 3
        pop     esi
        ret
L_af:
        push    0x78d154
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_c6
        pop     edi
        mov     eax, 4
        pop     esi
        ret
L_c6:
        push    0x78d144
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_dd
        pop     edi
        mov     eax, 5
        pop     esi
        ret
L_dd:
        push    0x78d134
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_f4
        pop     edi
        mov     eax, 6
        pop     esi
        ret
L_f4:
        push    0x78d120
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_10b
        pop     edi
        mov     eax, 8
        pop     esi
        ret
L_10b:
        push    0x78d110
        push    esi
        call    edi
        add     esp, 8
        neg     eax
        sbb     eax, eax
        and     eax, 0xfffffffe
        pop     edi
        add     eax, 9
        pop     esi
        ret
    }
}
