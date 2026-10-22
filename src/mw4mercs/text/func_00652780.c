/*
 * FUN_00652780 (971 B) — switch dispatch over 5 cases (0x3e9..0x3ed),
 * jump table at 0x652b4c. Vector/angle math helper.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_794928;        /* 0x00794928 */
extern float g_794924;        /* 0x00794924 */
extern int g_7f268c;          /* 0x007f268c */
extern float g_7b220c;        /* 0x007b220c */
extern float g_7823a8;        /* 0x007823a8 */
extern float g_76c5b0;        /* 0x0076c5b0 */
extern int g_794930;          /* 0x00794930 */
extern int g_79492c;          /* 0x0079492c */
extern float g_77d094;        /* 0x0077d094 */
extern float g_7866cc;        /* 0x007866cc */
extern float g_78b7a4;        /* 0x0078b7a4 */
extern float g_77de90;        /* 0x0077de90 */
extern float g_76e1e8;        /* 0x0076e1e8 */
extern float g_76d064;        /* 0x0076d064 */

extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0040cb00(void);
extern void __cdecl FUN_00652b60(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);
extern void __cdecl FUN_00416c60(void);
extern void __cdecl FUN_005d2900(void);
extern void __cdecl FUN_00652c80(void);
extern void __cdecl FUN_00652bb0(void);

