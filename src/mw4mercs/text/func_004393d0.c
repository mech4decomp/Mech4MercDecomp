/*
 * FUN_004393d0 (2018 B) — MLR render/lighting driver. Allocates a render
 * object, fills per-vertex buffers, dispatches through vtable, FPU color
 * packing.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void * __cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void * __cdecl FUN_00487830(int, void *);
extern void __cdecl FUN_0040ccd0(void *, void *);
extern void __cdecl FUN_0040c410(void *);
extern void __cdecl FUN_0040c2e0(int);
extern char __cdecl FUN_0041c540(void *, void *, int);
extern void __cdecl FUN_00423b80(int);
extern void __cdecl FUN_0047f1b0(void *, void *, void *, void *, int, int, int);
extern void __cdecl FUN_004555e0(int, int, int, int, int, int);
extern void __cdecl FUN_00487ce0(void *);
extern void __cdecl FUN_00435e00(void);
extern void __cdecl FUN_00439bc0(void *);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);

extern int g_7b9590;   /* 0x007b9590 */
extern int g_7da724;   /* 0x007da724 */
extern int g_7b958c;   /* 0x007b958c */
extern double g_76e3e8;/* 0x0076e3e8 */
extern void *g_76b2ec; /* 0x0076b2ec (IAT ceil) */
extern int g_7da5f0;   /* 0x007da5f0 */
extern int g_7b9824;   /* 0x007b9824 */
extern int g_7b2314;   /* 0x007b2314 */
extern int g_7b2284;   /* 0x007b2284 */
extern int g_7b2288;   /* 0x007b2288 */
extern int g_7b228c;   /* 0x007b228c */
extern int g_7b220c;   /* 0x007b220c */
extern float g_76d064; /* 0x0076d064 */
extern float g_76d070; /* 0x0076d070 */
extern float g_76e3f0; /* 0x0076e3f0 */

__declspec(naked) void FUN_004393d0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x94
        mov     eax, dword ptr [g_7b9590]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        xor     edi, edi
        add     esp, 4
        cmp     eax, edi
        jz      L_43940c
        mov     ecx, dword ptr [g_7da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp-0x34], eax
        jmp     L_43940f
L_43940c:
        mov     dword ptr [ebp-0x34], edi
