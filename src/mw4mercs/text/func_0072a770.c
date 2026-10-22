/*
 * FUN_0072a770 (2677 B) — Large rendering/display update routine.
 *
 * Dispatches on a per-character type byte (0..4) via a jump table
 * (0x72b1e8). Performs text/string layout, font metric handling, and
 * calls into the render helpers FUN_0072b270 / FUN_0072b230 / FUN_0072b200.
 *
 * __cdecl, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* IAT function pointers */
extern void *g_0076b320;
extern void *g_0076b420;
extern void *g_0076b3c4;

/* FPU data */
extern double g_0077b648;
extern float  g_007a595c;

/* Data symbols */
extern char          g_008825b4;
extern unsigned long g_0088170c;
extern char          g_0087c5b0;
extern char          g_008825dc;
extern unsigned long g_007b712c;
extern unsigned long g_007b7130;
extern unsigned long g_008825d0;
extern unsigned long g_008825cc;
extern char          g_008825d4;
extern float         g_00881708;
extern char          g_00881719;
extern char          g_00881718;
extern char          g_0088171a;
extern unsigned long g_00881710;
extern char          g_00882464[];
extern unsigned long g_00881700;
extern unsigned long g_00881704;
extern unsigned long g_00881a58;
extern unsigned long g_008825b8;
extern unsigned long g_008825c8;
extern unsigned long g_00882568;
extern unsigned long g_0088256c;
extern unsigned long g_00882570;
extern unsigned long g_00882574;
extern unsigned long g_00882578;
extern unsigned long g_0088171c;
extern unsigned long g_00881724;
extern unsigned long g_0085895c;
extern unsigned long g_00881a5c;
extern char          g_00881a64;
extern char          g_007b7120;
extern unsigned long g_007b7124;
extern unsigned long g_007b7128;
extern char          g_008825c4;
extern char          g_008825c5;
extern unsigned long g_0088258c;
extern unsigned long g_00882590;
extern unsigned long g_00858944;
extern unsigned long g_00858940;
extern unsigned long g_0088172c;
extern unsigned long g_00881714;
extern unsigned long g_008816d0;
extern unsigned long g_00881a60;
extern unsigned long g_00881728;
extern unsigned long g_00881720;
extern char          g_00881858;

/* Direct callees */
extern void __cdecl FUN_0072c090(int a);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00717650(void);
extern void __cdecl FUN_0072c0d0(int a);
extern void __cdecl FUN_00708930(void *a, void *b, void *c, void *d);
extern void __cdecl FUN_00707e70(int a);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_007274d0(void);
extern void __cdecl FUN_00727630(void);
extern void __cdecl FUN_00727660(void *a, void *b, void *c);
extern void __cdecl FUN_006fab90(void *a);
extern void __cdecl FUN_0072b270(void);
extern void __cdecl FUN_0072b200(void);
extern void __cdecl FUN_0072b230(void);
extern void __cdecl FUN_007275f0(void);
extern void __cdecl FUN_00728fd0(void *a);
extern void __cdecl FUN_00713d70(void);

