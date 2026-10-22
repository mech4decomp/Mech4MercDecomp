/*
 * FUN_0074C710 (784 B) — Serializes a compound network-address structure
 * into a string buffer (DAT_008baaf4) by matching GUID tags and formatting
 * the associated fields via sprintf.
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_008baaf4;
extern void __cdecl FUN_006fab90(void);
extern void *g_76b420;   /* sprintf */

extern char str_7ab754[];
extern char str_7ab6f0[];
extern char str_7ab6e0[];
extern char str_7ab6d8[];
extern char str_7ab6cc[];
extern char str_7ab6bc[];
extern char str_7ab6b0[];
extern char str_7ab6a8[];
extern char str_7ab694[];
extern char str_7ab68c[];
extern char str_7ab684[];
extern char str_7ab67c[];
extern char str_7ab674[];
extern char str_7ab664[];
extern char str_7ab658[];

extern char DAT_0077008c[];
extern char DAT_007ab750[];
extern char DAT_007ab748[];
extern char DAT_007ab740[];
extern char DAT_0079e7f8[];
extern char DAT_007ab73c[];
extern char DAT_007ab734[];
extern char DAT_007ab730[];
extern char DAT_007a137c[];

extern int DAT_007a2f20[];
extern int DAT_007a2fc0[];
extern int DAT_007a2f90[];
extern int DAT_007a2fa0[];
extern int DAT_007a2fb0[];
extern int DAT_007a2f40[];
extern int DAT_007a2f70[];
extern int DAT_007a2f80[];
extern int DAT_007a2f50[];
extern int DAT_007a2f60[];
extern int DAT_007a2f30[];
extern int DAT_007a2e30[];
extern int DAT_007a2e20[];
extern int DAT_007a2e50[];
extern int DAT_007a2e40[];

extern int DAT_0074ca20;   /* switch jump table base 0x0074CA20 */
extern int DAT_0074ca30;   /* switch jump table base 0x0074CA30 */

