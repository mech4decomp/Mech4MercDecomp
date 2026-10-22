/*
 * FUN_10004740 (664 B) — memmove. Classic MSVC word-at-a-time copy with
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

extern int g_jt_10004888;   /* jump table base 0x10004888 */
extern int g_jt_100047a0;   /* jump table base 0x100047a0 */
extern int g_jt_10004898;   /* jump table base 0x10004898 */
extern int g_jt_1000481c;   /* jump table base 0x1000481c */
extern int g_jt_10004a20;   /* jump table base 0x10004a20 */
extern int g_jt_100049d0;   /* jump table base 0x100049d0 */
extern int g_jt_10004928;   /* jump table base 0x10004928 */

__declspec(naked) void *__cdecl FUN_10004740(void)
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
        jbe     L4760
        cmp     edi, eax
        jc      L48D8
L4760:
        test    edi, 3
        jnz     L477C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L479C
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10004888]
L477C:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L4794
        and     eax, 3
        add     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_100047a0]
L4794:
        jmp     dword ptr [ecx*4 + g_jt_10004898]
        nop
L479C:
        jmp     dword ptr [ecx*4 + g_jt_1000481c]
        nop
        /* __emit: jump table data (base 0x100047a0, entries at A4/A8/AC) */
        __emit 0xB0
        __emit 0x47
        __emit 0x00
        __emit 0x10
        __emit 0xDC
        __emit 0x47
        __emit 0x00
        __emit 0x10
        __emit 0x00
        __emit 0x48
        __emit 0x00
        __emit 0x10
L47B0:
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
        jc      L479C
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10004888]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L47DC:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L479C
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10004888]
        nop
L4800:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L479C
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10004888]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x1000481c, 8 entries) */
        __emit 0x7F
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x6C
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x64
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x5C
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x54
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x4C
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x44
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0x3C
        __emit 0x48
        __emit 0x00
        __emit 0x10
L483C:
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
        jmp     dword ptr [edx*4 + g_jt_10004888]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10004888, 4 entries) */
        __emit 0x98
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0xA0
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0xAC
        __emit 0x48
        __emit 0x00
        __emit 0x10
        __emit 0xC0
        __emit 0x48
        __emit 0x00
        __emit 0x10
L4898:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L48A0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L48AC:
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
L48C0:
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
L48D8:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L490C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L4900
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10004a20]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
L4900:
        neg     ecx
        jmp     dword ptr [ecx*4 + g_jt_100049d0]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L490C:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L4924
        and     eax, 3
        sub     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_10004928]
L4924:
        jmp     dword ptr [ecx*4 + g_jt_10004a20]
        nop
        /* __emit: jump table data (base 0x10004928, entries at 2C/30/34) */
        __emit 0x38
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0x58
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0x80
        __emit 0x49
        __emit 0x00
        __emit 0x10
L4938:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L4900
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10004a20]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L4958:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L4900
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10004a20]
        nop
L4980:
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
        jc      L4900
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10004a20]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x100049d0, entries at D4..F0) */
        __emit 0xD4
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xDC
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xE4
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xEC
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xF4
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0xFC
        __emit 0x49
        __emit 0x00
        __emit 0x10
        __emit 0x04
        __emit 0x4A
        __emit 0x00
        __emit 0x10
        __emit 0x17
        __emit 0x4A
        __emit 0x00
        __emit 0x10
L49D4:
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
        jmp     dword ptr [edx*4 + g_jt_10004a20]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10004a20, 4 entries) */
        __emit 0x30
        __emit 0x4A
        __emit 0x00
        __emit 0x10
        __emit 0x38
        __emit 0x4A
        __emit 0x00
        __emit 0x10
        __emit 0x48
        __emit 0x4A
        __emit 0x00
        __emit 0x10
        __emit 0x5C
        __emit 0x4A
        __emit 0x00
        __emit 0x10
L4A30:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L4A38:
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
L4A48:
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
L4A5C:
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
