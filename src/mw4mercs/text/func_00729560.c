/*
 * FUN_00729560 (1111 B) — __stdcall, 1 arg (ret 4). Command-line / config
 * string parser: matches a series of prefix tokens against the input
 * string, extracts values into a set of global state words, and advances
 * the input pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006FAB90(void);
extern void __cdecl FUN_006FBC60(void);

extern unsigned char g_8816E7;
extern unsigned int g_76B2B0;
extern unsigned int g_8816C8;
extern unsigned int g_8816CC;
extern unsigned int g_8816D0;
extern float g_8816D8;
extern float g_770168;
extern float g_7A5640;
extern float g_76F5D8;
extern float g_7B7118;
extern float g_76D064;
extern unsigned char g_8816DC;
extern unsigned char g_8816E4;
extern unsigned char g_8816DD;
extern unsigned int g_8816E0;
extern unsigned char g_8816E5;
extern unsigned char g_8816E6;

__declspec(naked) void FUN_00729560(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x204
        mov     al, byte ptr [g_8816E7]
        test    al, al
        jne     l_7299B1
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
    l_72957E:
        cmp     byte ptr [esi], 0x2f
        jne     l_7299A9
        mov     edi, dword ptr [g_76B2B0]
        push    6
        push    esi
        push    0x7a583c
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72969F
        mov     al, byte ptr [esi + 6]
        add     esi, 6
        cmp     al, 0x3c
        lea     edi, [ebp - 0x104]
        je      l_7295C6
        push    0x7a567c
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_7295C7
        int     3
        jmp     l_7295C7
    l_7295C6:
        inc     esi
    l_7295C7:
        mov     al, byte ptr [esi]
        test    al, al
        je      l_7295DB
    l_7295CD:
        cmp     al, 0x3e
        je      l_7295DB
        inc     esi
        mov     byte ptr [edi], al
        mov     al, byte ptr [esi]
        inc     edi
        test    al, al
        jne     l_7295CD
    l_7295DB:
        cmp     byte ptr [esi], 0x3e
        mov     byte ptr [edi], 0
        je      l_7295F7
        push    0x7a567c
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_7295F8
        int     3
        jmp     l_7295F8
    l_7295F7:
        inc     esi
    l_7295F8:
        lea     ecx, [ebp - 0x104]
        push    ecx
        lea     edx, [ebp - 0x204]
        push    edx
        call    FUN_006FBC60
        mov     ebx, dword ptr [g_8816C8]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [ebp - 0x204]
        repne   scasb
        not     ecx
        dec     ecx
        test    ebx, ebx
        mov     dword ptr [ebp - 4], ecx
        je      l_729684
    l_729628:
        mov     ecx, dword ptr [ebp - 4]
        push    ecx
        lea     edx, [ebp - 0x204]
        lea     eax, [ebx + 0xc]
        push    edx
        push    eax
        call    dword ptr [g_76B2B0]
        add     esp, 0xc
        test    eax, eax
        je      l_729676
        xor     eax, eax
        or      ecx, 0xffffffff
        lea     edi, [ebp - 0x104]
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        lea     eax, [ebp - 0x104]
        push    eax
        lea     eax, [ebx + 0xc]
        push    eax
        call    dword ptr [g_76B2B0]
        add     esp, 0xc
        test    eax, eax
        je      l_729676
        mov     ebx, dword ptr [ebx + 4]
        test    ebx, ebx
        jne     l_729628
        jmp     l_729684
    l_729676:
        test    ebx, ebx
        mov     dword ptr [g_8816CC], ebx
        jne     l_72957E
    l_729684:
        push    0x7a5658
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_72957E
        int     3
        jmp     l_72957E
    l_72969F:
        push    7
        push    esi
        push    0x7a5834
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_7296FA
        add     esi, 7
        xor     ecx, ecx
        mov     edx, 8
    l_7296BA:
        movsx   eax, byte ptr [esi]
        xor     ebx, ebx
        mov     bl, byte ptr [eax + 0x8aa610]
        shl     ecx, 4
        inc     esi
        mov     eax, ebx
        cmp     eax, 0x30
        jb      l_7296D5
        cmp     eax, 0x39
        jbe     l_7296DF
    l_7296D5:
        cmp     eax, 0x61
        jb      l_7296EC
        cmp     eax, 0x66
        ja      l_7296EC
    l_7296DF:
        sub     eax, 0x30
        cmp     eax, 9
        jbe     l_7296EA
        sub     eax, 0x27
    l_7296EA:
        add     ecx, eax
    l_7296EC:
        dec     edx
        jne     l_7296BA
        mov     dword ptr [g_8816D0], ecx
        jmp     l_72957E
    l_7296FA:
        push    6
        push    esi
        push    0x7a582c
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72982A
        mov     al, byte ptr [esi + 6]
        add     esi, 6
        xor     cl, cl
        cmp     al, 0x3c
        jne     l_72971E
        mov     cl, 1
        inc     esi
    l_72971E:
        mov     al, byte ptr [esi]
        xor     bl, bl
        cmp     al, 0x2d
        jne     l_729729
        mov     bl, 1
        inc     esi
    l_729729:
        movsx   edx, byte ptr [esi]
        movsx   eax, byte ptr [esi + 1]
        sub     edx, 0x30
        inc     esi
        mov     dword ptr [ebp - 4], edx
        add     eax, -0x30
        test    eax, eax
        fild    dword ptr [ebp - 4]
        mov     dword ptr [ebp - 4], eax
        fstp    dword ptr [g_8816D8]
        jl      l_729765
        cmp     eax, 9
        jg      l_729765
        fld     dword ptr [g_8816D8]
        inc     esi
        fmul    dword ptr [g_770168]
        fiadd   dword ptr [ebp - 4]
        fstp    dword ptr [g_8816D8]
    l_729765:
        test    cl, cl
        je      l_729783
        cmp     byte ptr [esi], 0x3e
        je      l_729782
        push    0x7a56f4
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_729783
        int     3
        jmp     l_729783
    l_729782:
        inc     esi
    l_729783:
        mov     eax, dword ptr [g_8816CC]
        test    eax, eax
        jne     l_7297A3
        push    0x7a56c0
        call    FUN_006FAB90
        add     esp, 4
        test    eax, eax
        je      l_72979E
        int     3
    l_72979E:
        mov     eax, dword ptr [g_8816CC]
    l_7297A3:
        test    bl, bl
        mov     ecx, dword ptr [eax + 0x75c]
        je      l_7297DF
        test    ecx, ecx
        jne     l_7297D1
        fild    dword ptr [eax + 0x128]
        fld     st(0)
        fmul    dword ptr [g_7A5640]
        fdiv    dword ptr [g_8816D8]
        /* __emit: MSVC6 cannot encode fdivr st(1) (D8 F9) via inline asm */
        __emit 0xD8
        __emit 0xF9
        fstp    dword ptr [g_8816D8]
        fstp    st(0)
        jmp     l_7297F3
    l_7297D1:
        fld     dword ptr [g_8816D8]
        fmul    dword ptr [g_76F5D8]
        jmp     l_7297ED
    l_7297DF:
        fild    dword ptr [eax + 0x128]
        test    ecx, ecx
        fmul    dword ptr [g_8816D8]
    l_7297ED:
        fstp    dword ptr [g_8816D8]
    l_7297F3:
        fild    dword ptr [eax + 0x128]
        fdivr   dword ptr [g_8816D8]
        fst     dword ptr [g_7B7118]
        fcomp   dword ptr [g_76D064]
        fnstsw  ax
        test    ah, 0x40
        jne     l_72981E
        mov     byte ptr [g_8816DC], 1
        jmp     l_72957E
    l_72981E:
        mov     byte ptr [g_8816DC], 0
        jmp     l_72957E
    l_72982A:
        push    0xf
        push    esi
        push    0x7a581c
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_729848
        add     esi, 0xf
        mov     byte ptr [g_8816E4], al
        jmp     l_72957E
    l_729848:
        push    0xf
        push    esi
        push    0x7a580c
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_729868
        add     esi, 0xf
        mov     byte ptr [g_8816E4], 1
        jmp     l_72957E
    l_729868:
        push    7
        push    esi
        push    0x7a5804
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_729888
        add     esi, 7
        mov     byte ptr [g_8816DD], 1
        jmp     l_72957E
    l_729888:
        push    7
        push    esi
        push    0x7a57fc
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_7298A6
        add     esi, 7
        mov     byte ptr [g_8816DD], al
        jmp     l_72957E
    l_7298A6:
        push    0xb
        push    esi
        push    0x7a57f0
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_7298C4
        add     esi, 0xb
        mov     dword ptr [g_8816E0], eax
        jmp     l_72957E
    l_7298C4:
        push    0xc
        push    esi
        push    0x7a57e0
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_7298E7
        add     esi, 0xc
        mov     dword ptr [g_8816E0], 1
        jmp     l_72957E
    l_7298E7:
        push    0xd
        push    esi
        push    0x7a57d0
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72990A
        add     esi, 0xd
        mov     dword ptr [g_8816E0], 2
        jmp     l_72957E
    l_72990A:
        push    0xd
        push    esi
        push    0x7a57c0
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72992D
        add     esi, 0xd
        mov     dword ptr [g_8816E0], 3
        jmp     l_72957E
    l_72992D:
        push    7
        push    esi
        push    0x7a57b8
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72994D
        add     esi, 7
        mov     byte ptr [g_8816E5], 1
        jmp     l_72957E
    l_72994D:
        push    7
        push    esi
        push    0x7a57b0
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_72996B
        add     esi, 7
        mov     byte ptr [g_8816E5], al
        jmp     l_72957E
    l_72996B:
        push    9
        push    esi
        push    0x7a57a4
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_729989
        add     esi, 9
        mov     byte ptr [g_8816E6], al
        jmp     l_72957E
    l_729989:
        push    9
        push    esi
        push    0x7a5798
        call    edi
        add     esp, 0xc
        test    eax, eax
        jne     l_7299A9
        add     esi, 9
        mov     byte ptr [g_8816E6], 1
        jmp     l_72957E
    l_7299A9:
        mov     eax, dword ptr [ebp + 8]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebx
    l_7299B1:
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
