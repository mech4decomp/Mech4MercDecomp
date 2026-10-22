/*
 * FUN_1003ca70 (664 B) — __cdecl, RET.
 * memmove implementation with Duff's-device jump tables for both the
 * forward (non-overlapping) and backward (overlapping) copy directions.
 * Returns param_1 (the destination pointer).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __cdecl FUN_1003ca70(void)
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
        jc      L_cc08
    L_90:
        test    edi, 3
        jnz     L_caac
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L_cacc
        rep movsd
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0xB8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cbb8] dispatch; MSVC6 re-bases via EBX */
    L_caac:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L_cac4
        and     eax, 3
        add     ecx, eax
        __emit 0xFF

        __emit 0x24

        __emit 0x85

        __emit 0xD0

        __emit 0xCA

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EAX*4+0x1003cad0] dispatch */
    L_cac4:
        __emit 0xFF

        __emit 0x24

        __emit 0x8D

        __emit 0xC8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [ECX*4+0x1003cbc8] dispatch */
        nop
    L_cacc:
        __emit 0xFF

        __emit 0x24

        __emit 0x8D

        __emit 0x4C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [ECX*4+0x1003cb4c] dispatch */
        nop
        __emit 0xE0

        __emit 0xCA

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CAE0 (reloc) */
        __emit 0x0C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CB0C (reloc) */
        __emit 0x30

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CB30 (reloc) */
    L_cae0:
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
        jc      L_cacc
        rep movsd
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0xB8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cbb8] dispatch */
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_cb0c:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L_cacc
        rep movsd
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0xB8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cbb8] dispatch */
        nop
    L_cb30:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L_cacc
        rep movsd
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0xB8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cbb8] dispatch */
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_cb4c:
        __emit 0xAF

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003CBAF (reloc) */
        __emit 0x9C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CB9C (reloc) */
        __emit 0x94

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CB94 (reloc) */
        __emit 0x8C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CB8C (reloc) */
        __emit 0x84

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[4]=0x1003CB84 (reloc) */
        __emit 0x7C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[5]=0x1003CB7C (reloc) */
        __emit 0x74

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[6]=0x1003CB74 (reloc) */
        __emit 0x6C

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[7]=0x1003CB6C (reloc) */
    L_cb6c:
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
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0xB8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cbb8] dispatch */
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_cbb8:
        __emit 0xC8

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003CBC8 (reloc) */
        __emit 0xD0

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CBD0 (reloc) */
        __emit 0xDC

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CBDC (reloc) */
        __emit 0xF0

        __emit 0xCB

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CBF0 (reloc) */
    L_cbc8:
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_cbd0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_cbdc:
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
    L_cbf0:
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
    L_cc08:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L_cc3c
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L_cc30
        std
        rep movsd
        cld
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cd50] dispatch */
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_cc30:
        neg     ecx
        __emit 0xFF

        __emit 0x24

        __emit 0x8D

        __emit 0x00

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [ECX*4+0x1003cd00] dispatch */
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_cc3c:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L_cc54
        and     eax, 3
        sub     ecx, eax
        __emit 0xFF

        __emit 0x24

        __emit 0x85

        __emit 0x58

        __emit 0xCC

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EAX*4+0x1003cc58] dispatch */
    L_cc54:
        __emit 0xFF

        __emit 0x24

        __emit 0x8D

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [ECX*4+0x1003cd50] dispatch */
        nop
        __emit 0x68

        __emit 0xCC

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CC68 (reloc) */
        __emit 0x88

        __emit 0xCC

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CC88 (reloc) */
        __emit 0xB0

        __emit 0xCC

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CCB0 (reloc) */
    L_cc68:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L_cc30
        std
        rep movsd
        cld
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cd50] dispatch */
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_cc88:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L_cc30
        std
        rep movsd
        cld
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cd50] dispatch */
        nop
    L_ccb0:
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
        jc      L_cc30
        std
        rep movsd
        cld
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cd50] dispatch */
        __emit 0x8D

        __emit 0x49

        __emit 0x00   /* __emit: LEA ECX,[ECX+0] alignment padding */
    L_cce4:
        __emit 0x04

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[7]=0x1003CD04 (reloc) */
        __emit 0x0C

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[6]=0x1003CD0C (reloc) */
        __emit 0x14

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[5]=0x1003CD14 (reloc) */
        __emit 0x1C

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[4]=0x1003CD1C (reloc) */
        __emit 0x24

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CD24 (reloc) */
        __emit 0x2C

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CD2C (reloc) */
        __emit 0x34

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CD34 (reloc) */
        __emit 0x47

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003CD47 (reloc) */
    L_cd04:
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
        __emit 0xFF

        __emit 0x24

        __emit 0x95

        __emit 0x50

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: JMP [EDX*4+0x1003cd50] dispatch */
        __emit 0x8B

        __emit 0xFF   /* __emit: MOV EDI,EDI alignment padding */
    L_cd50:
        __emit 0x60

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[0]=0x1003CD60 (reloc) */
        __emit 0x68

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[1]=0x1003CD68 (reloc) */
        __emit 0x78

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[2]=0x1003CD78 (reloc) */
        __emit 0x8C

        __emit 0xCD

        __emit 0x03

        __emit 0x10   /* __emit: jumptable[3]=0x1003CD8C (reloc) */
    L_cd60:
        mov     eax, dword ptr [ebp + 0x8]
        pop     esi
        pop     edi
        leave
        ret
        nop
    L_cd68:
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
    L_cd78:
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
    L_cd8c:
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
