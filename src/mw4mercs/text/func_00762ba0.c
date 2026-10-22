/*
 * FUN_00762ba0 (302 B) — simple XOR cipher over a byte buffer.
 *
 * __cdecl, 4 params, RET. Returns 0xa.
 *
 * The function is padded with hand-crafted jump-sleds: each block is
 * `EB 04` (jmp +4) that skips 4 dead junk bytes (d6 d6 3c 00), followed
 * by 27 `EB 00` (jmp +0) instructions. The junk bytes are never executed
 * and are emitted with __emit; the EB 00 sleds are real `jmp` to the
 * immediately-following label (which encodes as EB 00).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00762ba0(void *p1, void *p2, void *p3, void *p4)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 0x10]
        jmp     Lskip1
        /* __emit: 4 dead junk bytes skipped by the EB 04 jump (not real instructions) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lskip1:
        jmp     A1
A1:     jmp     A2
A2:     jmp     A3
A3:     jmp     A4
A4:     jmp     A5
A5:     jmp     A6
A6:     jmp     A7
A7:     jmp     A8
A8:     jmp     A9
A9:     jmp     A10
A10:    jmp     A11
A11:    jmp     A12
A12:    jmp     A13
A13:    jmp     A14
A14:    jmp     A15
A15:    jmp     A16
A16:    jmp     A17
A17:    jmp     A18
A18:    jmp     A19
A19:    jmp     A20
A20:    jmp     A21
A21:    jmp     A22
A22:    jmp     A23
A23:    jmp     A24
A24:    jmp     A25
A25:    jmp     A26
A26:    jmp     A27
A27:
        mov     ecx, dword ptr [ebp + 0x14]
        test    ecx, ecx
        jbe     L2cd6
        mov     edx, dword ptr [ebp + 0xc]
        push    edi
        mov     edi, dword ptr [ebp + 8]
        push    ebx
L2bf6:
        xor     eax, eax
        test    edx, edx
        jbe     L2ccc
L2c00:
        jmp     Lskip2
        /* __emit: 4 dead junk bytes skipped by the EB 04 jump (not real instructions) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lskip2:
        jmp     B1
B1:     jmp     B2
B2:     jmp     B3
B3:     jmp     B4
B4:     jmp     B5
B5:     jmp     B6
B6:     jmp     B7
B7:     jmp     B8
B8:     jmp     B9
B9:     jmp     B10
B10:    jmp     B11
B11:    jmp     B12
B12:    jmp     B13
B13:    jmp     B14
B14:    jmp     B15
B15:    jmp     B16
B16:    jmp     B17
B17:    jmp     B18
B18:    jmp     B19
B19:    jmp     B20
B20:    jmp     B21
B21:    jmp     B22
B22:    jmp     B23
B23:    jmp     B24
B24:    jmp     B25
B25:    jmp     B26
B26:    jmp     B27
B27:
        mov     bl, byte ptr [eax + edi]
        add     bl, cl
        add     bl, al
        inc     bl
        xor     byte ptr [esi], bl
        jmp     Lskip3
        /* __emit: 4 dead junk bytes skipped by the EB 04 jump (not real instructions) */
        __emit 0xD6
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
Lskip3:
        jmp     C1
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
C27:
        inc     esi
        dec     ecx
        jz      L2ccc
        jmp     Lskip4
        /* __emit: 4 dead junk bytes skipped by the EB 04 jump (not real instructions) */
    __emit 0xD6
    __emit 0xD6
    __emit 0x3C
    __emit 0x00
Lskip4:
        jmp     D1
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
D27:
        inc     eax
        cmp     eax, edx
        jc      L2c00
L2ccc:
        test    ecx, ecx
        ja      L2bf6
        pop     ebx
        pop     edi
L2cd6:
        mov     eax, 0xa
        pop     esi
        pop     ebp
        ret
    }
}
