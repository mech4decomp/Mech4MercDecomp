/*
 * FUN_1003ec80 (664 B) — __cdecl, RET.
 * memmove implementation with Duff's-device jump tables for both the
 * forward (non-overlapping) and backward (overlapping) copy directions.
 * Returns param_1 (the destination pointer).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003ec80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x10]
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, ecx
        mov     edx, ecx
        add     eax, esi
        cmp     edi, esi
        jbe     L_90
        cmp     edi, eax
        jc      L_ee18
    L_90:
        test    edi, 3
        jnz     L_ecbc
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L_ecdc
        rep movsd
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003edc8] dispatch; MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x95
        __emit 0xC8
        __emit 0xED
        __emit 0x03
        __emit 0x10
    L_ecbc:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L_ecd4
        and     eax, 3
        add     ecx, eax
        __emit 0xFF   /* __emit: JMP [EAX*4+0x1003ece0] dispatch */
        __emit 0x24
        __emit 0x85
        __emit 0xE0
        __emit 0xEC
        __emit 0x03
        __emit 0x10
    L_ecd4:
        __emit 0xFF   /* __emit: JMP [ECX*4+0x1003edd8] dispatch */
        __emit 0x24
        __emit 0x8D
        __emit 0xD8
        __emit 0xED
        __emit 0x03
        __emit 0x10
        nop
    L_ecdc:
        __emit 0xFF   /* __emit: JMP [ECX*4+0x1003ed5c] dispatch */
        __emit 0x24
        __emit 0x8D
        __emit 0x5C
        __emit 0xED
        __emit 0x03
        __emit 0x10
        nop
        __emit 0xF0

        __emit 0xEC

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003ECF0 (reloc) */
        __emit 0x1C

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003ED1C (reloc) */
        __emit 0x40

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003ED40 (reloc) */
    L_ecf0:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        add     esi, 3
        add     edi, 3
        cmp     ecx, 8
        jc      L_ecdc
        rep movsd
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003edc8] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0xC8
        __emit 0xED
        __emit 0x03
        __emit 0x10
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ed1c:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L_ecdc
        rep movsd
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003edc8] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0xC8
        __emit 0xED
        __emit 0x03
        __emit 0x10
        nop
    L_ed40:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L_ecdc
        rep movsd
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003edc8] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0xC8
        __emit 0xED
        __emit 0x03
        __emit 0x10
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ed5c:
        __emit 0xBF

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003EDBF (reloc) */
        __emit 0xAC

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003EDAC (reloc) */
        __emit 0xA4

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003EDA4 (reloc) */
        __emit 0x9C

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003ED9C (reloc) */
        __emit 0x94

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[4]=0x1003ED94 (reloc) */
        __emit 0x8C

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[5]=0x1003ED8C (reloc) */
        __emit 0x84

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[6]=0x1003ED84 (reloc) */
        __emit 0x7C

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[7]=0x1003ED7C (reloc) */
    L_ed7c:
        mov     eax, dword ptr [esi + ecx*4 - 0x1c]
        mov     dword ptr [edi + ecx*4 - 0x1c], eax
        mov     eax, dword ptr [esi + ecx*4 - 0x18]
        mov     dword ptr [edi + ecx*4 - 0x18], eax
        mov     eax, dword ptr [esi + ecx*4 - 0x14]
        mov     dword ptr [edi + ecx*4 - 0x14], eax
        mov     eax, dword ptr [esi + ecx*4 - 0x10]
        mov     dword ptr [edi + ecx*4 - 0x10], eax
        mov     eax, dword ptr [esi + ecx*4 - 0xc]
        mov     dword ptr [edi + ecx*4 - 0xc], eax
        mov     eax, dword ptr [esi + ecx*4 - 0x8]
        mov     dword ptr [edi + ecx*4 - 0x8], eax
        mov     eax, dword ptr [esi + ecx*4 - 0x4]
        mov     dword ptr [edi + ecx*4 - 0x4], eax
        lea     eax, [ecx*4]
        add     esi, eax
        add     edi, eax
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003edc8] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0xC8
        __emit 0xED
        __emit 0x03
        __emit 0x10
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_edc8:
        __emit 0xD8

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003EDD8 (reloc) */
        __emit 0xE0

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003EDE0 (reloc) */
        __emit 0xEC

        __emit 0xED

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003EDEC (reloc) */
        __emit 0x00

        __emit 0xEE

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003EE00 (reloc) */
    L_edd8:
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_ede0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_edec:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ee00:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_ee18:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L_ee4c
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L_ee40
        std
        rep movsd
        cld
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_ee40:
        neg     ecx
        __emit 0xFF   /* __emit: JMP [ECX*4+0x1003ef10] dispatch */
        __emit 0x24
        __emit 0x8D
        __emit 0x10
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ee4c:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L_ee64
        and     eax, 3
        sub     ecx, eax
        __emit 0xFF   /* __emit: JMP [EAX*4+0x1003ee68] dispatch */
        __emit 0x24
        __emit 0x85
        __emit 0x68
        __emit 0xEE
        __emit 0x03
        __emit 0x10
    L_ee64:
        __emit 0xFF   /* __emit: JMP [ECX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x8D
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        nop
        __emit 0x78

        __emit 0xEE

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003EE78 (reloc) */
        __emit 0x98

        __emit 0xEE

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003EE98 (reloc) */
        __emit 0xC0

        __emit 0xEE

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003EEC0 (reloc) */
    L_ee78:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L_ee40
        std
        rep movsd
        cld
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ee98:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L_ee40
        std
        rep movsd
        cld
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        nop
    L_eec0:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        sub     esi, 3
        sub     edi, 3
        cmp     ecx, 8
        jc      L_ee40
        std
        rep movsd
        cld
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_eef4:
        __emit 0x14

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[7]=0x1003EF14 (reloc) */
        __emit 0x1C

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[6]=0x1003EF1C (reloc) */
        __emit 0x24

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[5]=0x1003EF24 (reloc) */
        __emit 0x2C

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[4]=0x1003EF2C (reloc) */
        __emit 0x34

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003EF34 (reloc) */
        __emit 0x3C

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003EF3C (reloc) */
        __emit 0x44

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003EF44 (reloc) */
        __emit 0x57

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003EF57 (reloc) */
    L_ef14:
        mov     eax, dword ptr [esi + ecx*4 + 0x1c]
        mov     dword ptr [edi + ecx*4 + 0x1c], eax
        mov     eax, dword ptr [esi + ecx*4 + 0x18]
        mov     dword ptr [edi + ecx*4 + 0x18], eax
        mov     eax, dword ptr [esi + ecx*4 + 0x14]
        mov     dword ptr [edi + ecx*4 + 0x14], eax
        mov     eax, dword ptr [esi + ecx*4 + 0x10]
        mov     dword ptr [edi + ecx*4 + 0x10], eax
        mov     eax, dword ptr [esi + ecx*4 + 0xc]
        mov     dword ptr [edi + ecx*4 + 0xc], eax
        mov     eax, dword ptr [esi + ecx*4 + 0x8]
        mov     dword ptr [edi + ecx*4 + 0x8], eax
        mov     eax, dword ptr [esi + ecx*4 + 0x4]
        mov     dword ptr [edi + ecx*4 + 0x4], eax
        lea     eax, [ecx*4]
        add     esi, eax
        add     edi, eax
        __emit 0xFF   /* __emit: JMP [EDX*4+0x1003ef60] dispatch */
        __emit 0x24
        __emit 0x95
        __emit 0x60
        __emit 0xEF
        __emit 0x03
        __emit 0x10
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_ef60:
        __emit 0x70

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003EF70 (reloc) */
        __emit 0x78

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003EF78 (reloc) */
        __emit 0x88

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003EF88 (reloc) */
        __emit 0x9C

        __emit 0xEF

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003EF9C (reloc) */
    L_ef70:
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_ef78:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_ef88:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_ef9c:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
    }
}