__declspec(naked) void __cdecl FUN_0072a770(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x260
        mov     al, byte ptr [g_008825b4]
        push    ebx
        xor     ebx, ebx
        test    al, al
        jz      L_72b1e0
        mov     eax, dword ptr [g_0088170c]
        cmp     eax, ebx
        jz      L_72b1e0
        cmp     dword ptr [eax], 0x4587abba
        jz      L_72a7a9
        push    ebx
        call    FUN_0072c090
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
L_72a7a9:
        mov     al, byte ptr [g_0087c5b0]
        test    al, al
        mov     byte ptr [ebp - 0x1d], 0
        jz      L_72a7bf
        mov     byte ptr [ebp - 0x1d], 1
        call    FUN_00713d10
L_72a7bf:
        push    esi
        push    edi
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x3f800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0x3f800000
        push    ebx
        call    FUN_00717650
        xor     eax, eax
        mov     al, byte ptr [g_008825dc]
        push    eax
        call    FUN_0072c0d0
        cmp     dword ptr [g_007b712c], -1
        mov     esi, 4
        jnz     L_72a834
        push    ebx
        lea     ecx, [ebp - 4]
        push    ecx
        mov     eax, 1
        push    0x7b712c
        push    0x7a596c
        mov     dword ptr [g_007b712c], eax
        mov     dword ptr [g_007b7130], eax
        mov     dword ptr [ebp - 4], esi
        call    FUN_00708930
        push    ebx
        lea     edx, [ebp - 4]
        push    edx
        push    0x7b7130
        push    0x7a5960
        mov     dword ptr [ebp - 4], esi
        call    FUN_00708930
L_72a834:
        push    1
        call    FUN_00707e70
        fmul    qword ptr [g_0077b648]
        call    FUN_0075db4a
        mov     esi, dword ptr [g_008825d0]
        mov     edx, dword ptr [g_008825cc]
        mov     ecx, eax
        sub     ecx, esi
        cmp     ecx, edx
        jbe     L_72a86f
        mov     dword ptr [g_008825d0], eax
        mov     al, byte ptr [g_008825d4]
        test    al, al
        setz    dl
        mov     byte ptr [g_008825d4], dl
L_72a86f:
        fld     dword ptr [g_00881708]
        push    1
        fmul    dword ptr [g_007a595c]
        xor     eax, eax
        mov     al, byte ptr [g_00881719]
        xor     ecx, ecx
        mov     cl, byte ptr [g_00881718]
        push    ebx
        xor     edx, edx
        mov     dl, byte ptr [g_0088171a]
        mov     dword ptr [ebp - 0x10], ebx
        push    eax
        mov     eax, dword ptr [g_00881710]
        push    ecx
        push    edx
        push    ebx
        push    ecx
        mov     ecx, dword ptr [g_0088170c]
        fstp    dword ptr [esp]
        push    eax
        push    ecx
        call    FUN_007274d0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x882464
        repne   scasb
        push    0x2710
        push    0x2710
        not     ecx
        push    ebx
        dec     ecx
        push    ebx
        mov     dword ptr [ebp - 0x28], ebx
        mov     dword ptr [ebp - 0x24], ebx
        mov     dword ptr [ebp - 0x14], ecx
        call    FUN_00727630
        mov     edi, dword ptr [g_00881700]
        mov     esi, dword ptr [g_00881704]
        push    0x76cb8c
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 0x3c]
        push    eax
        mov     dword ptr [ebp - 0x18], ebx
        mov     dword ptr [ebp - 0x38], ebx
        mov     dword ptr [ebp - 4], 0x881858
        mov     dword ptr [ebp - 0x34], ebx
        call    FUN_00727660
        mov     eax, dword ptr [g_00881a58]
        add     esp, 0xc
        cmp     eax, 3
        jnz     L_72a96d
        mov     eax, dword ptr [g_008825b8]
        cmp     eax, ebx
        jz      L_72a96d
        mov     cl, byte ptr [g_00882464]
        test    cl, cl
        jz      L_72a96d
        push    eax
        lea     ecx, [ebp + 0xfffffda0]
        push    0x882464
        push    ecx
        mov     byte ptr [ebp + 0xfffffda0], 0
        call    dword ptr [g_0076b320]
        mov     edx, dword ptr [g_008825b8]
        lea     eax, [ebp + 0xfffffda0]
        push    eax
        lea     ecx, [ebp - 0x1c]
        mov     byte ptr [ebp + edx + 0xfffffda0], 0
        push    ecx
        lea     edx, [ebp - 0x34]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [ebp - 0x34]
        add     esp, 0x18
L_72a96b:
        sub     edi, eax
L_72a96d:
        mov     eax, 0x2710
        mov     dword ptr [ebp - 0x4c], eax
        mov     dword ptr [ebp - 0x48], eax
        cmp     dword ptr [g_008825c8], 0x3b5
        mov     dword ptr [ebp - 0x44], ebx
        mov     dword ptr [ebp - 0x40], ebx
        mov     byte ptr [ebp - 6], 0
        mov     byte ptr [ebp - 5], 0
        jnz     L_72a99f
        mov     al, byte ptr [g_008825d4]
        test    al, al
        jz      L_72abc1
L_72a99f:
        cmp     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0x10], ebx
        jle     L_72abc1
