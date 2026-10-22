/*
 * FUN_004353a0 (2192 B) — MLR render/material setup function.
 * Builds/resizes a per-frame buffer object (local_8), computes light
 * colors, and drives virtual calls on the renderer object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_007b9590;
extern int    g_007da724;
extern int    g_007b958c;
extern double g_0076e3e8;
extern void  *g_0076b2ec;
extern int    g_007da5f0;
extern int    g_007b9810;
extern char   g_007b2314[];
extern char   g_007b2284[];
extern char   g_007b2288[];
extern char   g_007b228c[];
extern int    g_007b220c;
extern float  g_0076d064;
extern float  g_0076d070;
extern float  g_0076e2c0;

extern void __cdecl FUN_006f4950(void);
extern void *__cdecl FUN_004084d0(void);
extern int  __cdecl FUN_00487830(int, int);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern int  __cdecl FUN_00431900(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0047f1b0(void);
extern char __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_004555e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_004353a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
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
        jz      L_4353dc
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp - 0x24], eax
        jmp     L_4353df
L_4353dc:
        mov     dword ptr [ebp - 0x24], edi
L_4353df:
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
        mov     dword ptr [ebp - 0x18], eax
        jl      L_43542e
        mov     eax, 0x55
        mov     dword ptr [ebp - 0x18], eax
L_43542e:
        lea     edx, [eax + eax*2]
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0x1c], edx
L_435437:
        push    0xbc
        mov     dword ptr [g_007da5f0], 0x0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_435462
        mov     ecx, dword ptr [g_007b9810]
        push    ecx
        mov     ecx, eax
        call    FUN_00431900
        jmp     L_435464
L_435462:
        xor     eax, eax
L_435464:
        mov     ebx, dword ptr [eax + 0xc]
        mov     edi, dword ptr [ebx + 0x14]
        mov     esi, dword ptr [ebp - 0x1c]
        cmp     esi, edi
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0x4], ebx
        jz      L_435513
        test    esi, esi
        jbe     L_4354fd
        lea     edx, [esi + esi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_43549d
        lea     ecx, [esi - 1]
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0x14], eax
        jmp     L_4354a4
L_43549d:
        mov     dword ptr [ebp - 0x14], 0x0
L_4354a4:
        mov     ecx, dword ptr [ebx + 0x10]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x10], ecx
        jz      L_4354f5
        cmp     esi, edi
        mov     eax, esi
        jc      L_4354b6
        mov     eax, edi
L_4354b6:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_4354ec
        mov     edx, dword ptr [ebp - 0x14]
        lea     ecx, [eax + eax*2]
        lea     edi, [edx + ecx*4]
        mov     ecx, dword ptr [ebp - 0x10]
        sub     ecx, edx
        mov     dword ptr [ebp - 0x28], ecx
        lea     ebx, [eax + 1]
L_4354d1:
        mov     edx, dword ptr [ebp - 0x28]
        add     edx, edi
        push    edx
        mov     ecx, edi
        call    FUN_0040ccd0
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_4354d1
        mov     ecx, dword ptr [ebp - 0x10]
        mov     ebx, dword ptr [ebp - 0x4]
L_4354ec:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_4354f5:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebx + 0x10], eax
        jmp     L_435510
L_4354fd:
        mov     ecx, dword ptr [ebx + 0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x10], 0x0
L_435510:
        mov     dword ptr [ebx + 0x14], esi
L_435513:
        cmp     esi, dword ptr [ebx + 0x4]
        jz      L_435572
        test    esi, esi
        jbe     L_43555e
        push    esi
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [ebp - 0x14], eax
        jz      L_435557
        mov     eax, dword ptr [ebx + 0x4]
        cmp     esi, eax
        jnc     L_435537
        mov     eax, esi
L_435537:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_43554e
        mov     ecx, dword ptr [ebp - 0x14]
L_435541:
        mov     dl, byte ptr [edi + eax]
        mov     byte ptr [eax + ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_435541
L_43554e:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_435557:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebx], eax
        jmp     L_43556f
L_43555e:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0x0
L_43556f:
        mov     dword ptr [ebx + 0x4], esi
L_435572:
        cmp     esi, dword ptr [ebx + 0x1c]
        jz      L_4355fd
        test    esi, esi
        jbe     L_4355e7
        lea     edx, [esi*8]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_43559d
        lea     ecx, [esi - 1]
        mov     dword ptr [ebp - 0x30], ecx
        mov     edi, eax
        jmp     L_43559f
L_43559d:
        xor     edi, edi
L_43559f:
        mov     ecx, dword ptr [ebx + 0x18]
        test    ecx, ecx
        mov     dword ptr [ebp - 0x14], edi
        jz      L_4355e2
        mov     edx, dword ptr [ebx + 0x1c]
        cmp     esi, edx
        jnc     L_4355b2
        mov     edx, esi
L_4355b2:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_4355d6
        lea     eax, [edi + edx*8]
        sub     ecx, edi
        inc     edx
L_4355bf:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], edi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_4355bf
        mov     edi, dword ptr [ebp - 0x14]
L_4355d6:
        mov     eax, dword ptr [ebx + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4355e2:
        mov     dword ptr [ebx + 0x18], edi
        jmp     L_4355fa
L_4355e7:
        mov     ecx, dword ptr [ebx + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x18], 0x0
L_4355fa:
        mov     dword ptr [ebx + 0x1c], esi
L_4355fd:
        cmp     esi, dword ptr [ebx + 0x24]
        jz      L_43566f
        test    esi, esi
        jbe     L_435659
        lea     edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx + 0x20]
        add     esp, 0x4
        test    edx, edx
        mov     edi, eax
        mov     dword ptr [ebp - 0x28], edi
        jz      L_435654
        mov     ecx, dword ptr [ebx + 0x24]
        cmp     esi, ecx
        jnc     L_43562b
        mov     ecx, esi
L_43562b:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_435648
        lea     eax, [edi + ecx*4]
        sub     edx, edi
        inc     ecx
L_435638:
        mov     edi, dword ptr [edx + eax]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_435638
        mov     edi, dword ptr [ebp - 0x28]
L_435648:
        mov     eax, dword ptr [ebx + 0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_435654:
        mov     dword ptr [ebx + 0x20], edi
        jmp     L_43566c
L_435659:
        mov     ecx, dword ptr [ebx + 0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x20], 0x0
L_43566c:
        mov     dword ptr [ebx + 0x24], esi
L_43566f:
        mov     eax, dword ptr [ebx + 0x2c]
        cmp     esi, eax
        mov     dword ptr [ebp - 0x28], eax
        jz      L_435725
        test    esi, esi
        jbe     L_43570f
        lea     edx, [esi + esi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 0x4
        test    edi, edi
        jz      L_4356ad
        push    0x435c30
        push    esi
        push    0xc
        push    edi
        call    FUN_00406c90
        mov     dword ptr [ebp - 0x14], edi
        jmp     L_4356b4
L_4356ad:
        mov     dword ptr [ebp - 0x14], 0x0
L_4356b4:
        mov     eax, dword ptr [ebx + 0x28]
        test    eax, eax
        jz      L_435707
        mov     ebx, dword ptr [ebp - 0x28]
        cmp     esi, ebx
        jnc     L_4356c4
        mov     ebx, esi
L_4356c4:
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jz      L_4356f5
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [eax + 0x28]
        lea     edx, [ebx + ebx*2]
        sub     eax, ecx
        lea     edi, [ecx + edx*4]
        mov     dword ptr [ebp - 0x28], eax
        inc     ebx
L_4356e0:
        mov     ecx, dword ptr [ebp - 0x28]
        add     ecx, edi
        push    ecx
        mov     ecx, edi
        call    FUN_0040c410
        dec     ebx
        sub     edi, 0xc
        test    ebx, ebx
        ja      L_4356e0
L_4356f5:
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [edx + 0x28]
        push    eax
        call    FUN_004084e0
        mov     ebx, dword ptr [ebp - 0x4]
        add     esp, 0x4
L_435707:
        mov     eax, dword ptr [ebp - 0x14]
        mov     dword ptr [ebx + 0x28], eax
        jmp     L_435722
L_43570f:
        mov     ecx, dword ptr [ebx + 0x28]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x28], 0x0
L_435722:
        mov     dword ptr [ebx + 0x2c], esi
L_435725:
        mov     eax, dword ptr [ebp - 0x20]
        lea     edx, [eax + eax*2]
        lea     ecx, [ebp - 0x7c]
        lea     edx, [edx*4 + g_007b2314]
        mov     edi, 0x3
L_43573a:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     ebx, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx - 4], ebx
        mov     ebx, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     edi
        jnz     L_43573a
        mov     edi, dword ptr [ebp + 0x8]
        mov     ecx, dword ptr [edi + 0xc]
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [edi + 0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp - 0x68]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp - 0x74]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        lea     eax, [ebp - 0x80]
        lea     ebx, [ecx + 0x10]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     edx, dword ptr [ebp - 0x18]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edx
        push    0x0
        call    dword ptr [eax + 0xc]
        cmp     byte ptr [edi + 0x8], 0x1
        jnz     L_4358bc
        lea     eax, [esi + esi*2]
        shl     eax, 0x2
        push    eax
        mov     edi, 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_4357cf
        lea     ecx, [esi - 1]
        mov     dword ptr [ebp - 0x30], ecx
        mov     dword ptr [ebp - 0xc], eax
        jmp     L_4357d6
L_4357cf:
        mov     dword ptr [ebp - 0xc], 0x0
L_4357d6:
        mov     ebx, dword ptr [ebx]
        mov     ecx, dword ptr [ebp - 0xc]
        push    ebx
        call    FUN_0040c410
        cmp     esi, 0x1
        mov     edx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp - 0x30], eax
        mov     byte ptr [eax], 0x0
        mov     dword ptr [ebp - 0x10], 0x1
        jle     L_435866
        mov     eax, dword ptr [ebp - 0xc]
        add     ebx, 0xc
        add     eax, 0xc
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0x28], eax
        xor     ebx, ebx
L_435807:
        test    edi, edi
        jle     L_435833
        mov     esi, dword ptr [ebp - 0xc]
L_435810:
        mov     ecx, dword ptr [g_007b220c]
        mov     edx, dword ptr [ebp - 0x14]
        push    ecx
        push    esi
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_435830
        inc     ebx
        add     esi, 0xc
        cmp     ebx, edi
        jl      L_435810
L_435830:
        mov     esi, dword ptr [ebp - 0x1c]
L_435833:
        cmp     ebx, edi
        jnz     L_43584c
        mov     eax, dword ptr [ebp - 0x28]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp - 0x28], eax
        mov     eax, dword ptr [ebp - 0x14]
        push    eax
        inc     edi
        call    FUN_0040c410
L_43584c:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x30]
        mov     edx, dword ptr [ebp - 0x14]
        mov     byte ptr [ecx + eax], bl
        inc     eax
        add     edx, 0xc
        cmp     eax, esi
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0x14], edx
        __emit 0x7C          /* __emit: backward jl rel8 miscomputed by MSVC6 (off-by-2) due to intervening call-reloc */
        __emit 0xA1
