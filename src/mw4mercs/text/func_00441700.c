/*
 * FUN_00441700 (1971 B) — MLR mesh build/render (__cdecl, RET).
 * Allocates mesh buffers, transforms vertices (FPU), builds color/index
 * data, and dispatches through virtual calls. Heavy absolute-global use.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void  FUN_006f4950(void);
extern void *FUN_004084d0(void);
extern void  FUN_00487830(void);
extern void  FUN_006f49a0(void);
extern void  FUN_0075db86(void);
extern void  FUN_0075db4a(void);
extern void  FUN_0040ccd0(void);
extern void  FUN_004084e0(void);
extern void  FUN_0040c410(void);
extern void  FUN_0041c540(void);
extern void  FUN_0040c2e0(void);
extern void  FUN_0047f1b0(void);
extern void  FUN_00487ce0(void);
extern void  FUN_0043e480(void);

extern void (*g_0076b2ec)(void);

extern int    g_007b9590;
extern int    g_007da724;
extern int    g_007b958c;
extern double g_0076e3e8;
extern int    g_007da5f0;
extern int    g_007b9850;
extern int    g_7b2314;
extern int    g_7b2284;
extern int    g_7b2288;
extern int    g_7b228c;
extern int    g_007b220c;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e5d0;

__declspec(naked) void FUN_00441700(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x88
        mov     eax, dword ptr [g_007b9590]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 0x4
        cmp     eax, edi
        jz      L_73c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp - 0x24], eax
        jmp     L_73f
L_73c:
        mov     dword ptr [ebp - 0x24], edi
L_73f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp + 0x8]
        fild    dword ptr [esi + 0x4]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        lea     ecx, [eax + eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [ebp - 0x20], eax
        jl      L_78e
        mov     eax, 0x55
        mov     dword ptr [ebp - 0x20], eax
L_78e:
        lea     edx, [eax + eax*2]
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x14], edx
        xor     esi, esi
L_797:
        push    0x94
        mov     dword ptr [g_007da5f0], esi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_7c3
        mov     ecx, dword ptr [g_007b9850]
        push    ecx
        mov     ecx, eax
        call    FUN_0043e480
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_7c6
L_7c3:
        mov     dword ptr [ebp - 0xc], esi
L_7c6:
        mov     edx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [edx + 0xc]
        mov     esi, dword ptr [edi + 0x14]
        mov     ebx, dword ptr [ebp - 0x14]
        cmp     ebx, esi
        mov     dword ptr [ebp - 0x8], edi
        jz      L_873
        test    ebx, ebx
        jbe     L_85d
        lea     eax, [ebx + ebx*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_7ff
        lea     ecx, [ebx - 0x1]
        mov     dword ptr [ebp - 0x1c], ecx
        mov     dword ptr [ebp - 0x4], eax
        jmp     L_806
L_7ff:
        mov     dword ptr [ebp - 0x4], 0x0
L_806:
        mov     ecx, dword ptr [edi + 0x10]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x10], ecx
        jz      L_855
        cmp     ebx, esi
        mov     eax, ebx
        jc      L_818
        mov     eax, esi
L_818:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_846
        mov     ecx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [ebp - 0x10]
        lea     edx, [eax + eax*2]
        lea     edi, [ecx + edx*4]
        sub     ebx, ecx
        lea     esi, [eax + 0x1]
L_830:
        lea     eax, [ebx + edi]
        push    eax
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     esi
        sub     edi, 0xc
        test    esi, esi
        ja      L_830
        mov     ecx, dword ptr [ebp - 0x10]
L_846:
        push    ecx
        call    FUN_004084e0
        mov     edi, dword ptr [ebp - 0x8]
        mov     ebx, dword ptr [ebp - 0x14]
        add     esp, 0x4
L_855:
        mov     ecx, dword ptr [ebp - 0x4]
        mov     dword ptr [edi + 0x10], ecx
        jmp     L_870
L_85d:
        mov     edx, dword ptr [edi + 0x10]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x10], 0x0
L_870:
        mov     dword ptr [edi + 0x14], ebx
L_873:
        cmp     ebx, dword ptr [edi + 0x4]
        jz      L_8cb
        test    ebx, ebx
        jbe     L_8b7
        push    ebx
        call    FUN_004084d0
        mov     ecx, dword ptr [edi]
        add     esp, 0x4
        test    ecx, ecx
        mov     esi, eax
        jz      L_8b3
        mov     eax, dword ptr [edi + 0x4]
        cmp     ebx, eax
        jnc     L_896
        mov     eax, ebx
L_896:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_8aa
L_89d:
        mov     dl, byte ptr [ecx + eax]
        mov     byte ptr [eax + esi], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_89d
L_8aa:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_8b3:
        mov     dword ptr [edi], esi
        jmp     L_8c8
L_8b7:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi], 0x0
L_8c8:
        mov     dword ptr [edi + 0x4], ebx
L_8cb:
        mov     esi, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [edi + 0x1c]
        lea     esi, [esi + esi*2]
        shl     esi, 0x1
        cmp     esi, eax
        jz      L_963
        test    esi, esi
        jbe     L_94a
        lea     ecx, [esi*8]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_900
        lea     edx, [esi - 0x1]
        mov     dword ptr [ebp - 0x1c], edx
        mov     ebx, eax
        jmp     L_902
L_900:
        xor     ebx, ebx
L_902:
        mov     ecx, dword ptr [edi + 0x18]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x4], ebx
        jz      L_945
        mov     edx, dword ptr [edi + 0x1c]
        cmp     esi, edx
        jnc     L_915
        mov     edx, esi
L_915:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_939
L_922:
        lea     eax, [ebx + edx*8]
        sub     ecx, ebx
        inc     edx
        mov     ebx, dword ptr [ecx + eax]
        mov     dword ptr [eax], ebx
        mov     ebx, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], ebx
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xE6 vs ref 0xEC) */
        __emit 0x77
        __emit 0xEC
        mov     ebx, dword ptr [ebp - 0x4]
