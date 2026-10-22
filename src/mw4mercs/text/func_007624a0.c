/*
 * FUN_007624A0 (133 B) — no args, RET.
 *
 * Sets global 0x8bd66c to 0, calls FUN_00763ac0, returns. The body is
 * padded with runs of `EB 00` (jump-to-next) and two 4-byte data blobs
 * (D6 D6 3C 00) that the compiler emitted inline (jump-table/padding
 * artifact). The `EB 04` jumps skip over each data blob.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00763ac0(void);
extern unsigned int g_8bd66c;

__declspec(naked) void FUN_007624A0(void)
{
    __asm {
        mov     dword ptr [g_8bd66c], 0
        jmp     short A1
        /* __emit: 4 raw data bytes (D6 D6 3C 00) — not a valid mnemonic sequence */
        __emit  0xD6
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
A1:     jmp     short A2
A2:     jmp     short A3
A3:     jmp     short A4
A4:     jmp     short A5
A5:     jmp     short A6
A6:     jmp     short A7
A7:     jmp     short A8
A8:     jmp     short A9
A9:     jmp     short A10
A10:    jmp     short A11
A11:    jmp     short A12
A12:    jmp     short A13
A13:    jmp     short A14
A14:    jmp     short A15
A15:    jmp     short A16
A16:    jmp     short A17
A17:    jmp     short A18
A18:    jmp     short A19
A19:    jmp     short A20
A20:    jmp     short A21
A21:    jmp     short A22
A22:    jmp     short A23
A23:    jmp     short A24
A24:    jmp     short A25
A25:    jmp     short A26
A26:    jmp     short A27
A27:    jmp     short A28
A28:    call    FUN_00763ac0
        jmp     short B1
        /* __emit: 4 raw data bytes (D6 D6 3C 00) — not a valid mnemonic sequence */
        __emit  0xD6
        __emit  0xD6
        __emit  0x3C
        __emit  0x00
B1:     jmp     short B2
B2:     jmp     short B3
B3:     jmp     short B4
B4:     jmp     short B5
B5:     jmp     short B6
B6:     jmp     short B7
B7:     jmp     short B8
B8:     jmp     short B9
B9:     jmp     short B10
B10:    jmp     short B11
B11:    jmp     short B12
B12:    jmp     short B13
B13:    jmp     short B14
B14:    jmp     short B15
B15:    jmp     short B16
B16:    jmp     short B17
B17:    jmp     short B18
B18:    jmp     short B19
B19:    jmp     short B20
B20:    jmp     short B21
B21:    jmp     short B22
B22:    jmp     short B23
B23:    jmp     short B24
B24:    jmp     short B25
B25:    jmp     short B26
B26:    jmp     short B27
B27:    jmp     short B28
B28:    cmp     eax, 0xa
        jnz     short B29
B29:    ret
    }
}
