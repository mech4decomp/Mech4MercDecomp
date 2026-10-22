/*
 * FUN_006ed690 (643 B) — Options-dialog handler (__cdecl, RET 0, 1 param HWND).
 *
 * Reads options.ini, shows a modal dialog, processes messages, fills a
 * key/color table, and loads a string. Heavy use of IAT imports and
 * absolute data globals (via extern symbols).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040dca0(const char *s, int a, int b);
extern int  __cdecl FUN_0040ecc0(const char *s);
extern void __cdecl FUN_00411d10(const char *s, int a);
extern void __cdecl FUN_0040e4a0(void);
extern int  __cdecl FUN_00529770(int *a, int *b);
extern int  __cdecl FUN_00512ff0(int a, int b, void *c);
extern char *__cdecl FUN_0072d830(int a, int b);
extern void __cdecl FUN_00514fe0(int a, int b, void *c);
extern void __cdecl FUN_00532ab0(void);
extern void __cdecl FUN_0040de20(void);

extern void *g_76b5a4;   /* GetDlgItem       IAT */
extern void *g_76b560;   /* SendMessageA     IAT */
extern void *g_76b564;   /* CreateDialogParamA IAT */
extern void *g_76b54c;   /* MoveWindow       IAT */
extern void *g_76b568;   /* ShowWindow       IAT */
extern void *g_76b570;   /* EndDialog        IAT */
extern void *g_76b56c;   /* GetWindowRect    IAT */
extern void *g_76b550;   /* PeekMessageA     IAT */
extern void *g_76b554;   /* TranslateMessage IAT */
extern void *g_76b558;   /* DispatchMessageA IAT */

extern int   g_848cac;
extern int   g_841758;
extern int   g_7b82b4;
extern char  g_848c94;
extern int   g_7dab44;
extern int   g_7dab40;
extern int   g_841768;
extern int   g_841ec8;
extern int   g_842b10;
extern int   g_842710;
extern int   g_842310;

__declspec(naked) void FUN_006ed690(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x998
        push    0x0
        push    0x0
        push    0xf0
        push    0x4d8
        push    eax
        call    dword ptr [g_76b5a4]
        push    eax
        call    dword ptr [g_76b560]
        dec     eax
        neg     eax
        push    0x1
        sbb     eax, eax
        push    0x0
        inc     eax
        push    0x76c6b4
        lea     ecx, [esp + 0x54]
        mov     dword ptr [g_848cac], eax
        call    FUN_0040dca0
        push    0x7727b4
        lea     ecx, [esp + 0x4c]
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_ed701
        mov     ecx, dword ptr [g_848cac]
        push    ecx
        push    0x79ed8c
        mov     ecx, eax
        call    FUN_00411d10
        lea     ecx, [esp + 0x48]
        call    FUN_0040e4a0
L_ed701:
        mov     eax, dword ptr [g_848cac]
        test    eax, eax
        push    esi
        push    edi
        jz      L_ed862
        mov     edx, dword ptr [g_841758]
        mov     eax, dword ptr [g_7b82b4]
        push    ebx
        push    ebp
        push    0x0
        push    0x0
        push    edx
        push    0x88
        push    eax
        call    dword ptr [g_76b564]
        mov     edx, dword ptr [g_841758]
        mov     esi, dword ptr [g_76b56c]
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        mov     ebp, eax
        call    esi
        lea     eax, [esp + 0x1c]
        push    eax
        push    ebp
        call    esi
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x28]
        sub     ecx, eax
        mov     eax, dword ptr [esp + 0x34]
        sub     esi, ebx
        mov     ebx, dword ptr [esp + 0x2c]
        sub     eax, ebx
        sub     eax, ecx
        cdq
        sub     eax, edx
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x38]
        sar     edi, 0x1
        add     edi, ebx
        mov     ebx, dword ptr [esp + 0x30]
        sub     eax, ebx
        sub     eax, esi
        cdq
        push    0x0
        sub     eax, edx
        push    esi
        sar     eax, 0x1
        push    ecx
        add     eax, ebx
        push    eax
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x38], eax
        call    dword ptr [g_76b54c]
        push    0x5
        push    ebp
        call    dword ptr [g_76b568]
        mov     esi, dword ptr [g_76b550]
        push    0x1
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x4c]
        push    ecx
        call    esi
        test    eax, eax
        jz      L_ed7f3
        mov     edi, dword ptr [g_76b554]
        mov     ebx, dword ptr [g_76b558]
L_ed7cb:
        cmp     dword ptr [esp + 0x40], 0x12
        jz      L_ed7f3
        lea     edx, [esp + 0x3c]
        push    edx
        call    edi
        lea     eax, [esp + 0x3c]
        push    eax
        call    ebx
        push    0x1
        push    0x0
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x4c]
        push    ecx
        call    esi
        test    eax, eax
        jnz     L_ed7cb
L_ed7f3:
        lea     edx, [esp + 0x5a8]
        push    edx
        lea     eax, [esp + 0x1ac]
        push    eax
        call    FUN_00529770
        add     esp, 0x8
        xor     edx, edx
        test    eax, eax
        jle     L_ed857
        mov     edi, 0x4
        mov     esi, 0xff
L_ed81b:
        mov     ecx, dword ptr [esp + edx*0x4 + 0x1a8]
        test    ecx, ecx
        jl      L_ed852
        cmp     ecx, 0x18
        jge     L_ed852
        mov     ebx, dword ptr [esp + edx*0x4 + 0x5a8]
        mov     dword ptr [ecx*0x4 + g_841ec8], 0x0
        mov     dword ptr [ecx*0x4 + g_842b10], ebx
        mov     dword ptr [ecx*0x4 + g_842710], edi
        mov     dword ptr [ecx*0x4 + g_842310], esi
L_ed852:
        inc     edx
        cmp     edx, eax
        jl      L_ed81b
L_ed857:
        push    0x1
        push    ebp
        call    dword ptr [g_76b570]
        pop     ebp
        pop     ebx
L_ed862:
        lea     eax, [esp + 0x8]
        push    eax
        push    0x1
        lea     ecx, [esp + 0x18]
        lea     edx, [esp + 0xa8]
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x24
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x18], edx
        call    FUN_00512ff0
        cmp     eax, 0x1
        jnz     L_ed897
        push    0x64f
        jmp     L_ed89c
L_ed897:
        push    0x650
L_ed89c:
        mov     ecx, dword ptr [g_841768]
        push    ecx
        call    FUN_0072d830
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     edx, [esp + 0xa0]
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        lea     ecx, [esp + 0x8]
        push    ecx
        push    0x2
        push    0x0
        call    FUN_00514fe0
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     byte ptr [g_848c94], 0x0
        call    FUN_00532ab0
        lea     ecx, [esp + 0x50]
        call    FUN_0040de20
        pop     edi
        pop     esi
        add     esp, 0x998
        ret
    }
}
