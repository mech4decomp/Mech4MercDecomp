/*
 * func_00507A30 - 109 bytes
 * String comparison / lookup function with multiple string constants
 */
__declspec(naked) void func_00507A30()
{
    

extern int DAT_0076b2ac;
__asm {
push    esi
        mov     esi, [esp + 8]
        test    esi, esi
        push    edi
        jnz     not_null
        pop     edi
        xor     eax, eax
        pop     esi
        ret
not_null:
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x00777018
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_2
        pop     edi
        pop     esi
        ret
check_2:
        push    0x00777024
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_3
        pop     edi
        mov     eax, 1
        pop     esi
        ret
check_3:
        push    0x0077703C
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jnz     check_4
        pop     edi
        mov     eax, 2
        pop     esi
        ret
check_4:
        push    0x00777050
        push    esi
        call    edi
        add     esp, 8
        neg     eax
        sbb     eax, eax
        and     eax, -3
        pop     edi
        add     eax, 3
        pop     esi
        ret
    }


}