__declspec(naked) void __stdcall FUN_0074c710(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x84
        push    ebx
        mov     ebx, dword ptr [ebp + 8]
        push    esi
        push    edi
        mov     ecx, 4
        mov     edi, offset DAT_007a2f20
        mov     esi, ebx
        xor     eax, eax
        repe    cmpsd
        mov     byte ptr [DAT_008baaf4], 0
        jz      l_74c74a
        push    offset str_7ab754
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      l_74c74a
        int     3
    l_74c74a:
        mov     eax, dword ptr [ebx + 0x14]
        mov     ecx, dword ptr [ebx + 0x10]
        add     eax, ebx
        lea     ebx, [ecx + ebx + 0x14]
        cmp     ebx, eax
        mov     dword ptr [ebp - 4], eax
        jnc     l_74ca12

    l_74c761:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset DAT_008baaf4
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0xe0
        jnc     l_74ca12
        mov     ecx, 4
        mov     edi, offset DAT_007a2fc0
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c817

        mov     eax, dword ptr [ebx + 0x20]
        cmp     eax, 3
        ja      l_74c7bd
        jmp     dword ptr [eax*4 + DAT_0074ca20]
    l_74c7a1:
        mov     ecx, offset DAT_0077008c
        jmp     l_74c7c2
    l_74c7a8:
        mov     ecx, offset DAT_007ab750
        jmp     l_74c7c2
    l_74c7af:
        mov     ecx, offset DAT_007ab748
        jmp     l_74c7c2
    l_74c7b6:
        mov     ecx, offset DAT_007ab740
        jmp     l_74c7c2
    l_74c7bd:
        mov     ecx, offset DAT_0079e7f8
    l_74c7c2:
        cmp     eax, 4
        ja      l_74c7ea
        jmp     dword ptr [eax*4 + DAT_0074ca30]
    l_74c7ce:
        mov     eax, offset DAT_007ab73c
        jmp     l_74c7ef
    l_74c7d5:
        mov     eax, offset DAT_0077008c
        jmp     l_74c7ef
    l_74c7dc:
        mov     eax, offset DAT_007ab734
        jmp     l_74c7ef
    l_74c7e3:
        mov     eax, offset DAT_007ab730
        jmp     l_74c7ef
    l_74c7ea:
        mov     eax, offset DAT_0079e7f8
    l_74c7ef:
        mov     edx, dword ptr [ebx + 0x14]
        push    eax
        mov     eax, dword ptr [ebx + 0x1c]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x18]
        push    eax
        push    ecx
        push    edx
        lea     eax, [ebp - 0x84]
        push    offset str_7ab6f0
        push    eax
        call    dword ptr [g_76b420]
        add     esp, 0x1c
        jmp     l_74c9d2

    l_74c817:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f90
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c847
        lea     eax, [ebx + 0x14]
        push    eax
        push    offset str_7ab6e0
    l_74c832:
        lea     ecx, [ebp - 0x84]
        push    ecx
        call    dword ptr [g_76b420]
        add     esp, 0xc
        jmp     l_74c9d2

    l_74c847:
        mov     ecx, 4
        mov     edi, offset DAT_007a2fa0
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c86a
        push    offset str_7ab6d8
        lea     eax, [ebp - 0x84]
        push    eax
        jmp     l_74c9c9

    l_74c86a:
        mov     ecx, 4
        mov     edi, offset DAT_007a2fb0
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c88a
        xor     eax, eax
        mov     ax, word ptr [ebx + 0x14]
        push    eax
        push    offset str_7ab6cc
        jmp     l_74c832

    l_74c88a:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f40
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c8ad
        push    offset str_7ab6bc
        lea     eax, [ebp - 0x84]
        push    eax
        jmp     l_74c9c9

    l_74c8ad:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f70
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c8cd
        lea     eax, [ebx + 0x14]
        push    eax
        push    offset str_7ab6b0
        jmp     l_74c832

    l_74c8cd:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f80
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c8f0
        push    offset str_7ab6a8
        lea     eax, [ebp - 0x84]
        push    eax
        jmp     l_74c9c9

    l_74c8f0:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f50
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c910
        lea     eax, [ebx + 0x14]
        push    eax
        push    offset str_7ab694
        jmp     l_74c832

    l_74c910:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f60
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c933
        push    offset str_7ab68c
        lea     eax, [ebp - 0x84]
        push    eax
        jmp     l_74c9c9

    l_74c933:
        mov     ecx, 4
        mov     edi, offset DAT_007a2f30
        mov     esi, ebx
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c9bd
        lea     eax, [ebx + 0x14]
        mov     ecx, 4
        mov     edi, offset DAT_007a2e30
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        /* __emit: MSVC6 rejects 'mov dword ptr [mem], offset sym' (label undefined); ref C7 45 08 F8 E7 79 00 */
        __emit 0xC7
        __emit 0x45
        __emit 0x08
        __emit 0xF8
        __emit 0xE7
        __emit 0x79
        __emit 0x00
        jnz     l_74c968
        /* __emit: MSVC6 rejects 'mov dword ptr [mem], offset sym'; ref C7 45 08 84 B6 7A 00 */
        __emit 0xC7
        __emit 0x45
        __emit 0x08
        __emit 0x84
        __emit 0xB6
        __emit 0x7A
        __emit 0x00
    l_74c968:
        mov     ecx, 4
        mov     edi, offset DAT_007a2e20
        mov     esi, eax
        xor     edx, edx
        repe    cmpsd
        jnz     l_74c981
        /* __emit: MSVC6 rejects 'mov dword ptr [mem], offset sym'; ref C7 45 08 7C 13 7A 00 */
        __emit 0xC7
        __emit 0x45
        __emit 0x08
        __emit 0x7C
        __emit 0x13
        __emit 0x7A
        __emit 0x00
    l_74c981:
        xor     edx, edx
        mov     ecx, 4
        mov     edi, offset DAT_007a2e50
        mov     esi, eax
        repe    cmpsd
        mov     edx, offset str_7ab67c
        jz      l_74c99b
        mov     edx, dword ptr [ebp + 8]
    l_74c99b:
        mov     esi, eax
        mov     ecx, 4
        mov     edi, offset DAT_007a2e40
        xor     eax, eax
        repe    cmpsd
        jnz     l_74c9b2
        mov     edx, offset str_7ab674
    l_74c9b2:
        push    edx
        push    offset str_7ab664
        jmp     l_74c832

    l_74c9bd:
        push    offset str_7ab658
        lea     edx, [ebp - 0x84]
        push    edx
    l_74c9c9:
        call    dword ptr [g_76b420]
        add     esp, 8

    l_74c9d2:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x84]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset DAT_008baaf4
        repne   scasb
        mov     eax, dword ptr [ebx + 0x10]
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        lea     ebx, [ebx + eax + 0x14]
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, edx
        and     ecx, 3
        cmp     ebx, eax
        rep     movsb
        jc      l_74c761

    l_74ca12:
        pop     edi
        pop     esi
        mov     eax, offset DAT_008baaf4
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
