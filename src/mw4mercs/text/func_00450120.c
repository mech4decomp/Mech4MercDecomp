/*
 * FUN_00450120 (2112 B) — large object-list processing routine with
 * FPU color/normal math and several dynamic-array resize helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int     g_007b9590;
extern int     g_007da724;
extern int     g_007b958c;
extern double  g_0076e3e8;
extern int    *g_0076b2ec;   /* IAT (ceil) */
extern int     g_007da5f0;
extern int     g_007b98b4;
extern int     g_007b220c;
extern float   g_0076d064;
extern float   g_0076d070;
extern float   g_0076e93c;
extern int     g_007b2314;
extern int     g_007b2284;
extern int     g_007b2288;
extern int     g_007b228c;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_00487ce0(void);
extern void __cdecl FUN_0044d070(void);

__declspec(naked) void FUN_00450120(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x80
        mov     eax, [g_007b9590]
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
        jz      L_5015c
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [ebp-0x1c], eax
        jmp     L_5015f
L_5015c:
        mov     dword ptr [ebp-0x1c], edi
L_5015f:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007b958c]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [ebp+0x8]
        fild    dword ptr [esi+0x4]
        call    FUN_0075db86
        fmul    dword ptr [esi+0x10]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 0x8
        call    FUN_0075db4a
        lea     ecx, [eax+eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [ebp-0x14], eax
        jl      L_501ae
        mov     eax, 0x55
        mov     dword ptr [ebp-0x14], eax
L_501ae:
        lea     edx, [eax+eax*2]
        mov     dword ptr [ebp-0x18], edi
        mov     dword ptr [ebp-0x20], edx
L_501b7:
        push    0x78
        mov     dword ptr [g_007da5f0], 0
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_501df
        mov     ecx, dword ptr [g_007b98b4]
        push    ecx
        mov     ecx, eax
        call    FUN_0044d070
        jmp     L_501e1
L_501df:
        xor     eax, eax
L_501e1:
        mov     ebx, dword ptr [eax+0xc]
        mov     esi, dword ptr [ebx+0x14]
        mov     edi, dword ptr [ebp-0x20]
        cmp     edi, esi
        mov     dword ptr [ebp-0x8], eax
        mov     dword ptr [ebp-0x4], ebx
        jz      L_50290
        test    edi, edi
        jbe     L_5027a
        lea     edx, [edi+edi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5021a
        lea     ecx, [edi-1]
        mov     dword ptr [ebp-0x30], ecx
        mov     dword ptr [ebp-0x10], eax
        jmp     L_50221
L_5021a:
        mov     dword ptr [ebp-0x10], 0
L_50221:
        mov     ecx, dword ptr [ebx+0x10]
        test    ecx, ecx
        mov     dword ptr [ebp-0xc], ecx
        jz      L_50272
        cmp     edi, esi
        mov     eax, edi
        jc      L_50233
        mov     eax, esi
L_50233:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_50269
        mov     edx, dword ptr [ebp-0x10]
        lea     ecx, [eax+eax*2]
        lea     esi, [edx+ecx*4]
        mov     ecx, dword ptr [ebp-0xc]
        sub     ecx, edx
        mov     dword ptr [ebp-0x28], ecx
        lea     ebx, [eax+1]
L_5024e:
        mov     edx, dword ptr [ebp-0x28]
        add     edx, esi
        push    edx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     ebx
        sub     esi, 0xc
        test    ebx, ebx
        ja      L_5024e
        mov     ecx, dword ptr [ebp-0xc]
        mov     ebx, dword ptr [ebp-0x4]
L_50269:
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
L_50272:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebx+0x10], eax
        jmp     L_5028d
L_5027a:
        mov     ecx, dword ptr [ebx+0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x10], 0
L_5028d:
        mov     dword ptr [ebx+0x14], edi
L_50290:
        cmp     edi, dword ptr [ebx+0x4]
        jz      L_502ef
        test    edi, edi
        jbe     L_502db
        push    edi
        call    FUN_004084d0
        mov     esi, dword ptr [ebx]
        add     esp, 0x4
        test    esi, esi
        mov     dword ptr [ebp-0x10], eax
        jz      L_502d4
        mov     eax, dword ptr [ebx+0x4]
        cmp     edi, eax
        jnc     L_502b4
        mov     eax, edi
L_502b4:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_502cb
        mov     ecx, dword ptr [ebp-0x10]
L_502be:
        mov     dl, byte ptr [esi+eax]
        mov     byte ptr [eax+ecx], dl
        mov     edx, eax
        dec     eax
        test    edx, edx
        jnz     L_502be
L_502cb:
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_502d4:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebx], eax
        jmp     L_502ec
