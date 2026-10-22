/*
 * FUN_00761bd0 (609 B) — iterate a list of items at [EBX+0x114], call a
 * vtable method ([ESI+0x1c]) on each, and copy the returned data into a
 * buffer at [EBX+0x10c]. Returns 0x50 on success, 0x51 on failure.
 *
 * The function is obfuscated with EB 04 + junk-byte (D6 D6 3C 00) jump
 * chains crossed with long EB 00 no-op sleds. The EB 04/EB 00 jumps are
 * real `jmp` mnemonics; the 4 junk bytes after each EB 04 are data and
 * are emitted with __emit (they are not instructions).
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __stdcall FUN_00761bd0(unsigned int param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        test    ebx, ebx
        jnz     L_bec
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_bec:
        mov     esi, dword ptr [ebx + 0x100]
        test    esi, esi
        mov     dword ptr [ebp - 0x10], esi
        jnz     L_c05
        mov     eax, 0x51
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    L_c05:
        mov     eax, dword ptr [ebx + 0x104]
        mov     dword ptr [ebp - 0xc], 0x0
        test    eax, eax
        jbe     L_e3d
        lea     eax, [ebx + 0x114]
        mov     dword ptr [ebp - 0x4], eax
        jmp     L_c28
    L_c25:
        mov     esi, dword ptr [ebp - 0x10]
    L_c28:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ebp - 0x8], eax
        jmp     L_c36
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_c36: jmp L_c38
    L_c38: jmp L_c3a
    L_c3a: jmp L_c3c
    L_c3c: jmp L_c3e
    L_c3e: jmp L_c40
    L_c40: jmp L_c42
    L_c42: jmp L_c44
    L_c44: jmp L_c46
    L_c46: jmp L_c48
    L_c48: jmp L_c4a
    L_c4a: jmp L_c4c
    L_c4c: jmp L_c4e
    L_c4e: jmp L_c50
    L_c50: jmp L_c52
    L_c52: jmp L_c54
    L_c54: jmp L_c56
    L_c56: jmp L_c58
    L_c58: jmp L_c5a
    L_c5a: jmp L_c5c
    L_c5c: jmp L_c5e
    L_c5e: jmp L_c60
    L_c60: jmp L_c62
    L_c62: jmp L_c64
    L_c64: jmp L_c66
    L_c66: jmp L_c68
    L_c68: jmp L_c6a
    L_c6a: jmp L_c6c
    L_c6c:
        cmp     dword ptr [esi], 0x0
        jnz     L_cb7
        mov     edi, 0x4
        mov     dword ptr [ebp + 0x8], edi
        jmp     L_c7f
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_c7f: jmp L_c81
    L_c81: jmp L_c83
    L_c83: jmp L_c85
    L_c85: jmp L_c87
    L_c87: jmp L_c89
    L_c89: jmp L_c8b
    L_c8b: jmp L_c8d
    L_c8d: jmp L_c8f
    L_c8f: jmp L_c91
    L_c91: jmp L_c93
    L_c93: jmp L_c95
    L_c95: jmp L_c97
    L_c97: jmp L_c99
    L_c99: jmp L_c9b
    L_c9b: jmp L_c9d
    L_c9d: jmp L_c9f
    L_c9f: jmp L_ca1
    L_ca1: jmp L_ca3
    L_ca3: jmp L_ca5
    L_ca5: jmp L_ca7
    L_ca7: jmp L_ca9
    L_ca9: jmp L_cab
    L_cab: jmp L_cad
    L_cad: jmp L_caf
    L_caf: jmp L_cb1
    L_cb1: jmp L_cb3
    L_cb3: jmp L_cb5
    L_cb5:
        jmp     L_cfb
    L_cb7:
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [ebp + 0x8], edx
        jmp     L_cc3
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_cc3: jmp L_cc5
    L_cc5: jmp L_cc7
    L_cc7: jmp L_cc9
    L_cc9: jmp L_ccb
    L_ccb: jmp L_ccd
    L_ccd: jmp L_ccf
    L_ccf: jmp L_cd1
    L_cd1: jmp L_cd3
    L_cd3: jmp L_cd5
    L_cd5: jmp L_cd7
    L_cd7: jmp L_cd9
    L_cd9: jmp L_cdb
    L_cdb: jmp L_cdd
    L_cdd: jmp L_cdf
    L_cdf: jmp L_ce1
    L_ce1: jmp L_ce3
    L_ce3: jmp L_ce5
    L_ce5: jmp L_ce7
    L_ce7: jmp L_ce9
    L_ce9: jmp L_ceb
    L_ceb: jmp L_ced
    L_ced: jmp L_cef
    L_cef: jmp L_cf1
    L_cf1: jmp L_cf3
    L_cf3: jmp L_cf5
    L_cf5: jmp L_cf7
    L_cf7: jmp L_cf9
    L_cf9:
        mov     edi, edx
    L_cfb:
        mov     eax, dword ptr [ebx + 0x10c]
        mov     edx, dword ptr [ebx + 0x108]
        push    0x2
        lea     ecx, [edi + eax*0x1]
        push    ecx
        push    eax
        push    edx
        call    dword ptr [esi + 0x1c]
        mov     edx, dword ptr [ebp - 0x8]
        mov     dword ptr [ebx + 0x108], eax
        mov     ecx, dword ptr [esi]
        add     esp, 0x10
        test    ecx, ecx
        mov     ecx, edi
        jnz     L_d7d
        mov     edi, dword ptr [ebx + 0x10c]
        lea     esi, [edx + 0x4]
        add     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        jmp     L_d45
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_d45: jmp L_d47
    L_d47: jmp L_d49
    L_d49: jmp L_d4b
    L_d4b: jmp L_d4d
    L_d4d: jmp L_d4f
    L_d4f: jmp L_d51
    L_d51: jmp L_d53
    L_d53: jmp L_d55
    L_d55: jmp L_d57
    L_d57: jmp L_d59
    L_d59: jmp L_d5b
    L_d5b: jmp L_d5d
    L_d5d: jmp L_d5f
    L_d5f: jmp L_d61
    L_d61: jmp L_d63
    L_d63: jmp L_d65
    L_d65: jmp L_d67
    L_d67: jmp L_d69
    L_d69: jmp L_d6b
    L_d6b: jmp L_d6d
    L_d6d: jmp L_d6f
    L_d6f: jmp L_d71
    L_d71: jmp L_d73
    L_d73: jmp L_d75
    L_d75: jmp L_d77
    L_d77: jmp L_d79
    L_d79: jmp L_d7b
    L_d7b:
        jmp     L_dd2
    L_d7d:
        mov     edi, dword ptr [ebx + 0x10c]
        mov     esi, dword ptr [edx + 0x4]
        add     edi, eax
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        jmp     L_d9c
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_d9c: jmp L_d9e
    L_d9e: jmp L_da0
    L_da0: jmp L_da2
    L_da2: jmp L_da4
    L_da4: jmp L_da6
    L_da6: jmp L_da8
    L_da8: jmp L_daa
    L_daa: jmp L_dac
    L_dac: jmp L_dae
    L_dae: jmp L_db0
    L_db0: jmp L_db2
    L_db2: jmp L_db4
    L_db4: jmp L_db6
    L_db6: jmp L_db8
    L_db8: jmp L_dba
    L_dba: jmp L_dbc
    L_dbc: jmp L_dbe
    L_dbe: jmp L_dc0
    L_dc0: jmp L_dc2
    L_dc2: jmp L_dc4
    L_dc4: jmp L_dc6
    L_dc6: jmp L_dc8
    L_dc8: jmp L_dca
    L_dca: jmp L_dcc
    L_dcc: jmp L_dce
    L_dce: jmp L_dd0
    L_dd0: jmp L_dd2
    L_dd2:
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edi, dword ptr [ebx + 0x10c]
        add     edi, ecx
        mov     dword ptr [ebx + 0x10c], edi
        jmp     L_de9
        __emit 0xD6  /* junk data bytes skipped by EB 04 */
        __emit 0xD6
        __emit 0x3C
        __emit 0x00
    L_de9: jmp L_deb
    L_deb: jmp L_ded
    L_ded: jmp L_def
    L_def: jmp L_df1
    L_df1: jmp L_df3
    L_df3: jmp L_df5
    L_df5: jmp L_df7
    L_df7: jmp L_df9
    L_df9: jmp L_dfb
    L_dfb: jmp L_dfd
    L_dfd: jmp L_dff
    L_dff: jmp L_e01
    L_e01: jmp L_e03
    L_e03: jmp L_e05
    L_e05: jmp L_e07
    L_e07: jmp L_e09
    L_e09: jmp L_e0b
    L_e0b: jmp L_e0d
    L_e0d: jmp L_e0f
    L_e0f: jmp L_e11
    L_e11: jmp L_e13
    L_e13: jmp L_e15
    L_e15: jmp L_e17
    L_e17: jmp L_e19
    L_e19: jmp L_e1b
    L_e1b: jmp L_e1d
    L_e1d: jmp L_e1f
    L_e1f:
        mov     eax, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebx + 0x104]
        inc     eax
        add     edx, 0x4
        cmp     eax, ecx
        mov     dword ptr [ebp - 0xc], eax
        mov     dword ptr [ebp - 0x4], edx
        jc      L_c25
    L_e3d:
        pop     edi
        pop     esi
        mov     eax, 0x50
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
