/*
 * FUN_0045d440 (1420 B) — MLR lightmap/tube geometry helper. Allocates and
 * resizes vertex/color/index buffers, builds a lightmap, calls virtual
 * render methods. Uses CRT pow/ceil/ftol helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int    g_007b9590;
extern int    g_007da724;
extern int    g_007d9900;
extern double g_0076e3e8;
extern int   *g_0076b2ec;   /* IAT (ceil) */
extern int    g_007da5f0;
extern int    g_007d98f8;
extern int    g_007b2314;
extern int    g_007b2284;
extern int    g_007b2288;
extern int    g_007b228c;
extern int    g_007b220c;
extern float  g_0076d064;
extern float  g_0076d070;
extern int    g_007b2404;

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00458560(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_0045d440(void)
{
    __asm {
        mov     eax, dword ptr [g_007b9590]
        sub     esp, 0x68
        push    eax
        call    FUN_006f4950
        push    0x20
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_45d472
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [esp + 0xc], eax
        jmp     L_45d47a
L_45d472:
        mov     dword ptr [esp + 0xc], 0
L_45d47a:
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_006f49a0
        mov     edx, dword ptr [g_007d9900]
        push    edx
        call    FUN_006f4950
        fld     qword ptr [g_0076e3e8]
        mov     esi, dword ptr [esp + 0x7c]
        mov     eax, dword ptr [esi + 4]
        mov     dword ptr [esp + 0x28], eax
        fild    dword ptr [esp + 0x28]
        call    FUN_0075db86
        fmul    dword ptr [esi + 0x10]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    dword ptr [g_0076b2ec]
        add     esp, 8
        call    FUN_0075db4a
        lea     ecx, [eax + eax*2]
        cmp     ecx, 0x100
        mov     dword ptr [esp + 0x24], eax
        jl      L_45d4d8
        mov     eax, 0x55
        mov     dword ptr [esp + 0x24], eax
L_45d4d8:
        lea     edx, [eax + eax*2]
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x2c], 0x7b2314
L_45d4e7:
        xor     ebx, ebx
        push    0x64
        mov     dword ptr [g_007da5f0], ebx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebx
        jz      L_45d50d
        mov     ecx, dword ptr [g_007d98f8]
        push    ecx
        mov     ecx, eax
        call    FUN_00458560
        mov     ebx, eax
L_45d50d:
        mov     ebp, dword ptr [ebx + 0xc]
        mov     edi, dword ptr [ebp + 0x14]
        mov     esi, dword ptr [esp + 0x14]
        cmp     esi, edi
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x10], ebp
        jz      L_45d5c7
        test    esi, esi
        jbe     L_45d5b1
        lea     edx, [esi + esi*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_45d54f
        lea     ecx, [esi - 1]
        mov     dword ptr [esp + 0x38], ecx
        mov     dword ptr [esp + 0x18], eax
        jmp     L_45d557
L_45d54f:
        mov     dword ptr [esp + 0x18], 0
L_45d557:
        mov     eax, dword ptr [ebp + 0x10]
        test    eax, eax
        mov     dword ptr [esp + 0x20], eax
        jz      L_45d5a8
        cmp     esi, edi
        jnc     L_45d568
        mov     edi, esi
L_45d568:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      L_45d59b
        mov     eax, dword ptr [esp + 0x18]
        mov     ebp, dword ptr [esp + 0x20]
        lea     ecx, [edi + edi*2]
        sub     ebp, eax
        lea     esi, [eax + ecx*4]
        inc     edi
L_45d580:
        lea     edx, [esi + ebp]
        push    edx
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_45d580
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x20]
L_45d59b:
        push    eax
        call    FUN_004084e0
        mov     ebp, dword ptr [esp + 0x14]
        add     esp, 4
L_45d5a8:
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [ebp + 0x10], eax
        jmp     L_45d5c4
L_45d5b1:
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x10], 0
L_45d5c4:
        mov     dword ptr [ebp + 0x14], esi
L_45d5c7:
        cmp     esi, dword ptr [ebp + 4]
        jz      L_45d631
        test    esi, esi
        jbe     L_45d615
        push    esi
        call    FUN_004084d0
        mov     edx, dword ptr [esp + 0x14]
        mov     edi, dword ptr [edx]
        add     esp, 4
        test    edi, edi
        mov     ebp, eax
        jz      L_45d60d
        mov     eax, edx
        mov     eax, dword ptr [eax + 4]
        cmp     esi, eax
        jnc     L_45d5f0
        mov     eax, esi