L_435866:
        mov     edx, dword ptr [ebp - 0x4]
        lea     esi, [edx + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jbe     L_43589c
        mov     ebx, dword ptr [esi]
        mov     esi, dword ptr [ebp - 0xc]
        sub     esi, ebx
        mov     dword ptr [ebp - 0x28], eax
L_435885:
        lea     eax, [esi + ebx]
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp - 0x28]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp - 0x28], eax
        jnz     L_435885
L_43589c:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [ecx]
        lea     ebx, [eax + 0x10]
        mov     eax, dword ptr [ebx]
        push    edi
        push    eax
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [ebp - 0xc]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_4358e3
L_4358bc:
        xor     eax, eax
        test    esi, esi
        mov     edi, esi
        jle     L_4358d1
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [edx]
L_4358c9:
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, esi
        jl      L_4358c9
L_4358d1:
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ecx]
        lea     ebx, [edx + 0x10]
        mov     edx, dword ptr [ebx]
        push    esi
        push    edx
        call    dword ptr [eax + 0x24]
L_4358e3:
        mov     ecx, dword ptr [ebp - 0x1c]
        mov     edx, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ebp - 0x8]
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
        jnz     L_435933
        test    edi, edi
        jle     L_4359eb
        mov     eax, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [eax + 0x18]
        mov     dword ptr [ebp - 0x3c], esi
        mov     dword ptr [ebp - 0x38], esi
        mov     ecx, edi
        mov     edx, esi
