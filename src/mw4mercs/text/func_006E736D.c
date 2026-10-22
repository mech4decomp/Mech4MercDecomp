/*
 * FUN_006E736D (943 B, 0x6E736D-0x6E771B) — __thiscall message/command
 * dispatcher (ret 0x10). Reads a command code from [esp+0x6c], dispatches
 * through two nested jump tables (data at 0x6e771c/0x6e774c with byte-index
 * tables at 0x6e7734/0x6e7764, emitted in src/util/data_006e771c.c), and
 * calls into the 0x6e8xxx command handlers plus a set of IAT function
 * pointers (0x76b5a4/0x76b560/0x76b544/0x76b52c/0x76b530/0x76b534/0x76b538/
 * 0x76b564/0x76b570/0x76b568/0x76b0f4/0x76b0d4). Also handles a special
 * 0x3fc/0x3ef/0x3f0/0x100/0x10 command family and a window-message setup
 * path (push 0x79ed44, call [0x76b0d4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_841758;   /* 0x841758 - dword data */
extern unsigned int g_7b82b4;   /* 0x7b82b4 - dword data */
extern unsigned int g_841768;   /* 0x841768 - dword data */
extern unsigned int g_841760;   /* 0x841760 - dword data */
extern unsigned int g_841764;   /* 0x841764 - dword data */
extern unsigned int g_848d74;   /* 0x848d74 - dword data */
extern unsigned int g_7dd268;   /* 0x7dd268 - dword data */
extern char g_6e6500[];         /* 0x6e6500 - string */
extern char g_6e8d80[];         /* 0x6e8d80 - string */
extern char g_79ed44[];         /* 0x79ed44 - string */

extern void (*g_76b5a4)(void);  /* 0x76b5a4 - IAT fn ptr */
extern void (*g_76b560)(void);  /* 0x76b560 - IAT fn ptr */
extern void (*g_76b544)(void);  /* 0x76b544 - IAT fn ptr */
extern void (*g_76b52c)(void);  /* 0x76b52c - IAT fn ptr */
extern void (*g_76b530)(void);  /* 0x76b530 - IAT fn ptr */
extern void (*g_76b534)(void);  /* 0x76b534 - IAT fn ptr */
extern void (*g_76b538)(void);  /* 0x76b538 - IAT fn ptr */
extern void (*g_76b564)(void);  /* 0x76b564 - IAT fn ptr */
extern void (*g_76b570)(void);  /* 0x76b570 - IAT fn ptr */
extern void (*g_76b568)(void);  /* 0x76b568 - IAT fn ptr */
extern void (*g_76b0f4)(void);  /* 0x76b0f4 - IAT fn ptr */
extern void (*g_76b0d4)(void);  /* 0x76b0d4 - IAT fn ptr */

extern void __cdecl FUN_006E82C0(void);
extern void __cdecl FUN_006E8470(void);
extern void __cdecl FUN_006E8430(void);
extern void __cdecl FUN_006E83F0(void);
extern void __cdecl FUN_00513DF0(void);
extern void __cdecl FUN_0051E8A0(void);
extern void __cdecl FUN_0052AAB0(void);
extern void __cdecl FUN_0072D830(void);
extern void __cdecl FUN_006E4210(void);
extern void __cdecl FUN_006E8530(void);
extern void __cdecl FUN_006E7840(void);
extern void __cdecl FUN_006E5910(void);

