/*
 * FUN_00713430 (1239 B) — Screen capture / display-mode setup.
 *
 * Allocates a 0x4e6c-byte stack frame (via FUN_0075dc00), then either dumps
 * screen buffers to files (sprintf/CreateFileA/WriteFile/CloseHandle through
 * IATs) or configures display modes (FUN_00713cc0, FUN_00723180, FUN_00723b40)
 * with FPU coordinate math. __cdecl, 2 float params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_87c5b0;             /* DAT_0087c5b0 */
extern int g_8aae58;              /* DAT_008aae58 */
extern int g_7b73cc;              /* DAT_007b73cc */
extern int g_8aadac;              /* DAT_008aadac */
extern void *g_8aad0c;            /* function ptr */
extern int g_858944;              /* DAT_00858944 */
extern int g_858940;              /* DAT_00858940 */
extern void *g_8aad00;            /* function ptr */
extern void *g_8aad08;            /* function ptr */
extern int g_8a9868;              /* DAT_008a9868 */
extern int g_87bc6c;              /* DAT_0087bc6c */
extern int g_87c59c;              /* DAT_0087c59c */
extern int g_8aa260;              /* DAT_008aa260 */
extern char g_87bc08;             /* DAT_0087bc08 */
extern char g_87bc68;             /* DAT_0087bc68 */
extern int g_85a270;              /* DAT_0085a270 */
extern char g_87bc34;             /* DAT_0087bc34 */
extern int g_8aaec4;              /* DAT_008aaec4 */
extern int g_7b73e4;              /* DAT_007b73e4 */
extern int g_85b4a0;              /* DAT_0085b4a0 */
extern int g_87b688;              /* DAT_0087b688 */
extern char g_7b7069;             /* DAT_007b7069 */
extern char g_87dd0b;             /* DAT_0087dd0b */
extern char g_87c5b2;             /* DAT_0087c5b2 */
extern char g_87bc35;             /* DAT_0087bc35 */
extern int g_87b684;              /* DAT_0087b684 */
extern int g_87b63c;              /* DAT_0087b63c */
extern int g_87b634;              /* DAT_0087b634 */
extern int g_87b638;              /* DAT_0087b638 */
extern int g_87b630;              /* DAT_0087b630 */
extern int g_87b62c;              /* DAT_0087b62c */
extern int g_87bbfc;              /* DAT_0087bbfc */
extern int g_87b620;              /* DAT_0087b620 */
extern int g_87bbe8;              /* DAT_0087bbe8 */
extern int g_87bc00;              /* DAT_0087bc00 */
extern float g_76d070;            /* 0x0076d070 */
extern float g_76dd60;            /* 0x0076dd60 */

extern void *g_76b420;            /* sprintf */
extern void *g_76b2d0;            /* free */
extern void *g_76b0e8;            /* IAT: CreateFileA */
extern void *g_76b0e4;            /* IAT: WriteFile */
extern void *g_76b0ec;            /* IAT: CloseHandle */

extern void __cdecl FUN_0075dc00(void);
extern void __cdecl FUN_0070e250(void);
extern void __cdecl FUN_0070b130(void);
extern void __cdecl FUN_007218f0(void);
extern void __cdecl FUN_006fc4b0(void);
extern void __cdecl FUN_00717650(void);
extern void __cdecl FUN_007175f0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00723180(void);
extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_0072e500(void);
extern void __cdecl FUN_0073ce30(void);
extern void __cdecl FUN_00713350(void);
extern void __cdecl FUN_00749190(void);

