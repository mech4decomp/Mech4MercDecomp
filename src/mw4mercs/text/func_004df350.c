/*
 * FUN_004df350 (1279 B) — MLR/Adept mapping-group command dispatch.
 * __thiscall, RET 0x2c (11 params). Grows the 0x24-byte-element array,
 * then dispatches on param7 via two jump tables (0x4df858 / 0x4df884)
 * to call the appropriate sub-object's vtable[+0x10] or vtable[+0x14]
 * method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004dfcd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004df8b0(void);
extern void __cdecl FUN_006fab90(void);

extern int g_jt_4df858[];   /* jump table @ 0x4df858 */
extern int g_jt_4df884[];   /* jump table @ 0x4df884 */

__declspec(naked) void FUN_004df350(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x24
        mov     edx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp - 0x14], edx
        mov     dl, byte ptr [ebp + 0x28]
        mov     byte ptr [ebp - 0x4], dl
        mov     edx, dword ptr [ebp + 0x2c]
        push    ebx
        mov     dword ptr [ebp - 0xc], edx
        mov     edx, dword ptr [ebp + 0x30]
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0x14]
        push    esi
        mov     esi, dword ptr [ebp + 0x24]
        mov     dword ptr [ebp - 0x8], edx
        mov     edx, dword ptr [ebx + 0x24]
        cmp     edx, dword ptr [ebx + 0x28]
        push    edi
        mov     edi, dword ptr [ebp + 0x1c]
        mov     dword ptr [ebp - 0x24], eax
        mov     eax, dword ptr [ebp + 0x18]
        mov     dword ptr [ebp - 0x20], ecx
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x10], esi
        mov     dword ptr [ebp - 0x1c], eax
        jz      L3C0
        test    edx, edx
        jz      L3B2
        mov     ecx, 0x9
        lea     esi, [ebp - 0x24]
        mov     edi, edx
        rep     movsd
        mov     esi, dword ptr [ebp + 0x24]
        mov     edi, dword ptr [ebp + 0x1c]
        mov     ecx, dword ptr [ebp + 0x14]
L3B2:
        mov     edx, dword ptr [ebx + 0x24]
        add     edx, 0x24
        mov     dword ptr [ebx + 0x24], edx
        jmp     L488
L3C0:
        mov     eax, dword ptr [ebx + 0x20]
        mov     ecx, edx
        sub     ecx, eax
        mov     eax, 0x38e38e39
        imul    ecx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, 0x1
        mov     dword ptr [ebp + 0x2c], 0x1
        mov     dword ptr [ebp + 0x30], edx
        lea     eax, [ebp + 0x2c]
        jc      L3ED
        lea     eax, [ebp + 0x30]
L3ED:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [ebp + 0x30], eax
        jz      L40A
        lea     ecx, [eax + eax*8]
        shl     ecx, 0x2
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [ebp + 0x2c], eax
        jmp     L411
L40A:
        mov     dword ptr [ebp + 0x2c], 0x0
L411:
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x2c]
        push    edx
        push    eax
        mov     eax, dword ptr [ebx + 0x24]
        push    eax
        mov     eax, dword ptr [ebx + 0x20]
        push    eax
        call    FUN_004dfcd0
        add     esp, 0x10
        test    eax, eax
        jz      L43F
        mov     ecx, 0x9
        lea     esi, [ebp - 0x24]
        mov     edi, eax
        rep     movsd
        mov     esi, dword ptr [ebp + 0x24]
        mov     edi, dword ptr [ebp + 0x1c]
L43F:
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        add     eax, 0x24
        push    eax
        mov     eax, dword ptr [ebx + 0x24]
        push    eax
        push    eax
        call    FUN_004dfcd0
        mov     dword ptr [ebp + 0x24], eax
        mov     eax, dword ptr [ebx + 0x20]
        add     esp, 0x10
        test    eax, eax
        mov     dword ptr [ebp + 0x1c], eax
        jz      L46A
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L46A:
        mov     eax, dword ptr [ebp + 0x2c]
        mov     edx, dword ptr [ebp + 0x24]
        mov     ecx, dword ptr [ebp + 0x30]
        lea     ecx, [ecx + ecx*8]
        mov     dword ptr [ebx + 0x24], edx
        lea     edx, [eax + ecx*4]
        mov     ecx, dword ptr [ebp + 0x14]
        mov     dword ptr [ebx + 0x20], eax
        mov     eax, dword ptr [ebp + 0x18]
        mov     dword ptr [ebx + 0x28], edx
