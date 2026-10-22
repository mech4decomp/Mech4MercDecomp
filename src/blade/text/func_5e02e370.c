/*
 * FUN_5e02e370 (832 B) - memmove implementation with overlap detection.
 * Forward copy path (0x5e02e370..0x5e02e507) and backward copy path
 * (0x5e02e508..0x5e02e6a4), each with alignment handling and embedded
 * jump tables. Returns param_1 (dest) in EAX.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * __emit usage (all per-instruction, justified):
 *  - Jump-table dispatches `jmp dword ptr [reg*4+imm32]`: MSVC6 inline asm
 *    re-bases these via EBX instead of emitting the direct SIB+disp32 form.
 *  - In-function jump-table DATA (relocated dword entries): inline asm has no
 *    `dd`; emitted as raw bytes (reloc-masked by the diff harness).
 *  - `lea eax,[ecx*4+0]` (8D 04 8D 00000000): no-base SIB form MSVC6 won't emit.
 *  - Padding NOPs `lea ecx,[ecx+0]` (8D 49 00) and `mov edi,edi` (8B FF):
 *    MSVC6 collapses these to shorter/other encodings.
 */

__declspec(naked) void* FUN_5e02e370(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    edi
        push    esi
        mov     esi, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x10]
        mov     edi, dword ptr [ebp+0x8]
        mov     eax, ecx
        mov     edx, ecx
        add     eax, esi
        cmp     edi, esi
        jbe     L_390
        cmp     edi, eax
        jc      L_508
L_390:
        test    edi, 0x3
        jnz     L_3ac
        shr     ecx, 0x2
        and     edx, 0x3
        cmp     ecx, 0x8
        jc      L_3cc
        rep movsd
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e4b8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
L_3ac:
        mov     eax, edi
        mov     edx, 0x3
        sub     ecx, 0x4
        jc      L_3c4
        and     eax, 0x3
        add     ecx, eax
        /* __emit: jump-table dispatch JMP [EAX*4+0x5e02e3d0] */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0xD0
        __emit 0xE3
        __emit 0x02
        __emit 0x5E
L_3c4:
        /* __emit: jump-table dispatch JMP [ECX*4+0x5e02e4c8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0xC8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        nop
L_3cc:
        /* __emit: jump-table dispatch JMP [ECX*4+0x5e02e44c] */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x4C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        nop
        /* jump table @0x5e02e3d0 (EAX*4), entries 1-3 (entry0 overlaps JMP+NOP) */
        __emit 0xE0
        __emit 0xE3
        __emit 0x02
        __emit 0x5E
        __emit 0x0C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x30
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
L_3e0:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi+1]
        mov     byte ptr [edi+1], al
        mov     al, byte ptr [esi+2]
        shr     ecx, 0x2
        mov     byte ptr [edi+2], al
        add     esi, 0x3
        add     edi, 0x3
        cmp     ecx, 0x8
        jc      L_3cc
        rep movsd
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e4b8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        /* padding: lea ecx,[ecx+0] (3-byte nop) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_40c:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi+1]
        shr     ecx, 0x2
        mov     byte ptr [edi+1], al
        add     esi, 0x2
        add     edi, 0x2
        cmp     ecx, 0x8
        jc      L_3cc
        rep movsd
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e4b8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        nop
L_430:
        and     edx, ecx
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        inc     esi
        shr     ecx, 0x2
        inc     edi
        cmp     ecx, 0x8
        jc      L_3cc
        rep movsd
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e4b8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        /* padding: lea ecx,[ecx+0] (3-byte nop) */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump table @0x5e02e44c (ECX*4), 8 entries */
        __emit 0xAF
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x9C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x94
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x8C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x84
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x7C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x74
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0x6C
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
L_46c:
        mov     eax, dword ptr [esi+ecx*4-0x1c]
        mov     dword ptr [edi+ecx*4-0x1c], eax
        mov     eax, dword ptr [esi+ecx*4-0x18]
        mov     dword ptr [edi+ecx*4-0x18], eax
        mov     eax, dword ptr [esi+ecx*4-0x14]
        mov     dword ptr [edi+ecx*4-0x14], eax
        mov     eax, dword ptr [esi+ecx*4-0x10]
        mov     dword ptr [edi+ecx*4-0x10], eax
        mov     eax, dword ptr [esi+ecx*4-0xc]
        mov     dword ptr [edi+ecx*4-0xc], eax
        mov     eax, dword ptr [esi+ecx*4-0x8]
        mov     dword ptr [edi+ecx*4-0x8], eax
        mov     eax, dword ptr [esi+ecx*4-0x4]
        mov     dword ptr [edi+ecx*4-0x4], eax
        /* __emit: lea eax,[ecx*4+0] (no-base SIB) */
        __emit 0x8D
        __emit 0x04
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     esi, eax
        add     edi, eax
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e4b8] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0xB8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        /* padding: mov edi,edi (2-byte nop) */
        __emit 0x8B
        __emit 0xFF
        /* jump table @0x5e02e4b8 (EDX*4), 4 entries */
        __emit 0xC8
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0xD0
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0xDC
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
        __emit 0xF0
        __emit 0xE4
        __emit 0x02
        __emit 0x5E