L_72a9ab:
        xor     eax, eax
        mov     eax, dword ptr [ebp - 0x10]
        mov     al, byte ptr [eax + 0x882464]
        xor     ebx, ebx
        xor     edx, edx
        mov     dword ptr [ebp - 0x2c], ebx
        mov     byte ptr [ebp - 0x30], al
        mov     byte ptr [ebp - 0x2e], bl
        mov     byte ptr [ebp - 0x2f], bl
        mov     ecx, eax
        and     ecx, 0xff
        cmp     byte ptr [ecx + 0x896b88], dl
        setnz   dl
        inc     edx
        mov     ecx, edx
        cmp     ecx, 2
        mov     dword ptr [ebp - 0xc], ecx
        jnz     L_72a9f2
        mov     eax, dword ptr [ebp - 0x10]
        mov     al, byte ptr [eax + 0x882465]
        test    al, al
        jz      L_72a9f2
        mov     byte ptr [ebp - 0x2f], al
L_72a9f2:
        lea     ecx, [ebp - 0x30]
        push    ecx
        lea     edx, [ebp - 0x1c]
        push    edx
        lea     eax, [ebp - 0x34]
        push    eax
        call    FUN_00727660
        mov     ecx, dword ptr [ebp - 0x10]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x882364]
        add     esp, 0xc
        cmp     eax, 4
        ja      L_72aa58
        jmp     dword ptr [eax * 4 + 0x72b1e8]
L_72aa1d:
        mov     ebx, dword ptr [g_00882568]
        mov     dword ptr [ebp - 0x2c], ebx
        jmp     L_72aa6a
L_72aa28:
        mov     ebx, dword ptr [g_0088256c]
        mov     dword ptr [ebp - 0x2c], ebx
        mov     byte ptr [ebp - 5], 1
        jmp     L_72aa6a
L_72aa37:
        mov     ebx, dword ptr [g_00882570]
        mov     dword ptr [ebp - 0x2c], ebx
        jmp     L_72aa6a
L_72aa42:
        mov     ebx, dword ptr [g_00882574]
        mov     dword ptr [ebp - 0x2c], ebx
        jmp     L_72aa6a
L_72aa4d:
        mov     ebx, dword ptr [g_00882578]
        mov     dword ptr [ebp - 0x2c], ebx
        jmp     L_72aa6a
L_72aa58:
        push    0x7a5934
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_72aa6a
        int     3
L_72aa6a:
        mov     eax, dword ptr [g_00881a58]
        cmp     eax, 3
        jnz     L_72aaa9
        cmp     edi, dword ptr [g_0088171c]
        jc      L_72ab4d
        cmp     edi, dword ptr [g_00881724]
        ja      L_72ab4d
        mov     edx, dword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebp - 0x34]
        push    ebx
        add     edx, esi
        push    edx
        add     eax, edi
        push    eax
        push    esi
        push    edi
        mov     byte ptr [ebp - 6], 1
        call    FUN_0072b270
        jmp     L_72ab4d
L_72aaa9:
        cmp     eax, 2
        jnz     L_72ab4d
        mov     eax, dword ptr [ebp - 4]
        mov     edx, dword ptr [ebp - 0x34]
        mov     ecx, eax
        sub     ecx, 0x881858
        cmp     ecx, 0x1fa
        lea     ecx, [edx + edi]
        setc    bl
        cmp     ecx, dword ptr [g_00881724]
        mov     ecx, dword ptr [ebp - 0x1c]
        jc      L_72aafb
        mov     edi, dword ptr [g_0088171c]
        add     esi, ecx
        test    bl, bl
        jz      L_72aafb
        cmp     eax, 0x881858
        jz      L_72aaf0
        cmp     byte ptr [eax - 1], 0
        jnz     L_72aaf4
L_72aaf0:
        mov     byte ptr [eax], 0x20
        inc     eax
L_72aaf4:
        mov     byte ptr [eax], 0
        inc     eax
        mov     dword ptr [ebp - 4], eax
L_72aafb:
        mov     eax, dword ptr [ebp - 0x2c]
        push    eax
        add     ecx, esi
        push    ecx
        add     edx, edi
        push    edx
        push    esi
        push    edi
        mov     byte ptr [ebp - 6], 1
        call    FUN_0072b270
        test    bl, bl
        mov     ecx, dword ptr [ebp - 0x10]
        jz      L_72ab3a
        mov     eax, dword ptr [ebp - 4]
        mov     dl, byte ptr [ecx + 0x882464]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ebp - 0xc]
        inc     eax
        cmp     edx, 2
        mov     dword ptr [ebp - 4], eax
        jnz     L_72ab3a
        mov     dl, byte ptr [ecx + 0x882465]
        mov     byte ptr [eax], dl
        inc     eax
        mov     dword ptr [ebp - 4], eax
