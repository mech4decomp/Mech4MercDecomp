/*
 * FUN_006CEF50 (617 B) — __cdecl switch dispatcher that copies one of several
 * string constants (from 0x79e7f8..0x79e878) into the fixed buffer at
 * 0x83fc00 and returns a pointer to it. The switch key is the first arg
 * ([esp+4]); cases 0x40/0x80/0xC0/0x100/0x140/0x180 plus a jump-table range
 * 0x1C0..0x280. Uses repne scasb (strlen) + rep movsd/movsb (strcpy).
 *
 * The in-.text jump table (0x6CF0E4, 5 relocated dwords) and the switch byte
 * table (0x6CF0F8, 193 bytes) are emitted as data below.
 *
 * __cdecl, returns pointer in eax.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006CEF50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 0x180
        push    esi
        push    edi
        jg      L_6cf033
        je      L_6cf029
        cmp     eax, 0xc0
        jg      L_6cefe2
        je      L_6cefb5
        sub     eax, 0x40
        je      L_6cefab
        sub     eax, 0x40
        jne     L_6cf0b6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e878
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret
L_6cefab:
        mov     edi, 0x79e870
        jmp     L_6cf0bb
L_6cefb5:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e864
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret
L_6cefe2:
        sub     eax, 0x100
        je      L_6ceffc
        sub     eax, 0x40
        jne     L_6cf0b6
        mov     edi, 0x79e858
        jmp     L_6cf0bb
L_6ceffc:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e84c
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret
L_6cf029:
        mov     edi, 0x79e840
        jmp     L_6cf0bb
L_6cf033:
        add     eax, 0xfffffe40
        cmp     eax, 0xc0
        ja      L_6cf0b6
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x6cf0f8]
        jmp     dword ptr [ecx*4 + 0x6cf0e4]
        mov     edi, 0x79e830
        jmp     L_6cf0bb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e820
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret
        mov     edi, 0x79e810
        jmp     L_6cf0bb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79e800
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret
L_6cf0b6:
        mov     edi, 0x79e7f8
L_6cf0bb:
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, 0x83fc00
        rep movsd
        mov     ecx, edx
        and     ecx, 3
        rep movsb
        pop     edi
        mov     eax, 0x83fc00
        pop     esi
        ret

        /* --- in-.text data --- */
        /* 0x6CF0E3: alignment nop */
        nop
        /* 0x6CF0E4: jump table, 5 dwords -> 0x6CF04E, 0x6CF055, 0x6CF082, 0x6CF089, 0x6CF0B6 */
        __emit 0x4E
        __emit 0xF0
        __emit 0x6C
        __emit 0x00
        __emit 0x55
        __emit 0xF0
        __emit 0x6C
        __emit 0x00
        __emit 0x82
        __emit 0xF0
        __emit 0x6C
        __emit 0x00
        __emit 0x89
        __emit 0xF0
        __emit 0x6C
        __emit 0x00
        __emit 0xB6
        __emit 0xF0
        __emit 0x6C
        __emit 0x00
        /* 0x6CF0F8: switch byte table, 193 bytes */
        __emit 0x00
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x01
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x02
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x04
        __emit 0x03
    }
}