L_45d5f0:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_45d604
L_45d5f7:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + ebp], dl
        dec     eax
        test    ecx, ecx
        jnz     L_45d5f7
L_45d604:
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_45d60d:
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], ebp
        jmp     L_45d628
L_45d615:
        mov     eax, dword ptr [ebp]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp], 0
L_45d628:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx + 4], esi
        mov     ebp, ecx
L_45d631:
        cmp     esi, dword ptr [ebp + 0x1c]
        jz      L_45d6bf
        test    esi, esi
        jbe     L_45d6a9
        lea     edx, [esi*8 + 0]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_45d65d
        lea     ecx, [esi - 1]
        mov     dword ptr [esp + 0x38], ecx
        mov     edi, eax
        jmp     L_45d65f
L_45d65d:
        xor     edi, edi
L_45d65f:
        mov     ecx, dword ptr [ebp + 0x18]
        test    ecx, ecx
        mov     dword ptr [esp + 0x20], edi
        jz      L_45d6a4
        mov     edx, dword ptr [ebp + 0x1c]
        cmp     esi, edx
        jnc     L_45d673
        mov     edx, esi
L_45d673:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_45d698
        lea     eax, [edi + edx*8]
        sub     ecx, edi
        inc     edx
L_45d680:
        mov     edi, dword ptr [ecx + eax]
        mov     dword ptr [eax], edi
        mov     edi, dword ptr [ecx + eax + 4]
        mov     dword ptr [eax + 4], edi
        dec     edx
        sub     eax, 8
        test    edx, edx
        ja      L_45d680
        mov     edi, dword ptr [esp + 0x20]
L_45d698:
        mov     eax, dword ptr [ebp + 0x18]
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_45d6a4:
        mov     dword ptr [ebp + 0x18], edi
        jmp     L_45d6bc
L_45d6a9:
        mov     ecx, dword ptr [ebp + 0x18]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [ebp + 0x18], 0
L_45d6bc:
        mov     dword ptr [ebp + 0x1c], esi
L_45d6bf:
        mov     edi, dword ptr [esp + 0x2c]
        lea     ecx, [esp + 0x58]
        mov     edx, 3
L_45d6cc:
        mov     eax, dword ptr [edi]
        lea     eax, [eax + eax*2]
        shl     eax, 2
        mov     ebp, dword ptr [eax + 0x7b2284]
        mov     dword ptr [ecx - 4], ebp
        mov     ebp, dword ptr [eax + 0x7b2288]
        mov     eax, dword ptr [eax + 0x7b228c]
        mov     dword ptr [ecx], ebp
        mov     dword ptr [ecx + 4], eax
        add     edi, 4
        add     ecx, 0xc
        dec     edx
        jnz     L_45d6cc
        mov     ecx, dword ptr [esp + 0x7c]
        mov     edx, dword ptr [ecx + 0xc]
        mov     ebp, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    ebp
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        lea     edx, [esp + 0x70]
        push    edx
        mov     edx, dword ptr [ecx + 0x10]
        mov     dword ptr [esp + 0x4c], edi
        lea     eax, [esp + 0x68]
        lea     edi, [ecx + 0x10]
        push    eax
        push    edx
        call    FUN_0047f1b0
        mov     eax, dword ptr [ebx]
        add     esp, 0x1c
        push    1
        push    ebp
        push    0
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        mov     ecx, dword ptr [esp + 0x7c]
        cmp     byte ptr [ecx + 8], 1
        jnz     L_45d85d
        lea     edx, [esi + esi*2]
        shl     edx, 2
        push    edx
        mov     ebp, 1
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_45d76a
        dec     esi
        mov     dword ptr [esp + 0x34], esi
        mov     ebx, eax
        jmp     L_45d76c
L_45d76a:
        xor     ebx, ebx
L_45d76c:
        mov     esi, dword ptr [edi]
        push    esi
        mov     ecx, ebx
        mov     dword ptr [esp + 0x1c], ebx
        call    FUN_0040c410
        mov     eax, dword ptr [esp + 0x10]
        mov     eax, dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x34], eax
        mov     byte ptr [eax], 0
        mov     eax, 1
        cmp     ecx, eax
        mov     dword ptr [esp + 0x2c], eax
        jle     L_45d806
        add     ebx, 0xc
        mov     dword ptr [esp + 0x20], ebx
        add     esi, 0xc
        xor     ebx, ebx
L_45d7a2:
        test    ebp, ebp
        jle     L_45d7c9
        mov     edi, dword ptr [esp + 0x18]
