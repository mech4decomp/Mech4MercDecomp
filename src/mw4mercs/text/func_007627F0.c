/*
 * FUN_007627F0 (330 B) — Obfuscated object-update routine. Validates a pointer
 * (arg0) and its vtable (esi+0x20); if either is null returns 0xb. Otherwise
 * issues a virtual call (vtable+0x20) with (5, esi+0x2c, esi+0x28) when
 * esi+0x28 is non-null, clears a table entry indexed by esi[0], then issues a
 * second virtual call with (0, 0x30, esi) and returns 0xa. The real logic is
 * interspersed with obfuscation sleds: `EB 04` jumps over `D6 D6 3C 00`
 * (salc; salc; cmp al,0) junk, followed by a chain of `EB 00` (jmp +0) NOPs.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_8bd300[];   /* 0x008bd300 table */

__declspec(naked) int FUN_007627F0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        push    edi
        jne     L_805
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebp
        ret
L_805:
        jmp     L_skip1
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0x3C   /* cmp al,0 (skipped junk) */
        __emit 0x00
L_skip1:
        jmp     L_e1
L_e1:   jmp     L_e2
L_e2:   jmp     L_e3
L_e3:   jmp     L_e4
L_e4:   jmp     L_e5
L_e5:   jmp     L_e6
L_e6:   jmp     L_e7
L_e7:   jmp     L_e8
L_e8:   jmp     L_e9
L_e9:   jmp     L_e10
L_e10:  jmp     L_e11
L_e11:  jmp     L_e12
L_e12:  jmp     L_e13
L_e13:  jmp     L_e14
L_e14:  jmp     L_e15
L_e15:  jmp     L_e16
L_e16:  jmp     L_e17
L_e17:  jmp     L_e18
L_e18:  jmp     L_e19
L_e19:  jmp     L_e20
L_e20:  jmp     L_e21
L_e21:  jmp     L_e22
L_e22:  jmp     L_e23
L_e23:  jmp     L_e24
L_e24:  jmp     L_e25
L_e25:  jmp     L_e26
L_e26:  jmp     L_e27
L_e27:
        mov     edi, dword ptr [esi + 0x20]
        test    edi, edi
        jne     L_851
        mov     eax, 0xb
        pop     edi
        pop     esi
        pop     ebp
        ret
L_851:
        jmp     L_skip2
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0x3C   /* cmp al,0 (skipped junk) */
        __emit 0x00
L_skip2:
        jmp     L_f1
L_f1:   jmp     L_f2
L_f2:   jmp     L_f3
L_f3:   jmp     L_f4
L_f4:   jmp     L_f5
L_f5:   jmp     L_f6
L_f6:   jmp     L_f7
L_f7:   jmp     L_f8
L_f8:   jmp     L_f9
L_f9:   jmp     L_f10
L_f10:  jmp     L_f11
L_f11:  jmp     L_f12
L_f12:  jmp     L_f13
L_f13:  jmp     L_f14
L_f14:  jmp     L_f15
L_f15:  jmp     L_f16
L_f16:  jmp     L_f17
L_f17:  jmp     L_f18
L_f18:  jmp     L_f19
L_f19:  jmp     L_f20
L_f20:  jmp     L_f21
L_f21:  jmp     L_f22
L_f22:  jmp     L_f23
L_f23:  jmp     L_f24
L_f24:  jmp     L_f25
L_f25:  jmp     L_f26
L_f26:  jmp     L_f27
L_f27:
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        je      L_dd
        mov     ecx, dword ptr [esi + 0x2c]
        push    5
        push    ecx
        push    eax
        call    dword ptr [edi + 0x20]
        add     esp, 0xc
        jmp     L_skip3
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0x3C   /* cmp al,0 (skipped junk) */
        __emit 0x00
L_skip3:
        jmp     L_g1
L_g1:   jmp     L_g2
L_g2:   jmp     L_g3
L_g3:   jmp     L_g4
L_g4:   jmp     L_g5
L_g5:   jmp     L_g6
L_g6:   jmp     L_g7
L_g7:   jmp     L_g8
L_g8:   jmp     L_g9
L_g9:   jmp     L_g10
L_g10:  jmp     L_g11
L_g11:  jmp     L_g12
L_g12:  jmp     L_g13
L_g13:  jmp     L_g14
L_g14:  jmp     L_g15
L_g15:  jmp     L_g16
L_g16:  jmp     L_g17
L_g17:  jmp     L_g18
L_g18:  jmp     L_g19
L_g19:  jmp     L_g20
L_g20:  jmp     L_g21
L_g21:  jmp     L_g22
L_g22:  jmp     L_g23
L_g23:  jmp     L_g24
L_g24:  jmp     L_g25
L_g25:  jmp     L_g26
L_g26:  jmp     L_dd
L_dd:
        mov     edx, dword ptr [esi]
        mov     dword ptr [edx*4 + g_8bd300], 0
        jmp     L_skip4
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0xD6   /* salc (undocumented, skipped junk) */
        __emit 0x3C   /* cmp al,0 (skipped junk) */
        __emit 0x00
L_skip4:
        jmp     L_h1
L_h1:   jmp     L_h2
L_h2:   jmp     L_h3
L_h3:   jmp     L_h4
L_h4:   jmp     L_h5
L_h5:   jmp     L_h6
L_h6:   jmp     L_h7
L_h7:   jmp     L_h8
L_h8:   jmp     L_h9
L_h9:   jmp     L_h10
L_h10:  jmp     L_h11
L_h11:  jmp     L_h12
L_h12:  jmp     L_h13
L_h13:  jmp     L_h14
L_h14:  jmp     L_h15
L_h15:  jmp     L_h16
L_h16:  jmp     L_h17
L_h17:  jmp     L_h18
L_h18:  jmp     L_h19
L_h19:  jmp     L_h20
L_h20:  jmp     L_h21
L_h21:  jmp     L_h22
L_h22:  jmp     L_h23
L_h23:  jmp     L_h24
L_h24:  jmp     L_h25
L_h25:  jmp     L_h26
L_h26:  jmp     L_h27
L_h27:
        push    0
        push    0x30
        push    esi
        call    dword ptr [edi + 0x20]
        add     esp, 0xc
        mov     eax, 0xa
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