L_502db:
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx], 0
L_502ec:
        mov     dword ptr [ebx+0x4], edi
L_502ef:
        cmp     edi, dword ptr [ebx+0x1c]
        jz      L_5037a
        test    edi, edi
        jbe     L_50364
        lea     edx, [edi*8]
        push    edx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5031a
        lea     ecx, [edi-1]
        mov     dword ptr [ebp-0x30], ecx
        mov     esi, eax
        jmp     L_5031c
L_5031a:
        xor     esi, esi
L_5031c:
        mov     ecx, dword ptr [ebx+0x18]
        test    ecx, ecx
        mov     dword ptr [ebp-0x10], esi
        jz      L_5035f
        mov     edx, dword ptr [ebx+0x1c]
        cmp     edi, edx
        jnc     L_5032f
        mov     edx, edi
L_5032f:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_50353
        lea     eax, [esi+edx*8]
        sub     ecx, esi
        inc     edx
L_5033c:
        mov     esi, dword ptr [ecx+eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx+eax+0x4]
        mov     dword ptr [eax+0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_5033c
        mov     esi, dword ptr [ebp-0x10]
L_50353:
        mov     eax, dword ptr [ebx+0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_5035f:
        mov     dword ptr [ebx+0x18], esi
        jmp     L_50377
L_50364:
        mov     ecx, dword ptr [ebx+0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x18], 0
L_50377:
        mov     dword ptr [ebx+0x1c], edi
L_5037a:
        cmp     edi, dword ptr [ebx+0x24]
        jz      L_503ec
        test    edi, edi
        jbe     L_503d6
        lea     edx, [edi*4]
        push    edx
        call    FUN_004084d0
        mov     edx, dword ptr [ebx+0x20]
        add     esp, 0x4
        test    edx, edx
        mov     esi, eax
        mov     dword ptr [ebp-0x28], esi
        jz      L_503d1
        mov     ecx, dword ptr [ebx+0x24]
        cmp     edi, ecx
        jnc     L_503a8
        mov     ecx, edi
L_503a8:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_503c5
        lea     eax, [esi+ecx*4]
        sub     edx, esi
        inc     ecx
L_503b5:
        mov     esi, dword ptr [edx+eax]
        mov     dword ptr [eax], esi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_503b5
        mov     esi, dword ptr [ebp-0x28]
L_503c5:
        mov     eax, dword ptr [ebx+0x20]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_503d1:
        mov     dword ptr [ebx+0x20], esi
        jmp     L_503e9
L_503d6:
        mov     ecx, dword ptr [ebx+0x20]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x20], 0
L_503e9:
        mov     dword ptr [ebx+0x24], edi
L_503ec:
        mov     eax, dword ptr [ebx+0x2c]
        cmp     edi, eax
        mov     dword ptr [ebp-0x28], eax
        jz      L_504a2
        test    edi, edi
        jbe     L_5048c
        lea     edx, [edi+edi*2]
        shl     edx, 0x2
        push    edx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_5042a
        push    0x435c30
        push    edi
        push    0xc
        push    esi
        call    FUN_00406c90
        mov     dword ptr [ebp-0x10], esi
        jmp     L_50431
L_5042a:
        mov     dword ptr [ebp-0x10], 0
L_50431:
        mov     eax, dword ptr [ebx+0x28]
        test    eax, eax
        jz      L_50484
        mov     ebx, dword ptr [ebp-0x28]
        cmp     edi, ebx
        jnc     L_50441
        mov     ebx, edi
L_50441:
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jz      L_50472
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp-0x10]
        mov     eax, dword ptr [eax+0x28]
        lea     edx, [ebx+ebx*2]
        sub     eax, ecx
        lea     esi, [ecx+edx*4]
        mov     dword ptr [ebp-0x28], eax
        inc     ebx