__declspec(naked) void __cdecl FUN_00713430(void)
{
    __asm {
        mov     eax, 0x4e6c
        call    FUN_0075dc00
        push    ebx
        push    ebp
        push    esi
        push    edi
        call    FUN_0070e250
        mov     al, byte ptr [g_87c5b0]
        test    al, al
        jz      L_38fc
        mov     eax, dword ptr [g_8aae58]
        xor     ebp, ebp
        cmp     eax, ebp
        jz      L_35c1
        call    FUN_0070b130
        call    FUN_007218f0
        mov     ebx, eax
        cmp     ebx, ebp
        jz      L_38fc
        mov     edi, dword ptr [g_76b420]
        xor     esi, esi

L_347b:
        cmp     dword ptr [g_7b73cc], ebp
        mov     eax, 0x77de88
        jnz     L_348d
        mov     eax, 0x7a235c

L_348d:
        push    eax
        push    esi
        lea     eax, [esp + 0x24]
        push    0x77de78
        push    eax
        call    edi
        add     esp, 0x10
        lea     ecx, [esp + 0x1c]
        push    ecx
        call    FUN_006fc4b0
        test    al, al
        jz      L_34b5
        inc     esi
        cmp     esi, 0x270f
        jbe     L_347b

L_34b5:
        cmp     dword ptr [g_7b73cc], ebp
        jnz     L_356f
        cmp     dword ptr [g_8aadac], ebp
        jz      L_356f
        lea     edx, [esp + 0x3c]
        push    edx
        call    dword ptr [g_8aad0c]
        test    eax, eax
        jnz     L_35ac
        mov     ecx, dword ptr [g_858944]
        mov     eax, dword ptr [g_858940]
        mov     dword ptr [esp + 0x48], ecx
        mov     dword ptr [esp + 0x6c], ecx
        mov     dword ptr [esp + 0x44], eax
        mov     esi, 0x3
        mov     dword ptr [esp + 0x68], eax
        push    0x8
        lea     ecx, [esp + 0x40]
        lea     eax, [esp + 0x20]
        push    ecx
        mov     dword ptr [esp + 0x48], ebx
        mov     dword ptr [esp + 0x54], ebp
        mov     dword ptr [esp + 0x58], esi
        mov     dword ptr [esp + 0x5c], 0x2
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x68], ebp
        mov     dword ptr [esp + 0x6c], ebp
        mov     dword ptr [esp + 0x78], esi
        mov     dword ptr [esp + 0x7c], esi
        mov     dword ptr [esp + 0x80], 0x1
        mov     dword ptr [esp + 0x94], 0x5a
        call    dword ptr [g_8aad00]
        lea     edx, [esp + 0x3c]
        push    edx
        call    dword ptr [g_8aad08]
        push    ebx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4e6c
        ret

L_356f:
        push    ebp
        push    0x8000080
        push    0x2
        push    ebp
        push    ebp
        push    0x40000000
        lea     eax, [esp + 0x34]
        push    eax
        call    dword ptr [g_76b0e8]
        mov     esi, eax
        cmp     esi, -0x1
        jz      L_35ac
        mov     edx, dword ptr [g_8a9868]
        push    ebp
        lea     ecx, [esp + 0x18]
        push    ecx
        push    edx
        push    ebx
        push    esi
        call    dword ptr [g_76b0e4]
        push    esi
        call    dword ptr [g_76b0ec]

L_35ac:
        push    ebx
        call    dword ptr [g_76b2d0]
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4e6c
        ret

L_35c1:
        cmp     dword ptr [g_87bc6c], ebp
        mov     eax, dword ptr [g_87c59c]
        mov     dword ptr [g_8aa260], ebp
        mov     byte ptr [g_87bc08], 0x0
        mov     ebx, 0x1
        jnz     L_3626
        mov     cl, byte ptr [g_87bc68]
        test    cl, cl
        jnz     L_3626
        cmp     dword ptr [g_85a270], ebp
        jnz     L_3626
        mov     cl, byte ptr [g_87bc34]
        test    cl, cl
        jnz     L_3626
        cmp     dword ptr [g_8aaec4], ebp
        jnz     L_3626
        cmp     eax, 0x7
        jz      L_3626
        cmp     eax, 0x8
        jz      L_3626
        cmp     dword ptr [g_7b73e4], ebp
        jz      L_38fc
        cmp     dword ptr [g_85b4a0], ebx
        jnz     L_38fc

L_3626:
        mov     dword ptr [g_87b688], eax
        mov     al, byte ptr [g_7b7069]
        test    al, al
        mov     byte ptr [g_87bc08], bl
        mov     dword ptr [g_87c59c], ebp
        jz      L_3646
        mov     byte ptr [g_87dd0b], bl

L_3646:
        push    ebp
        push    ebp
        push    0x3f800000
        push    0x3f800000
        push    ebp
        push    ebp
        push    ebp
        push    ebp
        push    ebp
        push    ebp
        mov     dword ptr [g_8aa260], ebx
        call    FUN_00717650
        mov     al, byte ptr [g_87c5b2]
        test    al, al
        jz      L_368d
        mov     eax, dword ptr [g_858944]
        mov     ecx, dword ptr [g_858940]
        push    0x3f800000
        push    ebp
        push    eax
        push    ecx
        push    ebp
        push    ebp
        call    FUN_007175f0
        mov     byte ptr [g_87c5b2], 0x0

L_368d:
        push    ebp
        push    ebx
        mov     byte ptr [g_87bc35], bl
        call    FUN_00713cc0
        push    ebx
        push    0x4
        call    FUN_00713cc0
        push    ebp
        push    0x5
        call    FUN_00713cc0
        push    ebp
        push    0x6
        call    FUN_00713cc0
        push    ebp
        push    0x7
        call    FUN_00713cc0
        push    ebp
        push    0x8
        call    FUN_00713cc0
        push    ebp
        push    0x9
        call    FUN_00713cc0
        push    ebp
        push    0xa
        call    FUN_00713cc0
        push    ebp
        push    0xb
        call    FUN_00713cc0
        push    ebp
        push    0xc
        call    FUN_00713cc0
        push    ebx
        push    0xd
        call    FUN_00713cc0
        push    ebx
        push    0xe
        call    FUN_00713cc0
        push    ebx
        push    0x14
        call    FUN_00713cc0
        push    ebx
        push    0xf
        call    FUN_00713cc0
        mov     esi, 0x3
        push    esi
        push    0x10
        call    FUN_00713cc0
        push    ebp
        push    0x11
        call    FUN_00713cc0
        push    ebp
        push    0x12
        call    FUN_00713cc0
        push    ebp
        push    0x13
        call    FUN_00713cc0
        push    ebp
        push    0x15
        call    FUN_00713cc0
        push    ebp
        push    0x1c
        call    FUN_00713cc0
        push    0x87b620
        push    0x87b61c
        push    ebp
        push    ebp
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        mov     dword ptr [g_87b684], 0x3a000000
        call    FUN_00723180
        mov     ecx, dword ptr [g_858940]
        dec     ecx
        mov     dword ptr [esp + 0x10], ecx
        fild    dword ptr [esp + 0x10]
        fmul    dword ptr [esp + 0x18]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_858944]
        and     eax, 0x7fffff
        sub     eax, 0x400000
        dec     edx
        mov     dword ptr [esp + 0x10], edx
        fild    dword ptr [esp + 0x10]
        mov     edx, dword ptr [g_87b634]
        mov     dword ptr [g_87b63c], eax
        fmul    dword ptr [esp + 0x14]
        fsub    dword ptr [g_76d070]
        fadd    dword ptr [g_76dd60]
        fstp    dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x10]
        and     ecx, 0x7fffff
        sub     ecx, 0x400000
        cmp     edx, eax
        mov     dword ptr [g_87b638], ecx
        jnz     L_37e3
        cmp     dword ptr [g_87b630], ecx
        mov     dword ptr [g_87b62c], ebp
        jz      L_37e9