L_939:
        mov     eax, dword ptr [edi + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_945:
        mov     dword ptr [edi + 0x18], ebx
        jmp     L_95d
L_94a:
        mov     ecx, dword ptr [edi + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x18], 0x0
L_95d:
        mov     ebx, dword ptr [ebp - 0x14]
        mov     dword ptr [edi + 0x1c], esi
L_963:
        cmp     ebx, dword ptr [edi + 0x24]
        jz      L_9d5
        test    ebx, ebx
        jbe     L_9bf
        lea     edx, [ebx*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [edi + 0x20]
        add     esp, 0x4
        test    edx, edx
        mov     esi, eax
        mov     dword ptr [ebp - 0x18], esi
        jz      L_9ba
        mov     ecx, dword ptr [edi + 0x24]
        cmp     ebx, ecx
        jnc     L_991
        mov     ecx, ebx
L_991:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_9ae
L_99e:
        lea     eax, [esi + ecx*4]
        sub     edx, esi
        inc     ecx
        mov     esi, dword ptr [edx + eax]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xED vs ref 0xF3) */
        __emit 0x77
        __emit 0xF3
        mov     esi, dword ptr [ebp - 0x18]
L_9ae:
        mov     eax, dword ptr [edi + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_9ba:
        mov     dword ptr [edi + 0x20], esi
        jmp     L_9d2
L_9bf:
        mov     ecx, dword ptr [edi + 0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [edi + 0x20], 0x0
L_9d2:
        mov     dword ptr [edi + 0x24], ebx
L_9d5:
        mov     eax, dword ptr [ebp - 0x28]
        lea     edx, [eax + eax*2]
        lea     ecx, [ebp - 0x84]
        lea     edx, [edx*4 + g_7b2314]
        mov     esi, 0x3
L_9ed:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     ebx, dword ptr [eax + g_7b2284]
        mov     dword ptr [ecx - 0x4], ebx
        mov     ebx, dword ptr [eax + g_7b2288]
        mov     eax, dword ptr [eax + g_7b228c]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 0x4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     esi
        jnz     L_9ed
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [ebp - 0x20]
        mov     eax, dword ptr [esi + 0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp - 0x70]
        push    ecx
        mov     ecx, dword ptr [edi + 0x10]
        lea     edx, [ebp - 0x7c]
        push    edx
        lea     eax, [ebp - 0x88]
        lea     ebx, [edi + 0x10]
        push    eax
        push    ecx
        call    FUN_0047f1b0
        mov     eax, dword ptr [ebp - 0x20]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    eax
        push    0x0
        call    dword ptr [edx + 0xc]
        cmp     byte ptr [esi + 0x8], 0x1
        jnz     L_b73
        mov     esi, dword ptr [ebp - 0x14]
        lea     ecx, [esi + esi*2]
        shl     ecx, 0x2
        push    ecx
        mov     edi, 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_a83
        dec     esi
        mov     dword ptr [ebp - 0x1c], esi
        mov     dword ptr [ebp - 0x10], eax
        jmp     L_a8a
L_a83:
        mov     dword ptr [ebp - 0x10], 0x0
L_a8a:
        mov     ebx, dword ptr [ebx]
        mov     ecx, dword ptr [ebp - 0x10]
        push    ebx
        call    FUN_0040c410
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x1c], eax
        mov     byte ptr [eax], 0x0
        mov     eax, dword ptr [ebp - 0x14]
        mov     esi, 0x1
        cmp     eax, esi
        mov     dword ptr [ebp - 0x18], esi
        jle     L_b1d
        mov     eax, dword ptr [ebp - 0x10]
        add     ebx, 0xc
        add     eax, 0xc
        mov     dword ptr [ebp - 0x4], ebx
        mov     dword ptr [ebp - 0x2c], eax
        xor     ebx, ebx
L_abe:
        test    edi, edi
        jle     L_aea
        mov     esi, dword ptr [ebp - 0x10]
L_ac7:
        mov     ecx, dword ptr [g_007b220c]
        mov     edx, dword ptr [ebp - 0x4]
        push    ecx
        push    esi
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_ae7
        inc     ebx
        add     esi, 0xc
        cmp     ebx, edi
        jl      L_ac7
L_ae7:
        mov     esi, dword ptr [ebp - 0x18]
L_aea:
        cmp     ebx, edi
        jnz     L_b03
        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp - 0x2c], eax
        mov     eax, dword ptr [ebp - 0x4]
        push    eax
        inc     edi
        call    FUN_0040c410
L_b03:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x14]
        mov     byte ptr [ecx + esi], bl
        mov     ecx, dword ptr [ebp - 0x4]
        inc     esi
        add     ecx, 0xc
        cmp     esi, eax
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 0x4], ecx
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xA3 vs ref 0xA1) */
        __emit 0x7C
        __emit 0xA1