L_5045d:
        mov     ecx, dword ptr [ebp-0x28]
        add     ecx, esi
        push    ecx
        mov     ecx, esi
        call    FUN_0040c410
        dec     ebx
        sub     esi, 0xc
        test    ebx, ebx
        ja      L_5045d
L_50472:
        mov     edx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [edx+0x28]
        push    eax
        call    FUN_004084e0
        mov     ebx, dword ptr [ebp-0x4]
        add     esp, 0x4
L_50484:
        mov     eax, dword ptr [ebp-0x10]
        mov     dword ptr [ebx+0x28], eax
        jmp     L_5049f
L_5048c:
        mov     ecx, dword ptr [ebx+0x28]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx+0x28], 0
L_5049f:
        mov     dword ptr [ebx+0x2c], edi
L_504a2:
        mov     eax, dword ptr [ebp-0x18]
        lea     edx, [eax+eax*2]
        lea     ecx, [ebp-0x7c]
        lea     edx, [edx*4 + g_007b2314]
        mov     esi, 0x3
L_504b7:
        mov     eax, dword ptr [edx]
        lea     eax, [eax+eax*2]
        shl     eax, 0x2
        mov     ebx, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx-0x4], ebx
        mov     ebx, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx+0x4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     esi
        jnz     L_504b7
        mov     esi, dword ptr [ebp+0x8]
        mov     ecx, dword ptr [esi+0xc]
        mov     edx, dword ptr [ebp-0x14]
        mov     eax, dword ptr [esi+0x4]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp-0x68]
        push    ecx
        mov     ecx, dword ptr [ebp-0x4]
        lea     edx, [ebp-0x74]
        push    edx
        mov     edx, dword ptr [ecx+0x10]
        lea     eax, [ebp-0x80]
        lea     ebx, [ecx+0x10]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     edx, dword ptr [ebp-0x14]
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ecx]
        add     esp, 0x1c
        push    0x1
        push    edx
        push    0x0
        call    dword ptr [eax+0xc]
        cmp     byte ptr [esi+0x8], 0x1
        jnz     L_5064a
        lea     eax, [edi+edi*2]
        shl     eax, 0x2
        mov     esi, 0x1
        push    eax
        mov     dword ptr [ebp-0x10], esi
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_5054f
        lea     ecx, [edi-1]
        mov     dword ptr [ebp-0x30], ecx
        mov     dword ptr [ebp-0xc], eax
        jmp     L_50556
L_5054f:
        mov     dword ptr [ebp-0xc], 0
L_50556:
        mov     ebx, dword ptr [ebx]
        mov     ecx, dword ptr [ebp-0xc]
        push    ebx
        call    FUN_0040c410
        cmp     edi, 0x1
        mov     edx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [edx]
        mov     dword ptr [ebp-0x30], eax
        mov     byte ptr [eax], 0
        mov     dword ptr [ebp-0x28], 0x1
        jle     L_505e9
        mov     eax, dword ptr [ebp-0xc]
        add     ebx, 0xc
        add     eax, 0xc
        mov     dword ptr [ebp-0x10], ebx
        mov     dword ptr [ebp-0x24], eax
L_50587:
        xor     ebx, ebx
        test    esi, esi
        jle     L_505b3
        mov     edi, dword ptr [ebp-0xc]
L_50590:
        mov     ecx, dword ptr [g_007b220c]
        mov     edx, dword ptr [ebp-0x10]
        push    ecx
        push    edi
        push    edx
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_505b0
        inc     ebx
        add     edi, 0xc
        cmp     ebx, esi
        jl      L_50590