__declspec(naked) void FUN_006E736D(void)
{
    __asm {
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 8]
        sub     esp, 0x54
        sub     eax, 0x10
        push    ebx
        push    esi
        push    edi
        je      L_6E76FE
        sub     eax, 0x100
        je      L_6E76E3
        dec     eax
        jne     L_6E7710
        mov     ecx, dword ptr [esp + 0x6c]
        mov     eax, ecx
        shr     eax, 0x10
        sub     eax, 0
        je      L_6E73CD
        dec     eax
        jne     L_6E74E6
        cmp     cx, 0x3fc
        jne     L_6E74E6
        mov     eax, dword ptr [esp + 0x64]
        push    eax
        call    FUN_006E82C0
        add     esp, 4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_6E73CD:
        mov     edx, ecx
        and     edx, 0xffff
        lea     eax, [edx - 0x3f0]
        cmp     eax, 0x15
        ja      L_6E74E6
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x6e7734]
        jmp     dword ptr [edx*4 + 0x6e771c]

        mov     eax, dword ptr [esp + 0x64]
        push    eax
        call    FUN_006E8470
        add     esp, 4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     ecx, dword ptr [esp + 0x64]
        push    ecx
        call    FUN_006E8430
        add     esp, 4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     edx, dword ptr [esp + 0x64]
        push    edx
        call    FUN_006E83F0
        add     esp, 4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     esi, dword ptr [esp + 0x64]
        mov     edi, dword ptr [g_76b5a4]
        push    0
        push    0
        push    0xf0
        push    0x405
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    eax
        call    ebx
        dec     eax
        neg     eax
        sbb     eax, eax
        inc     eax
        push    eax
        push    0x406
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        push    0
        push    0
        push    0xf0
        push    0x405
        push    esi
        call    edi
        push    eax
        call    ebx
        cmp     eax, 1
        jne     L_6E7710
        push    0
        push    0
        push    0
        call    FUN_00513DF0
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        push    0
        push    0
        push    0
        call    FUN_0051E8A0
        test    eax, eax
        je      L_6E7710
        mov     eax, dword ptr [esp + 0x64]
        push    0
        push    0
        push    0xf1
        push    0x3f3
        push    eax
        call    dword ptr [g_76b5a4]
        push    eax
        call    dword ptr [g_76b560]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_6E74E6:
        and     ecx, 0xffff
        lea     eax, [ecx - 0x3ef]
        cmp     eax, 0xdb
        ja      L_6E7710
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x6e7764]
        jmp     dword ptr [ecx*4 + 0x6e774c]

        mov     edx, dword ptr [esp + 0x64]
        push    edx
        call    FUN_006E8470
        add     esp, 4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     eax, dword ptr [g_841758]
        mov     ecx, dword ptr [g_7b82b4]
        push    0
        push    offset g_6e6500
        push    eax
        push    0x89
        push    ecx
        call    dword ptr [g_76b52c]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     ecx, dword ptr [g_7dd268]
        call    FUN_0052AAB0
        test    eax, eax
        jne     L_6E7594
        mov     edx, dword ptr [g_841768]
        push    eax
        push    0x1787
        push    edx
        call    FUN_0072D830
        push    eax
        mov     eax, dword ptr [g_841768]
        push    0xc9a
        push    eax
        call    FUN_0072D830
        push    eax
        call    FUN_006E4210
        add     esp, 0xc
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_6E7594:
        call    dword ptr [g_76b530]
        push    0x7f02
        push    0
        mov     esi, eax
        call    dword ptr [g_76b534]
        mov     edi, dword ptr [g_76b538]
        push    eax
        call    edi
        mov     ebx, dword ptr [esp + 0x64]
        push    ebx
        call    FUN_006E8530
        add     esp, 4
        test    al, al
        je      L_6E7710
        mov     eax, dword ptr [g_841760]
        test    eax, eax
        push    0
        jne     L_6E75F7
        mov     ecx, dword ptr [g_841758]
        mov     edx, dword ptr [g_7b82b4]
        push    offset g_6e8d80
        push    ecx
        push    0x82
        push    edx
        call    dword ptr [g_76b564]
        mov     dword ptr [g_841760], eax
        jmp     L_6E7605

L_6E75F7:
        push    0
        push    0x110
        push    eax
        call    dword ptr [g_76b560]

L_6E7605:
        push    1
        push    ebx
        call    dword ptr [g_76b570]
        mov     eax, dword ptr [g_841760]
        push    5
        push    eax
        call    dword ptr [g_76b568]
        push    esi
        call    edi
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     ecx, dword ptr [esp + 0x64]
        push    1
        push    ecx
        call    dword ptr [g_76b570]
        mov     edx, dword ptr [g_841764]
        push    5
        push    edx
        call    dword ptr [g_76b568]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        mov     eax, dword ptr [g_848d74]
        test    eax, eax
        je      L_6E7683
        push    0
        push    eax
        call    dword ptr [g_76b0f4]
        cmp     eax, 0x102
        je      L_6E7676
        mov     dword ptr [g_848d74], 0
        jmp     L_6E7683

L_6E7676:
        mov     eax, dword ptr [g_848d74]
        test    eax, eax
        jne     L_6E7710

L_6E7683:
        xor     eax, eax
        mov     ecx, 0x11
        lea     edi, [esp + 0x1c]
        rep stosd
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        push    0
        push    0
        push    0
        push    0
        push    0
        push    0
        push    offset g_79ed44
        push    0
        mov     dword ptr [esp + 0x44], 0x44
        mov     dword ptr [esp + 0x70], 1
        mov     word ptr [esp + 0x74], 5
        call    dword ptr [g_76b0d4]
        test    eax, eax
        je      L_6E7710
        mov     edx, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        mov     dword ptr [g_848d74], edx
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_6E76E3:
        mov     eax, dword ptr [esp + 0x64]
        push    eax
        call    FUN_006E7840
        add     esp, 4
        pop     edi
        pop     esi
        mov     eax, 1
        pop     ebx
        add     esp, 0x54
        ret     0x10

L_6E76FE:
        call    FUN_006E5910
        mov     ecx, dword ptr [esp + 0x64]
        push    1
        push    ecx
        call    dword ptr [g_76b570]

L_6E7710:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x54
        ret     0x10

        nop
    }
}
