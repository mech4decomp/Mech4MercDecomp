/*
 * FUN_0072b450 (1594 B) — file/version-info loader dispatcher.
 *
 * Dispatches on param_2 (a command code) via a byte table (0x72baa0) + jump
 * table (0x72ba8c), and on param_3 via a second jump table (0x72bb60).
 * Handles reading file contents (DAT_008aad5c), sending chars to a window
 * (SendMessageA), building a string table at DAT_00882464, and a
 * LocalAlloc/LocalFree block copy path.  __stdcall, RET 0x14 (5 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- IAT function pointers ---- */
extern void* (__cdecl *g_8aad68)(void*);                       /* DAT_008aad68 */
extern int (__cdecl *g_8aad5c)(void*, unsigned int, void*, unsigned int); /* DAT_008aad5c */
extern unsigned int (__cdecl *g_8aad4c)(void*, unsigned int, void*, unsigned int); /* DAT_008aad4c */
extern int (__cdecl *g_8aad58)(void*);                         /* DAT_008aad58 */
extern int (__cdecl *g_8aad50)(void*, void*, void*);           /* DAT_008aad50 */
extern int (__cdecl *g_8aad64)(void*, void*);                  /* DAT_008aad64 */
extern unsigned int (__cdecl *g_76b3c0)(const char*);          /* _mbstrlen */
extern int (__stdcall *g_76b560)(void*, unsigned int, unsigned int, void*); /* SendMessageA */
extern void* (__cdecl *g_76b410)(void*, const void*);          /* _mbscpy */
extern void* (__stdcall *g_76b0bc)(unsigned int, unsigned int);/* LocalAlloc */
extern void* (__stdcall *g_76b140)(void*);                     /* LocalFree */

/* ---- data symbols ---- */
extern int g_8825c0;            /* DAT_008825c0 */
extern int g_8825c8;            /* DAT_008825c8 */
extern unsigned char g_8825c4;  /* DAT_008825c4 */
extern unsigned char g_8825c5;  /* DAT_008825c5 */
extern int g_8825b8;            /* DAT_008825b8 */
extern int g_8825bc;            /* DAT_008825bc */
extern unsigned char g_8825dc;  /* DAT_008825dc */
extern int g_858bf8;            /* DAT_00858bf8 */
extern char g_882464[];         /* DAT_00882464 */
extern char g_882465[];         /* DAT_00882465 */
extern char g_88246b[];         /* DAT_0088246b */
extern char g_882468[];         /* DAT_00882468 */
extern char g_882364[];         /* DAT_00882364 */
extern int g_881a5c;            /* DAT_00881a5c */
extern int g_881a60;            /* DAT_00881a60 */
extern char g_881a64[];         /* DAT_00881a64 */
extern int g_881a58;            /* DAT_00881a58 */
extern char g_881d64[];         /* DAT_00881d64 */
extern int g_88172c;            /* DAT_0088172c */
extern char g_881730[];         /* DAT_00881730 */

/* ---- in-function jump/byte tables (data, outside compared slice) ---- */
extern char g_72baa0[];         /* byte table for first switch */
extern int g_72ba8c[];          /* dispatch table 1 */
extern int g_72bb60[];          /* dispatch table 2 */

/* ---- internal callees ---- */
extern void __cdecl FUN_0072d050(void);
extern void __cdecl FUN_0072bd10(void);
extern void __cdecl FUN_0072bc40(int a, int b, int c);
extern void __cdecl FUN_0072d120(int a);
extern int __cdecl FUN_0072bb90(char* a, int b);
extern void __cdecl FUN_0072bbe0(int a, int b);
extern int __cdecl FUN_0072c970(void);
extern void __cdecl FUN_0072cb30(void* a);

