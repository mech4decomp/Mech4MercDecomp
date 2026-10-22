/*
 * FUN_00502E50 (151 B) — string lookup function
 * Tests a string against several known strings via callback at [0x0076B2AC].
 *
 * CFLAGS: /O1
 */

__declspec(naked) void func_00502e50(void)
{
    

extern int DAT_0076b2ac;
__asm {
push    esi
        mov     esi, [esp+0x08]
        push    edi
        mov edi, dword ptr [DAT_0076b2ac]
        push    0x007765C8
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     check2
        pop     edi
        mov     eax, 0x01
        pop     esi
        ret
    check2:
        push    0x007765C0
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     check3
        pop     edi
        mov     eax, 0x02
        pop     esi
        ret
    check3:
        push    0x007765B8
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     check4
        pop     edi
        mov     eax, 0x03
        pop     esi
        ret
    check4:
        push    0x007765B0
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     check5
        pop     edi
        mov     eax, 0x04
        pop     esi
        ret
    check5:
        push    0x007765A8
        push    esi
        call    edi
        add     esp, 0x08
        test    eax, eax
        jne     check6
        pop     edi
        mov     eax, 0x05
        pop     esi
        ret
    check6:
        push    0x007765A0
        push    esi
        call    edi
        add     esp, 0x08
        neg     eax
        sbb     eax, eax
        and     eax, -6
        pop     edi
        add     eax, 0x06
        pop     esi
        ret
    }


}
