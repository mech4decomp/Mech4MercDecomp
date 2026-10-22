/*
 * FUN_007652c0 (406 B block) — vtable-slot helper. If param2 (EDI) is
 * non-null, allocates a buffer via FUN_00765c80 (using DAT_008bd4f8),
 * then calls an IAT function (0x76b1c0) with a magic constant 0xca002813;
 * on success calls FUN_00765e50 and CloseHandle (0x76b0ec), zeroes *EDI,
 * and returns 0xA. Returns 0xB on any failure.
 *
 * __cdecl, RET (2 stack params). Obfuscated with EB 04 + D6 D6 3C 00
 * junk-byte jump chains crossed with EB 00 no-op sleds (junk bytes __emit'd,
 * jumps are real mnemonics).
 *
 * The 406-byte block also contains the adjacent tiny function FUN_00765450
 * (nop; mov eax,1; ret) at the tail, which is part of this slice.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_8bd4f8;                /* DAT_008bd4f8 object pointer */
extern void *g_76b1c0;                /* IAT fn ptr 0x0076b1c0 */
extern void *g_76b0ec;                /* IAT: CloseHandle 0x0076b0ec */

extern void __cdecl FUN_00765c80(void);
extern void __cdecl FUN_00765e50(void);

__declspec(naked) int __cdecl FUN_007652c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        push    esi
        push    edi
        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_skip1
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip1:
        jmp     L_a1
L_a1:   jmp     L_a2
L_a2:   jmp     L_a3
L_a3:   jmp     L_a4
L_a4:   jmp     L_a5
L_a5:   jmp     L_a6
L_a6:   jmp     L_a7
L_a7:   jmp     L_a8
L_a8:   jmp     L_a9
L_a9:   jmp     L_a10
L_a10:  jmp     L_a11
L_a11:  jmp     L_a12
L_a12:  jmp     L_a13
L_a13:  jmp     L_a14
L_a14:  jmp     L_a15
L_a15:  jmp     L_a16
L_a16:  jmp     L_a17
L_a17:  jmp     L_a18
L_a18:  jmp     L_a19
L_a19:  jmp     L_a20
L_a20:  jmp     L_a21
L_a21:  jmp     L_a22
L_a22:  jmp     L_a23
L_a23:  jmp     L_a24
L_a24:  jmp     L_a25
L_a25:  jmp     L_a26
L_a26:  jmp     L_a27
L_a27:
        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_skip2
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip2:
        jmp     L_b1
L_b1:   jmp     L_b2
L_b2:   jmp     L_b3
L_b3:   jmp     L_b4
L_b4:   jmp     L_b5
L_b5:   jmp     L_b6
L_b6:   jmp     L_b7
L_b7:   jmp     L_b8
L_b8:   jmp     L_b9
L_b9:   jmp     L_b10
L_b10:  jmp     L_b11
L_b11:  jmp     L_b12
L_b12:  jmp     L_b13
L_b13:  jmp     L_b14
L_b14:  jmp     L_b15
L_b15:  jmp     L_b16
L_b16:  jmp     L_b17
L_b17:  jmp     L_b18
L_b18:  jmp     L_b19
L_b19:  jmp     L_b20
L_b20:  jmp     L_b21
L_b21:  jmp     L_b22
L_b22:  jmp     L_b23
L_b23:  jmp     L_b24
L_b24:  jmp     L_b25
L_b25:  jmp     L_b26
L_b26:  jmp     L_b27
L_b27:
        mov     edi, dword ptr [ebp + 0xc]
        test    edi, edi
        jne     L_352
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_352:
        mov     ecx, dword ptr [ebp + 8]
        mov     edx, dword ptr [g_8bd4f8]
        lea     eax, [ebp - 4]
        push    eax
        push    0
        push    0
        push    0x98
        push    ecx
        push    edx
        call    FUN_00765c80
        add     esp, 0x18
        mov     esi, eax
        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_skip3
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip3:
        jmp     L_c1
L_c1:   jmp     L_c2
L_c2:   jmp     L_c3
L_c3:   jmp     L_c4
L_c4:   jmp     L_c5
L_c5:   jmp     L_c6
L_c6:   jmp     L_c7
L_c7:   jmp     L_c8
L_c8:   jmp     L_c9
L_c9:   jmp     L_c10
L_c10:  jmp     L_c11
L_c11:  jmp     L_c12
L_c12:  jmp     L_c13
L_c13:  jmp     L_c14
L_c14:  jmp     L_c15
L_c15:  jmp     L_c16
L_c16:  jmp     L_c17
L_c17:  jmp     L_c18
L_c18:  jmp     L_c19
L_c19:  jmp     L_c20
L_c20:  jmp     L_c21
L_c21:  jmp     L_c22
L_c22:  jmp     L_c23
L_c23:  jmp     L_c24
L_c24:  jmp     L_c25
L_c25:  jmp     L_c26
L_c26:  jmp     L_c27
L_c27:
        test    esi, esi
        jne     L_3bf
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_3bf:
        lea     eax, [ebp - 8]
        mov     ecx, dword ptr [edi]
        push    0
        push    eax
        mov     eax, dword ptr [ebp - 4]
        push    eax
        push    esi
        push    eax
        push    esi
        push    0xca002813
        push    ecx
        call    dword ptr [g_76b1c0]
        test    eax, eax
        jne     L_3e9
        mov     eax, 0xb
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
L_3e9:
        mov     edx, dword ptr [g_8bd4f8]
        push    esi
        push    edx
        call    FUN_00765e50
        mov     eax, dword ptr [edi]
        add     esp, 8
        push    eax
        call    dword ptr [g_76b0ec]
        mov     dword ptr [edi], 0
        /* EB 04 over 4 garbage bytes (D6 D6 3C 00) */
        jmp     L_skip4
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0xD6   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x3C   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
        __emit 0x00   /* __emit: dead data byte (skipped by EB 04), no mnemonic */
L_skip4:
        jmp     L_d1
L_d1:   jmp     L_d2
L_d2:   jmp     L_d3
L_d3:   jmp     L_d4
L_d4:   jmp     L_d5
L_d5:   jmp     L_d6
L_d6:   jmp     L_d7
L_d7:   jmp     L_d8
L_d8:   jmp     L_d9
L_d9:   jmp     L_d10
L_d10:  jmp     L_d11
L_d11:  jmp     L_d12
L_d12:  jmp     L_d13
L_d13:  jmp     L_d14
L_d14:  jmp     L_d15
L_d15:  jmp     L_d16
L_d16:  jmp     L_d17
L_d17:  jmp     L_d18
L_d18:  jmp     L_d19
L_d19:  jmp     L_d20
L_d20:  jmp     L_d21
L_d21:  jmp     L_d22
L_d22:  jmp     L_d23
L_d23:  jmp     L_d24
L_d24:  jmp     L_d25
L_d25:  jmp     L_d26
L_d26:  jmp     L_d27
L_d27:
        pop     edi
        mov     eax, 0xa
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
        nop
        mov     eax, 1
        ret
    }
}
