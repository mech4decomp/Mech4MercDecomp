/*
 * FUN_006e6040 (1207 B) — AutoRTPatch client setup dialog.
 *
 * Creates a dialog (CreateDialogParamA), centers it via GetWindowRect/
 * MoveWindow, shows it, reads the EXE path, loads MissionLang_MERCS.dll
 * path, queries file version info, and dispatches on the language ID to
 * select an RTPatch registry key, then calls AutoRTPatch32.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_7dd268;   /* DAT_007dd268 */
extern void *g_7b82b4;   /* hInstance */
extern void *g_841758;   /* HWND */
extern void *g_84176c;   /* HWND DAT_0084176c */

/* IAT function pointers */
extern void *g_76b564;   /* CreateDialogParamA */
extern void *g_76b56c;   /* GetWindowRect */
extern void *g_76b54c;   /* MoveWindow */
extern void *g_76b568;   /* ShowWindow */
extern void *g_76b53c;   /* UpdateWindow */
extern void *g_76b570;   /* EndDialog */
extern void *g_76b038;   /* AutoRTPatch32 */

extern void __cdecl FUN_00708930(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0075e352(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0075e34c(void);
extern void __cdecl FUN_0075e346(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00704820(void);

__declspec(naked) void __cdecl FUN_006e6040(void)
{
    __asm {
        mov     eax, dword ptr [g_7dd268]
        mov     ecx, dword ptr [eax + 0x4096c]
        sub     esp, 0x140
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     ecx, ebp
        push    esi
        push    edi
        jnz     L_64ea
        mov     ecx, dword ptr [g_7b82b4]
        push    ebp
        mov     dword ptr [eax + 0x40964], ebp
        push    ebp
        mov     dword ptr [eax + 0x40968], ebp
        mov     eax, dword ptr [g_841758]
        push    eax
        push    0x8a
        push    ecx
        call    dword ptr [g_76b564]
        mov     esi, dword ptr [g_76b56c]
        lea     edx, [esp + 0x38]
        mov     dword ptr [g_84176c], eax
        mov     eax, dword ptr [g_841758]
        push    edx
        push    eax
        call    esi
        mov     edx, dword ptr [g_84176c]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        call    esi
        mov     eax, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        mov     esi, dword ptr [esp + 0x34]
        sub     ecx, eax
        mov     eax, dword ptr [esp + 0x40]
        sub     esi, ebx
        mov     ebx, dword ptr [esp + 0x38]
        sub     eax, ebx
        sub     eax, ecx
        cdq
        sub     eax, edx
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x44]
        sar     edi, 1
        add     edi, ebx
        mov     ebx, dword ptr [esp + 0x3c]
        sub     eax, ebx
        sub     eax, esi
        cdq
        push    ebp
        sub     eax, edx
        push    esi
        sar     eax, 1
        add     eax, ebx
        push    ecx
        push    eax
        mov     dword ptr [esp + 0x3c], eax
        mov     eax, dword ptr [g_84176c]
        push    edi
        push    eax
        mov     dword ptr [esp + 0x40], edi
        call    dword ptr [g_76b54c]
        mov     ecx, dword ptr [g_84176c]
        push    0x5
        push    ecx
        call    dword ptr [g_76b568]
        mov     edx, dword ptr [g_84176c]
        push    edx
        call    dword ptr [g_76b53c]
        mov     ebx, 0x1
        push    ebx
        lea     eax, [esp + 0x24]
        push    eax
        lea     ecx, [esp + 0x54]
        push    ecx
        push    0x77a7e4
        mov     dword ptr [esp + 0x30], 0x104
        call    FUN_00708930
        lea     edx, [esp + 0x4c]
        push    edx
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x18]
        push    0x77a7cc
        push    eax
        lea     ecx, [esp + 0x24]
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_004125e0
        lea     ecx, [esp + 0x1c]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebp
        jz      L_618c
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_618c
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_618c:
        mov     edx, dword ptr [esp + 0x14]
        push    ebp
        push    edx
        call    FUN_0075e352
        mov     edi, eax
        cmp     edi, ebp
        jnz     L_61f9
        mov     eax, dword ptr [g_84176c]
        cmp     eax, ebp
        jz      L_61b4
        push    ebx
        push    eax
        call    dword ptr [g_76b570]
        mov     dword ptr [g_84176c], ebp
L_61b4:
        mov     eax, dword ptr [g_7dd268]
        mov     dword ptr [eax + 0x4096c], ebx
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_61da
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61da
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_61da:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_64ea
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64ea
        jmp     L_64e1
L_61f9:
        push    edi
        call    FUN_004084d0
        mov     ecx, dword ptr [esp + 0x18]
        add     esp, 0x4
        mov     esi, eax
        push    esi
        push    edi
        push    ebp
        push    ecx
        call    FUN_0075e34c
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        push    0x77a7b0
        push    esi
        call    FUN_0075e346
        mov     ecx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x10], ebp
        mov     ax, word ptr [ecx]
        cmp     eax, 0x40c
        jg      L_6275
        jz      L_626b
        sub     eax, 0x404
        jz      L_6261
        sub     eax, 0x3
        jz      L_6257
        sub     eax, 0x2
        jnz     L_628e
        push    0x77a758
        jmp     L_6319
L_6257:
        push    0x77a700
        jmp     L_6319
L_6261:
        push    0x77a6a8
        jmp     L_6319
L_626b:
        push    0x77a650
        jmp     L_6319
L_6275:
        sub     eax, 0x411
        jz      L_6314
        dec     eax
        jz      L_630d
        sub     eax, 0x7f8
        jz      L_6306
L_628e:
        mov     eax, dword ptr [g_84176c]
        cmp     eax, ebp
        jz      L_62a5
        push    ebx
        push    eax
        call    dword ptr [g_76b570]
        mov     dword ptr [g_84176c], ebp
L_62a5:
        mov     edx, dword ptr [g_7dd268]
        mov     dword ptr [edx + 0x4096c], ebx
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_62cc
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_62cc
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_62cc:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_62e7
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_62e7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_62e7:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_64ea
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64ea
        jmp     L_64e1
L_6306:
        push    0x77a5f8
        jmp     L_6319
L_630d:
        push    0x77a5a0
        jmp     L_6319
L_6314:
        push    0x77a548
L_6319:
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        push    esi
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        push    ebp
        push    0x6e4230
        push    ebp
        push    eax
        push    0x80000002
        call    dword ptr [g_76b038]
        mov     esi, eax
        mov     eax, dword ptr [g_84176c]
        add     esp, 0x18
        cmp     eax, ebp
        jz      L_635b
        push    ebx
        push    eax
        call    dword ptr [g_76b570]
        mov     dword ptr [g_84176c], ebp
L_635b:
        cmp     esi, ebp
        mov     eax, dword ptr [g_7dd268]
        mov     dword ptr [eax + 0x4096c], ebx
        jnz     L_647a
        cmp     dword ptr [eax + 0x40964], ebp
        jnz     L_63ea
        mov     eax, dword ptr [eax + 0x40968]
        cmp     eax, ebp
        jz      L_6395
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7dd268]
        add     esp, 0x4
        mov     dword ptr [ecx + 0x40968], ebp
L_6395:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_63b0
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_63b0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_63b0:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_63cb
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_63cb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_63cb:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_64ea
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64ea
        jmp     L_64e1
L_63ea:
        mov     edx, dword ptr [eax + 0x40968]
        push    edx
        push    0x3
        call    FUN_00704820
        mov     eax, dword ptr [g_7dd268]
        mov     eax, dword ptr [eax + 0x40968]
        cmp     eax, ebp
        jz      L_641c
        push    eax
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7dd268]
        add     esp, 0x4
        mov     dword ptr [ecx + 0x40968], ebp
L_641c:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_6437
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6437
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6437:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_6452
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_6452
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_6452:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_646d
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_646d
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_646d:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x140
        ret
L_647a:
        mov     eax, dword ptr [eax + 0x40968]
        cmp     eax, ebp
        jz      L_6499
        push    eax
        call    FUN_004084e0
        mov     edx, dword ptr [g_7dd268]
        add     esp, 0x4
        mov     dword ptr [edx + 0x40968], ebp
L_6499:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_64b4
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64b4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_64b4:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebp
        jz      L_64cf
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64cf
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_64cf:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_64ea
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_64ea
L_64e1:
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_64ea:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x140
        ret
    }
}