__declspec(naked) void* __stdcall FUN_0072b450(void)
{
    __asm {
        mov     eax, dword ptr [g_8825c0]
        sub     esp, 0x108
        push    ebx
        push    ebp
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jz      L_72b47d
        mov     eax, dword ptr [esp + 0x12c]
        pop     edi
        pop     esi
        mov     byte ptr [eax], bl
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b47d:
        mov     eax, dword ptr [esp + 0x120]
        cmp     eax, 0x281
        mov     edi, dword ptr [esp + 0x12c]
        mov     byte ptr [edi], 0x1
        ja      L_72b81d
        jz      L_72b828
        add     eax, -0x51
        cmp     eax, 0xbe
        ja      L_72b828
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_72baa0]
        jmp     dword ptr [ecx*4 + g_72ba8c]
    L_72b4bc:
        call    FUN_0072d050
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b4d3:
        call    FUN_0072bd10
    L_72b4d8:
        mov     byte ptr [edi], 0x1
    L_72b4db:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b4ea:
        mov     edx, dword ptr [esp + 0x11c]
        push    edx
        call    dword ptr [g_8aad68]
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [esp + 0x10], ebx
        jz      L_72b4db
        mov     eax, dword ptr [esp + 0x128]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x08
        jz      L_72b59d
        push    0xff
        lea     eax, [esp + 0x1c]
        push    eax
        push    0x800
        push    ebx
        call    dword ptr [g_8aad5c]
        lea     ecx, [esp + 0x18]
        mov     ebp, eax
        push    ecx
        mov     byte ptr [esp + ebp*1 + 0x1c], 0
        call    dword ptr [g_76b3c0]
        mov     edx, dword ptr [g_858bf8]
        add     esp, 0x4
        push    eax
        push    0x0
        push    edx
        call    FUN_0072bc40
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x18]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_882464
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        xor     esi, esi
        test    ebp, ebp
        jle     L_72b598
    L_72b576:
        mov     edx, dword ptr [g_858bf8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + g_882464]
        push    0x0
        push    ecx
        push    0x102
        push    edx
        call    dword ptr [g_76b560]
        inc     esi
        cmp     esi, ebp
        jl      L_72b576
    L_72b598:
        call    FUN_0072bd10
    L_72b59d:
        test    byte ptr [esp + 0x128], 0x8
        jz      L_72b7da
        push    0xff
        lea     eax, [esp + 0x1c]
        push    eax
        push    0x8
        push    ebx
        call    dword ptr [g_8aad5c]
        lea     ecx, [esp + 0x18]
        push    ecx
        mov     byte ptr [esp + eax*1 + 0x1c], 0
        call    dword ptr [g_76b3c0]
        mov     edx, dword ptr [g_858bf8]
        add     esp, 0x4
        push    eax
        push    0x0
        push    edx
        call    FUN_0072bc40
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x18]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, offset g_882464
        rep     movsd
        push    0xff
        push    offset g_882364
        mov     ecx, eax
        push    0x10
        and     ecx, 0x3
        push    ebx
        rep     movsb
        call    dword ptr [g_8aad5c]
        mov     byte ptr [eax + g_882364], 0
        cmp     dword ptr [g_8825c8], 0x3b6
        jnz     L_72b633
        call    FUN_0072c970
        test    eax, eax
        jz      L_72b643
    L_72b633:
        cmp     dword ptr [g_8825c8], 0x3a8
        jnz     L_72b756
    L_72b643:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_882464
        repne   scasb
        not     ecx
        dec     ecx
        shr     ecx, 0x1
        jz      L_72b74c
        lea     edi, [ecx + -0x1]
        mov     dword ptr [g_881a5c], 0x4
        mov     dword ptr [g_881a60], 0xffffffff
        mov     esi, 0x3
        mov     eax, offset g_88246b
        mov     ecx, offset g_881d64
    L_72b680:
        cmp     esi, edi
        jle     L_72b689
        mov     byte ptr [ecx], 0x0
        jmp     L_72b697
    L_72b689:
        mov     dl, byte ptr [eax + -0x1]
        mov     byte ptr [ecx], dl
        mov     dl, byte ptr [eax]
        mov     byte ptr [ecx + 0x1], dl
        mov     byte ptr [ecx + 0x2], 0x0
    L_72b697:
        sub     eax, 0x2
        dec     esi
        sub     ecx, 0x100
        cmp     eax, offset g_882465
        jge     L_72b680
        xor     eax, eax
        mov     dword ptr [g_882464], eax
        push    eax
        mov     dword ptr [g_882468], eax
        mov     byte ptr [g_8825c4], 0x1
        call    FUN_0072d120
        mov     al, byte ptr [g_8825c5]
        test    al, al
        jz      L_72b756
        mov     eax, dword ptr [g_881a5c]
        xor     edx, edx
        test    eax, eax
        mov     dword ptr [g_88172c], 0xffffffff
        mov     byte ptr [g_881730], 0x0
        jbe     L_72b756
        mov     ebp, offset g_881a64
    L_72b6ef:
        cmp     dword ptr [g_881a60], edx
        jnz     L_72b70c
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_881730
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [g_88172c], ecx
    L_72b70c:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebp
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_881730
        repne   scasb
        mov     eax, dword ptr [g_881a5c]
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        inc     edx
        add     ebp, 0x100
        cmp     edx, eax
        rep     movsb
        jc      L_72b6ef
        mov     ebx, dword ptr [esp + 0x10]
        jmp     L_72b756
    L_72b74c:
        mov     dword ptr [g_881a5c], 0x0
    L_72b756:
        push    0x0
        push    0x0
        push    0x80
        push    ebx
        call    dword ptr [g_8aad5c]
        push    eax
        push    offset g_882464
        mov     dword ptr [g_8825b8], eax
        call    FUN_0072bb90
        mov     dword ptr [g_8825bc], eax
        cmp     dword ptr [g_881a58], 0x3
        jnz     L_72b7da
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_882464
        repne   scasb
        not     ecx
        dec     ecx
        mov     edi, ecx
        xor     esi, esi
        test    edi, edi
        jle     L_72b7bd
    L_72b79b:
        mov     edx, dword ptr [g_858bf8]
        xor     ecx, ecx
        mov     cl, byte ptr [esi + g_882464]
        push    0x0
        push    ecx
        push    0x102
        push    edx
        call    dword ptr [g_76b560]
        inc     esi
        cmp     esi, edi
        jl      L_72b79b
    L_72b7bd:
        mov     eax, dword ptr [g_8825b8]
        lea     ecx, [eax + g_882464]
        push    ecx
        call    dword ptr [g_76b3c0]
        add     esp, 0x4
        push    eax
        push    0x25
        call    FUN_0072bbe0
    L_72b7da:
        mov     edx, dword ptr [esp + 0x11c]
        push    ebx
        push    edx
        call    dword ptr [g_8aad64]
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b7f8:
        mov     eax, dword ptr [g_858bf8]
        push    ebx
        push    0x1
        push    eax
        call    FUN_0072bc40
        call    FUN_0072bd10
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b81d:
        sub     eax, 0x282
        jz      L_72b83a
        dec     eax
        jz      L_72b828
        dec     eax
    L_72b828:
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b83a:
        mov     ecx, dword ptr [esp + 0x124]
        lea     eax, [ecx + -0x3]
        cmp     eax, 0xb
        ja      L_72b4d8
        jmp     dword ptr [eax*4 + g_72bb60]
    L_72b854:
        mov     ebp, dword ptr [esp + 0x11c]
        push    ebp
        call    dword ptr [g_8aad68]
        mov     esi, eax
        cmp     esi, ebx
        jnz     L_72b87e
        pop     edi
        pop     esi
        pop     ebp
        mov     byte ptr [g_8825dc], 0x0
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b87e:
        push    esi
        call    dword ptr [g_8aad58]
        cmp     eax, ebx
        setnz   dl
        cmp     eax, ebx
        mov     byte ptr [g_8825dc], dl
        jz      L_72b8bf
        lea     eax, [esp + 0x14]
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        push    esi
        call    dword ptr [g_8aad50]
        push    esi
        push    ebp
        call    dword ptr [g_8aad64]
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b8bf:
        push    esi
        push    ebp
        mov     dword ptr [esp + 0x18], ebx
        call    dword ptr [g_8aad64]
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b8dd:
        mov     edx, dword ptr [esp + 0x11c]
        push    edx
        call    dword ptr [g_8aad68]
        mov     ebp, eax
        cmp     ebp, ebx
        mov     dword ptr [esp + 0x10], ebp
        jz      L_72b4db
        push    ebx
        push    ebx
        push    ebx
        push    ebp
        mov     byte ptr [g_8825c4], 0x0
        call    dword ptr [g_8aad4c]
        mov     edi, eax
        cmp     edi, ebx
        jz      L_72b4db
        push    edi
        push    0x40
        call    dword ptr [g_76b0bc]
        push    edi
        mov     esi, eax
        push    esi
        push    ebx
        push    ebp
        call    dword ptr [g_8aad4c]
        mov     ecx, dword ptr [esi + 0xc]
        mov     edi, dword ptr [esi + 0x14]
        mov     eax, ecx
        xor     edx, edx
        div     edi
        mov     ebx, dword ptr [esi + 0x8]
        mov     edx, edi
        mov     edi, offset g_881a64
        mov     dword ptr [g_881a5c], ebx
        imul    edx, eax
        sub     ecx, edx
        mov     dword ptr [g_881a60], ecx
        xor     eax, eax
        mov     ecx, 0x240
        rep     stosd
        mov     edi, edx
        cmp     edi, ebx
        jnc     L_72b997
        mov     ebx, offset g_881a64
        lea     ebp, [esi + edi*4 + 0x18]
    L_72b968:
        cmp     ebx, offset g_882364
        jge     L_72b993
        mov     edx, dword ptr [ebp]
        mov     eax, esi
        add     eax, edx
        push    eax
        push    ebx
        call    dword ptr [g_76b410]
        mov     eax, dword ptr [esi + 0x8]
        add     esp, 0x8
        inc     edi
        add     ebp, 0x4
        add     ebx, 0x100
        cmp     edi, eax
        jc      L_72b968
    L_72b993:
        mov     ebp, dword ptr [esp + 0x10]
    L_72b997:
        push    esi
        call    dword ptr [g_76b140]
        mov     ecx, dword ptr [esp + 0x11c]
        push    ebp
        push    ecx
        call    dword ptr [g_8aad64]
        mov     eax, dword ptr [g_8825c8]
        cmp     eax, 0x3b5
        jz      L_72b9d1
        cmp     eax, 0x3b6
        jnz     L_72b4db
        call    FUN_0072c970
        test    eax, eax
        jnz     L_72b4db
    L_72b9d1:
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_881a60], 0xffffffff
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72b9ea:
        mov     al, byte ptr [g_8825c4]
        test    al, al
        jnz     L_72b4db
        mov     ecx, 0x240
        xor     eax, eax
        mov     edi, offset g_881a64
        rep     stosd
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_881a5c], ebx
        pop     ebx
        add     esp, 0x108
        ret     0x14
    L_72ba18:
        mov     edx, dword ptr [esp + 0x11c]
        push    edx
        call    FUN_0072cb30
        call    FUN_0072c970
        cmp     eax, 0x40002
        mov     ecx, dword ptr [esp + 0x128]
        jz      L_72ba46
        cmp     eax, 0x40003
        jz      L_72ba46
        cmp     eax, 0x40004
        jnz     L_72ba58
    L_72ba46:
        cmp     ecx, 0x1
        jz      L_72b4db
        cmp     ecx, 0x2
        jz      L_72b4db
    L_72ba58:
        cmp     eax, 0x50000
        jnc     L_72ba66
        cmp     eax, 0x50002
        ja      L_72ba78
    L_72ba66:
        cmp     ecx, 0x10
        jz      L_72b4db
        cmp     ecx, 0x11
        jz      L_72b4db
    L_72ba78:
        mov     byte ptr [edi], 0x0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x108
        ret     0x14
    }
}