L_72ab3a:
        cmp     ecx, dword ptr [g_008825b8]
        jnz     L_72ab4d
        mov     eax, dword ptr [ebp - 0x1c]
        push    eax
        push    esi
        push    edi
        call    FUN_0072b200
L_72ab4d:
        mov     al, byte ptr [ebp - 5]
        test    al, al
        jz      L_72ab65
        mov     eax, dword ptr [ebp - 0x18]
        test    eax, eax
        jnz     L_72ab65
        mov     byte ptr [ebp - 5], 0
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x38], esi
L_72ab65:
        mov     eax, dword ptr [g_0085895c]
        test    eax, eax
        mov     ecx, dword ptr [ebp - 0x34]
        jz      L_72aba7
        mov     al, byte ptr [ebp - 6]
        test    al, al
        jz      L_72aba7
        cmp     dword ptr [ebp - 0x4c], edi
        mov     byte ptr [ebp - 6], 0
        jbe     L_72ab84
        mov     dword ptr [ebp - 0x4c], edi
L_72ab84:
        cmp     dword ptr [ebp - 0x48], esi
        jbe     L_72ab8c
        mov     dword ptr [ebp - 0x48], esi
L_72ab8c:
        mov     edx, dword ptr [ebp - 0x44]
        lea     eax, [ecx + edi]
        cmp     edx, eax
        jnc     L_72ab99
        mov     dword ptr [ebp - 0x44], eax
L_72ab99:
        mov     edx, dword ptr [ebp - 0x1c]
        lea     eax, [edx + esi]
        cmp     dword ptr [ebp - 0x40], eax
        jnc     L_72aba7
        mov     dword ptr [ebp - 0x40], eax
L_72aba7:
        mov     eax, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0xc]
        add     edi, ecx
        mov     ecx, dword ptr [ebp - 0x14]
        add     eax, edx
        cmp     eax, ecx
        mov     dword ptr [ebp - 0x10], eax
        jl      L_72a9ab
        jmp     L_72abc4
L_72abc1:
        mov     eax, dword ptr [ebp - 0x10]
L_72abc4:
        mov     ecx, dword ptr [g_0085895c]
        test    ecx, ecx
        jz      L_72abf8
        mov     ecx, dword ptr [ebp - 0x44]
        cmp     dword ptr [ebp - 0x4c], ecx
        jge     L_72abf8
        mov     edx, dword ptr [ebp - 0x40]
        cmp     dword ptr [ebp - 0x48], edx
        jge     L_72abf8
        mov     ecx, dword ptr [ebp - 0x44]
        mov     eax, edx
        mov     edx, dword ptr [ebp - 0x48]
        push    eax
        mov     eax, dword ptr [ebp - 0x4c]
        add     ecx, 2
        push    ecx
        push    edx
        push    eax
        call    FUN_0072b230
        mov     eax, dword ptr [ebp - 0x10]
L_72abf8:
        cmp     dword ptr [g_00881a58], 2
        jnz     L_72ac7f
        mov     ecx, dword ptr [ebp - 0x14]
        test    ecx, ecx
        jz      L_72ac1b
        cmp     eax, dword ptr [g_008825b8]
        jnz     L_72ac1b
        mov     ecx, dword ptr [ebp - 0x1c]
        push    ecx
        push    esi
        push    edi
        call    FUN_0072b200
L_72ac1b:
        mov     eax, dword ptr [ebp - 4]
        mov     ebx, dword ptr [g_00881704]
        mov     byte ptr [eax], 0
        mov     byte ptr [eax + 1], 0
        mov     cl, byte ptr [g_00881858]
        test    cl, cl
        mov     eax, dword ptr [g_00881700]
        mov     esi, 0x881858
        jz      L_72ac7f