L_b1d:
        mov     edx, dword ptr [ebp - 0x8]
        lea     esi, [edx + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jbe     L_b53
        mov     ebx, dword ptr [esi]
        mov     esi, dword ptr [ebp - 0x10]
        sub     esi, ebx
        mov     dword ptr [ebp - 0x18], eax
L_b3c:
        lea     eax, [esi + ebx]
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp - 0x18]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0x18], eax
        jnz     L_b3c
L_b53:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        lea     ebx, [eax + 0x10]
        mov     eax, dword ptr [ebx]
        push    edi
        push    eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp - 0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_b9b
L_b73:
        mov     edi, dword ptr [ebp - 0x14]
        xor     eax, eax
        test    edi, edi
        jle     L_b89
L_b81:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [edx]
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, edi
        /* __emit: MSVC6 miscomputes backward jcc rel-offset (0xF3 vs ref 0xF8) */
        __emit 0x7C
        __emit 0xF8
L_b89:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ecx]
        lea     ebx, [edx + 0x10]
        mov     edx, dword ptr [ebx]
        push    edi
        push    edx
        call    dword ptr [eax + 0x24]
L_b9b:
        mov     ecx, dword ptr [ebp - 0x14]
        mov     edx, dword ptr [ebp - 0x8]
        mov     esi, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x88]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x94]
        mov     esi, dword ptr [ebp + 0xc]
        test    esi, esi
        jnz     L_bec
        lea     ecx, [edi + edi]
        test    ecx, ecx
        jle     L_ce3
        mov     eax, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x54], esi
        mov     dword ptr [ebp - 0x50], esi
        mov     edx, esi