L_435923:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_435923
        jmp     L_4359eb
L_435933:
        mov     ecx, dword ptr [esi + 0x4]
        and     ecx, 0xffffc7ff
        or      ecx, 0x400
        mov     dword ptr [esi + 0x4], ecx
        or      dword ptr [esi + 0x10], 0x3c00
        mov     ecx, dword ptr [ebp - 0x8]
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
        jbe     L_4359c0
        test    edi, edi
        jle     L_4359eb
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ebx]
        mov     edx, edi
L_435986:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x44]
        fld     dword ptr [eax - 8]
        mov     esi, dword ptr [ebp - 0x44]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x40]
        mov     esi, dword ptr [ebp - 0x40]
        mov     dword ptr [ecx - 4], esi
        jnz     L_435986
        jmp     L_4359eb
L_4359c0:
        test    edi, edi
        jle     L_4359eb
        mov     ecx, dword ptr [ebp - 0x4]
        mov     eax, dword ptr [ecx + 0x18]
        mov     dword ptr [ebp - 0x4c], 0x0
        mov     edx, dword ptr [ebp - 0x4c]
        mov     dword ptr [ebp - 0x48], 0x0
        mov     esi, dword ptr [ebp - 0x48]
        mov     ecx, edi
L_4359e0:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], esi
        add     eax, 0x8
        dec     ecx
        jnz     L_4359e0