L_45d7ac:
        mov     ecx, dword ptr [g_007b220c]
        push    ecx
        push    edi
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_45d7c9
        inc     ebx
        add     edi, 0xc
        cmp     ebx, ebp
        jl      L_45d7ac
L_45d7c9:
        cmp     ebx, ebp
        jnz     L_45d7eb
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esi]
        mov     eax, ecx
        inc     ebp
        add     ecx, 0xc
        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, dword ptr [esi + 4]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esi + 8]
        mov     dword ptr [eax + 4], ecx
        mov     dword ptr [eax + 8], edx
L_45d7eb:
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x34]
        mov     byte ptr [ecx + eax], bl
        mov     ecx, dword ptr [esp + 0x14]
        inc     eax
        add     esi, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp + 0x2c], eax
        __emit 0x7C   /* __emit: MSVC6 miscomputes backward jcc rel8 offset (off-by-2) */
        __emit 0x9C
L_45d806:
        mov     edi, dword ptr [esp + 0x10]
        lea     esi, [edi + 0x10]
        push    ebp
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jbe     L_45d83b
        mov     esi, dword ptr [esi]
        mov     ebx, dword ptr [esp + 0x18]
        sub     ebx, esi
        mov     edi, eax
L_45d826:
        lea     edx, [ebx + esi]
        push    edx
        mov     ecx, esi
        call    FUN_0040c410
        add     esi, 0xc
        dec     edi
        jnz     L_45d826
        mov     edi, dword ptr [esp + 0x10]
L_45d83b:
        mov     ecx, dword ptr [edi + 0x10]
        mov     ebx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [ebx]
        lea     esi, [edi + 0x10]
        push    ebp
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        call    FUN_004084e0
        add     esp, 4
        jmp     L_45d88a
L_45d85d:
        xor     eax, eax
        test    esi, esi
        mov     ebp, esi
        jle     L_45d873
        mov     ecx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [ecx]
L_45d86b:
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, esi
        jl      L_45d86b
L_45d873:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [eax + 0x10]
        mov     edx, dword ptr [ebx]
        push    esi
        lea     esi, [eax + 0x10]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x24]
        mov     edi, dword ptr [esp + 0x10]
L_45d88a:
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi]
        mov     edx, dword ptr [ebx]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    dword ptr [edx + 0x88]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x94]
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        jnz     L_45d8e6
        test    ebp, ebp
        jle     L_45d97b
        mov     eax, dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x3c], 0
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x40], 0
        mov     esi, dword ptr [esp + 0x40]
        mov     ecx, ebp
L_45d8d6:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], esi
        add     eax, 8
        dec     ecx
        jnz     L_45d8d6
        jmp     L_45d97b
L_45d8e6:
        mov     ecx, dword ptr [esp + 0x80]
        mov     eax, dword ptr [ebx]
        push    0
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x14]
        mov     edx, dword ptr [esp + 0x80]
        test    dword ptr [edx], 0x3fff
        jbe     L_45d94f
        test    ebp, ebp
        jle     L_45d97b
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [esi]
        mov     edx, ebp
L_45d911:
        fld     dword ptr [eax]
        add     eax, 0xc
        fadd    dword ptr [g_0076d064]
        add     ecx, 8
        dec     edx
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x44]
        fld     dword ptr [eax - 8]
        mov     esi, dword ptr [esp + 0x44]
        fadd    dword ptr [g_0076d064]
        mov     dword ptr [ecx - 8], esi
        fmul    dword ptr [g_0076d070]
        fstp    dword ptr [esp + 0x48]
        mov     esi, dword ptr [esp + 0x48]
        mov     dword ptr [ecx - 4], esi
        jnz     L_45d911
        jmp     L_45d97b
L_45d94f:
        test    ebp, ebp
        jle     L_45d97b
        mov     eax, dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x4c], 0
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x50], 0
        mov     esi, dword ptr [esp + 0x50]
        mov     ecx, ebp
L_45d970:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 4], esi
        add     eax, 8
        dec     ecx
        jnz     L_45d970
L_45d97b:
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [ebx]
        push    ebp
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x2c]
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        call    FUN_00487ce0
        dec     word ptr [ebx + 8]
        cmp     word ptr [ebx + 8], 0
        jnz     L_45d9a8
        test    ebx, ebx
        jz      L_45d9a8
        mov     edx, dword ptr [ebx]
        push    1
        mov     ecx, ebx
        call    dword ptr [edx]
L_45d9a8:
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, 0x7b2404
        mov     dword ptr [esp + 0x2c], eax
        jl      L_45d4e7
        call    FUN_006f49a0
        mov     eax, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x68
        ret
    }
}