L_72ac3f:
        mov     edx, esi
        sub     edx, 0x881858
        cmp     edx, 0x200
        jnc     L_72ac7f
        push    ebx
        push    eax
        call    FUN_007275f0
        push    esi
        call    FUN_00728fd0
        mov     edx, dword ptr [ebp - 0x1c]
        or      ecx, 0xffffffff
        xor     eax, eax
        add     esp, 4
        mov     edi, esi
        repne   scasb
        mov     eax, dword ptr [g_0088171c]
        not     ecx
        dec     ecx
        lea     esi, [esi + ecx + 1]
        mov     cl, byte ptr [esi]
        add     ebx, edx
        test    cl, cl
        jnz     L_72ac3f
L_72ac7f:
        mov     eax, dword ptr [g_00881a5c]
        test    eax, eax
        jz      L_72b1a1
        mov     al, byte ptr [g_00881a64]
        test    al, al
        jz      L_72b1a1
        mov     eax, dword ptr [ebp - 0x18]
        xor     edi, edi
        cmp     eax, edi
        jnz     L_72acb3
        mov     eax, dword ptr [g_00881700]
        mov     ecx, dword ptr [g_00881704]
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x38], ecx
L_72acb3:
        mov     al, byte ptr [g_007b7120]
        test    al, al
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x28], edi
        jz      L_72accd
        mov     edx, dword ptr [g_007b7124]
        mov     dword ptr [ebp - 0x30], edx
        jmp     L_72acd5
L_72accd:
        mov     eax, dword ptr [g_007b7128]
        mov     dword ptr [ebp - 0x30], eax
L_72acd5:
        mov     al, byte ptr [g_008825c4]
        test    al, al
        jz      L_72ad01
        mov     al, byte ptr [g_008825c5]
        test    al, al
        jz      L_72ad01
        push    0x881730
        lea     ecx, [ebp - 0x24]
        push    ecx
        lea     edx, [ebp - 0x28]
        push    edx
        call    FUN_00727660
        add     esp, 0xc
        jmp     L_72ad89
L_72ad01:
        mov     ebx, dword ptr [g_0076b420]
        mov     esi, 0x881a64
        cmp     esi, 0x882364
        jge     L_72ad89
L_72ad0c:
        mov     eax, dword ptr [g_007b712c]
        test    eax, eax
        jz      L_72ad51
        mov     al, byte ptr [g_008825c4]
        test    al, al
        jnz     L_72ad51
        mov     ecx, dword ptr [ebp - 0x30]
        push    esi
        lea     eax, [edi + 1]
        push    eax
        push    ecx
        lea     edx, [ebp + 0xfffffea0]
        push    edx
        call    ebx
        lea     eax, [ebp + 0xfffffea0]
        push    eax
        lea     ecx, [ebp - 0x14]
        push    ecx
        lea     edx, [ebp - 0xc]
        push    edx
        call    FUN_00727660
        add     esp, 0x1c
        jmp     L_72ad62
L_72ad51:
        push    esi
        lea     eax, [ebp - 0x14]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        call    FUN_00727660
        add     esp, 0xc
L_72ad62:
        mov     eax, dword ptr [ebp - 0xc]
        cmp     eax, dword ptr [ebp - 0x28]
        jle     L_72ad6d
        mov     dword ptr [ebp - 0x28], eax
L_72ad6d:
        mov     eax, dword ptr [ebp - 0x14]
        cmp     eax, dword ptr [ebp - 0x24]
        jle     L_72ad78
        mov     dword ptr [ebp - 0x24], eax
L_72ad78:
        mov     al, byte ptr [esi + 0x100]
        add     esi, 0x100
        inc     edi
        test    al, al
        __emit  0x75  /* __emit: MSVC6 miscomputes backward jnz L_72ad0c rel8 (75 8B); ref needs 75 83 */
        __emit  0x83
L_72ad89:
        push    0x77a388
        lea     edx, [ebp - 0x3c]
        push    edx
        lea     eax, [ebp - 0x60]
        push    eax
        call    FUN_00727660
        push    0x76cb8c
        lea     ecx, [ebp - 0x3c]
        push    ecx
        lea     edx, [ebp - 0x10]
        push    edx
        call    FUN_00727660
        mov     eax, dword ptr [ebp - 0x10]
        mov     cl, byte ptr [g_008825c4]
        lea     edx, [eax + 1]
        shr     edx, 1
        add     esp, 0x18
        test    cl, cl
        mov     dword ptr [ebp - 0x2c], edx
        jz      L_72add1
        mov     eax, dword ptr [g_00881a5c]
        cmp     eax, 9
        mov     esi, eax
        jc      L_72add6
