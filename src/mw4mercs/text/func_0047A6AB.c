/*
 * FUN_0047A6AB (1240 B) — __thiscall. Syncs several growable arrays between
 * [ebx+0xc] (source) and [ebp+0xc] (this) via vtable calls ([eax+0x28/0x24],
 * [edx+0x8c/0x88/0xc/0x94/0x30/0x2c/0x18]) and malloc/free (FUN_004084d0/e0),
 * with element-copy loops (FUN_0040ccd0, FUN_00458230, FUN_00406c90).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_00458230(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_00423b70(void);

__declspec(naked) void __cdecl FUN_0047A6AB(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        sub     esp, 0x18
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx
        je      L_a7cf
        mov     ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        jbe     L_a7cf
        mov     eax, dword ptr [ebx]
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebx
        call    dword ptr [eax + 0x28]
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 0x14]
        cmp     eax, edi
        mov     dword ptr [esp + 0x24], eax
        je      L_a7a2
        test    eax, eax
        jbe     L_a784
        mov     ebx, eax
        lea     eax, [eax + eax*2]
        shl     eax, 2
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a724
        dec     ebx
        mov     ecx, eax
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_a730
L_a724:
        mov     dword ptr [esp + 0x14], 0
        mov     ecx, dword ptr [esp + 0x14]
L_a730:
        mov     edx, dword ptr [esi + 0x10]
        test    edx, edx
        je      L_a77b
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, edi
        jb      L_a741
        mov     eax, edi
L_a741:
        mov     esi, eax
        dec     eax
        test    esi, esi
        je      L_a768
        lea     esi, [eax + eax*2]
        mov     ebx, edx
        lea     esi, [ecx + esi*4]
        sub     ebx, ecx
        lea     edi, [eax + 1]
L_a755:
        lea     ecx, [ebx + esi]
        push    ecx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_a755
L_a768:
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esi + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 4
L_a77b:
        mov     ebx, dword ptr [esp + 0x2c]
        mov     dword ptr [esi + 0x10], ecx
        jmp     L_a797
L_a784:
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 0x10], 0
L_a797:
        mov     eax, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0x14], eax
        mov     eax, dword ptr [esp + 0x10]
L_a7a2:
        mov     edx, dword ptr [esi + 0x10]
        mov     esi, dword ptr [esp + 0x18]
        lea     ecx, [eax + eax*2]
        shl     ecx, 2
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 0x24]
        jmp     L_a7f2
L_a7cf:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x28]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [ebp]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x24]
L_a7f2:
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        je      L_a8af
        mov     ecx, dword ptr [eax + 4]
        test    ecx, ecx
        jbe     L_a8af
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x8c]
        mov     esi, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esi + 4]
        cmp     ecx, edi
        mov     dword ptr [esp + 0x24], ecx
        je      L_a88e
        test    ecx, ecx
        jbe     L_a872
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [esi]
        add     esp, 4
        test    ecx, ecx
        mov     ebx, eax
        je      L_a86a
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, edi
        jb      L_a84d
        mov     eax, edi
L_a84d:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_a861
L_a854:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_a854
L_a861:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_a86a:
        mov     dword ptr [esi], ebx
        mov     ebx, dword ptr [esp + 0x2c]
        jmp     L_a883
L_a872:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_a883:
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 4], ecx
        mov     ecx, dword ptr [esp + 0x10]
L_a88e:
        mov     eax, dword ptr [esi]
        mov     esi, dword ptr [esp + 0x1c]
        mov     edx, ecx
        shr     ecx, 2
        mov     edi, eax
        rep     movsd
        mov     ecx, edx
        mov     edx, dword ptr [ebp]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    eax
        jmp     L_a8d0
L_a8af:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x8c]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ebp]
        push    eax
        push    ecx
L_a8d0:
        mov     ecx, ebp
        call    dword ptr [edx + 0x88]
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ebp + 0xc]
        mov     eax, 0x55555556
        imul    ecx
        mov     eax, edx
        shr     edx, 0x1f
        add     eax, edx
        mov     dword ptr [esp + 0x10], eax
        mov     edi, dword ptr [esi + 0xc]
        cmp     eax, edi
        mov     dword ptr [esp + 0x24], eax
        je      L_a960
        test    eax, eax
        jbe     L_a942
        push    eax
        call    FUN_004084d0
        mov     ecx, dword ptr [esi + 8]
        add     esp, 4
        test    ecx, ecx
        mov     ebx, eax
        je      L_a939
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, edi
        jb      L_a91c
        mov     eax, edi
L_a91c:
        mov     edx, eax
        dec     eax
        test    edx, edx
        je      L_a930
L_a923:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + ebx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jne     L_a923
L_a930:
        push    ecx
        call    FUN_004084e0
        add     esp, 4
L_a939:
        mov     dword ptr [esi + 8], ebx
        mov     ebx, dword ptr [esp + 0x2c]
        jmp     L_a955
L_a942:
        mov     eax, dword ptr [esi + 8]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi + 8], 0
L_a955:
        mov     ecx, dword ptr [esp + 0x24]
        mov     dword ptr [esi + 0xc], ecx
        mov     eax, dword ptr [esp + 0x10]
L_a960:
        xor     ecx, ecx
        test    eax, eax
        jle     L_a976
L_a969:
        mov     edx, dword ptr [esi + 8]
        mov     byte ptr [edx + ecx], 3
        mov     eax, dword ptr [esp + 0x10]
        inc     ecx
        cmp     ecx, eax
        __emit  0x7C                 /* jl rel8 (MSVC6 miscomputes backward offset across call reloc) */
        __emit  0xF3
