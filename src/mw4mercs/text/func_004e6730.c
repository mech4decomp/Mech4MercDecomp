/* FUN_004e6730 - MLR/Adept armor-zone name -> index lookup (281 B) */

extern int g_76b2ac;   /* 0x0076b2ac - _stricmp function pointer */

__declspec(naked) void FUN_004e6730(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        push    edi
        mov     edi, dword ptr [g_76b2ac]
        push    0x7741d0
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e6751
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret
L_004e6751:
        push    0x7741c8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e6763
        pop     edi
        pop     esi
        ret
L_004e6763:
        push    0x7741bc
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e677a
        pop     edi
        mov     eax, 1
        pop     esi
        ret
L_004e677a:
        push    0x7741b4
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e6791
        pop     edi
        mov     eax, 2
        pop     esi
        ret
L_004e6791:
        push    0x7741a8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e67a8
        pop     edi
        mov     eax, 3
        pop     esi
        ret
L_004e67a8:
        push    0x77419c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e67bf
        pop     edi
        mov     eax, 4
        pop     esi
        ret
L_004e67bf:
        push    0x774190
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e67d6
        pop     edi
        mov     eax, 5
        pop     esi
        ret
L_004e67d6:
        push    0x774184
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e67ed
        pop     edi
        mov     eax, 6
        pop     esi
        ret
L_004e67ed:
        push    0x774174
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e6804
        pop     edi
        mov     eax, 7
        pop     esi
        ret
L_004e6804:
        push    0x77416c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e681b
        pop     edi
        mov     eax, 8
        pop     esi
        ret
L_004e681b:
        push    0x774160
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     L_004e6832
        pop     edi
        mov     eax, 9
        pop     esi
        ret
L_004e6832:
        push    0x774154
        push    esi
        call    edi
        add     esp, 8
        neg     eax
        sbb     eax, eax
        neg     eax
        pop     edi
        add     eax, 0xa
        pop     esi
        ret
    }
}