L_72add1:
        mov     esi, 9
L_72add6:
        mov     al, byte ptr [g_007b7120]
        test    al, al
        mov     dword ptr [ebp - 0xc], esi
        jz      L_72adfa
        test    cl, cl
        jz      L_72adef
        mov     al, byte ptr [g_008825c5]
        test    al, al
        jnz     L_72adfa
L_72adef:
        mov     edi, esi
        imul    edi, dword ptr [ebp - 0x24]
        add     edi, 2
        jmp     L_72ae00
L_72adfa:
        mov     ecx, dword ptr [ebp - 0x24]
        lea     edi, [ecx + 2]
L_72ae00:
        mov     eax, dword ptr [ebp - 0x1c]
        mov     ecx, dword ptr [ebp - 0x38]
        lea     ebx, [edi + eax]
        add     ebx, ecx
        cmp     ebx, dword ptr [g_00858944]
        jbe     L_72ae17
        sub     ecx, edi
        jmp     L_72ae19
L_72ae17:
        add     ecx, eax
L_72ae19:
        mov     al, byte ptr [g_008825c4]
        test    al, al
        mov     dword ptr [ebp - 0x38], ecx
        jz      L_72ae37
        mov     al, byte ptr [g_008825c5]
        test    al, al
        jz      L_72ae37
        mov     eax, dword ptr [ebp - 0x28]
        lea     eax, [eax + edx * 2 + 2]
        jmp     L_72ae53
L_72ae37:
        mov     al, byte ptr [g_007b7120]
        test    al, al
        jz      L_72ae49
        mov     eax, dword ptr [ebp - 0x28]
        lea     eax, [eax + edx * 2 + 2]
        jmp     L_72ae53
L_72ae49:
        mov     edx, dword ptr [ebp - 0x28]
        lea     eax, [edx + 1]
        imul    eax, esi
        inc     eax
L_72ae53:
        mov     esi, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [g_00858940]
        lea     ebx, [eax + esi]
        cmp     ebx, edx
        mov     dword ptr [ebp - 0x14], eax
        jbe     L_72ae6d
        sub     edx, eax
        mov     esi, edx
        mov     dword ptr [ebp - 0x18], esi
L_72ae6d:
        lea     ebx, [eax + esi]
        mov     eax, dword ptr [g_00882590]
        push    eax
        add     edi, ecx
        push    edi
        push    ebx
        push    ecx
        push    esi
        mov     dword ptr [ebp - 4], ebx
        call    FUN_0072b270
        mov     eax, dword ptr [g_0085895c]
        test    eax, eax
        jz      L_72ae99
        mov     ecx, dword ptr [ebp - 0x38]
        push    edi
        push    ebx
        push    ecx
        push    esi
        call    FUN_0072b230
L_72ae99:
        mov     edx, dword ptr [ebp - 0x18]
        mov     eax, dword ptr [ebp - 0x38]
        lea     esi, [edx + 1]
        mov     edx, dword ptr [ebp - 4]
        dec     edx
        lea     ebx, [eax + 1]
        mov     al, byte ptr [g_007b7120]
        dec     edi
        test    al, al
        mov     dword ptr [ebp - 0x18], esi
        mov     dword ptr [ebp - 4], edx
        jz      L_72af2e
        mov     eax, dword ptr [g_007b712c]
        test    eax, eax
        mov     ecx, edx
        mov     dword ptr [ebp - 0xc], ecx
        jz      L_72af1a
        mov     al, byte ptr [g_008825c4]
        test    al, al
        jnz     L_72af1a
        mov     eax, dword ptr [g_007b7130]
        test    eax, eax
        jz      L_72af1a
        mov     edx, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x2c]
        mov     eax, dword ptr [ebp - 0x60]
        shr     edx, 1
        add     edx, ecx
        mov     ecx, dword ptr [g_0088258c]
        push    ecx
        add     edx, eax
        push    edi
        lea     eax, [edx + esi - 1]
        push    eax
        push    ebx
        push    esi
        mov     dword ptr [ebp - 4], eax
        call    FUN_0072b270
        mov     ecx, dword ptr [g_0088258c]
        mov     edx, dword ptr [ebp - 4]
        push    ecx
        lea     eax, [edx + 1]
        mov     edx, dword ptr [ebp - 0xc]
        push    edi
        push    edx
        push    ebx
        push    eax
        call    FUN_0072b270
        jmp     L_72af5d