L_43940f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_7b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_76e3e8]
        mov     esi, dword ptr [ebp+8]
        fild    dword ptr [esi+4]
        call    FUN_0075db86
        fmul    dword ptr [esi+0x10]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    dword ptr [g_76b2ec]
        add     esp, 8
        call    FUN_0075db4a
        lea     ecx, [eax+eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [ebp-0x3c], eax
        jl      L_43945e
        mov     eax, 0x55
        mov     dword ptr [ebp-0x3c], eax
L_43945e:
        lea     edx, [eax+eax*2]
        mov     dword ptr [ebp-0x2c], edi
        mov     dword ptr [ebp-0x30], edx
L_439467:
        push    0xb4
        mov     dword ptr [g_7da5f0], 0
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_439492
        mov     ecx, dword ptr [g_7b9824]
        push    ecx
        mov     ecx, eax
        call    FUN_00435e00
        jmp     L_439494
L_439492:
        xor     eax, eax
L_439494:
        mov     edi, dword ptr [eax+0xc]
        mov     ebx, dword ptr [ebp-0x30]
        lea     esi, [edi+0x10]
        mov     dword ptr [ebp-0xc], eax
        mov     eax, dword ptr [esi+4]
        cmp     ebx, eax
        mov     dword ptr [ebp-0x10], edi
        mov     dword ptr [ebp-8], esi
        mov     dword ptr [ebp-0x20], eax
        jz      L_439550
        test    ebx, ebx
        jbe     L_43953c
        lea     edx, [ebx+ebx*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4394da
        lea     ecx, [ebx-1]
        mov     dword ptr [ebp-0x14], ecx
        mov     dword ptr [ebp-4], eax
        jmp     L_4394e1
L_4394da:
        mov     dword ptr [ebp-4], 0
L_4394e1:
        cmp     dword ptr [esi], 0
        jz      L_439535
        mov     eax, dword ptr [ebp-0x20]
        cmp     ebx, eax
        jnc     L_4394ef
        mov     eax, ebx
L_4394ef:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_439521
        mov     edx, dword ptr [ebp-4]
        lea     ecx, [eax+eax*2]
        lea     edi, [edx+ecx*4]
        mov     ecx, dword ptr [ebp-8]
        mov     ecx, dword ptr [ecx]
        sub     ecx, edx
        mov     dword ptr [ebp-0x20], ecx
        lea     esi, [eax+1]
L_43950c:
        mov     edx, dword ptr [ebp-0x20]
        add     edx, edi
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     esi
        sub     edi, 0xc
        test    esi, esi
        ja      L_43950c
L_439521:
        mov     eax, dword ptr [ebp-8]
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_004084e0
        mov     esi, dword ptr [ebp-8]
        mov     edi, dword ptr [ebp-0x10]
        add     esp, 4
L_439535:
        mov     ecx, dword ptr [ebp-4]
        mov     dword ptr [esi], ecx
        jmp     L_43954d
L_43953c:
        mov     edx, dword ptr [esi]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_43954d:
        mov     dword ptr [esi+4], ebx
L_439550:
        cmp     ebx, dword ptr [edi+4]
        jz      L_4395b3
        test    ebx, ebx
        jbe     L_43959c
        push    ebx
        call    FUN_004084d0
        mov     edi, eax
        mov     eax, dword ptr [ebp-0x10]
        mov     esi, dword ptr [eax]
        add     esp, 4
        test    esi, esi
        jz      L_439595
        mov     ecx, eax
        mov     eax, dword ptr [ecx+4]
        cmp     ebx, eax
        jnc     L_439578
        mov     eax, ebx
L_439578:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_43958c
L_43957f:
        mov     cl, byte ptr [esi+eax]
        mov     edx, eax
        mov     byte ptr [eax+edi], cl
        dec     eax
        test    edx, edx
        jnz     L_43957f
L_43958c:
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_439595:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [eax], edi
        jmp     L_4395ad
L_43959c:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
L_4395ad:
        mov     edx, dword ptr [ebp-0x10]
        mov     dword ptr [edx+4], ebx
L_4395b3:
        mov     eax, dword ptr [ebp-0x10]
        lea     edi, [eax+0x18]
        cmp     ebx, dword ptr [edi+4]
        mov     dword ptr [ebp-0x24], edi
        mov     dword ptr [ebp-0x14], edi
        jz      L_43963e
        test    ebx, ebx
        jbe     L_43962a
        lea     ecx, [ebx*8+0]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4395e6
        lea     edx, [ebx-1]
        mov     dword ptr [ebp-0x14], edx
        mov     esi, eax
        jmp     L_4395e8
L_4395e6:
        xor     esi, esi
L_4395e8:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_439626
        mov     edx, dword ptr [edi+4]
        cmp     ebx, edx
        jnc     L_4395f7
        mov     edx, ebx
L_4395f7:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_43961b
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_439604:
        mov     edi, dword ptr [ecx+eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx+eax+4]
        mov     dword ptr [eax+4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_439604
        mov     edi, dword ptr [ebp-0x24]
L_43961b:
        mov     eax, dword ptr [edi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_439626:
        mov     dword ptr [edi], esi
        jmp     L_43963b
L_43962a:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
L_43963b:
        mov     dword ptr [edi+4], ebx
L_43963e:
        mov     edx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [edx+0x24]
        cmp     ebx, eax
        lea     esi, [edx+0x20]
        mov     dword ptr [ebp-0x20], esi
        mov     dword ptr [ebp-0x14], esi
        jz      L_4396b9
        test    ebx, ebx
        jbe     L_4396a5
        lea     eax, [ebx*4+0]
        push    eax
        call    FUN_004084d0
        mov     edx, dword ptr [esi]
        add     esp, 4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp-0x18], edi
        jz      L_4396a1
        mov     ecx, dword ptr [esi+4]
        cmp     ebx, ecx
        jnc     L_439679
        mov     ecx, ebx
L_439679:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_439696
        lea     eax, [edi+ecx*4]
        sub     edx, edi
        inc     ecx
L_439686:
        mov     edi, dword ptr [edx+eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 4
        test    ecx, ecx
        ja      L_439686
        mov     edi, dword ptr [ebp-0x18]
L_439696:
        mov     eax, dword ptr [esi]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4396a1:
        mov     dword ptr [esi], edi
        jmp     L_4396b6
L_4396a5:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
L_4396b6:
        mov     dword ptr [esi+4], ebx
L_4396b9:
        mov     eax, dword ptr [ebp-0x2c]
        lea     edx, [eax+eax*2]
        lea     ecx, [ebp-0x90]
        lea     edx, [edx*4+g_7b2314]
        mov     esi, 3
L_4396d1:
        mov     eax, dword ptr [edx]
        lea     eax, [eax+eax*2]
        shl     eax, 2
        mov     edi, dword ptr [eax+g_7b2284]
        mov     dword ptr [ecx-4], edi
        mov     edi, dword ptr [eax+g_7b2288]
        mov     eax, dword ptr [eax+g_7b228c]
        mov     dword ptr [ecx], edi
        mov     dword ptr [ecx+4], eax
        add     edx, 4
        add     ecx, 0xc
        dec     esi
        jnz     L_4396d1
        mov     esi, dword ptr [ebp+8]
        mov     ecx, dword ptr [esi+0xc]
        mov     edi, dword ptr [ebp-0x3c]
        mov     edx, dword ptr [esi+4]
        push    ecx
        push    edi
        push    edx
        lea     eax, [ebp-0x7c]
        push    eax
        mov     eax, dword ptr [ebp-8]
        lea     ecx, [ebp-0x88]
        push    ecx
        mov     ecx, dword ptr [eax]
        lea     edx, [ebp-0x94]
        push    edx
        push    ecx
        call    FUN_0047f1b0
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ecx]
        add     esp, 0x1c
        push    1
        push    edi
        push    0
        call    dword ptr [edx+0xc]
        cmp     byte ptr [esi+8], 1
        jnz     L_439856
        lea     eax, [ebx+ebx*2]
        shl     eax, 2
        push    eax
        mov     edi, 1
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_439765
        lea     ecx, [ebx-1]
        mov     dword ptr [ebp-0x14], ecx
        mov     dword ptr [ebp-0x1c], eax
        jmp     L_43976c
L_439765:
        mov     dword ptr [ebp-0x1c], 0
L_43976c:
        mov     edx, dword ptr [ebp-8]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [ebp-0x1c]
        push    eax
        mov     dword ptr [ebp-0x28], eax
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x10]
        mov     eax, dword ptr [eax]
        mov     esi, 1
        cmp     ebx, esi
        mov     dword ptr [ebp-0x14], eax
        mov     byte ptr [eax], 0
        mov     dword ptr [ebp-0x18], esi
        jle     L_439804
        mov     ecx, dword ptr [ebp-0x28]
        mov     edx, dword ptr [ebp-0x1c]
        add     ecx, 0xc
        add     edx, 0xc
        mov     dword ptr [ebp-4], ecx
        mov     dword ptr [ebp-0x28], edx
L_4397a6:
        xor     ebx, ebx
        test    edi, edi
        jle     L_4397d1
        mov     esi, dword ptr [ebp-0x1c]
L_4397af:
        mov     eax, dword ptr [g_7b220c]
        mov     ecx, dword ptr [ebp-4]
        push    eax
        push    esi
        push    ecx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_4397ce
        inc     ebx
        add     esi, 0xc
        cmp     ebx, edi
        jl      L_4397af
L_4397ce:
        mov     esi, dword ptr [ebp-0x18]
L_4397d1:
        cmp     ebx, edi
        jnz     L_4397ea
        mov     eax, dword ptr [ebp-0x28]
        mov     edx, dword ptr [ebp-4]
        mov     ecx, eax
        add     eax, 0xc
        push    edx
        inc     edi
        mov     dword ptr [ebp-0x28], eax
        call    FUN_0040c410
L_4397ea:
        mov     eax, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [ebp-4]
        mov     byte ptr [eax+esi], bl
        mov     eax, dword ptr [ebp-0x30]
        inc     esi
        add     ecx, 0xc
        cmp     esi, eax
        mov     dword ptr [ebp-0x18], esi
        mov     dword ptr [ebp-4], ecx
        jl      L_4397a6
L_439804:
        mov     esi, dword ptr [ebp-8]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi+4]
        test    eax, eax
        jbe     L_439839
        mov     ecx, esi
        mov     ebx, dword ptr [ecx]
        mov     esi, dword ptr [ebp-0x1c]
        sub     esi, ebx
        mov     dword ptr [ebp-0x18], eax
L_439822:
        lea     edx, [esi+ebx]
        push    edx
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x18]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x18], eax
        jnz     L_439822
