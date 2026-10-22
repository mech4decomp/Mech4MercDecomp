/*
 * FUN_0072c6c0 (601 B) — IME/input subsystem setup. Initializes the IME
 * hook, queries the system codepage (GetACP) and dispatches through a
 * jump table to set codepage-specific byte values.
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8825e5;      /* byte */
extern int  g_882564;      /* dword */
extern int  g_8825cc;      /* dword */
extern int  g_8825c0;      /* dword */
extern int  g_8825c8;      /* dword */
extern char g_8825dc;      /* byte */
extern int  g_881700;
extern int  g_881704;
extern int  g_881708;
extern int  g_88170c;
extern int  g_881710;
extern int  g_881714;
extern char g_881718;
extern char g_881719;
extern char g_88171a;
extern int  g_88171c;
extern int  g_881720;
extern int  g_881724;
extern int  g_881728;
extern char g_8816f4;
extern char g_8816f5;
extern char g_8816f6;
extern char g_7b7120;
extern int  g_858940;
extern int  g_858944;
extern char g_72c92c[];    /* byte dispatch table */
extern int  g_72c91c[];    /* jump table */
extern char g_7a5984[];    /* "DisableIme" */

extern int  (__cdecl *g_8aad68)(int);
extern void (__cdecl *g_8aad64)(int, int);
extern int  (__cdecl *g_76b45c)(void);          /* GetCaretBlinkTime */
extern int  (__cdecl *g_8aad24)(int);
extern int  (__cdecl *g_76b560)(int, int, int, int); /* SendMessageA */
extern int  (__cdecl *g_76b0ac)(int, void *);   /* GetCPInfo */
extern int  (__cdecl *g_76b104)(void);          /* GetACP */
extern int  (__cdecl *g_8aad58)(int);

extern void __stdcall FUN_00708930(int, int, int, int);
extern int  __stdcall FUN_0072c940(int);
extern void __stdcall FUN_0072cfc0(void *);
extern void __stdcall FUN_0072cf10(int);
extern void __cdecl FUN_0072d050(void);

__declspec(naked) void __stdcall FUN_0072c6c0(int param_1)
{
    __asm {
        mov     al, byte ptr [g_8825e5]
        sub     esp, 0x4c
        push    ebx
        push    esi
        xor     ebx, ebx
        cmp     al, bl
        push    edi
        mov     edi, dword ptr [esp + 0x5c]
        jnz     L_6f0
        push    edi
        mov     byte ptr [g_8825e5], 0x1
        call    dword ptr [g_8aad68]
        push    eax
        push    edi
        mov     dword ptr [g_882564], eax
        call    dword ptr [g_8aad64]
    L_6f0:
        call    dword ptr [g_76b45c]
        push    edi
        mov     dword ptr [g_8825cc], eax
        call    dword ptr [g_8aad24]
        cmp     eax, ebx
        jz      L_715
        push    ebx
        push    0x21
        push    0x283
        push    eax
        call    dword ptr [g_76b560]
    L_715:
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        call    dword ptr [g_76b0ac]
        test    eax, eax
        mov     esi, 0x1
        jz      L_730
        cmp     dword ptr [esp + 0x10], esi
        jz      L_75f
    L_730:
        cmp     dword ptr [g_8825c0], ebx
        jnz     L_765
        push    esi
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x64]
        push    edx
        push    offset g_7a5984
        mov     dword ptr [esp + 0x6c], ebx
        mov     dword ptr [esp + 0x1c], 0x4
        call    FUN_00708930
        cmp     dword ptr [esp + 0x5c], ebx
        jz      L_765
    L_75f:
        mov     dword ptr [g_8825c0], esi
    L_765:
        push    0x70
        call    FUN_0072c940
        push    0x72
        mov     dword ptr [esp + 0x28], eax
        call    FUN_0072c940
        push    0x6e
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_0072c940
        push    0x6f
        mov     byte ptr [esp + 0x30], al
        call    FUN_0072c940
        push    0x71
        mov     byte ptr [esp + 0x32], al
        call    FUN_0072c940
        push    0x65
        mov     byte ptr [esp + 0x31], al
        call    FUN_0072c940
        push    0x66
        mov     dword ptr [esp + 0x34], eax
        call    FUN_0072c940
        push    0x67
        mov     dword ptr [esp + 0x38], eax
        call    FUN_0072c940
        push    0x78
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_0072c940
        push    0x79
        mov     dword ptr [esp + 0x40], eax
        call    FUN_0072c940
        push    0x7a
        mov     dword ptr [esp + 0x44], eax
        call    FUN_0072c940
        push    0x7b
        mov     dword ptr [esp + 0x48], eax
        call    FUN_0072c940
        push    0x7c
        mov     dword ptr [esp + 0x4c], eax
        call    FUN_0072c940
        push    0x7d
        mov     dword ptr [esp + 0x50], eax
        call    FUN_0072c940
        push    0x7e
        mov     byte ptr [esp + 0x54], al
        call    FUN_0072c940
        mov     dword ptr [esp + 0x54], eax
        lea     eax, [esp + 0x24]
        push    eax
        call    FUN_0072cfc0
        mov     ecx, dword ptr [g_858940]
        mov     edx, dword ptr [g_858944]
        mov     dword ptr [g_881700], ebx
        mov     dword ptr [g_881704], ebx
        mov     dword ptr [g_881708], 0x41400000
        mov     dword ptr [g_88170c], ebx
        mov     dword ptr [g_881710], ebx
        mov     dword ptr [g_881714], ebx
        mov     byte ptr [g_881718], bl
        mov     byte ptr [g_881719], bl
        mov     byte ptr [g_88171a], bl
        mov     dword ptr [g_88171c], ebx
        mov     dword ptr [g_881724], ecx
        mov     dword ptr [g_881720], ebx
        mov     dword ptr [g_881728], edx
        call    dword ptr [g_76b104]
        mov     dword ptr [g_8825c8], eax
        add     eax, 0xfffffc5c
        cmp     eax, 0x12
        ja      L_8ca
        xor     ecx, ecx
        mov     cl, byte ptr [eax + g_72c92c]
        jmp     dword ptr [ecx*4 + g_72c91c]
    L_896:
        mov     al, 0xa4
        mov     byte ptr [g_8816f4], al
        mov     byte ptr [g_8816f5], al
        jmp     L_8d7
    L_8a4:
        mov     byte ptr [g_8816f4], 0xb0
        mov     byte ptr [g_8816f5], 0xa1
        mov     byte ptr [g_7b7120], bl
        jmp     L_8d7
    L_8ba:
        mov     byte ptr [g_8816f4], 0x82
        mov     byte ptr [g_8816f5], 0xa0
        jmp     L_8d7
    L_8ca:
        mov     byte ptr [g_8816f4], 0x41
        mov     byte ptr [g_8816f5], bl
    L_8d7:
        push    0x3
        mov     byte ptr [g_8816f6], bl
        call    FUN_0072cf10
        push    edi
        call    dword ptr [g_8aad68]
        mov     esi, eax
        cmp     esi, ebx
        jz      L_90b
        push    esi
        call    dword ptr [g_8aad58]
        test    eax, eax
        push    esi
        setnz   dl
        push    edi
        mov     byte ptr [g_8825dc], dl
        call    dword ptr [g_8aad64]
    L_90b:
        call    FUN_0072d050
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x4c
        ret     0x4
    }
}
