/*
 * FUN_10002880 (664 B) — memmove. Classic MSVC word-at-a-time copy with
 * embedded jump tables for the unaligned head/tail and the 8-dword main-loop
 * tail. Forward copy when dest <= src or dest >= src+count, else backward.
 *
 * __cdecl, 3 args (dest, src, count). Returns dest.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the jump-table dispatches are
 * encoded with extern symbols (jmp dword ptr [reg*4 + g_jt_xxx] -> FF 24 8x
 * <reloc>, reloc masked by the diff harness), the no-base SIB LEA and single
 * NOPs are native. Remaining __emit is only the embedded jump-table dword
 * DATA (inline asm has no `dd`) and the multi-byte NOP padding (8D 49 00 /
 * 8B FF) that MSVC6 will not emit as `nop`.
 */

extern int g_jt_100029c8;   /* jump table base 0x100029c8 */
extern int g_jt_100028e0;   /* jump table base 0x100028e0 */
extern int g_jt_100029d8;   /* jump table base 0x100029d8 */
extern int g_jt_1000295c;   /* jump table base 0x1000295c */
extern int g_jt_10002b60;   /* jump table base 0x10002b60 */
extern int g_jt_10002b10;   /* jump table base 0x10002b10 */
extern int g_jt_10002a68;   /* jump table base 0x10002a68 */

__declspec(naked) void *__cdecl FUN_10002880(void)
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
        jbe     L28A0
        cmp     edi, eax
        jc      L2A18
L28A0:
        test    edi, 3
        jnz     L28BC
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L28DC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100029c8]
L28BC:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L28D4
        and     eax, 3
        add     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_100028e0]
L28D4:
        jmp     dword ptr [ecx*4 + g_jt_100029d8]
        nop
L28DC:
        jmp     dword ptr [ecx*4 + g_jt_1000295c]
        nop
        /* __emit: jump table data (base 0x100028e0, entries at E4/E8/EC) */
        __emit 0xF0
        __emit 0x28
        __emit 0x00
        __emit 0x10
        __emit 0x1C
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x40
        __emit 0x29
        __emit 0x00
        __emit 0x10
L28F0:
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
        jc      L28DC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100029c8]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L291C:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L28DC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100029c8]
        nop
L2940:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L28DC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100029c8]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x1000295c, 8 entries) */
        __emit 0xBF
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0xAC
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0xA4
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x9C
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x94
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x8C
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x84
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x7C
        __emit 0x29
        __emit 0x00
        __emit 0x10
L297C:
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
        lea     eax, [ecx*4 + 0]
        add     esi, eax
        add     edi, eax
        jmp     dword ptr [edx*4 + g_jt_100029c8]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x100029c8, 4 entries) */
        __emit 0xD8
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0xE0
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0xEC
        __emit 0x29
        __emit 0x00
        __emit 0x10
        __emit 0x00
        __emit 0x2A
        __emit 0x00
        __emit 0x10
L29D8:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L29E0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L29EC:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L2A00:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L2A18:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L2A4C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L2A40
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002b60]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
L2A40:
        neg     ecx
        jmp     dword ptr [ecx*4 + g_jt_10002b10]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L2A4C:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L2A64
        and     eax, 3
        sub     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_10002a68]
L2A64:
        jmp     dword ptr [ecx*4 + g_jt_10002b60]
        nop
        /* __emit: jump table data (base 0x10002a68, entries at 6C/70/74) */
        __emit 0x78
        __emit 0x2A
        __emit 0x00
        __emit 0x10
        __emit 0x98
        __emit 0x2A
        __emit 0x00
        __emit 0x10
        __emit 0xC0
        __emit 0x2A
        __emit 0x00
        __emit 0x10
L2A78:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L2A40
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002b60]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L2A98:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L2A40
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002b60]
        nop
L2AC0:
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
        jc      L2A40
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002b60]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x10002b10, entries at 14..30) */
        __emit 0x14
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x1C
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x24
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x2C
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x34
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x3C
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x44
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x57
        __emit 0x2B
        __emit 0x00
        __emit 0x10
L2B14:
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
        lea     eax, [ecx*4 + 0]
        add     esi, eax
        add     edi, eax
        jmp     dword ptr [edx*4 + g_jt_10002b60]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10002b60, 4 entries) */
        __emit 0x70
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x78
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x88
        __emit 0x2B
        __emit 0x00
        __emit 0x10
        __emit 0x9C
        __emit 0x2B
        __emit 0x00
        __emit 0x10
L2B70:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L2B78:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L2B88:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L2B9C:
        mov     al, byte ptr [esi + 3]
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        mov     byte ptr [edi + 2], al
        mov     al, byte ptr [esi + 1]
        mov     byte ptr [edi + 1], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
    }
}