L_a976:
        mov     edx, dword ptr [ebp]
        push    1
        push    eax
        mov     eax, dword ptr [esi + 8]
        push    eax
        mov     ecx, ebp
        call    dword ptr [edx + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        mov     edi, dword ptr [ebp + 0x5c]
        cmp     eax, edi
        mov     dword ptr [esp + 0x24], eax
        je      L_aa2f
        test    eax, eax
        jbe     L_aa15
        mov     esi, eax
        shl     eax, 4
        push    eax
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        je      L_a9b9
        dec     esi
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x14], eax
        jmp     L_a9c5
L_a9b9:
        mov     dword ptr [esp + 0x14], 0
        mov     eax, dword ptr [esp + 0x14]
L_a9c5:
        mov     ecx, dword ptr [ebp + 0x58]
        test    ecx, ecx
        je      L_aa10
        mov     edx, dword ptr [esp + 0x24]
        cmp     edx, edi
        jae     L_a9d6
        mov     edi, edx
L_a9d6:
        mov     edx, edi
        dec     edi
        test    edx, edx
        je      L_aa00
L_a9e9:
        mov     esi, edi
        shl     esi, 4
        mov     ebx, ecx
        add     esi, eax
        sub     ebx, eax
        inc     edi
        lea     eax, [ebx + esi]
        push    eax
        mov     ecx, esi
        call    FUN_00458230
        dec     edi
        sub     esi, 0x10
        test    edi, edi
        __emit  0x77                 /* ja rel8 (MSVC6 miscomputes backward offset across call reloc) */
        __emit  0xED
        mov     ebx, dword ptr [esp + 0x2c]
L_aa00:
        mov     eax, dword ptr [ebp + 0x58]
        push    eax
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 4
L_aa10:
        mov     dword ptr [ebp + 0x58], eax
        jmp     L_aa28
L_aa15:
        mov     ecx, dword ptr [ebp + 0x58]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x58], 0
L_aa28:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [ebp + 0x5c], edx
L_aa2f:
        mov     eax, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [eax + 0x94]
        mov     eax, dword ptr [ebx + 0xc]
        test    eax, eax
        je      L_ab39
        mov     ecx, dword ptr [eax + 0x1c]
        test    ecx, ecx
        jbe     L_ab39
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x30]
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, dword ptr [edi + 0x1c]
        mov     dword ptr [esp + 0x24], eax
        je      L_ab0b
        test    eax, eax
        jbe     L_aaed
        __emit  0x8D                 /* lea edx,[eax*8] no-base SIB (MSVC6 re-bases) */
        __emit  0x14
        __emit  0xC5
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        push    edx
        mov     ebx, eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_aaa1
        push    offset FUN_00423b70
        push    ebx
        push    8
        push    esi
        call    FUN_00406c90
        jmp     L_aaa3
L_aaa1:
        xor     esi, esi
L_aaa3:
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        je      L_aae4
        mov     eax, dword ptr [edi + 0x1c]
        mov     edx, dword ptr [esp + 0x24]
        cmp     edx, eax
        jb      L_aab7
        mov     edx, eax
L_aab7:
        mov     eax, edx
        dec     edx
        test    eax, eax
        je      L_aad8
L_aac4:
        lea     eax, [esi + edx*8]
        sub     ecx, esi
        inc     edx
        mov     ebx, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], ebx
        dec     edx
        sub     eax, 8
        test    edx, edx
        __emit  0x77                 /* ja rel8 (MSVC6 miscomputes backward offset across call reloc) */
        __emit  0xEC
L_aad8:
        mov     eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_aae4:
        mov     ebx, dword ptr [esp + 0x2c]
        mov     dword ptr [edi + 0x18], esi
        jmp     L_ab00
L_aaed:
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x18], 0
L_ab00:
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [edi + 0x1c], edx
        mov     eax, dword ptr [esp + 0x10]
L_ab0b:
        mov     edx, dword ptr [edi + 0x18]
        mov     esi, dword ptr [esp + 0x20]
        __emit  0x8D                 /* lea ecx,[eax*8] no-base SIB (MSVC6 re-bases) */
        __emit  0x0C
        __emit  0xC5
        __emit  0x00
        __emit  0x00
        __emit  0x00
        __emit  0x00
        mov     eax, ecx
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        mov     eax, dword ptr [ebp]
        and     ecx, 3
        rep     movsb
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    dword ptr [eax + 0x2c]
        jmp     L_ab5c
L_ab39:
        mov     edx, dword ptr [ebx]
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x30]
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [ebp]
        push    eax
        push    ecx
        mov     ecx, ebp
        call    dword ptr [edx + 0x2c]
L_ab5c:
        mov     edx, dword ptr [ebx]
        push    0
        mov     ecx, ebx
        call    dword ptr [edx + 0x18]
        lea     edi, [ebp + 0x2c]
        mov     esi, eax
        mov     ecx, 6
        rep     movsd
        pop     edi
        pop     esi
        mov     word ptr [ebp + 0x56], 0
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x18
        ret     4
    }
}
