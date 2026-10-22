/*
 * FUN_00765c80 (434 B in CSV; actual 458 B) — Allocates a buffer via a
 * vtable allocator (EAX+0x18), copies two dwords + an optional data
 * block, and stores the size/pointer into an out-param.
 *
 * __cdecl, RET (6 stack params). Heavily obfuscated with EB 04 +
 * D6 D6 3C 00 junk-byte jump chains crossed with EB 00 no-op sleds.
 * The junk bytes are emitted raw (__emit); the jumps are real mnemonics.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00765c80(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        push    edi
        test    eax, eax
        jnz     L_c92
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_c92:
        mov     edi, dword ptr [ebp + 0x18]
        lea     ebx, [edi + 0x10]
        jmp     L_c9e
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_c9e:  jmp     L_ca0
L_ca0:  jmp     L_ca2
L_ca2:  jmp     L_ca4
L_ca4:  jmp     L_ca6
L_ca6:  jmp     L_ca8
L_ca8:  jmp     L_caa
L_caa:  jmp     L_cac
L_cac:  jmp     L_cae
L_cae:  jmp     L_cb0
L_cb0:  jmp     L_cb2
L_cb2:  jmp     L_cb4
L_cb4:  jmp     L_cb6
L_cb6:  jmp     L_cb8
L_cb8:  jmp     L_cba
L_cba:  jmp     L_cbc
L_cbc:  jmp     L_cbe
L_cbe:  jmp     L_cc0
L_cc0:  jmp     L_cc2
L_cc2:  jmp     L_cc4
L_cc4:  jmp     L_cc6
L_cc6:  jmp     L_cc8
L_cc8:  jmp     L_cca
L_cca:  jmp     L_ccc
L_ccc:  jmp     L_cce
L_cce:  jmp     L_cd0
L_cd0:  jmp     L_cd2
L_cd2:  jmp     L_cd4
L_cd4:
        push    4
        push    ebx
        call    dword ptr [eax + 0x18]
        add     esp, 8
        jmp     L_ce3
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_ce3:  jmp     L_ce5
L_ce5:  jmp     L_ce7
L_ce7:  jmp     L_ce9
L_ce9:  jmp     L_ceb
L_ceb:  jmp     L_ced
L_ced:  jmp     L_cef
L_cef:  jmp     L_cf1
L_cf1:  jmp     L_cf3
L_cf3:  jmp     L_cf5
L_cf5:  jmp     L_cf7
L_cf7:  jmp     L_cf9
L_cf9:  jmp     L_cfb
L_cfb:  jmp     L_cfd
L_cfd:  jmp     L_cff
L_cff:  jmp     L_d01
L_d01:  jmp     L_d03
L_d03:  jmp     L_d05
L_d05:  jmp     L_d07
L_d07:  jmp     L_d09
L_d09:  jmp     L_d0b
L_d0b:  jmp     L_d0d
L_d0d:  jmp     L_d0f
L_d0f:  jmp     L_d11
L_d11:  jmp     L_d13
L_d13:  jmp     L_d15
L_d15:  jmp     L_d17
L_d17:  jmp     L_d19
L_d19:
        test    eax, eax
        jnz     L_d22
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_d22:
        jmp     L_d28
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_d28:  jmp     L_d2a
L_d2a:  jmp     L_d2c
L_d2c:  jmp     L_d2e
L_d2e:  jmp     L_d30
L_d30:  jmp     L_d32
L_d32:  jmp     L_d34
L_d34:  jmp     L_d36
L_d36:  jmp     L_d38
L_d38:  jmp     L_d3a
L_d3a:  jmp     L_d3c
L_d3c:  jmp     L_d3e
L_d3e:  jmp     L_d40
L_d40:  jmp     L_d42
L_d42:  jmp     L_d44
L_d44:  jmp     L_d46
L_d46:  jmp     L_d48
L_d48:  jmp     L_d4a
L_d4a:  jmp     L_d4c
L_d4c:  jmp     L_d4e
L_d4e:  jmp     L_d50
L_d50:  jmp     L_d52
L_d52:  jmp     L_d54
L_d54:  jmp     L_d56
L_d56:  jmp     L_d58
L_d58:  jmp     L_d5a
L_d5a:  jmp     L_d5c
L_d5c:  jmp     L_d5e
L_d5e:
        jmp     L_d64
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_d64:  jmp     L_d66
L_d66:  jmp     L_d68
L_d68:  jmp     L_d6a
L_d6a:  jmp     L_d6c
L_d6c:  jmp     L_d6e
L_d6e:  jmp     L_d70
L_d70:  jmp     L_d72
L_d72:  jmp     L_d74
L_d74:  jmp     L_d76
L_d76:  jmp     L_d78
L_d78:  jmp     L_d7a
L_d7a:  jmp     L_d7c
L_d7c:  jmp     L_d7e
L_d7e:  jmp     L_d80
L_d80:  jmp     L_d82
L_d82:  jmp     L_d84
L_d84:  jmp     L_d86
L_d86:  jmp     L_d88
L_d88:  jmp     L_d8a
L_d8a:  jmp     L_d8c
L_d8c:  jmp     L_d8e
L_d8e:  jmp     L_d90
L_d90:  jmp     L_d92
L_d92:  jmp     L_d94
L_d94:  jmp     L_d96
L_d96:  jmp     L_d98
L_d98:  jmp     L_d9a
L_d9a:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, dword ptr [ebp + 0x10]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 4], edx
        jmp     L_dab
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_dab:  jmp     L_dad
L_dad:  jmp     L_daf
L_daf:  jmp     L_db1
L_db1:  jmp     L_db3
L_db3:  jmp     L_db5
L_db5:  jmp     L_db7
L_db7:  jmp     L_db9
L_db9:  jmp     L_dbb
L_dbb:  jmp     L_dbd
L_dbd:  jmp     L_dbf
L_dbf:  jmp     L_dc1
L_dc1:  jmp     L_dc3
L_dc3:  jmp     L_dc5
L_dc5:  jmp     L_dc7
L_dc7:  jmp     L_dc9
L_dc9:  jmp     L_dcb
L_dcb:  jmp     L_dcd
L_dcd:  jmp     L_dcf
L_dcf:  jmp     L_dd1
L_dd1:  jmp     L_dd3
L_dd3:  jmp     L_dd5
L_dd5:  jmp     L_dd7
L_dd7:  jmp     L_dd9
L_dd9:  jmp     L_ddb
L_ddb:  jmp     L_ddd
L_ddd:  jmp     L_ddf
L_ddf:  jmp     L_de1
L_de1:
        mov     esi, dword ptr [ebp + 0x14]
        test    esi, esi
        jz      L_dfe
        mov     ecx, edi
        lea     edi, [eax + 0x10]
        mov     edx, ecx
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        mov     edi, dword ptr [ebp + 0x18]
L_dfe:
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax + 8], ebx
        jmp     L_e0a
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_e0a:  jmp     L_e0c
L_e0c:  jmp     L_e0e
L_e0e:  jmp     L_e10
L_e10:  jmp     L_e12
L_e12:  jmp     L_e14
L_e14:  jmp     L_e16
L_e16:  jmp     L_e18
L_e18:  jmp     L_e1a
L_e1a:  jmp     L_e1c
L_e1c:  jmp     L_e1e
L_e1e:  jmp     L_e20
L_e20:  jmp     L_e22
L_e22:  jmp     L_e24
L_e24:  jmp     L_e26
L_e26:  jmp     L_e28
L_e28:  jmp     L_e2a
L_e2a:  jmp     L_e2c
L_e2c:  jmp     L_e2e
L_e2e:  jmp     L_e30
L_e30:  jmp     L_e32
L_e32:  jmp     L_e34
L_e34:  jmp     L_e36
L_e36:  jmp     L_e38
L_e38:  jmp     L_e3a
L_e3a:  jmp     L_e3c
L_e3c:  jmp     L_e3e
L_e3e:  jmp     L_e40
L_e40:
        mov     ecx, dword ptr [ebp + 0x1c]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], ebx
        pop     ebx
        pop     ebp
        ret
    }
}
