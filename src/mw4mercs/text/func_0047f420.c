/*
 * FUN_0047f420 (1467 B) — MLR sphere/geometry tessellation driver (RET 0).
 * Builds a subdivided sphere via FUN_0047f1b0, manages growable buffers,
 * and uploads via virtual calls. Heavy FPU + IAT (ceil) + rep stos.
 *
 * CFLAGS: /O1
 */

extern int g_007b9590;
extern int g_007da724;
extern int g_007b958c;
extern double g_0076e3e8;
extern int *g_0076b2ec;
extern int g_007da5f0;
extern int g_007da5e4;
extern char g_007b2314[];
extern char g_007b2284[];
extern char g_007b2288[];
extern char g_007b228c[];
extern int g_007b220c;
extern float g_0076d064;
extern float g_0076d070;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00487830(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0075db86(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_0047a680(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0040ccd0(void);
extern void __cdecl FUN_0047f1b0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0040c2e0(void);
extern void __cdecl FUN_00487ce0(void);

__declspec(naked) void FUN_0047f420(void)
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
        jz      L_47f458
        mov     ecx, dword ptr [g_007da724]
        push    ecx
        push    0x14
        mov     ecx, eax
        call    FUN_00487830
        mov     dword ptr [esp + 0x24], eax
        jmp     L_47f45c
L_47f458:
        mov     dword ptr [esp + 0x24], edi
L_47f45c:
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
        mov     dword ptr [esp + 0x1c], eax
        jl      L_47f4b5
        mov     dword ptr [esp + 0x1c], 0x55
L_47f4b5:
        mov     dword ptr [esp + 0x20], edi
L_47f4b9:
        xor     esi, esi
        push    0x68
        mov     dword ptr [g_007da5f0], esi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_47f4df
        mov     edx, dword ptr [g_007da5e4]
        push    edx
        mov     ecx, eax
        call    FUN_0047a680
        jmp     L_47f4e1
L_47f4df:
        xor     eax, eax
L_47f4e1:
        mov     ebx, dword ptr [eax + 0xc]
        mov     ebp, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x18], eax
        mov     eax, dword ptr [ebx + 0xc]
        cmp     ebp, eax
        mov     dword ptr [esp + 0x38], ebx
        jz      L_47f54c
        cmp     ebp, esi
        jbe     L_47f53a
        push    ebp
        call    FUN_004084d0
        mov     edi, dword ptr [ebx + 0x8]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      L_47f533
        mov     eax, dword ptr [ebx + 0xc]
        cmp     ebp, eax
        jnc     L_47f516
        mov     eax, ebp
L_47f516:
        mov     ecx, eax
        dec     eax
        test    ecx, ecx
        jz      L_47f52a
L_47f51d:
        mov     dl, byte ptr [edi + eax]
        mov     ecx, eax
        mov     byte ptr [eax + esi], dl
        dec     eax
        test    ecx, ecx
        jnz     L_47f51d
L_47f52a:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_47f533:
        mov     dword ptr [ebx + 0x8], esi
        xor     esi, esi
        jmp     L_47f549
L_47f53a:
        mov     edx, dword ptr [ebx + 0x8]
        push    edx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x8], esi
L_47f549:
        mov     dword ptr [ebx + 0xc], ebp
L_47f54c:
        cmp     ebp, esi
        jle     L_47f568
        mov     edi, dword ptr [ebx + 0x8]
        mov     ecx, ebp
        mov     edx, ecx
        shr     ecx, 0x2
        mov     eax, 0x3030303
        rep     stosd
        mov     ecx, edx
        and     ecx, 0x3
        rep     stosb
L_47f568:
        mov     edi, dword ptr [ebx + 0x14]
        lea     ebp, [ebp + ebp*2]
        cmp     ebp, edi
        jz      L_47f604
        cmp     ebp, esi
        jbe     L_47f5f2
        lea     eax, [ebp + ebp*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_47f59e
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x34], ecx
        mov     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jmp     L_47f5a4
L_47f59e:
        mov     dword ptr [esp + 0x14], esi
        mov     ecx, esi
L_47f5a4:
        mov     eax, dword ptr [ebx + 0x10]
        cmp     eax, esi
        jz      L_47f5ed
        cmp     ebp, edi
        jnc     L_47f5b1
        mov     edi, ebp
L_47f5b1:
        mov     edx, edi
        dec     edi
        test    edx, edx
        jz      L_47f5db
        lea     edx, [edi + edi*2]
        sub     eax, ecx
        lea     esi, [ecx + edx*4]
        mov     dword ptr [esp + 0x30], eax
        inc     edi
L_47f5c5:
        mov     eax, dword ptr [esp + 0x30]
        add     eax, esi
        push    eax
        mov     ecx, esi
        call    FUN_0040ccd0
        dec     edi
        sub     esi, 0xc
        test    edi, edi
        ja      L_47f5c5
L_47f5db:
        mov     eax, dword ptr [ebx + 0x10]
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        xor     esi, esi
L_47f5ed:
        mov     dword ptr [ebx + 0x10], ecx
        jmp     L_47f601
L_47f5f2:
        mov     ecx, dword ptr [ebx + 0x10]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [ebx + 0x10], esi
L_47f601:
        mov     dword ptr [ebx + 0x14], ebp
L_47f604:
        cmp     ebp, dword ptr [ebx + 0x4]
        jz      L_47f64e
        cmp     ebp, esi
        jbe     L_47f63e
        push    ebp
        call    FUN_004084d0
        mov     edi, dword ptr [ebx]
        add     esp, 0x4
        test    edi, edi
        mov     esi, eax
        jz      L_47f649
        mov     eax, dword ptr [ebx + 0x4]
        cmp     ebp, eax
        jnc     L_47f627
        mov     eax, ebp
L_47f627:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_47f63b
L_47f62e:
        mov     cl, byte ptr [edi + eax]
        mov     edx, eax
        mov     byte ptr [eax + esi], cl
        dec     eax
        test    edx, edx
        jnz     L_47f62e
L_47f63b:
        push    edi
        jmp     L_47f641
L_47f63e:
        mov     eax, dword ptr [ebx]
        push    eax
L_47f641:
        call    FUN_004084e0
        add     esp, 0x4
L_47f649:
        mov     dword ptr [ebx], esi
        mov     dword ptr [ebx + 0x4], ebp
L_47f64e:
        mov     esi, dword ptr [ebx + 0x1c]
        cmp     ebp, esi
        jz      L_47f6c0
        xor     edi, edi
        cmp     ebp, edi
        jbe     L_47f6ae
        lea     ecx, [ebp*8]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      L_47f678
        lea     edx, [ebp - 0x1]
        mov     dword ptr [esp + 0x34], edx
        mov     edi, eax
L_47f678:
        mov     ecx, dword ptr [ebx + 0x18]
        test    ecx, ecx
        jz      L_47f6ba
        cmp     ebp, esi
        mov     edx, ebp
        jc      L_47f687
        mov     edx, esi
L_47f687:
        mov     eax, edx
        dec     edx
        test    eax, eax
        jz      L_47f6a8
        lea     eax, [edi + edx*8]
        sub     ecx, edi
        inc     edx
L_47f694:
        mov     esi, dword ptr [ecx + eax]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + eax + 0x4]
        mov     dword ptr [eax + 0x4], esi
        dec     edx
        sub     eax, 0x8
        test    edx, edx
        ja      L_47f694