L_bdc:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_bdc
        jmp     L_ce3
L_bec:
        mov     ecx, dword ptr [esi + 0x4]
        and     ecx, 0xffffc7ff
        or      ecx, 0x400
        mov     dword ptr [esi + 0x4], ecx
        or      dword ptr [esi + 0x10], 0x3c00
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    esi
        call    dword ptr [edx + 0x14]
        mov     edx, dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x10]
        mov     eax, dword ptr [esi]
        and     edx, 0xffffc3ff
        or      ecx, 0x3c00
        test    eax, 0x3fff
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x10], ecx
        jbe     L_cb7
        test    edi, edi
        jle     L_ce3
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebx]
        lea     edx, [ecx + edi*8]
        mov     esi, edi
L_c4a:
        fld     dword ptr [eax]
        add     ecx, 0x8
        fadd    dword ptr [g_0076d064]
        add     edx, 0x8
        add     eax, 0xc
        dec     esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x4c]
        fld     dword ptr [eax - 0x8]
        mov     ebx, dword ptr [ebp - 0x4c]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 0x8], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x48]
        fld     dword ptr [eax - 0xc]
        mov     ebx, dword ptr [ebp - 0x48]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 0x4], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x3c]
        fld     dword ptr [eax - 0x4]
        mov     ebx, dword ptr [ebp - 0x3c]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [edx - 0x8], ebx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x38]
        mov     ebx, dword ptr [ebp - 0x38]
        mov     dword ptr [edx - 0x4], ebx
        jnz     L_c4a
        jmp     L_ce3
L_cb7:
        lea     ecx, [edi + edi]
        test    ecx, ecx
        jle     L_ce3
        mov     edx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [edx + 0x18]
        mov     dword ptr [ebp - 0x44], 0x0
        mov     edx, dword ptr [ebp - 0x44]
        mov     dword ptr [ebp - 0x40], 0x0
        mov     esi, dword ptr [ebp - 0x40]
L_cd8:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_cd8
L_ce3:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [ecx]
        lea     edx, [edi + edi]
        push    edx
        mov     edx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [edx + 0x18]
        push    edx
        call    dword ptr [eax + 0x2c]
        xor     edx, edx
        test    edi, edi
        jle     L_e52
        lea     eax, [ebp - 0x64]
        mov     dword ptr [ebp - 0x1c], eax
        mov     dword ptr [ebp - 0x4], edx
L_d09:
        mov     ecx, dword ptr [ebp - 0x8]
        lea     eax, [ecx + 0x10]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [ebp - 0x4]
        fld     dword ptr [eax + ecx + 0x8]
        add     eax, ecx
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax + 0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax]
        mov     dword ptr [ebp - 0x58], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x64]
        fstp    dword ptr [ebp - 0x60]
        fstp    dword ptr [ebp - 0x5c]
        fld     dword ptr [g_0076e5d0]
        mov     esi, dword ptr [ebp - 0x1c]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x30], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x30]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x30], ecx
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp - 0x30]
        mov     dword ptr [ecx + edx*4], eax
        mov     ecx, dword ptr [ebp - 0x4]
        inc     edx
        add     ecx, 0xc
        cmp     edx, edi
        mov     dword ptr [ebp - 0x4], ecx
        /* __emit: MSVC6 miscomputes backward jcc rel32 (0xFFFFFEB5 vs ref 0xFFFFFEB7) */
        __emit 0x0F
        __emit 0x8C
        __emit 0xB7
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
L_e52:
        mov     eax, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [esi]
        push    edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx + 0xa4]
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [esi]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [ebp - 0x24]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L_e94
        test    esi, esi
        jz      L_e94
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_e94:
        mov     eax, dword ptr [ebp - 0x28]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp - 0x28], eax
        /* __emit: MSVC6 miscomputes backward jcc rel32 (0xFFFFF8F5 vs ref 0xFFFFF8F3) */
        __emit 0x0F
        __emit 0x8C
        __emit 0xF3
        __emit 0xF8
        __emit 0xFF
        __emit 0xFF
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp - 0x24]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