L_4359eb:
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [eax + 0x18]
        mov     edx, dword ptr [ecx]
        push    edi
        push    eax
        call    dword ptr [edx + 0x2c]
        test    edi, edi
        mov     dword ptr [ebp - 0x10], 0x0
        jle     L_435ba1
        mov     ecx, dword ptr [ebp - 0x4]
        lea     edx, [ebp - 0x5c]
        lea     eax, [ecx + 0x10]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp - 0x30], edx
        xor     edx, edx
L_435a1a:
        fld     dword ptr [eax + edx + 8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax + edx + 4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax + edx]
        mov     dword ptr [ebp - 0x50], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp - 0x5c]
        fstp    dword ptr [ebp - 0x58]
        fstp    dword ptr [ebp - 0x54]
        fld     dword ptr [g_0076e2c0]
        mov     esi, dword ptr [ebp - 0x30]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
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
        mov     dword ptr [ebp - 0x2c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
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
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
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
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
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
        mov     ecx, dword ptr [ebp - 0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x2c], ecx
        mov     ebx, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ebp - 0x10]
        mov     eax, dword ptr [ebx + 0x20]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     dword ptr [eax + esi*4], ecx
        mov     eax, dword ptr [ebx + 0x10]
        fld     dword ptr [eax + edx + 8]
        mov     ecx, edx
        fld     dword ptr [eax + edx + 4]
        add     ecx, dword ptr [ebx + 0x28]
        fld     dword ptr [eax + edx]
        inc     esi
        fld     st(0)
        add     edx, 0xc
        cmp     esi, edi
        fmul    st(0), st(1)
        fld     st(2)
        mov     dword ptr [ebp - 0x10], esi
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        fdivr   dword ptr [g_0076d064]
        fld     st(0)
        fmul    dword ptr [eax + edx - 0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [eax + edx - 0x8]
        fstp    dword ptr [ecx + 4]
        fmul    dword ptr [eax + edx - 0x4]
        fstp    dword ptr [ecx + 8]
        jl      L_435a1a
L_435ba1:
        mov     ebx, dword ptr [ebp - 0x4]
        mov     esi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebx + 0x28]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xac]
        mov     eax, dword ptr [ebx + 0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xa4]
        push    0x428c0000
        push    0x42480000
        push    0x41800000
        push    0x41800000
        push    0x0
        push    0x0
        mov     ecx, esi
        call    FUN_004555e0
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
        jnz     L_435c11
        test    esi, esi
        jz      L_435c11
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_435c11:
        mov     eax, dword ptr [ebp - 0x20]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp - 0x20], eax
        jl      L_435437
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