L_47f6a8:
        mov     eax, dword ptr [ebx + 0x18]
        push    eax
        jmp     L_47f6b2
L_47f6ae:
        mov     ecx, dword ptr [ebx + 0x18]
        push    ecx
L_47f6b2:
        call    FUN_004084e0
        add     esp, 0x4
L_47f6ba:
        mov     dword ptr [ebx + 0x18], edi
        mov     dword ptr [ebx + 0x1c], ebp
L_47f6c0:
        mov     eax, dword ptr [esp + 0x20]
        lea     edx, [eax + eax*2]
        lea     ecx, [esp + 0x58]
        lea     edx, [edx*4 + g_007b2314]
        mov     edi, 0x3
L_47f6d7:
        mov     eax, dword ptr [edx]
        lea     eax, [eax + eax*2]
        shl     eax, 0x2
        mov     esi, dword ptr [eax + g_007b2284]
        mov     dword ptr [ecx - 0x4], esi
        mov     esi, dword ptr [eax + g_007b2288]
        mov     eax, dword ptr [eax + g_007b228c]
        mov     dword ptr [ecx], esi
        mov     dword ptr [ecx + 0x4], eax
        add     edx, 0x4
        add     ecx, 0xc
        dec     edi
        jnz     L_47f6d7
        mov     ecx, dword ptr [esp + 0x7c]
        mov     edx, dword ptr [ecx + 0xc]
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    edi
        push    eax
        lea     ecx, [esp + 0x78]
        push    ecx
        mov     ecx, dword ptr [ebx + 0x10]
        lea     edx, [esp + 0x70]
        push    edx
        lea     eax, [esp + 0x68]
        push    eax
        push    ecx
        call    FUN_0047f1b0
        mov     esi, dword ptr [esp + 0x34]
        mov     eax, dword ptr [ebx + 0x8]
        mov     edx, dword ptr [esi]
        add     esp, 0x1c
        push    0x1
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x7c]
        cmp     byte ptr [ecx + 0x8], 0x1
        jnz     L_47f87b
        lea     edx, [ebp + ebp*2]
        shl     edx, 0x2
        push    edx
        mov     dword ptr [esp + 0x14], 0x1
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_47f776
        lea     ecx, [ebp - 0x1]
        mov     dword ptr [esp + 0x34], ecx
        mov     edi, eax
        jmp     L_47f778
