/*
 * FUN_1003d5d6 (777 B) -- __cdecl.
 * Buddy-block allocator (alloc path): searches free lists for a block of
 * the requested size class, splits/coalesces, updates the size-class bitmap,
 * and returns a pointer into the allocated block.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10076858;
extern unsigned int g_1007685c;
extern unsigned int g_1007684c;
extern unsigned int g_10076854;
extern unsigned int g_10076848;
extern void __cdecl FUN_1003d8df(void);
extern void __cdecl FUN_1003d990(void);

__declspec(naked) void FUN_1003d5d6(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [g_10076858]
        mov     edx, dword ptr [g_1007685c]
        push    ebx
        push    esi
        lea     eax, [eax + eax*4]
        push    edi
        lea     edi, [edx + eax*4]
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [ebp - 0x4], edi
        lea     ecx, [eax + 0x17]
        and     ecx, 0xfffffff0
        mov     dword ptr [ebp - 0x10], ecx
        sar     ecx, 0x4
        dec     ecx
        cmp     ecx, 0x20
        jge     L_616
        or      esi, 0xffffffff
        shr     esi, cl
        or      dword ptr [ebp - 0x8], 0xffffffff
        mov     dword ptr [ebp - 0xc], esi
        jmp     L_626
    L_616:
        add     ecx, -0x20
        or      eax, 0xffffffff
        xor     esi, esi
        shr     eax, cl
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 0x8], eax
    L_626:
        mov     eax, dword ptr [g_1007684c]
        mov     ebx, eax
        cmp     ebx, edi
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L_64d
    L_634:
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 0x8]
        and     edi, esi
        or      ecx, edi
        jnz     L_64d
        add     ebx, 0x14
        cmp     ebx, dword ptr [ebp - 0x4]
        mov     dword ptr [ebp + 0x8], ebx
        jc      L_634
    L_64d:
        cmp     ebx, dword ptr [ebp - 0x4]
        jnz     L_6cb
        mov     ebx, edx
    L_654:
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L_670
        mov     ecx, dword ptr [ebx + 0x4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 0x8]
        and     edi, esi
        or      ecx, edi
        jnz     L_66e
        add     ebx, 0x14
        jmp     L_654
    L_66e:
        cmp     ebx, eax
    L_670:
        jnz     L_6cb
        cmp     ebx, dword ptr [ebp - 0x4]
        jnc     L_688
    L_672:
        cmp     dword ptr [ebx + 0x8], 0
        jnz     L_685
        add     ebx, 0x14
        mov     dword ptr [ebp + 0x8], ebx
        __emit 0xEB                 /* __emit: MSVC6 miscomputes backward jmp rel-offset (off-by-5); ref is EB ED */
        __emit 0xED
    L_685:
        cmp     ebx, dword ptr [ebp - 0x4]
    L_688:
        jnz     L_6b0
        mov     ebx, edx
    L_68c:
        cmp     ebx, eax
        mov     dword ptr [ebp + 0x8], ebx
        jnc     L_6a0
        cmp     dword ptr [ebx + 0x8], 0
        jnz     L_69e
        add     ebx, 0x14
        jmp     L_68c
    L_69e:
        cmp     ebx, eax
    L_6a0:
        jnz     L_6b0
        call    FUN_1003d8df
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [ebp + 0x8], ebx
        jz      L_6c4
    L_6b0:
        push    ebx
        call    FUN_1003d990
        pop     ecx
        mov     ecx, dword ptr [ebx + 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ebx + 0x10]
        cmp     dword ptr [eax], -1
        jnz     L_6cb
    L_6c4:
        xor     eax, eax
        jmp     L_8da
    L_6cb:
        mov     dword ptr [g_1007684c], ebx
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [eax]
        cmp     edx, -1
        mov     dword ptr [ebp - 0x4], edx
        jz      L_6f2
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        mov     edi, dword ptr [eax + edx*4 + 0x44]
        and     ecx, dword ptr [ebp - 0x8]
        and     edi, esi
        or      ecx, edi
        jnz     L_729
    L_6f2:
        mov     edx, dword ptr [eax + 0xc4]
        mov     esi, dword ptr [eax + 0x44]
        and     edx, dword ptr [ebp - 0x8]
        and     esi, dword ptr [ebp - 0xc]
        and     dword ptr [ebp - 0x4], 0
        lea     ecx, [eax + 0x44]
        or      edx, esi
        mov     esi, dword ptr [ebp - 0xc]
        jnz     L_726
    L_70f:
        mov     edx, dword ptr [ecx + 0x84]
        inc     dword ptr [ebp - 0x4]
        and     edx, dword ptr [ebp - 0x8]
        add     ecx, 0x4
        mov     edi, esi
        and     edi, dword ptr [ecx]
        or      edx, edi
        jz      L_70f
    L_726:
        mov     edx, dword ptr [ebp - 0x4]
    L_729:
        mov     ecx, edx
        xor     edi, edi
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [eax + edx*4 + 0x44]
        and     ecx, esi
        jnz     L_752
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        push    0x20
        and     ecx, dword ptr [ebp - 0x8]
        pop     edi
    L_752:
        test    ecx, ecx
        jl      L_75b
        shl     ecx, 0x1
        inc     edi
        jmp     L_752
    L_75b:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx + edi*8 + 0x4]
        mov     ecx, dword ptr [edx]
        sub     ecx, dword ptr [ebp - 0x10]
        mov     esi, ecx
        mov     dword ptr [ebp - 0x8], ecx
        sar     esi, 0x4
        dec     esi
        cmp     esi, 0x3f
        jle     L_778
        push    0x3f
        pop     esi
    L_778:
        cmp     esi, edi
        jz      L_88d
        mov     ecx, dword ptr [edx + 0x4]
        cmp     ecx, dword ptr [edx + 0x8]
        jnz     L_7e9
        cmp     edi, 0x20
        jge     L_7b8
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edi, [eax + edi + 0x4]
        not     ebx
        mov     dword ptr [ebp - 0x14], ebx
        and     ebx, dword ptr [eax + ecx*4 + 0x44]
        mov     dword ptr [eax + ecx*4 + 0x44], ebx
        dec     byte ptr [edi]
        jnz     L_7e6
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx], ecx
        jmp     L_7e9
    L_7b8:
        lea     ecx, [edi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edi, [eax + edi + 0x4]
        lea     ecx, [eax + ecx*4 + 0xc4]
        not     ebx
        and     dword ptr [ecx], ebx
        dec     byte ptr [edi]
        mov     dword ptr [ebp - 0x14], ebx
        jnz     L_7e6
        mov     ebx, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx + 0x4], ecx
        jmp     L_7e9
    L_7e6:
        mov     ebx, dword ptr [ebp + 0x8]
    L_7e9:
        mov     ecx, dword ptr [edx + 0x8]
        mov     edi, dword ptr [edx + 0x4]
        cmp     dword ptr [ebp - 0x8], 0
        mov     dword ptr [ecx + 0x4], edi
        mov     ecx, dword ptr [edx + 0x4]
        mov     edi, dword ptr [edx + 0x8]
        mov     dword ptr [ecx + 0x8], edi
        jz      L_899
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ecx + esi*8 + 0x4]
        lea     ecx, [ecx + esi*8]
        mov     dword ptr [edx + 0x4], edi
        mov     dword ptr [edx + 0x8], ecx
        mov     dword ptr [ecx + 0x4], edx
        mov     ecx, dword ptr [edx + 0x4]
        mov     dword ptr [ecx + 0x8], edx
        mov     ecx, dword ptr [edx + 0x4]
        cmp     ecx, dword ptr [edx + 0x8]
        jnz     L_88a
        mov     cl, byte ptr [esi + eax + 0x4]
        cmp     esi, 0x20
        mov     byte ptr [ebp + 0xb], cl
        jge     L_85b
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 0x4], cl
        jnz     L_849
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        or      dword ptr [ebx], edi
    L_849:
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        mov     ecx, dword ptr [ebp - 0x4]
        or      dword ptr [eax + ecx*4 + 0x44], edi
        jmp     L_88a
    L_85b:
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 0x4], cl
        jnz     L_874
        lea     ecx, [esi - 0x20]
        mov     edi, 0x80000000
        shr     edi, cl
        or      dword ptr [ebx + 0x4], edi
    L_874:
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edi, [eax + ecx*4 + 0xc4]
        lea     ecx, [esi - 0x20]
        mov     esi, 0x80000000
        shr     esi, cl
        or      dword ptr [edi], esi
    L_88a:
        mov     ecx, dword ptr [ebp - 0x8]
    L_88d:
        test    ecx, ecx
        jz      L_89c
        mov     dword ptr [edx], ecx
        mov     dword ptr [ecx + edx - 0x4], ecx
        jmp     L_89c
    L_899:
        mov     ecx, dword ptr [ebp - 0x8]
    L_89c:
        mov     esi, dword ptr [ebp - 0x10]
        add     edx, ecx
        lea     ecx, [esi + 0x1]
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + esi - 0x4], ecx
        mov     esi, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        lea     edi, [ecx + 0x1]
        mov     dword ptr [esi], edi
        jnz     L_8d2
        cmp     ebx, dword ptr [g_10076854]
        jnz     L_8d2
        mov     ecx, dword ptr [ebp - 0x4]
        cmp     ecx, dword ptr [g_10076848]
        jnz     L_8d2
        and     dword ptr [g_10076854], 0
    L_8d2:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [eax], ecx
        lea     eax, [edx + 0x4]
    L_8da:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
