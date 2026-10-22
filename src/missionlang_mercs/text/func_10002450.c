/*
 * FUN_10002450 (664 B) — memmove. Classic MSVC word-at-a-time copy with
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

extern int g_jt_10002598;   /* jump table base 0x10002598 */
extern int g_jt_100024b0;   /* jump table base 0x100024b0 */
extern int g_jt_100025a8;   /* jump table base 0x100025a8 */
extern int g_jt_1000252c;   /* jump table base 0x1000252c */
extern int g_jt_10002730;   /* jump table base 0x10002730 */
extern int g_jt_100026e0;   /* jump table base 0x100026e0 */
extern int g_jt_10002638;   /* jump table base 0x10002638 */

__declspec(naked) void *__cdecl FUN_10002450(void)
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
        jbe     L2470
        cmp     edi, eax
        jc      L25E8
L2470:
        test    edi, 3
        jnz     L248C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L24AC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10002598]
L248C:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L24A4
        and     eax, 3
        add     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_100024b0]
L24A4:
        jmp     dword ptr [ecx*4 + g_jt_100025a8]
        nop
L24AC:
        jmp     dword ptr [ecx*4 + g_jt_1000252c]
        nop
        /* __emit: jump table data (base 0x100024b0, entries at B4/B8/BC) */
        __emit 0xC0
        __emit 0x24
        __emit 0x00
        __emit 0x10
        __emit 0xEC
        __emit 0x24
        __emit 0x00
        __emit 0x10
        __emit 0x10
        __emit 0x25
        __emit 0x00
        __emit 0x10
L24C0:
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
        jc      L24AC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10002598]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L24EC:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L24AC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10002598]
        nop
L2510:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L24AC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_10002598]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x1000252c, 8 entries) */
        __emit 0x8F
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x7C
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x74
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x6C
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x64
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x5C
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x54
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0x4C
        __emit 0x25
        __emit 0x00
        __emit 0x10
L254C:
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
        jmp     dword ptr [edx*4 + g_jt_10002598]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10002598, 4 entries) */
        __emit 0xA8
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0xB0
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0xBC
        __emit 0x25
        __emit 0x00
        __emit 0x10
        __emit 0xD0
        __emit 0x25
        __emit 0x00
        __emit 0x10
L25A8:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L25B0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L25BC:
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
L25D0:
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
L25E8:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L261C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L2610
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002730]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
L2610:
        neg     ecx
        jmp     dword ptr [ecx*4 + g_jt_100026e0]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L261C:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L2634
        and     eax, 3
        sub     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_10002638]
L2634:
        jmp     dword ptr [ecx*4 + g_jt_10002730]
        nop
        /* __emit: jump table data (base 0x10002638, entries at 3C/40/44) */
        __emit 0x48
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0x68
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0x90
        __emit 0x26
        __emit 0x00
        __emit 0x10
L2648:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L2610
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002730]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L2668:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L2610
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002730]
        nop
L2690:
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
        jc      L2610
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10002730]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x100026e0, entries at C4..E0) */
        __emit 0xE4
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0xEC
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0xF4
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0xFC
        __emit 0x26
        __emit 0x00
        __emit 0x10
        __emit 0x04
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x0C
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x14
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x27
        __emit 0x27
        __emit 0x00
        __emit 0x10
L26E4:
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
        jmp     dword ptr [edx*4 + g_jt_10002730]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10002730, 4 entries) */
        __emit 0x40
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x48
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x58
        __emit 0x27
        __emit 0x00
        __emit 0x10
        __emit 0x6C
        __emit 0x27
        __emit 0x00
        __emit 0x10
L2740:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L2748:
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
L2758:
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
L276C:
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