L_4c8:
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L_4d0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L_4dc:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi+1]
        mov     byte ptr [edi+1], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        /* padding: lea ecx,[ecx+0] */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_4f0:
        mov     al, byte ptr [esi]
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi+1]
        mov     byte ptr [edi+1], al
        mov     al, byte ptr [esi+2]
        mov     byte ptr [edi+2], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L_508:
        lea     esi, [ecx+esi-4]
        lea     edi, [ecx+edi-4]
        test    edi, 0x3
        jnz     L_53c
        shr     ecx, 0x2
        and     edx, 0x3
        cmp     ecx, 0x8
        jc      L_530
        std
        rep movsd
        cld
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        /* padding: mov edi,edi */
        __emit 0x8B
        __emit 0xFF
L_530:
        neg     ecx
        /* __emit: jump-table dispatch JMP [ECX*4+0x5e02e600] */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x00
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        /* padding: lea ecx,[ecx+0] */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_53c:
        mov     eax, edi
        mov     edx, 0x3
        cmp     ecx, 0x4
        jc      L_554
        and     eax, 0x3
        sub     ecx, eax
        /* __emit: jump-table dispatch JMP [EAX*4+0x5e02e558] */
        __emit 0xFF
        __emit 0x24
        __emit 0x85
        __emit 0x58
        __emit 0xE5
        __emit 0x02
        __emit 0x5E
L_554:
        /* __emit: jump-table dispatch JMP [ECX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        nop
        /* jump table @0x5e02e558 (EAX*4), entries 1-3 (entry0 overlaps JMP+NOP) */
        __emit 0x68
        __emit 0xE5
        __emit 0x02
        __emit 0x5E
        __emit 0x88
        __emit 0xE5
        __emit 0x02
        __emit 0x5E
        __emit 0xB0
        __emit 0xE5
        __emit 0x02
        __emit 0x5E
L_568:
        mov     al, byte ptr [esi+3]
        and     edx, ecx
        mov     byte ptr [edi+3], al
        dec     esi
        shr     ecx, 0x2
        dec     edi
        cmp     ecx, 0x8
        jc      L_530
        std
        rep movsd
        cld
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        /* padding: lea ecx,[ecx+0] */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_588:
        mov     al, byte ptr [esi+3]
        and     edx, ecx
        mov     byte ptr [edi+3], al
        mov     al, byte ptr [esi+2]
        shr     ecx, 0x2
        mov     byte ptr [edi+2], al
        sub     esi, 0x2
        sub     edi, 0x2
        cmp     ecx, 0x8
        jc      L_530
        std
        rep movsd
        cld
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        nop
L_5b0:
        mov     al, byte ptr [esi+3]
        and     edx, ecx
        mov     byte ptr [edi+3], al
        mov     al, byte ptr [esi+2]
        mov     byte ptr [edi+2], al
        mov     al, byte ptr [esi+1]
        shr     ecx, 0x2
        mov     byte ptr [edi+1], al
        sub     esi, 0x3
        sub     edi, 0x3
        cmp     ecx, 0x8
        jc      L_530
        std
        rep movsd
        cld
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        /* padding: lea ecx,[ecx+0] */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
        /* jump table @0x5e02e600 (ECX*4, negated index), 8 entries at 0x5e4-0x600 */
        __emit 0x04
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x0C
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x14
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x1C
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x24
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x2C
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x34
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x47
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
L_604:
        mov     eax, dword ptr [esi+ecx*4+0x1c]
        mov     dword ptr [edi+ecx*4+0x1c], eax
        mov     eax, dword ptr [esi+ecx*4+0x18]
        mov     dword ptr [edi+ecx*4+0x18], eax
        mov     eax, dword ptr [esi+ecx*4+0x14]
        mov     dword ptr [edi+ecx*4+0x14], eax
        mov     eax, dword ptr [esi+ecx*4+0x10]
        mov     dword ptr [edi+ecx*4+0x10], eax
        mov     eax, dword ptr [esi+ecx*4+0xc]
        mov     dword ptr [edi+ecx*4+0xc], eax
        mov     eax, dword ptr [esi+ecx*4+0x8]
        mov     dword ptr [edi+ecx*4+0x8], eax
        mov     eax, dword ptr [esi+ecx*4+0x4]
        mov     dword ptr [edi+ecx*4+0x4], eax
        /* __emit: lea eax,[ecx*4+0] (no-base SIB) */
        __emit 0x8D
        __emit 0x04
        __emit 0x8D
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        add     esi, eax
        add     edi, eax
        /* __emit: jump-table dispatch JMP [EDX*4+0x5e02e650] */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x50
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        /* padding: mov edi,edi */
        __emit 0x8B
        __emit 0xFF
        /* jump table @0x5e02e650 (EDX*4), 4 entries */
        __emit 0x60
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x68
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x78
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
        __emit 0x8C
        __emit 0xE6
        __emit 0x02
        __emit 0x5E
L_660:
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L_668:
        mov     al, byte ptr [esi+3]
        mov     byte ptr [edi+3], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        /* padding: lea ecx,[ecx+0] */
        __emit 0x8D
        __emit 0x49
        __emit 0x00
L_678:
        mov     al, byte ptr [esi+3]
        mov     byte ptr [edi+3], al
        mov     al, byte ptr [esi+2]
        mov     byte ptr [edi+2], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        nop
L_68c:
        mov     al, byte ptr [esi+3]
        mov     byte ptr [edi+3], al
        mov     al, byte ptr [esi+2]
        mov     byte ptr [edi+2], al
        mov     al, byte ptr [esi+1]
        mov     byte ptr [edi+1], al
        mov     eax, dword ptr [ebp+8]
        pop     esi
        pop     edi
        leave
        ret
        /* padding to next function (0x5e02e6b0) */
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
        __emit 0xCC
    }
}