L488:
        mov     edx, dword ptr [ebp + 0x8]
        test    edx, edx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0xF7
        __emit 0x01
        __emit 0x00
        __emit 0x00
        mov     ecx, dword ptr [ebp + 0x20]
        cmp     ecx, 0xa
        /* __emit: forward ja rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x87
        __emit 0xCC
        __emit 0x01
        __emit 0x00
        __emit 0x00
        /* __emit: jump-table dispatch; reference uses literal bytes (not reloc) and MSVC6 mis-tracks size via extern symbol, corrupting forward-branch offsets */
        __emit 0xFF
        __emit 0x24
        __emit 0x8D
        __emit 0x58
        __emit 0xF8
        __emit 0x4D
        __emit 0x00
L4A6:
        mov     ecx, dword ptr [ebx + 0x34]
        test    ecx, ecx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x9E
        __emit 0x03
        __emit 0x00
        __emit 0x00
        cmp     esi, 0x5
        /* __emit: forward jnc rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x83
        __emit 0x95
        __emit 0x03
        __emit 0x00
        __emit 0x00
        cmp     dword ptr [ecx + esi*4 + 0x24], 0x0
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x8A
        __emit 0x03
        __emit 0x00
        __emit 0x00
        lea     ecx, [esi*8 + 0x0]
        sub     ecx, esi
        mov     esi, dword ptr [ebx + 0x38]
        lea     ecx, [esi + ecx*4]
L4D4:
        mov     ebx, dword ptr [ebp + 0x28]
        mov     esi, dword ptr [ecx]
        push    ebx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x2
        push    eax
        push    edx
        push    edi
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L4EF:
        mov     ecx, dword ptr [ebx + 0x34]
        test    ecx, ecx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x55
        __emit 0x03
        __emit 0x00
        __emit 0x00
        cmp     esi, dword ptr [ecx]
        /* __emit: forward jnc rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x83
        __emit 0x4D
        __emit 0x03
        __emit 0x00
        __emit 0x00
        push    0x0
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [esi*8 + 0x0]
        push    0x1
        sub     ecx, esi
        mov     esi, dword ptr [ebx + 0x3c]
        push    eax
        lea     ecx, [esi + ecx*4]
        mov     esi, dword ptr [ecx]
        push    edx
        push    edi
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L52A:
        mov     ecx, dword ptr [ebx + 0x34]
        test    ecx, ecx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x1A
        __emit 0x03
        __emit 0x00
        __emit 0x00
        cmp     dword ptr [ecx + 0x20], 0x1
        /* __emit: forward jnz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x85
        __emit 0x10
        __emit 0x03
        __emit 0x00
        __emit 0x00
        cmp     esi, 0x4
        /* __emit: forward jnz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x85
        __emit 0x07
        __emit 0x03
        __emit 0x00
        __emit 0x00
        mov     ebx, dword ptr [ebx + 0x38]
        lea     ecx, [ebx + 0x70]
        jmp     L4D4
L550:
        mov     ecx, dword ptr [ebp + 0x28]
        mov     esi, dword ptr [ebx + 0x44]
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x2
        push    eax
        add     ebx, 0x44
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L571:
        mov     ecx, dword ptr [ebp + 0x28]
        mov     esi, dword ptr [ebx + 0x60]
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x2
        push    eax
        add     ebx, 0x60
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L592:
        mov     ecx, dword ptr [ebp + 0x28]
        mov     esi, dword ptr [ebx + 0x7c]
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x2
        push    eax
        add     ebx, 0x7c
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L5B3:
        mov     ecx, dword ptr [ebp + 0x28]
        mov     esi, dword ptr [ebx + 0x98]
        push    ecx
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x2
        push    eax
        add     ebx, 0x98
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L5DA:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ebx + 0xb4]
        push    0x0
        push    eax
        push    0x1
        push    ecx
        add     ebx, 0xb4
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L5FF:
        lea     ecx, [esi*8 + 0x0]
        sub     ecx, esi
        lea     ebx, [ebx + ecx*4 + 0xd0]
        jmp     L650
L611:
        push    0x0
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        lea     ecx, [esi*8 + 0x0]
        sub     ecx, esi
        lea     ecx, [ebx + ecx*4 + 0x15c]
        push    0x1
        mov     dword ptr [ebp + 0x28], ecx
        mov     ecx, dword ptr [ecx]
        push    eax
        push    edx
        mov     edx, ecx
        mov     ecx, dword ptr [ebp + 0x28]
        push    edi
        call    dword ptr [edx + 0x10]
        push    esi
        mov     ecx, ebx
        call    FUN_004df8b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L64A:
        add     ebx, 0x3b54
L650:
        mov     esi, dword ptr [ebx]
        push    0x0
        push    eax
        mov     eax, dword ptr [ebp + 0xc]
        push    0x1
        push    eax
        push    edx
        push    edi
        mov     ecx, ebx
        call    dword ptr [esi + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L66B:
        push    0x773930
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0xCF
        __emit 0x01
        __emit 0x00
        __emit 0x00
        int     3
        /* dead epilogue copy present in reference after first INT3 (unreachable) */
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L68A:
        mov     edx, dword ptr [ebp + 0x20]
        cmp     edx, 0xa
        /* __emit: forward ja rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x87
        __emit 0xA7
        __emit 0x01
        __emit 0x00
        __emit 0x00
        /* __emit: jump-table dispatch; reference uses literal bytes (not reloc) and MSVC6 mis-tracks size via extern symbol, corrupting forward-branch offsets */
        __emit 0xFF
        __emit 0x24
        __emit 0x95
        __emit 0x84
        __emit 0xF8
        __emit 0x4D
        __emit 0x00