L_37e3:
        mov     dword ptr [g_87b62c], ebx

L_37e9:
        push    ebx
        mov     dword ptr [g_87b634], eax
        mov     dword ptr [g_87b630], ecx
        mov     dword ptr [g_87bbfc], ebp
        call    FUN_00723b40
        neg     eax
        sbb     eax, eax
        neg     eax
        push    0x2
        mov     dword ptr [g_87b620], eax
        call    FUN_00723b40
        mov     edi, dword ptr [g_87b620]
        neg     eax
        sbb     eax, eax
        and     eax, 0x2
        or      edi, eax
        push    esi
        mov     dword ptr [g_87b620], edi
        call    FUN_00723b40
        mov     esi, dword ptr [g_87b620]
        mov     dl, byte ptr [g_87bc34]
        neg     eax
        sbb     eax, eax
        and     eax, 0x4
        or      esi, eax
        mov     eax, dword ptr [g_87b688]
        xor     ecx, ecx
        cmp     eax, 0x6
        mov     dword ptr [g_87b620], esi
        mov     dword ptr [g_87bbe8], ecx
        jz      L_388a
        cmp     eax, 0x5
        jz      L_388a
        cmp     eax, 0xa
        jz      L_388a
        cmp     eax, 0x4
        jz      L_388a
        cmp     eax, 0xd
        jz      L_388a
        test    dl, dl
        jnz     L_3882
        cmp     dword ptr [g_7b73e4], ebp
        jz      L_388a
        cmp     dword ptr [g_85b4a0], ebx
        jnz     L_388a

L_3882:
        mov     ecx, ebx
        mov     dword ptr [g_87bbe8], ecx

L_388a:
        cmp     dl, byte ptr [g_87bc68]
        jnz     L_389a
        cmp     dword ptr [g_87bc6c], ecx
        jz      L_38b5

L_389a:
        call    FUN_0072e500
        mov     al, byte ptr [g_87bc34]
        mov     ecx, dword ptr [g_87bbe8]
        mov     byte ptr [g_87bc68], al
        mov     dword ptr [g_87bc6c], ecx

L_38b5:
        call    FUN_0073ce30
        mov     al, byte ptr [g_87c5b0]
        test    al, al
        jz      L_38c8
        call    FUN_00713350

L_38c8:
        mov     ecx, dword ptr [g_87bc00]
        cmp     ecx, ebp
        jz      L_38e2
        test    byte ptr [ecx + 0x4], bl
        jz      L_38dc
        call    FUN_00749190

L_38dc:
        mov     dword ptr [g_87bc00], ebp

L_38e2:
        mov     edx, dword ptr [g_87b688]
        mov     byte ptr [g_87bc35], 0x0
        mov     dword ptr [g_87c59c], edx
        mov     byte ptr [g_87dd0b], 0x0

L_38fc:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4e6c
        ret
    }
}