L_439839:
        mov     edx, dword ptr [ebp-8]
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [edx]
        mov     eax, dword ptr [ecx]
        push    edi
        push    edx
        call    dword ptr [eax+0x24]
        mov     eax, dword ptr [ebp-0x1c]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        jmp     L_4398c0
L_439856:
        xor     esi, esi
        test    ebx, ebx
        mov     edi, ebx
        jle     L_4398b1
        mov     ecx, dword ptr [ebp-0x10]
        mov     dword ptr [ebp-4], ecx
L_439864:
        mov     edx, esi
        xor     eax, eax
        and     edx, 0xff
        push    edx
        lea     ecx, [ebp-0x44]
        mov     dword ptr [ebp-0x44], eax
        mov     dword ptr [ebp-0x40], eax
        call    FUN_00423b80
        mov     ecx, dword ptr [ebp-4]
        lea     eax, [ebp-0x44]
        cmp     ecx, eax
        jz      L_439893
        lea     ecx, [ebp-0x44]
        push    ecx
        mov     ecx, dword ptr [ebp-4]
        call    FUN_00439bc0
L_439893:
        mov     eax, dword ptr [ebp-0x44]
        test    eax, eax
        jz      L_4398a3
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4398a3:
        mov     ecx, dword ptr [ebp-4]
        inc     esi
        add     ecx, 8
        cmp     esi, ebx
        mov     dword ptr [ebp-4], ecx
        jl      L_439864