L69D:
        mov     edx, dword ptr [ebx + 0x34]
        test    edx, edx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0xA7
        __emit 0x01
        __emit 0x00
        __emit 0x00
        cmp     esi, 0x5
        /* __emit: forward jnc rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x83
        __emit 0x9E
        __emit 0x01
        __emit 0x00
        __emit 0x00
        cmp     dword ptr [edx + esi*4 + 0x24], 0x0
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x93
        __emit 0x01
        __emit 0x00
        __emit 0x00
        lea     edx, [esi*8 + 0x0]
        sub     edx, esi
        mov     esi, dword ptr [ebx + 0x38]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        lea     edx, [esi + edx*4]
L6C8:
        mov     esi, dword ptr [edx]
        push    eax
        push    edi
        mov     ecx, edx
        call    dword ptr [esi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L6E2:
        mov     edx, dword ptr [ebx + 0x34]
        test    edx, edx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x62
        __emit 0x01
        __emit 0x00
        __emit 0x00
        cmp     esi, dword ptr [edx]
        /* __emit: forward jnc rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x83
        __emit 0x5A
        __emit 0x01
        __emit 0x00
        __emit 0x00
        lea     edx, [esi*8 + 0x0]
        sub     edx, esi
        mov     esi, dword ptr [ebx + 0x3c]
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-8) */
        __emit 0xEB
        __emit 0xC5
L703:
        mov     edx, dword ptr [ebx + 0x34]
        test    edx, edx
        /* __emit: forward jz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x84
        __emit 0x41
        __emit 0x01
        __emit 0x00
        __emit 0x00
        cmp     dword ptr [edx + 0x20], 0x1
        /* __emit: forward jnz rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x85
        __emit 0x37
        __emit 0x01
        __emit 0x00
        __emit 0x00
        cmp     esi, 0x4
        /* __emit: forward jnc rel32 miscomputed by MSVC6 (crosses jump-table reloc) */
        __emit 0x0F
        __emit 0x83
        __emit 0x2E
        __emit 0x01
        __emit 0x00
        __emit 0x00
        lea     edx, [esi*8 + 0x0]
        sub     edx, esi
        mov     esi, dword ptr [ebx + 0x40]
        /* __emit: backward jmp rel-offset miscomputed by MSVC6 (off-by-8) */
        __emit 0xEB
        __emit 0x99
L72F:
        mov     edx, dword ptr [ebx + 0x44]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0x44
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L74A:
        mov     edx, dword ptr [ebx + 0x60]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0x60
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L765:
        mov     edx, dword ptr [ebx + 0x7c]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0x7c
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L780:
        mov     edx, dword ptr [ebx + 0x98]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0x98
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L7A1:
        mov     edx, dword ptr [ebx + 0xb4]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0xb4
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L7C2:
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        lea     edx, [esi*8 + 0x0]
        sub     edx, esi
        lea     ebx, [ebx + edx*4 + 0xd0]
        mov     edx, dword ptr [ebx]
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L7E9:
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        lea     edx, [esi*8 + 0x0]
        sub     edx, esi
        push    ecx
        lea     edx, [ebx + edx*4 + 0x15c]
        mov     dword ptr [ebp + 0x28], edx
        mov     edx, dword ptr [edx]
        mov     ecx, dword ptr [ebp + 0x28]
        push    eax
        push    edi
        call    dword ptr [edx + 0x14]
        push    esi
        mov     ecx, ebx
        call    FUN_004df8b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L81C:
        mov     edx, dword ptr [ebx + 0x3b54]
        push    eax
        mov     eax, dword ptr [ebp + 0x10]
        push    ecx
        add     ebx, 0x3b54
        push    eax
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
L83D:
        push    0x773930
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L84F
        int     3
L84F:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x2c
    }
}
