/*
 * FUN_004675a0 (1580 B) — MLR PMesh build/update routine. Allocates a mesh
 * object, sizes its vertex/index/color buffers, transforms vertices, and
 * issues virtual calls. FPU + IAT (ceil) + many alloc/free helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007b9590;
extern int   g_007b958c;
extern int   g_007da724;
extern int   g_007da5f0;
extern int   g_007d993c;
extern int   g_007b220c;
extern int   g_007b2314;
extern int   g_007b2284;
extern int   g_007b2288;
extern int   g_007b228c;
extern double g_0076e3e8;
extern float g_0076d064;
extern float g_0076d070;
extern int   g_0076b2ec;   /* IAT: ceil */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_004651c0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_004675a0(void)
{
    __asm {
        mov     eax, dword ptr [g_007b9590]
        sub     esp, 0x68
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_4675d8
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [esp + 0x24], eax
        jmp     L_4675dc
L_4675d8:
        mov     dword ptr [esp + 0x24], edi
L_4675dc:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esp + 0x28], eax
        fild    dword ptr [esp + 0x28]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        lea     ecx, [eax + eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [esp + 0x14], eax
        jl      L_467635
        mov     dword ptr [esp + 0x14], 0x55
L_467635:
        mov     dword ptr [esp + 0x20], edi
L_467639:
        xor     edi, edi
        push    0xa0
        mov     dword ptr [g_007da5f0], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_467664
        mov     edx, dword ptr [g_007d993c]
        push    edx
        mov     ecx, eax
        call    FUN_004651c0
        mov     ebx, eax
        jmp     L_467666
L_467664:
        xor     ebx, ebx
L_467666:
        mov     esi, dword ptr [ebx + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        mov     ebp, dword ptr [esp + 0x14]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x34], ebx
        mov     dword ptr [esp + 0x1c], esi
        jz      L_4676d9
        cmp     ebp, edi
        jbe     L_4676c7
        push    ebp
        call    FUN_004084d0
        mov     edi, dword ptr [esi + 0x8]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [esp + 0x18], eax
        jz      L_4676be
        mov     eax, dword ptr [esi + 0xc]
        cmp     ebp, eax
        jnc     L_46769d
        mov     eax, ebp
L_46769d:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_4676b5
L_4676a8:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dl, byte ptr [edi + eax]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-4: 0xEF vs ref 0xF3) */
        __emit 0x75
        __emit 0xF3
L_4676b5:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_4676be:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x8], eax
        jmp     L_4676d6
L_4676c7:
        mov     ecx, dword ptr [esi + 0x8]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], edi
L_4676d6:
        mov     dword ptr [esi + 0xc], ebp
L_4676d9:
        test    ebp, ebp
        jle     L_4676f5
        mov     edi, dword ptr [esi + 0x8]
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x3030303
        rep stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep stosb
L_4676f5:
        mov     ebp, dword ptr [esp + 0x14]
        mov     edi, dword ptr [esi + 0x14]
        lea     ebp, [ebp + ebp*2]
        cmp     ebp, edi
        jz      L_4677aa
        test    ebp, ebp
        jbe     L_467794
        lea     eax, [ebp + ebp*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_467733
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x18], ecx
        jmp     L_46773f
L_467733:
        mov     dword ptr [esp + 0x18], 0x0
        mov     ecx, dword ptr [esp + 0x18]
L_46773f:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x2c], eax
        jz      L_46778f
        cmp     ebp, edi
        jnc     L_467750
        mov     edi, ebp
L_467750:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      L_46777a
        lea     edx, [edi + edi*2]
        sub     eax, ecx
        lea     esi, [ecx + edx*4]
        mov     dword ptr [esp + 0x30], eax
        inc     edi
L_467764:
        mov     eax, dword ptr [esp + 0x30]
        add     eax, esi
        push    eax
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_467764
L_46777a:
        mov     ecx, dword ptr [esp + 0x2c]
        push    ecx
        call    FUN_004084e0
        mov     esi, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x1c]
        add     esp, 0x4
L_46778f:
        mov     dword ptr [esi + 0x10], ecx
        jmp     L_4677a7