__declspec(naked) void FUN_00652780(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0xc]
        sub     esp, 0x38
        add     eax, 0xfffffc17
        cmp     eax, 4
        push    esi
        ja      L_2b34
        __emit 0xFF /* jmp dword ptr [eax*4+0x652b4c]: no-base SIB dispatch, MSVC6 re-bases via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x4C
        __emit 0x2B
        __emit 0x65
        __emit 0x00
L_279d:
        mov     esi, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esi + 0xd8]
        add     ecx, 0x80
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edx + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00419480
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x20]
        push    edx
        lea     ecx, [esp + 0xc]
        call    FUN_0040ca10
        fld     dword ptr [g_794928]
        fmul    dword ptr [g_794928]
        push    1
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [g_794924]
        lea     ecx, [esp + 0x10]
        fmul    dword ptr [g_794924]
        fstp    dword ptr [esp]
        call    FUN_0040cb00
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        add     esp, 0x10
        fstp    dword ptr [esp + 0x48]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_2845
        mov     dword ptr [esp + 0x44], 0
        jmp     L_28fc
L_2845:
        lea     eax, [esi + 0x384]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x28], 0x783f04
        mov     dword ptr [esp + 0x40], 0
        mov     dword ptr [esp + 0x44], 0
        call    FUN_00416cc0
        test    eax, eax
        jz      L_289d
L_287a:
        fld     dword ptr [esp + 0x40]
        lea     ecx, [esp + 0x28]
        fadd    dword ptr [eax + 0x14]
        fstp    dword ptr [esp + 0x40]
        fld     dword ptr [esp + 0x44]
        fadd    dword ptr [eax + 0x10]
        fstp    dword ptr [esp + 0x44]
        call    FUN_00416cc0
        test    eax, eax
        jnz     L_287a
L_289d:
        fld     dword ptr [esp + 0x44]
        fabs
        fld     dword ptr [g_7b220c]
        fcompp
        __emit 0xDF /* fnstsw ax: no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6 /* test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jnz     L_28c5
        lea     ecx, [esp + 0x28]
        call    FUN_00416c60
        mov     dword ptr [esp + 0x44], 0
        jmp     L_28fc
L_28c5:
        mov     ecx, dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [g_7823a8]
        mov     edx, dword ptr [esp + 0x40]
        push    1
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        push    edx
        call    FUN_00652b60
        add     esp, 0x10
        fstp    dword ptr [esp + 0x44]
        lea     ecx, [esp + 0x28]
        call    FUN_00416c60
        mov     eax, dword ptr [esp + 0x44]
        mov     dword ptr [esp + 0x44], eax
L_28fc:
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_2916
        fld     dword ptr [g_76c5b0]
        jmp     L_2938
L_2916:
        mov     ecx, dword ptr [g_794930]
        fld     dword ptr [esi + 0x3b8]
        mov     edx, dword ptr [g_79492c]
        push    0
        push    ecx
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        add     esp, 0x10
L_2938:
        fmul    dword ptr [g_77d094]
        pop     esi
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [g_7866cc]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x44]
        fmul    dword ptr [g_78b7a4]
        faddp   st(1), st(0)
        add     esp, 0x38
        ret
L_295b:
        mov     esi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_00419480
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [edx + 0xd8]
        lea     ecx, [esp + 0x1c]
        push    ecx
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_005d2900
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0040ca10
        fld     dword ptr [g_794928]
        fmul    dword ptr [g_794928]
        push    1
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [g_794924]
        lea     ecx, [esp + 0x10]
        fmul    dword ptr [g_794924]
        fstp    dword ptr [esp]
        call    FUN_0040cb00
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        add     esp, 0x10
        fstp    dword ptr [esp + 0x44]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_29f9
        fld     dword ptr [g_76c5b0]
        jmp     L_2a1b
L_29f9:
        mov     ecx, dword ptr [g_794930]
        fld     dword ptr [esi + 0x3b8]
        mov     edx, dword ptr [g_79492c]
        push    0
        push    ecx
        push    edx
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        add     esp, 0x10
L_2a1b:
        fmul    dword ptr [g_77de90]
        pop     esi
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [g_76e1e8]
        faddp   st(1), st(0)
        add     esp, 0x38
        ret
L_2a32:
        mov     esi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esi + 0xd8]
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_005d2900
        mov     ecx, dword ptr [esp + 0x40]
        mov     edx, dword ptr [ecx + 0xd8]
        push    eax
        add     edx, 0x80
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_005d2900
        push    eax
        lea     ecx, [esp + 0xc]
        call    FUN_0040ca10
        fld     dword ptr [g_794928]
        fmul    dword ptr [g_794928]
        push    1
        push    ecx
        mov     dword ptr [esp + 0x10], 0
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [g_794924]
        lea     ecx, [esp + 0x10]
        fmul    dword ptr [g_794924]
        fstp    dword ptr [esp]
        call    FUN_0040cb00
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        add     esp, 0x10
        fstp    dword ptr [esp + 0x44]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_2acd
        fld     dword ptr [g_76c5b0]
        jmp     L_2aee
L_2acd:
        mov     eax, dword ptr [g_794930]
        fld     dword ptr [esi + 0x3b8]
        mov     ecx, dword ptr [g_79492c]
        push    0
        push    eax
        push    ecx
        push    ecx
        fstp    dword ptr [esp]
        call    FUN_00652b60
        add     esp, 0x10
L_2aee:
        fmul    dword ptr [g_77de90]
        pop     esi
        fld     dword ptr [esp + 0x40]
        fmul    dword ptr [g_76e1e8]
        faddp   st(1), st(0)
        fsubr   dword ptr [g_76d064]
        add     esp, 0x38
        ret
L_2b0b:
        mov     edx, dword ptr [esp + 0x44]
        push    edx
        call    FUN_00652c80
        add     esp, 4
        pop     esi
        add     esp, 0x38
        ret
L_2b1d:
        mov     eax, dword ptr [esp + 0x44]
        mov     ecx, dword ptr [esp + 0x40]
        push    eax
        push    ecx
        call    FUN_00652bb0
        add     esp, 8
        pop     esi
        add     esp, 0x38
        ret
L_2b34:
        mov     edx, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x40]
        push    edx
        push    eax
        call    FUN_00652bb0
        add     esp, 8
        pop     esi
        add     esp, 0x38
        ret
        /* __emit: alignment nop 0x90 before jump table at 0x652b4c */
        __emit 0x90
        /* jump table data at 0x652b4c (relocated dword entries; inline asm has no dd) */
        __emit 0x9D
        __emit 0x27
        __emit 0x65
        __emit 0x00
        __emit 0x5B
        __emit 0x29
        __emit 0x65
        __emit 0x00
        __emit 0x32
        __emit 0x2A
        __emit 0x65
        __emit 0x00
        __emit 0x0B
        __emit 0x2B
        __emit 0x65
        __emit 0x00
        __emit 0x1D
        __emit 0x2B
        __emit 0x65
        __emit 0x00
    }
}
