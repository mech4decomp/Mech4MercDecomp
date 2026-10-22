/*
 * FUN_007637b0 (362 B) — Byte-scramble loop. XORs each byte of a buffer
 * with a key derived from the source array, count, and index. Returns 10.
 *
 * Contains four "jump chains" (EB 04 + junk bytes + Nx EB 00) — the same
 * padding/obfuscation pattern as FUN_00762a30. Chain lengths: 27, 57, 27,
 * 27 EB 00. Junk bytes: D6 D6 3C 00 / D6 D6 78 00 / D6 D6 3C 00 / D6 D6 3C 00.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_007637b0(void *p1, unsigned int p2, void *p3, int p4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        jmp     C1
        /* __emit: junk bytes D6 D6 3C 00 (never executed - jumped over) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
C1:     jmp     C2
C2:     jmp     C3
C3:     jmp     C4
C4:     jmp     C5
C5:     jmp     C6
C6:     jmp     C7
C7:     jmp     C8
C8:     jmp     C9
C9:     jmp     C10
C10:    jmp     C11
C11:    jmp     C12
C12:    jmp     C13
C13:    jmp     C14
C14:    jmp     C15
C15:    jmp     C16
C16:    jmp     C17
C17:    jmp     C18
C18:    jmp     C19
C19:    jmp     C20
C20:    jmp     C21
C21:    jmp     C22
C22:    jmp     C23
C23:    jmp     C24
C24:    jmp     C25
C25:    jmp     C26
C26:    jmp     C27
C27:    jmp     C28
C28:    mov     ecx, dword ptr [ebp + 0x14]
        test    ecx, ecx
        jbe     L_63922
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        push    ebx
L_63806:
        xor     eax, eax
        test    edx, edx
        jbe     L_63918
L_63810:
        jmp     D1
        /* __emit: junk bytes D6 D6 78 00 (never executed - jumped over) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x78
        __emit 0x00
D1:     jmp     D2
D2:     jmp     D3
D3:     jmp     D4
D4:     jmp     D5
D5:     jmp     D6
D6:     jmp     D7
D7:     jmp     D8
D8:     jmp     D9
D9:     jmp     D10
D10:    jmp     D11
D11:    jmp     D12
D12:    jmp     D13
D13:    jmp     D14
D14:    jmp     D15
D15:    jmp     D16
D16:    jmp     D17
D17:    jmp     D18
D18:    jmp     D19
D19:    jmp     D20
D20:    jmp     D21
D21:    jmp     D22
D22:    jmp     D23
D23:    jmp     D24
D24:    jmp     D25
D25:    jmp     D26
D26:    jmp     D27
D27:    jmp     D28
D28:    jmp     D29
D29:    jmp     D30
D30:    jmp     D31
D31:    jmp     D32
D32:    jmp     D33
D33:    jmp     D34
D34:    jmp     D35
D35:    jmp     D36
D36:    jmp     D37
D37:    jmp     D38
D38:    jmp     D39
D39:    jmp     D40
D40:    jmp     D41
D41:    jmp     D42
D42:    jmp     D43
D43:    jmp     D44
D44:    jmp     D45
D45:    jmp     D46
D46:    jmp     D47
D47:    jmp     D48
D48:    jmp     D49
D49:    jmp     D50
D50:    jmp     D51
D51:    jmp     D52
D52:    jmp     D53
D53:    jmp     D54
D54:    jmp     D55
D55:    jmp     D56
D56:    jmp     D57
D57:    jmp     D58
D58:    mov     bl, byte ptr [eax + edi]
        add     bl, cl
        add     bl, al
        inc     bl
        xor     byte ptr [esi], bl
        jmp     E1
        /* __emit: junk bytes D6 D6 3C 00 (never executed - jumped over) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
E1:     jmp     E2
E2:     jmp     E3
E3:     jmp     E4
E4:     jmp     E5
E5:     jmp     E6
E6:     jmp     E7
E7:     jmp     E8
E8:     jmp     E9
E9:     jmp     E10
E10:    jmp     E11
E11:    jmp     E12
E12:    jmp     E13
E13:    jmp     E14
E14:    jmp     E15
E15:    jmp     E16
E16:    jmp     E17
E17:    jmp     E18
E18:    jmp     E19
E19:    jmp     E20
E20:    jmp     E21
E21:    jmp     E22
E22:    jmp     E23
E23:    jmp     E24
E24:    jmp     E25
E25:    jmp     E26
E26:    jmp     E27
E27:    jmp     E28
E28:    inc     esi
        dec     ecx
        jz      L_63918
        jmp     F1
        /* __emit: junk bytes D6 D6 3C 00 (never executed - jumped over) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
F1:     jmp     F2
F2:     jmp     F3
F3:     jmp     F4
F4:     jmp     F5
F5:     jmp     F6
F6:     jmp     F7
F7:     jmp     F8
F8:     jmp     F9
F9:     jmp     F10
F10:    jmp     F11
F11:    jmp     F12
F12:    jmp     F13
F13:    jmp     F14
F14:    jmp     F15
F15:    jmp     F16
F16:    jmp     F17
F17:    jmp     F18
F18:    jmp     F19
F19:    jmp     F20
F20:    jmp     F21
F21:    jmp     F22
F22:    jmp     F23
F23:    jmp     F24
F24:    jmp     F25
F25:    jmp     F26
F26:    jmp     F27
F27:    jmp     F28
F28:    inc     eax
        cmp     eax, edx
        jc      L_63810
L_63918:
        test    ecx, ecx
        ja      L_63806
        pop     ebx
        pop     edi
L_63922:
        mov     eax, 0xa
        pop     esi
        pop     ebp
        ret
    }
}