L_72af1a:
        mov     eax, dword ptr [g_0088258c]
        mov     ecx, dword ptr [ebp - 4]
        push    eax
        push    edi
        push    ecx
        push    ebx
        push    esi
        call    FUN_0072b270
        jmp     L_72af5d
L_72af2e:
        mov     eax, dword ptr [ebp - 0xc]
        test    eax, eax
        jbe     L_72af5d
        mov     dword ptr [ebp - 0xc], eax
L_72af38:
        mov     edx, dword ptr [g_0088258c]
        mov     eax, dword ptr [ebp - 0x28]
        push    edx
        push    edi
        add     eax, esi
        push    eax
        push    ebx
        push    esi
        call    FUN_0072b270
        mov     eax, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [ebp - 0x28]
        dec     eax
        lea     esi, [esi + ecx + 1]
        mov     dword ptr [ebp - 0xc], eax
        jnz     L_72af38
L_72af5d:
        mov     al, byte ptr [g_008825c4]
        test    al, al
        mov     edi, dword ptr [ebp - 0x18]
        jz      L_72b09b
        mov     al, byte ptr [g_008825c5]
        test    al, al
        jz      L_72b09b
        add     edi, dword ptr [ebp - 0x2c]
        mov     edx, dword ptr [g_0088172c]
        or      ecx, 0xffffffff
        test    edx, edx
        mov     dword ptr [ebp - 0x14], ecx
        mov     dword ptr [ebp - 0xc], ecx
        mov     dword ptr [ebp - 0x18], edi
        jl      L_72b037
        xor     eax, eax
        mov     edi, 0x881730
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        lea     esi, [ebp - 0x5c]
        mov     dword ptr [ebp - 4], esi
        shr     ecx, 2
        mov     esi, edi
        mov     edi, dword ptr [ebp - 4]
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        lea     ecx, [ebp + edx - 0x5c]
        push    ecx
        call    dword ptr [g_0076b3c4]
        lea     edx, [ebp - 0x5c]
        mov     byte ptr [eax], 0
        push    edx
        lea     eax, [ebp - 4]
        push    eax
        lea     ecx, [ebp - 0xc]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [g_0088172c]
        mov     cl, byte ptr [ebp + edx - 0x5c]
        lea     eax, [ebp + edx - 0x5c]
        lea     edx, [ebp - 0x5c]
        mov     byte ptr [eax], 0
        push    edx
        lea     eax, [ebp - 4]
        mov     byte ptr [ebp - 5], cl
        push    eax
        lea     ecx, [ebp - 0x14]
        push    ecx
        call    FUN_00727660
        mov     edx, dword ptr [g_0088172c]
        mov     al, byte ptr [ebp - 5]
        mov     ecx, dword ptr [g_00882590]
        mov     byte ptr [ebp + edx - 0x5c], al
        mov     edx, dword ptr [ebp - 0x24]
        add     esp, 0x1c
        push    ecx
        mov     ecx, dword ptr [ebp - 0xc]
        lea     eax, [ebx + edx]
        mov     edx, dword ptr [ebp - 0x14]
        push    eax
        mov     eax, dword ptr [ebp - 0x18]
        add     ecx, eax
        push    ecx
        push    ebx
        add     edx, eax
        push    edx
        call    FUN_0072b270
        mov     edi, dword ptr [ebp - 0x18]
L_72b037:
        push    ebx
        push    edi
        call    FUN_007275f0
        mov     eax, dword ptr [g_00881714]
        push    0x881730
        mov     dword ptr [g_008816d0], eax
        call    FUN_00728fd0
        mov     eax, dword ptr [ebp - 0x14]
        add     esp, 4
        test    eax, eax
        jl      L_72b1a1
        push    ebx
        add     eax, edi
        push    eax
        call    FUN_007275f0
        mov     ecx, dword ptr [g_00881714]
        mov     edx, dword ptr [g_0088172c]
        and     ecx, 0xffffff
        not     ecx
        lea     eax, [ebp + edx - 0x5c]
        sub     ecx, 0x1000000
        push    eax
        mov     dword ptr [g_008816d0], ecx
        call    FUN_00728fd0
        add     esp, 4
        jmp     L_72b1a1