L_4398b1:
        mov     eax, dword ptr [ebp-8]
        mov     ecx, dword ptr [ebp-0xc]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    eax
        call    dword ptr [edx+0x24]
L_4398c0:
        mov     eax, dword ptr [ebp-0x30]
        mov     ecx, dword ptr [ebp-0x10]
        mov     esi, dword ptr [ebp-0xc]
        mov     edx, dword ptr [esi]
        push    eax
        mov     eax, dword ptr [ecx]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x88]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x94]
        mov     ebx, dword ptr [ebp+0xc]
        test    ebx, ebx
        jnz     L_43990f
        test    edi, edi
        jle     L_4399cd
        mov     eax, dword ptr [ebp-0x24]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x58], ebx
        mov     dword ptr [ebp-0x54], ebx
        mov     ecx, edi
        mov     edx, ebx
L_4398ff:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+4], ebx
        add     eax, 8
        dec     ecx
        jnz     L_4398ff
        jmp     L_4399cd
L_43990f:
        mov     ecx, dword ptr [ebx+4]
        and     ecx, 0xffffc7ff
        or      ecx, 0x400
        mov     dword ptr [ebx+4], ecx
        mov     ecx, dword ptr [ebx+0x10]
        mov     esi, 0x3c00
        or      ecx, esi
        mov     dword ptr [ebx+0x10], ecx
        mov     ecx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ecx]
        push    0
        push    ebx
        call    dword ptr [edx+0x14]
        mov     edx, dword ptr [ebx+4]
        mov     ecx, dword ptr [ebx+0x10]
        mov     eax, dword ptr [ebx]
        and     edx, 0xffffc3ff
        or      ecx, esi
        test    eax, 0x3fff
        mov     dword ptr [ebx+4], edx
        mov     dword ptr [ebx+0x10], ecx
        jbe     L_4399a0
        test    edi, edi
        jle     L_4399ca
        mov     eax, dword ptr [ebp-0x24]
        mov     edx, dword ptr [ebp-8]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [edx]
        mov     edx, edi