L_505b0:
        mov     edi, dword ptr [ebp-0x20]
L_505b3:
        cmp     ebx, esi
        jnz     L_505cc
        mov     eax, dword ptr [ebp-0x24]
        mov     ecx, eax
        add     eax, 0xc
        mov     dword ptr [ebp-0x24], eax
        mov     eax, dword ptr [ebp-0x10]
        push    eax
        inc     esi
        call    FUN_0040c410
L_505cc:
        mov     eax, dword ptr [ebp-0x28]
        mov     ecx, dword ptr [ebp-0x30]
        mov     edx, dword ptr [ebp-0x10]
        mov     byte ptr [ecx+eax], bl
        inc     eax
        add     edx, 0xc
        cmp     eax, edi
        mov     dword ptr [ebp-0x28], eax
        mov     dword ptr [ebp-0x10], edx
        jl      L_50587
        mov     dword ptr [ebp-0x10], esi
L_505e9:
        mov     edx, dword ptr [ebp-0x4]
        lea     ebx, [edx+0x10]
        push    esi
        mov     ecx, ebx
        call    FUN_0040c2e0
        mov     eax, dword ptr [ebx+0x4]
        test    eax, eax
        jbe     L_50624
        mov     ebx, dword ptr [ebx]
        mov     ecx, dword ptr [ebp-0xc]
        sub     ecx, ebx
        mov     dword ptr [ebp-0x30], ecx
        mov     dword ptr [ebp-0x28], eax
L_5060b:
        mov     eax, dword ptr [ebp-0x30]
        add     eax, ebx
        push    eax
        mov     ecx, ebx
        call    FUN_0040c410
        mov     eax, dword ptr [ebp-0x28]
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [ebp-0x28], eax
        jnz     L_5060b
L_50624:
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [eax+0x10]
        mov     ebx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ebx]
        add     eax, 0x10
        push    esi
        push    ecx
        mov     ecx, ebx
        mov     dword ptr [ebp-0x28], eax
        call    dword ptr [edx+0x24]
        mov     edx, dword ptr [ebp-0xc]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_5067a
L_5064a:
        mov     esi, edi
        xor     eax, eax
        test    edi, edi
        mov     dword ptr [ebp-0x10], esi
        jle     L_50662
        mov     ecx, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ecx]
L_5065a:
        mov     byte ptr [ecx+eax], al
        inc     eax
        cmp     eax, edi
        jl      L_5065a
L_50662:
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp-0x8]
        mov     edx, dword ptr [ecx]
        add     eax, 0x10
        mov     dword ptr [ebp-0x28], eax
        mov     eax, dword ptr [eax]
        push    edi
        push    eax
        call    dword ptr [edx+0x24]
        mov     ebx, dword ptr [ebp-0x8]
L_5067a:
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [ebx]
        push    edi
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx+0x88]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx+0x94]
        mov     edi, dword ptr [ebp+0xc]
        test    edi, edi
        jnz     L_506c4
        test    esi, esi
        jle     L_5074c
        mov     eax, dword ptr [ebp-0x4]
        mov     eax, dword ptr [eax+0x18]
        mov     dword ptr [ebp-0x3c], edi
        mov     dword ptr [ebp-0x38], edi
        mov     ecx, esi
        mov     edx, edi
L_506b4:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_506b4
        jmp     L_5074c
L_506c4:
        mov     edx, dword ptr [ebx]
        push    0x0
        push    edi
        mov     ecx, ebx
        call    dword ptr [edx+0x14]
        test    dword ptr [edi], 0x3fff
        jbe     L_50721
        test    esi, esi
        jle     L_5074c
        mov     eax, dword ptr [ebp-0x4]
        mov     edx, dword ptr [ebp-0x28]
        mov     ecx, dword ptr [eax+0x18]
        mov     eax, dword ptr [edx]
        mov     edx, esi
L_506e7:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 0x8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x44]
        fld     dword ptr [eax-0x8]
        mov     edi, dword ptr [ebp-0x44]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx-0x8], edi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x40]
        mov     edi, dword ptr [ebp-0x40]
        mov     dword ptr [ecx-0x4], edi
        jnz     L_506e7
        jmp     L_5074c