L_72b09b:
        xor     esi, esi
        mov     dword ptr [ebp - 4], 0x881a64
        cmp     esi, dword ptr [g_00881a5c]
        jnc     L_72b1a1
L_72b0a4:
        cmp     dword ptr [g_00881a60], esi
        jnz     L_72b0fb
        mov     ecx, dword ptr [g_00881714]
        mov     eax, dword ptr [ebp - 0x24]
        mov     edx, dword ptr [g_00882590]
        and     ecx, 0xffffff
        not     ecx
        sub     ecx, 0x1000000
        mov     dword ptr [g_008816d0], ecx
        lea     ecx, [esi + 1]
        imul    ecx, eax
        imul    eax, esi
        push    edx
        mov     edx, dword ptr [ebp - 0x14]
        add     ecx, ebx
        push    ecx
        lea     ecx, [edx + edi - 1]
        push    ecx
        add     eax, ebx
        push    eax
        push    edi
        call    FUN_0072b270
        jmp     L_72b107
L_72b0fb:
        mov     edx, dword ptr [g_00881714]
        mov     dword ptr [g_008816d0], edx
L_72b107:
        mov     eax, dword ptr [ebp - 4]
        cmp     byte ptr [eax], 0
        jz      L_72b18a
        mov     al, byte ptr [g_007b7120]
        test    al, al
        jz      L_72b129
        mov     ecx, dword ptr [ebp - 0x24]
        mov     edx, dword ptr [ebp - 0x2c]
        imul    ecx, esi
        add     ecx, ebx
        push    ecx
        add     edx, edi
        push    edx
        jmp     L_72b13d
L_72b129:
        mov     eax, dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x10]
        inc     eax
        imul    eax, esi
        mov     edx, edi
        shr     ecx, 1
        add     edx, eax
        push    ebx
        add     ecx, edx
        push    ecx
L_72b13d:
        call    FUN_007275f0
        mov     eax, dword ptr [g_007b712c]
        test    eax, eax
        jz      L_72b17e
        mov     al, byte ptr [g_008825c4]
        test    al, al
        jnz     L_72b17e
        mov     eax, dword ptr [ebp - 4]
        mov     edx, dword ptr [ebp - 0x30]
        push    eax
        lea     ecx, [esi + 1]
        push    ecx
        push    edx
        lea     eax, [ebp + 0xfffffea0]
        push    eax
        call    dword ptr [g_0076b420]
        lea     ecx, [ebp + 0xfffffea0]
        push    ecx
        call    FUN_00728fd0
        add     esp, 0x14
        jmp     L_72b18a
L_72b17e:
        mov     edx, dword ptr [ebp - 4]
        push    edx
        call    FUN_00728fd0
        add     esp, 4
L_72b18a:
        mov     eax, dword ptr [ebp - 4]
        add     eax, 0x100
        inc     esi
        cmp     eax, 0x882364
        mov     dword ptr [ebp - 4], eax
        __emit  0x0F  /* __emit: MSVC6 miscomputes backward jl L_72b0a4 rel32 (0F 8C 0F FF FF FF); ref needs 0F 8C 03 FF FF FF */
        __emit  0x8C
        __emit  0x03
        __emit  0xFF
        __emit  0xFF
        __emit  0xFF
L_72b1a1:
        mov     eax, dword ptr [g_0085895c]
        test    eax, eax
        pop     edi
        pop     esi
        jz      L_72b1d4
        mov     al, byte ptr [g_00882464]
        test    al, al
        jz      L_72b1d4
        mov     eax, dword ptr [g_00881728]
        mov     ecx, dword ptr [g_00881724]
        mov     edx, dword ptr [g_00881720]
        push    eax
        mov     eax, dword ptr [g_0088171c]
        push    ecx
        push    edx
        push    eax
        call    FUN_0072b230
L_72b1d4:
        mov     al, byte ptr [ebp - 0x1d]
        test    al, al
        jz      L_72b1e0
        call    FUN_00713d70
L_72b1e0:
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