L_47f776:
        xor     edi, edi
L_47f778:
        mov     esi, dword ptr [ebx + 0x10]
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], edi
        call    FUN_0040c410
        cmp     ebp, 0x1
        mov     ebx, dword ptr [ebx]
        mov     dword ptr [esp + 0x34], ebx
        mov     byte ptr [ebx], 0x0
        mov     dword ptr [esp + 0x30], 0x1
        jle     L_47f819
        add     edi, 0xc
        mov     dword ptr [esp + 0x2c], edi
        add     esi, 0xc
L_47f7a7:
        mov     eax, dword ptr [esp + 0x10]
        xor     ebx, ebx
        test    eax, eax
        jle     L_47f7d6
        mov     edi, dword ptr [esp + 0x14]
L_47f7b5:
        mov     edx, dword ptr [g_007b220c]
        push    edx
        push    edi
        push    esi
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jnz     L_47f7d6
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        add     edi, 0xc
        cmp     ebx, eax
        jl      L_47f7b5
L_47f7d6:
        cmp     ebx, dword ptr [esp + 0x10]
        jnz     L_47f802
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
L_47f802:
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     byte ptr [edx + eax], bl
        inc     eax
        add     esi, 0xc
        cmp     eax, ebp
        mov     dword ptr [esp + 0x30], eax
        jl      L_47f7a7
L_47f819:
        mov     ebx, dword ptr [esp + 0x38]
        mov     edi, dword ptr [esp + 0x10]
        lea     esi, [ebx + 0x10]
        push    edi
        mov     ecx, esi
        call    FUN_0040c2e0
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jbe     L_47f85c
        mov     esi, dword ptr [esi]
        mov     edi, dword ptr [esp + 0x14]
        sub     edi, esi
        mov     dword ptr [esp + 0x30], eax
L_47f83f:
        lea     eax, [edi + esi]
        push    eax
        mov     ecx, esi
        call    FUN_0040c410
        mov     eax, dword ptr [esp + 0x30]
        add     esi, 0xc
        dec     eax
        mov     dword ptr [esp + 0x30], eax
        jnz     L_47f83f
        mov     edi, dword ptr [esp + 0x10]
L_47f85c:
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        jmp     L_47f8a3
L_47f87b:
        xor     eax, eax
        test    ebp, ebp
        mov     dword ptr [esp + 0x10], ebp
        jle     L_47f88f
        mov     ecx, dword ptr [ebx]
L_47f887:
        mov     byte ptr [ecx + eax], al
        inc     eax
        cmp     eax, ebp
        jl      L_47f887
L_47f88f:
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [esi]
        push    ebp
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     esi, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x10]
L_47f8a3:
        mov     eax, dword ptr [ebx]
        mov     edx, dword ptr [esi]
        push    ebp
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x88]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x94]
        mov     eax, dword ptr [esp + 0x80]
        test    eax, eax
        jnz     L_47f8fb
        test    edi, edi
        jle     L_47f98b
        mov     eax, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x3c], 0x0
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x40], 0x0
        mov     ebp, dword ptr [esp + 0x40]
        mov     ecx, edi
L_47f8eb:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_47f8eb
        jmp     L_47f98b
L_47f8fb:
        mov     ebp, dword ptr [esp + 0x80]
        mov     eax, dword ptr [esi]
        push    0x0
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
        test    dword ptr [ebp], 0x3fff
        jbe     L_47f95f
        test    edi, edi
        jle     L_47f98b
        mov     ecx, dword ptr [ebx + 0x18]
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, edi
L_47f921:
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
        jnz     L_47f921
        jmp     L_47f98b
L_47f95f:
        test    edi, edi
        jle     L_47f98b
        mov     eax, dword ptr [ebx + 0x18]
        mov     dword ptr [esp + 0x4c], 0x0
        mov     edx, dword ptr [esp + 0x4c]
        mov     dword ptr [esp + 0x50], 0x0
        mov     ebp, dword ptr [esp + 0x50]
        mov     ecx, edi
L_47f980:
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ebp
        add     eax, 0x8
        dec     ecx
        jnz     L_47f980
L_47f98b:
        mov     eax, dword ptr [ebx + 0x18]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x2c]
        mov     ecx, dword ptr [esp + 0x24]
        push    esi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x8]
        cmp     word ptr [esi + 0x8], 0x0
        jnz     L_47f9b8
        test    esi, esi
        jz      L_47f9b8
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
L_47f9b8:
        mov     eax, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, 0x14
        mov     dword ptr [esp + 0x20], eax
        jl      L_47f4b9
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
