/*
 * FUN_007362D0 (1529 B) — gameplay data-block function (block 0x7362D0).
 * __stdcall ret 0x1c. Parses a "BM" (0x4D42) header block, validates
 * dimensions/format, and decodes a run-length-encoded pixel stream into a
 * buffer (multiple pixel-format decoders: 8/16/24-bit, 0x235/0x613/0x115c
 * formats). Calls FUN_006fab90 (assert/log) on invalid input.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_006f4940(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00735440(void);

extern unsigned int g_85a22c;
extern unsigned int g_849324;

__declspec(naked) void FUN_007362D0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x4d8
        xor     eax, eax
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        push    edi
        mov     dword ptr [ebp - 4], eax
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0xc], eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0xd8]
        rep     stosd
        mov     eax, ebx
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [eax + 4]
        mov     dword ptr [ebp - 0x5c], ecx
        cmp     word ptr [ebp - 0x5c], 0x4d42
        mov     ecx, dword ptr [eax + 8]
        mov     dword ptr [ebp - 0x58], edx
        mov     dx, word ptr [eax + 0xc]
        mov     dword ptr [ebp - 0x54], ecx
        mov     word ptr [ebp - 0x50], dx
        je      L_6330
        mov     eax, dword ptr [ebp + 8]
        push    eax
        push    0x7a67fc
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_6330
        int     3
    L_6330:
        lea     esi, [ebx + 0xe]
        mov     ecx, 0xa
        lea     edi, [ebp - 0x4c]
        rep     movsd
        cmp     dword ptr [ebp - 0x4c], 0x28
        mov     edi, dword ptr [ebp - 0x3c]
        mov     si, word ptr [ebp - 0x3e]
        jne     L_6370
        cmp     si, 8
        je      L_6362
        cmp     si, 0x10
        je      L_6362
        cmp     si, 0x18
        je      L_6362
        cmp     si, 0x20
        jne     L_6370
    L_6362:
        test    edi, edi
        je      L_6386
        cmp     edi, 1
        je      L_6386
        cmp     edi, 3
        je      L_638f
    L_6370:
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        push    0x7a67b8
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_6386
        int     3
    L_6386:
        cmp     edi, 3
        jne     L_6421
    L_638f:
        cmp     si, 0x10
        je      L_63ab
        mov     edx, dword ptr [ebp + 8]
        push    edx
        push    0x7a6794
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_63ab
        int     3
    L_63ab:
        mov     eax, dword ptr [ebx + 0x36]
        cmp     eax, 0xf800
        jne     L_63cd
        cmp     dword ptr [ebx + 0x3a], 0x7e0
        jne     L_63cd
        cmp     dword ptr [ebx + 0x3e], 0x1f
        jne     L_63cd
        mov     dword ptr [ebp - 0xc], 0x235
        jmp     L_6421
    L_63cd:
        cmp     eax, 0x7c00
        jne     L_63ec
        cmp     dword ptr [ebx + 0x3a], 0x3e0
        jne     L_63ec
        cmp     dword ptr [ebx + 0x3e], 0x1f
        jne     L_63ec
        mov     dword ptr [ebp - 0xc], 0x613
        jmp     L_6421
    L_63ec:
        cmp     eax, 0xf00
        jne     L_640b
        cmp     dword ptr [ebx + 0x3a], 0xf0
        jne     L_640b
        cmp     dword ptr [ebx + 0x3e], 0xf
        jne     L_640b
        mov     dword ptr [ebp - 0xc], 0x115c
        jmp     L_6421
    L_640b:
        mov     eax, dword ptr [ebp + 8]
        push    eax
        push    0x7a6754
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        je      L_6421
        int     3
    L_6421:
        mov     al, byte ptr [ebp + 0x1c]
        cmp     edi, 1
        sete    byte ptr [ebp - 5]
        test    al, al
        je      L_6542
        mov     esi, dword ptr [ebp - 0x44]
        mov     edi, dword ptr [ebp - 0x48]
        mov     ecx, esi
        or      ecx, edi
        test    ecx, 0xfffff80f
        jne     L_6453
        lea     edx, [edi - 1]
        test    edx, edi
        jne     L_6453
        lea     eax, [esi - 1]
        test    eax, esi
        je      L_646b
    L_6453:
        mov     ecx, dword ptr [ebp + 8]
        push    ecx
        push    esi
        push    edi
        push    0x7a6714
        call    FUN_006fab90
        add     esp, 0x10
        test    eax, eax
        je      L_646b
        int     3
    L_646b:
        mov     eax, dword ptr [ebp + 0x20]
        test    eax, eax
        mov     ebx, 0x7c
        je      L_647f
        mov     dword ptr [ebp - 4], eax
        jmp     L_6508
    L_647f:
        mov     ecx, dword ptr [g_85a22c]
        mov     eax, 0x20
        push    0
        lea     edx, [ebp - 4]
        mov     dword ptr [ebp - 0x90], eax
        mov     dword ptr [ebp - 0x84], eax
        push    edx
        lea     eax, [ebp - 0xd8]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0xd8], ebx
        mov     dword ptr [ebp - 0xd4], 0x1007
        mov     dword ptr [ebp - 0x70], 0x1800
        mov     dword ptr [ebp - 0xcc], edi
        mov     dword ptr [ebp - 0xd0], esi
        mov     dword ptr [ebp - 0x8c], 0x40
        mov     dword ptr [ebp - 0x74], 0xff000000
        mov     dword ptr [ebp - 0x80], 0xff0000
        mov     dword ptr [ebp - 0x7c], 0xff00
        mov     dword ptr [ebp - 0x78], 0xff
        call    FUN_00735230
        mov     eax, dword ptr [g_849324]
        mov     edx, esi
        imul    edx, edi
        push    1
        shl     edx, 2
        push    edx
        push    eax
        call    FUN_006f4940
    L_6508:
        mov     edx, dword ptr [ebp - 4]
        push    0
        push    0x821
        lea     ecx, [ebp - 0xd8]
        push    ecx
        push    0
        push    edx
        mov     dword ptr [ebp - 0xd8], ebx
        call    FUN_007353f0
        mov     eax, dword ptr [ebp - 0xc8]
        sar     eax, 2
        dec     esi
        imul    esi, eax
        mov     dword ptr [ebp - 0x10], eax
        mov     eax, dword ptr [ebp - 0xb4]
        lea     ecx, [eax + esi*4]
        jmp     L_656a
    L_6542:
        mov     edi, dword ptr [ebp - 0x44]
        mov     esi, dword ptr [ebp - 0x48]
        mov     edx, dword ptr [g_849324]
        mov     eax, edi
        imul    eax, esi
        push    edx
        shl     eax, 2
        push    eax
        call    FUN_006f3c80
        dec     edi
        imul    edi, esi
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x10], esi
        lea     ecx, [eax + edi*4]
    L_656a:
        cmp     word ptr [ebp - 0x3e], 8
        mov     edi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebp + 0x20], ecx
        sete    cl
        test    cl, cl
        lea     eax, [edi + 0x36]
        mov     byte ptr [ebp + 0xb], cl
        je      L_65c3
        mov     esi, dword ptr [ebp - 0x2c]
        test    esi, esi
        jne     L_6590
        mov     esi, 0x100
        test    esi, esi
    L_6590:
        jbe     L_65c3
        lea     ecx, [ebp - 0x4d8]
    L_6598:
        xor     edx, edx
        mov     dl, byte ptr [eax + 2]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 1]
        add     eax, 4
        add     ecx, 4
        add     edx, 0xff00
        shl     edx, 8
        add     edx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [eax - 4]
        shl     edx, 8
        add     edx, ebx
        dec     esi
        mov     dword ptr [ecx - 4], edx
        jne     L_6598
    L_65c3:
        mov     eax, dword ptr [ebp - 0x52]
        lea     ebx, [eax + edi]
        mov     al, byte ptr [ebp - 5]
        test    al, al
        je      L_66d9
        mov     esi, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp - 0x44]
        test    eax, eax
        mov     edx, esi
        mov     dword ptr [ebp - 0x14], edx
        jbe     L_6626
        mov     ecx, dword ptr [ebp - 0x48]
        lea     edx, [ecx*4]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp + 0xc], edx
        lea     edx, [ecx*4]
        mov     dword ptr [ebp + 0x20], edx
        mov     dword ptr [ebp + 8], eax
    L_6600:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     edx, ecx
        shr     ecx, 2
        xor     eax, eax
        mov     edi, esi
        rep     stosd
        mov     ecx, edx
        and     ecx, 3
        rep     stosb
        mov     ecx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp + 8]
        sub     esi, ecx
        dec     eax
        mov     dword ptr [ebp + 8], eax
        jne     L_6600
        mov     edx, dword ptr [ebp - 0x14]
    L_6626:
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, edx
        mov     dword ptr [ebp + 0xc], edi
    L_662e:
        mov     al, byte ptr [ebx]
        inc     ebx
        test    al, al
        mov     byte ptr [ebp + 8], al
        je      L_6660
        mov     esi, dword ptr [ebp + 8]
        xor     eax, eax
        mov     al, byte ptr [ebx]
        inc     ebx
        and     esi, 0xff
        mov     eax, dword ptr [ebp + eax*4 - 0x4d8]
        jle     L_662e
        mov     edi, edx
        mov     ecx, esi
        rep     stosd
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edi, dword ptr [ebp + 0xc]
        lea     edx, [edx + esi*4]
        jmp     L_662e
    L_6660:
        mov     al, byte ptr [ebx]
        inc     ebx
        test    al, al
        mov     byte ptr [ebp + 8], al
        jne     L_6678
        mov     edx, ecx
        neg     edx
        lea     edi, [edi + edx*4]
        mov     dword ptr [ebp + 0xc], edi
        mov     edx, edi
        jmp     L_662e
    L_6678:
        cmp     al, 1
        je      L_6892
        cmp     al, 2
        jne     L_66aa
        xor     eax, eax
        mov     al, byte ptr [ebx]
        inc     ebx
        inc     ebx
        lea     edx, [edx + eax*4]
        mov     al, byte ptr [ebx - 1]
        mov     byte ptr [ebp + 8], al
        mov     eax, dword ptr [ebp + 8]
        and     eax, 0xff
        imul    eax, ecx
        shl     eax, 2
        sub     edx, eax
        sub     edi, eax
        mov     dword ptr [ebp + 0xc], edi
        jmp     L_662e
    L_66aa:
        mov     esi, dword ptr [ebp + 8]
        and     esi, 0xff
        jle     L_66ca
    L_66b5:
        xor     eax, eax
        mov     al, byte ptr [ebx]
        inc     ebx
        add     edx, 4
        dec     esi
        mov     eax, dword ptr [ebp + eax*4 - 0x4d8]
        mov     dword ptr [edx - 4], eax
        jne     L_66b5
    L_66ca:
        test    bl, 1
        je      L_662e
        inc     ebx
        jmp     L_662e
    L_66d9:
        mov     eax, dword ptr [ebp - 0x44]
        test    eax, eax
        jbe     L_6892
        mov     esi, dword ptr [ebp + 0x20]
        mov     edi, dword ptr [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], eax
    L_66ed:
        mov     ecx, dword ptr [ebp - 0x48]
        test    ecx, ecx
        mov     eax, esi
        mov     dword ptr [ebp - 0x20], eax
        jbe     L_6873
        mov     dword ptr [ebp + 0xc], ecx
    L_6700:
        mov     cl, byte ptr [ebp + 0xb]
        test    cl, cl
        je      L_6718
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        inc     ebx
        mov     edx, dword ptr [ebp + ecx*4 - 0x4d8]
        jmp     L_685b
    L_6718:
        mov     cx, word ptr [ebp - 0x3e]
        cmp     cx, 0x10
        jne     L_6827
        cmp     edi, 0x235
        jne     L_675a
        xor     edx, edx
        mov     dx, word ptr [ebx]
        mov     eax, edx
        mov     ecx, edx
        shr     eax, 8
        shr     ecx, 3
        and     edx, 0x1f
        and     eax, 0xf8
        and     ecx, 0xfc
        shl     edx, 3
        mov     esi, edx
        mov     edx, 0xff
        jmp     L_680d
    L_675a:
        cmp     edi, 0x613
        jne     L_679f
        mov     edi, dword ptr [ebp - 0xc]
        xor     edx, edx
        mov     dx, word ptr [ebx]
        mov     esi, edx
        and     esi, 0xffff
        mov     eax, esi
        mov     ecx, esi
        shr     eax, 7
        shr     ecx, 2
        and     esi, 0x1f
        and     edx, 0x8000
        and     eax, 0xf8
        and     ecx, 0xf8
        shl     esi, 3
        neg     edx
        sbb     edx, edx
        and     edx, 0xff
        jmp     L_680d
    L_679f:
        cmp     edi, 0x115c
        jne     L_6805
        xor     edx, edx
        mov     dx, word ptr [ebx]
        mov     esi, edx
        and     esi, 0xf
        mov     eax, edx
        mov     ecx, edx
        shl     esi, 4
        shr     edx, 8
        and     edx, 0xf0
        mov     dword ptr [ebp - 0x24], esi
        mov     esi, edx
        mov     edi, edx
        shr     edi, 2
        shr     esi, 1
        and     edi, 4
        and     esi, 8
        add     esi, edi
        mov     edi, edx
        shr     edi, 4
        mov     dword ptr [ebp - 0x1c], edx
        and     edi, 1
        add     esi, edi
        mov     edi, dword ptr [ebp - 0x1c]
        shr     edx, 3
        and     edx, 2
        shr     eax, 4
        add     edx, edi
        mov     edi, dword ptr [ebp - 0xc]
        and     eax, 0xf0
        and     ecx, 0xf0
        add     edx, esi
        mov     esi, dword ptr [ebp - 0x24]
        jmp     L_680d
    L_6805:
        xor     eax, eax
        xor     ecx, ecx
        xor     esi, esi
        xor     edx, edx
    L_680d:
        shl     edx, 8
        add     edx, eax
        mov     eax, dword ptr [ebp - 0x20]
        shl     edx, 8
        add     edx, ecx
        shl     edx, 8
        add     edx, esi
        mov     esi, dword ptr [ebp + 0x20]
        add     ebx, 2
        jmp     L_685b
    L_6827:
        cmp     cx, 0x18
        jne     L_6850
        xor     edx, edx
        mov     dl, byte ptr [ebx + 2]
        xor     ecx, ecx
        mov     cl, byte ptr [ebx + 1]
        add     edx, 0xff00
        shl     edx, 8
        add     edx, ecx
        xor     ecx, ecx
        mov     cl, byte ptr [ebx]
        shl     edx, 8
        add     edx, ecx
        add     ebx, 3
        jmp     L_685b
    L_6850:
        mov     edx, dword ptr [ebx]
        or      edx, 0xff000000
        add     ebx, 4
    L_685b:
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [esi], edx
        add     esi, 4
        dec     ecx
        mov     dword ptr [ebp + 0x20], esi
        mov     dword ptr [ebp + 0xc], ecx
        jne     L_6700
        mov     ecx, dword ptr [ebp - 0x48]
    L_6873:
        mov     edx, dword ptr [ebp - 0x10]
        shl     edx, 2
        sub     eax, edx
        mov     esi, eax
        mov     eax, dword ptr [ebp - 0x14]
        and     ecx, 3
        add     ebx, ecx
        dec     eax
        mov     dword ptr [ebp + 0x20], esi
        mov     dword ptr [ebp - 0x14], eax
        jne     L_66ed
    L_6892:
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp - 0x44]
        mov     edx, dword ptr [ebp + 0x14]
        mov     dword ptr [eax], ecx
        mov     eax, dword ptr [ebp - 0x48]
        pop     edi
        mov     dword ptr [edx], eax
        mov     al, byte ptr [ebp + 0x1c]
        test    al, al
        pop     esi
        pop     ebx
        je      L_68c0
        mov     ecx, dword ptr [ebp - 4]
        push    0
        push    ecx
        call    FUN_00735440
        mov     eax, dword ptr [ebp - 4]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    L_68c0:
        mov     eax, dword ptr [ebp - 0x18]
        mov     esp, ebp
        pop     ebp
        ret     0x1c
    }
}