L_50721:
        test    esi, esi
        jle     L_5074c
        mov     eax, dword ptr [ebp-0x4]
        mov     eax, dword ptr [eax+0x18]
        mov     dword ptr [ebp-0x4c], 0
        mov     edx, dword ptr [ebp-0x4c]
        mov     dword ptr [ebp-0x48], 0
        mov     edi, dword ptr [ebp-0x48]
        mov     ecx, esi
L_50741:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax+0x4], edi
        add     eax, 0x8
        dec     ecx
        jnz     L_50741
L_5074c:
        mov     eax, dword ptr [ebp-0x4]
        mov     ecx, dword ptr [ebp-0x8]
        mov     eax, dword ptr [eax+0x18]
        mov     edx, dword ptr [ecx]
        push    esi
        push    eax
        call    dword ptr [edx+0x2c]
        xor     edi, edi
        test    esi, esi
        jle     L_508fa
        mov     ecx, dword ptr [ebp-0x4]
        lea     edx, [ebp-0x5c]
        lea     eax, [ecx+0x10]
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebp-0x30], edx
        xor     edx, edx
L_50776:
        fld     dword ptr [eax+edx+0x8]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax+edx+0x4]
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fld     dword ptr [eax+edx]
        mov     dword ptr [ebp-0x50], 0x3f800000
        fadd    dword ptr [g_0076d064]
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [ebp-0x5c]
        fstp    dword ptr [ebp-0x58]
        fstp    dword ptr [ebp-0x54]
        fld     dword ptr [g_0076e93c]
        mov     esi, dword ptr [ebp-0x30]
        fld     dword ptr [esi+0xc]
        mov     ecx, dword ptr [esi+0xc]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp-0x2c], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x2c], ecx
        fld     dword ptr [esi+0x4]
        mov     ecx, dword ptr [esi+0x4]
        fadd    st(0), st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x2c], ecx
        mov     ecx, dword ptr [esi+0x8]
        fadd    dword ptr [esi+0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp-0x34]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp-0x34]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp-0x2c]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp-0x2c], ecx
        mov     ecx, dword ptr [ebp-0x4]
        mov     eax, dword ptr [ecx+0x20]
        mov     esi, dword ptr [ebp-0x2c]
        mov     dword ptr [eax+edi*4], esi
        mov     eax, dword ptr [ecx+0x10]
        fld     dword ptr [eax+edx+0x8]
        mov     ecx, dword ptr [ecx+0x28]
        fld     dword ptr [eax+edx+0x4]
        add     ecx, edx
        fld     dword ptr [eax+edx]
        inc     edi
        fld     st(0)
        add     edx, 0xc
        fmul    st(0), st(1)
        fld     st(2)
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
        fmul    dword ptr [eax+edx-0xc]
        fstp    dword ptr [ecx]
        fld     st(0)
        fmul    dword ptr [eax+edx-0x8]
        fstp    dword ptr [ecx+0x4]
        fmul    dword ptr [eax+edx-0x4]
        fstp    dword ptr [ecx+0x8]
        mov     ecx, dword ptr [ebp-0x10]
        cmp     edi, ecx
        jl      L_50776
L_508fa:
        mov     edi, dword ptr [ebp-0x10]
        mov     ebx, dword ptr [ebp-0x4]
        mov     esi, dword ptr [ebp-0x8]
        mov     eax, dword ptr [ebx+0x20]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0xa4]
        mov     eax, dword ptr [ebx+0x28]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0xac]
        mov     ecx, dword ptr [ebp-0x1c]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi+0x8]
        cmp     word ptr [esi+0x8], 0
        jnz     L_50941
        test    esi, esi
        jz      L_50941
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_50941:
        mov     eax, dword ptr [ebp-0x18]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [ebp-0x18], eax
        jl      L_501b7
        call    FUN_006f49a0
        mov     eax, dword ptr [ebp-0x1c]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