L_467794:
        mov     edx, dword ptr [esi + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x10], 0x0
L_4677a7:
        mov     dword ptr [esi + 0x14], ebp
L_4677aa:
        cmp     ebp, dword ptr [esi + 0x4]
        jz      L_46780c
        test    ebp, ebp
        jbe     L_4677f8
        push    ebp
        call    FUN_004084d0
        mov     edi, dword ptr [esi]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [esp + 0x18], eax
        jz      L_4677f0
        mov     eax, dword ptr [esi + 0x4]
        cmp     ebp, eax
        jnc     L_4677cf
        mov     eax, ebp
L_4677cf:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_4677e7
L_4677da:
        mov     ecx, dword ptr [esp + 0x18]
        mov     dl, byte ptr [edi + eax]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-4: 0xEF vs ref 0xF3) */
        __emit 0x75
        __emit 0xF3
L_4677e7:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_4677f0:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esi], eax
        jmp     L_467809
L_4677f8:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi], 0x0
L_467809:
        mov     dword ptr [esi + 0x4], ebp
L_46780c:
        cmp     ebp, dword ptr [esi + 0x1c]
        jz      L_467885
        xor     edi, edi
        cmp     ebp, edi
        jbe     L_467873
        lea     edx, [ebp*8]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_467834
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x38], ecx
        mov     edi, eax
L_467834:
        mov     ecx, dword ptr [esi + 0x18]
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], edi
        jz      L_46787f
        mov     edx, dword ptr [esi + 0x1c]
        cmp     ebp, edx
        jnc     L_467848
        mov     edx, ebp
L_467848:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_46786d
        lea     eax, [edi + edx*8]
        sub     ecx, edi
        inc     edx
L_467855:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_467855
        mov     edi, dword ptr [esp + 0x18]
L_46786d:
        mov     eax, dword ptr [esi + 0x18]
        push    eax
        jmp     L_467877
L_467873:
        mov     ecx, dword ptr [esi + 0x18]
        push    ecx
L_467877:
        call    FUN_004084e0
        add     esp, 0x4
L_46787f:
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x1c], ebp
L_467885:
        mov     eax, dword ptr [esp + 0x20]
        lea     edx, [eax + eax*2]
        lea     ecx, [esp + 0x58]
        lea     edx, [edx*4 + g_007b2314]
        mov     dword ptr [esp + 0x18], 0x3
L_46789f:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     edi, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx - 0x4], edi
        mov     edi, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], edi
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [esp + 0x18]
        add     edx, 0x4
        add     ecx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x18], eax
        jnz     L_46789f
        mov     ecx, dword ptr [esp + 0x7c]
        mov     edx, dword ptr [ecx + 0xc]
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    edi
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, dword ptr [esi + 0x10]
        lea     edx, [esp + 0x70]
        push    edx
        lea     eax, [esp + 0x68]
        push    eax
        push    ecx
        call    FUN_0047f1b0
        mov     eax, dword ptr [esi + 0x8]
        mov     edx, dword ptr [ebx]
        add     esp, 0x1c
        push    0x1
        push    edi
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x7c]
        cmp     byte ptr [ecx + 0x8], 0x1
        jnz     L_467a47
        lea     edx, [ebp + ebp*2]
        shl     edx, 0x2
        push    edx
        mov     dword ptr [esp + 0x14], 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_467942
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x38], ecx
        mov     ebx, eax
        jmp     L_467944
L_467942:
        xor     ebx, ebx
L_467944:
        mov     edi, dword ptr [esi + 0x10]
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_0040c410
        cmp     ebp, 0x1
        mov     esi, dword ptr [esi]
        mov     dword ptr [esp + 0x38], esi
        mov     byte ptr [esi], 0x0
        mov     dword ptr [esp + 0x30], 0x1
        jle     L_4679e5
        add     ebx, 0xc
        mov     dword ptr [esp + 0x2c], ebx
        lea     esi, [edi + 0xc]
L_467973:
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jle     L_4679a2
L_467981:
        mov     edi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [g_007b220c]
        push    edx
        push    edi
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_4679a2
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        add     edi, 0xc
        cmp     ebx, eax
        /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-4: 0xDB vs ref 0xDF) */
        __emit 0x7C
        __emit 0xDF
