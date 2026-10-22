/*
 * FUN_004d5590 (1018 B) — MLR network/server subsystem. Feature/version
 * detection: repeatedly calls a global function pointer (0x76b2ac) with a
 * vtable/string address + arg, returning a distinct code on the first
 * non-matching probe. Ends with an assert-style check (0x6fab90) + INT3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0076b2ac;

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void FUN_004d5590(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [g_0076b2ac]
        push    0x77008c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jz      L_4d5984
        push    0x772c30
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d55c9
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d55c9:
        push    0x772c28
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d55e1
        pop     edi
        mov     eax, 0x2
        pop     esi
        pop     ebp
        ret
L_4d55e1:
        push    0x772c1c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d55f9
        pop     edi
        mov     eax, 0x3
        pop     esi
        pop     ebp
        ret
L_4d55f9:
        push    0x772c10
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5611
        pop     edi
        mov     eax, 0x4
        pop     esi
        pop     ebp
        ret
L_4d5611:
        push    0x772c04
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5629
        pop     edi
        mov     eax, 0x5
        pop     esi
        pop     ebp
        ret
L_4d5629:
        push    0x772bfc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5641
        pop     edi
        mov     eax, 0x6
        pop     esi
        pop     ebp
        ret
L_4d5641:
        push    0x772bec
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5659
        pop     edi
        mov     eax, 0x7
        pop     esi
        pop     ebp
        ret
L_4d5659:
        push    0x772bdc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5671
        pop     edi
        mov     eax, 0x8
        pop     esi
        pop     ebp
        ret
L_4d5671:
        push    0x772bcc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5689
        pop     edi
        mov     eax, 0x9
        pop     esi
        pop     ebp
        ret
L_4d5689:
        push    0x772bc0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d56a1
        pop     edi
        mov     eax, 0xa
        pop     esi
        pop     ebp
        ret
L_4d56a1:
        push    0x772bb4
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d56b9
        pop     edi
        mov     eax, 0xb
        pop     esi
        pop     ebp
        ret
L_4d56b9:
        push    0x772bac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d56d1
        pop     edi
        mov     eax, 0xc
        pop     esi
        pop     ebp
        ret
L_4d56d1:
        push    0x772ba4
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d56e9
        pop     edi
        mov     eax, 0xd
        pop     esi
        pop     ebp
        ret
L_4d56e9:
        push    0x772b9c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5701
        pop     edi
        mov     eax, 0xe
        pop     esi
        pop     ebp
        ret
L_4d5701:
        push    0x772b94
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5719
        pop     edi
        mov     eax, 0xf
        pop     esi
        pop     ebp
        ret
L_4d5719:
        push    0x772b8c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5731
        pop     edi
        mov     eax, 0x10
        pop     esi
        pop     ebp
        ret
L_4d5731:
        push    0x772b88
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5749
        pop     edi
        mov     eax, 0x11
        pop     esi
        pop     ebp
        ret
L_4d5749:
        push    0x772b80
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5761
        pop     edi
        mov     eax, 0x12
        pop     esi
        pop     ebp
        ret
L_4d5761:
        push    0x772b70
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5779
        pop     edi
        mov     eax, 0x13
        pop     esi
        pop     ebp
        ret
L_4d5779:
        push    0x772b64
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5791
        pop     edi
        mov     eax, 0x14
        pop     esi
        pop     ebp
        ret
L_4d5791:
        push    0x772b60
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d57a9
        pop     edi
        mov     eax, 0x15
        pop     esi
        pop     ebp
        ret
L_4d57a9:
        push    0x772b54
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d57c1
        pop     edi
        mov     eax, 0x16
        pop     esi
        pop     ebp
        ret
L_4d57c1:
        push    0x772b48
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d57d9
        pop     edi
        mov     eax, 0x17
        pop     esi
        pop     ebp
        ret
L_4d57d9:
        push    0x772b40
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d57f1
        pop     edi
        mov     eax, 0x5
        pop     esi
        pop     ebp
        ret
L_4d57f1:
        push    0x772b38
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5809
        pop     edi
        mov     eax, 0x10
        pop     esi
        pop     ebp
        ret
L_4d5809:
        push    0x772b30
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5821
        pop     edi
        mov     eax, 0x3
        pop     esi
        pop     ebp
        ret
L_4d5821:
        push    0x772b28
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5839
        pop     edi
        mov     eax, 0xd
        pop     esi
        pop     ebp
        ret
L_4d5839:
        push    0x772b20
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5851
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d5851:
        push    0x772b18
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5869
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d5869:
        push    0x772bac
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5881
        pop     edi
        mov     eax, 0xc
        pop     esi
        pop     ebp
        ret
L_4d5881:
        push    0x772b0c
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5899
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d5899:
        push    0x772afc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d58b1
        pop     edi
        mov     eax, 0x2
        pop     esi
        pop     ebp
        ret
L_4d58b1:
        push    0x772af0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d58c9
        pop     edi
        mov     eax, 0x2
        pop     esi
        pop     ebp
        ret
L_4d58c9:
        push    0x772ae8
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d58e1
        pop     edi
        mov     eax, 0x5
        pop     esi
        pop     ebp
        ret
L_4d58e1:
        push    0x772adc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d58f9
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d58f9:
        push    0x772ad0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5911
        pop     edi
        mov     eax, 0x1
        pop     esi
        pop     ebp
        ret
L_4d5911:
        push    0x772ac8
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5929
        pop     edi
        mov     eax, 0x6
        pop     esi
        pop     ebp
        ret
L_4d5929:
        push    0x772abc
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5941
        pop     edi
        mov     eax, 0x9
        pop     esi
        pop     ebp
        ret
L_4d5941:
        push    0x772ab0
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5959
        pop     edi
        mov     eax, 0x9
        pop     esi
        pop     ebp
        ret
L_4d5959:
        push    0x772aa4
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_4d5971
        pop     edi
        mov     eax, 0xa
        pop     esi
        pop     ebp
        ret
L_4d5971:
        push    esi
        push    0x772a88
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_4d5984
        int     3
L_4d5984:
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret
    }
}