L_439966:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_76d064]
        add     ecx, 8
        dec     edx
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [ebp-0x60]
        fld     dword ptr [eax-8]
        mov     esi, dword ptr [ebp-0x60]
        fadd    dword ptr [g_76d064]
        mov     dword ptr [ecx-8], esi
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [ebp-0x5c]
        mov     esi, dword ptr [ebp-0x5c]
        mov     dword ptr [ecx-4], esi
        jnz     L_439966
        jmp     L_4399ca
L_4399a0:
        test    edi, edi
        jle     L_4399ca
        mov     eax, dword ptr [ebp-0x24]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x50], 0
        mov     edx, dword ptr [ebp-0x50]
        mov     dword ptr [ebp-0x4c], 0
        mov     ebx, dword ptr [ebp-0x4c]
        mov     ecx, edi
L_4399bf:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+4], ebx
        add     eax, 8
        dec     ecx
        jnz     L_4399bf
L_4399ca:
        mov     esi, dword ptr [ebp-0xc]
L_4399cd:
        mov     eax, dword ptr [ebp-0x24]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [esi]
        push    edi
        push    ecx
        mov     ecx, esi
        call    dword ptr [edx+0x2c]
        xor     edx, edx
        test    edi, edi
        jle     L_439b33
        lea     eax, [ebp-0x70]
        mov     dword ptr [ebp-0x14], eax
        mov     dword ptr [ebp-4], edx
L_4399ee:
        mov     ecx, dword ptr [ebp-8]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [ebp-4]
        fld     dword ptr [eax+ecx+8]
        add     eax, ecx
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [g_76d070]
        fld     dword ptr [eax+4]
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [g_76d070]
        fld     dword ptr [eax]
        mov     dword ptr [ebp-0x64], 0x3f800000
        fadd    dword ptr [g_76d064]
        fmul    dword ptr [g_76d070]
        fstp    dword ptr [ebp-0x70]
        fstp    dword ptr [ebp-0x6c]
        fstp    dword ptr [ebp-0x68]
        fld     dword ptr [g_76e3f0]
        mov     esi, dword ptr [ebp-0x14]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x38], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x38]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x38], ecx
        fld     dword ptr [esi+4]
        mov     ecx, dword ptr [esi+4]
        fadd    st(0), st(1)
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x38]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x38], ecx
        mov     ecx, dword ptr [esi+8]
        fadd    dword ptr [esi+8]
        rcl     ecx, 1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x48]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x48]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x38]
        shl     ecx, 8
        or      ecx, ebx
        mov     dword ptr [ebp-0x38], ecx
        mov     eax, dword ptr [ebp-0x20]
        mov     ecx, dword ptr [eax]
        mov     eax, dword ptr [ebp-0x38]
        mov     dword ptr [ecx+edx*4], eax
        mov     ecx, dword ptr [ebp-4]
        inc     edx
        add     ecx, 0xc
        cmp     edx, edi
        mov     dword ptr [ebp-4], ecx
        jl      L_4399ee
L_439b33:
        mov     eax, dword ptr [ebp-0x20]
        mov     ecx, dword ptr [eax]
        mov     ebx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0xa4]
        push    0x428c0000
        push    0x42480000
        push    0x41800000
        push    0x41800000
        push    0
        push    0
        mov     ecx, ebx
        call    FUN_004555e0
        mov     eax, dword ptr [ebp+0x10]
        mov     edx, dword ptr [ebx]
        push    1
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        mov     ecx, dword ptr [ebp-0x34]
        push    ebx
        call    FUN_00487ce0
        dec     word ptr [ebx+8]
        cmp     word ptr [ebx+8], 0
        jnz     L_439b93
        test    ebx, ebx
        jz      L_439b93
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
L_439b93:
        mov     eax, dword ptr [ebp-0x2c]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp-0x2c], eax
        jl      L_439467
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp-0x34]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