L_4679a2:
        cmp     ebx, dword ptr [esp + 0x10]
        jnz     L_4679ce
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, ecx
        inc     edi
        add     ecx, 0xc
        mov     dword ptr [esp + 0x2c], ecx
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esi + 0x8]
        mov     dword ptr [esp + 0x10], edi
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
L_4679ce:
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x38]
        mov     byte ptr [edx + eax], bl
        inc     eax
        add     esi, 0xc
        cmp     eax, ebp
        mov     dword ptr [esp + 0x30], eax
        jl      L_467973
L_4679e5:
        mov     eax, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x10]
        lea     esi, [eax + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jbe     L_467a24
        mov     esi, dword ptr [esi]
        mov     ebx, dword ptr [esp + 0x18]
        sub     ebx, esi
        mov     dword ptr [esp + 0x30], eax
L_467a0b:
        lea     ecx, [ebx + esi]
        push    ecx
        mov     ecx, esi
        call    FUN_0040c410
        mov     eax, dword ptr [esp + 0x30]
        add     esi, 0xc
        dec     eax
        mov     dword ptr [esp + 0x30], eax
        jnz     L_467a0b
L_467a24:
        mov     esi, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ebx]
        push    edi
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_467a65
L_467a47:
        xor     eax, eax
        test    ebp, ebp
        mov     edi, ebp
        jle     L_467a59
L_467a51:
        mov     ecx, dword ptr [esi]
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, ebp
        /* __emit: MSVC6 miscomputes backward jl rel8 (off-by-2: 0xF6 vs ref 0xF8) */
        __emit 0x7C
        __emit 0xF8
L_467a59:
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ebx]
        push    ebp
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
L_467a65:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [ebx]
        push    ebp
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x88]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x94]
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        jnz     L_467abd
        test    edi, edi
        jle     L_467b4d
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x3c], 0x0
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x40], 0x0
        mov     ebp, dword ptr [esp + 0x40]
        mov     ecx, edi
L_467aad:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_467aad
        jmp     L_467b4d
L_467abd:
        mov     ebp, dword ptr [esp + 0x80]
        mov     eax, dword ptr [ebx]
        push    0x0
        push    ebp
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebp], 0x3fff
        jbe     L_467b21
        test    edi, edi
        jle     L_467b4d
        mov     ecx, dword ptr [esi + 0x18]
        mov     eax, dword ptr [esi + 0x10]
        mov     edx, edi
L_467ae3:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [eax - 0x8]
        mov     ebp, dword ptr [esp + 0x44]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 0x8], ebp
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x48]
        mov     ebp, dword ptr [esp + 0x48]
        mov     dword ptr [ecx - 0x4], ebp
        jnz     L_467ae3
        jmp     L_467b4d
L_467b21:
        test    edi, edi
        jle     L_467b4d
        mov     eax, dword ptr [esi + 0x18]
        mov     dword ptr [esp + 0x4c], 0x0
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x50], 0x0
        mov     ebp, dword ptr [esp + 0x50]
        mov     ecx, edi
L_467b42:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_467b42
L_467b4d:
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [ebx]
        push    edi
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x2c]
        mov     edx, dword ptr [ebx]
        mov     eax, 0x41800000
        mov     dword ptr [ebx + 0x98], eax
        mov     dword ptr [ebx + 0x9c], eax
        mov     eax, dword ptr [esp + 0x84]
        push    0x1
        xor     esi, esi
        push    eax
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x90], esi
        mov     dword ptr [ebx + 0x94], esi
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [esp + 0x24]
        push    ebx
        call    FUN_00487ce0
        dec     word ptr [ebx + 0x8]
        cmp     word ptr [ebx + 0x8], si
        jnz     L_467ba9
        cmp     ebx, esi
        jz      L_467ba9
        mov     edx, dword ptr [ebx]
        push    0x1
        mov     ecx, ebx
        call    dword ptr [edx]
L_467ba9:
        mov     eax, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [esp + 0x20], eax
        jl      L_467639
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x24]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret
    }
}
