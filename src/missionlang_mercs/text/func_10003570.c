/*
 * FUN_10003570 (664 B) — memmove. Classic MSVC word-at-a-time copy with
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

extern int g_jt_100036b8;   /* jump table base 0x100036b8 */
extern int g_jt_100035d0;   /* jump table base 0x100035d0 */
extern int g_jt_100036c8;   /* jump table base 0x100036c8 */
extern int g_jt_1000364c;   /* jump table base 0x1000364c */
extern int g_jt_10003850;   /* jump table base 0x10003850 */
extern int g_jt_10003800;   /* jump table base 0x10003800 */
extern int g_jt_10003758;   /* jump table base 0x10003758 */

__declspec(naked) void *__cdecl FUN_10003570(void)
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
        jbe     L3590
        cmp     edi, eax
        jc      L3708
L3590:
        test    edi, 3
        jnz     L35AC
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L35CC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100036b8]
L35AC:
        mov     eax, edi
        mov     edx, 3
        sub     ecx, 4
        jc      L35C4
        and     eax, 3
        add     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_100035d0]
L35C4:
        jmp     dword ptr [ecx*4 + g_jt_100036c8]
        nop
L35CC:
        jmp     dword ptr [ecx*4 + g_jt_1000364c]
        nop
        /* __emit: jump table data (base 0x100035d0, entries at D4/D8/DC) */
        __emit 0xE0
        __emit 0x35
        __emit 0x00
        __emit 0x10
        __emit 0x0C
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x30
        __emit 0x36
        __emit 0x00
        __emit 0x10
L35E0:
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
        jc      L35CC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100036b8]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L360C:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi + 1]
        shr     ecx, 2
        mov     byte ptr [edi + 1], al
        add     esi, 2
        add     edi, 2
        cmp     ecx, 8
        jc      L35CC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100036b8]
        nop
L3630:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 2
        inc     edi
        cmp     ecx, 8
        jc      L35CC
        rep movsd
        jmp     dword ptr [edx*4 + g_jt_100036b8]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x1000364c, 8 entries) */
        __emit 0xAF
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x9C
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x94
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x8C
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x84
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x7C
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x74
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0x6C
        __emit 0x36
        __emit 0x00
        __emit 0x10
L366C:
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
        jmp     dword ptr [edx*4 + g_jt_100036b8]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x100036b8, 4 entries) */
        __emit 0xC8
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0xD0
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0xDC
        __emit 0x36
        __emit 0x00
        __emit 0x10
        __emit 0xF0
        __emit 0x36
        __emit 0x00
        __emit 0x10
L36C8:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L36D0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L36DC:
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
L36F0:
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
L3708:
        lea     esi, [ecx + esi - 4]
        lea     edi, [ecx + edi - 4]
        test    edi, 3
        jnz     L373C
        shr     ecx, 2
        and     edx, 3
        cmp     ecx, 8
        jc      L3730
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10003850]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
L3730:
        neg     ecx
        jmp     dword ptr [ecx*4 + g_jt_10003800]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L373C:
        mov     eax, edi
        mov     edx, 3
        cmp     ecx, 4
        jc      L3754
        and     eax, 3
        sub     ecx, eax
        jmp     dword ptr [eax*4 + g_jt_10003758]
L3754:
        jmp     dword ptr [ecx*4 + g_jt_10003850]
        nop
        /* __emit: jump table data (base 0x10003758, entries at 5C/60/64) */
        __emit 0x68
        __emit 0x37
        __emit 0x00
        __emit 0x10
        __emit 0x88
        __emit 0x37
        __emit 0x00
        __emit 0x10
        __emit 0xB0
        __emit 0x37
        __emit 0x00
        __emit 0x10
L3768:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        dec     esi
        shr     ecx, 2
        dec     edi
        cmp     ecx, 8
        jc      L3730
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10003850]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L3788:
        mov     al, byte ptr [esi + 3]
        and     edx, ecx
        mov     byte ptr [edi + 3], al
        mov     al, byte ptr [esi + 2]
        shr     ecx, 2
        mov     byte ptr [edi + 2], al
        sub     esi, 2
        sub     edi, 2
        cmp     ecx, 8
        jc      L3730
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10003850]
        nop
L37B0:
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
        jc      L3730
        std
        rep movsd
        cld
        jmp     dword ptr [edx*4 + g_jt_10003850]
        /* __emit: 3-byte NOP (8D 49 00) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* __emit: jump table data (base 0x10003800, 8 entries, accessed with negative ECX) */
        __emit 0x04
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x0C
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x14
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x1C
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x24
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x2C
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x34
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x47
        __emit 0x38
        __emit 0x00
        __emit 0x10
L3804:
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
        jmp     dword ptr [edx*4 + g_jt_10003850]
        /* __emit: 2-byte NOP (8B FF) */
        __emit 0x8B
        __emit 0xFF
        /* __emit: jump table data (base 0x10003850, 4 entries) */
        __emit 0x60
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x68
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x78
        __emit 0x38
        __emit 0x00
        __emit 0x10
        __emit 0x8C
        __emit 0x38
        __emit 0x00
        __emit 0x10
L3860:
        mov     eax, dword ptr [ebp + 8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L3868:
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
L3878:
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
L388C:
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
