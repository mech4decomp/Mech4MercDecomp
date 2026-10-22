/*
 * FUN_006e5650 (682 B) — __stdcall (RET 0x10) with SEH prologue/epilogue.
 *
 * Creates a modal dialog, runs a message pump with a timing loop, then
 * destroys all created dialogs and unloads a DLL. Uses FS:[0] exception
 * list, IAT imports, and absolute data globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0072d480(const char *s);
extern int  __cdecl FUN_006e5df0(void);
extern void __cdecl FUN_0072d7b0(void *p);
extern void __cdecl FUN_006e4a30(void);
extern void __cdecl FUN_0070c960(void);
extern int  __cdecl FUN_00709c20(void);
extern void __cdecl FUN_0070ab23(void);

extern void *g_76b564;   /* CreateDialogParamA IAT */
extern void *g_76b54c;   /* MoveWindow         IAT */
extern void *g_76b554;   /* TranslateMessage   IAT */
extern void *g_76b558;   /* DispatchMessageA   IAT */
extern void *g_76b0d8;   /* Sleep              IAT */
extern void *g_76b55c;   /* CloseWindow        IAT */
extern void *g_76b5a8;   /* DestroyWindow      IAT */
extern void *g_76b594;   /* GetDesktopWindow   IAT */
extern void *g_76b56c;   /* GetWindowRect      IAT */
extern void *g_76b568;   /* ShowWindow         IAT */
extern void *g_76b550;   /* PeekMessageA       IAT */
extern void *g_76b5d4;   /* timeGetTime        IAT */

extern int  g_7ddd38;
extern int  g_7ddd34;
extern int  g_7ddd3c;
extern int  g_7ddd40;
extern int  g_841768;
extern int  g_7b82b4;
extern int  g_841758;
extern char g_7ddd1c;
extern int  g_841760;
extern int  g_841764;
extern int  g_84175c;

__declspec(naked) void __stdcall FUN_006e5650(void *a, void *b, void *c, void *d)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x79ed38
        push    0x75ded2
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x5c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp + -0x18], esp
        mov     dword ptr [g_7ddd38], 0x6e5a60
        mov     dword ptr [g_7ddd34], 0x6e59c0
        mov     dword ptr [g_7ddd3c], 0x6e5a70
        mov     dword ptr [g_7ddd40], 0x6e5930
        push    0x77a50c
        call    FUN_0072d480
        mov     dword ptr [g_841768], eax
        push    0x0
        push    0x6e4580
        mov     esi, dword ptr [g_76b594]
        call    esi
        push    eax
        push    0x86
        mov     eax, dword ptr [g_7b82b4]
        push    eax
        call    dword ptr [g_76b564]
        mov     dword ptr [g_841758], eax
        lea     ecx, [ebp + -0x60]
        push    ecx
        call    esi
        push    eax
        mov     esi, dword ptr [g_76b56c]
        call    esi
        lea     edx, [ebp + -0x28]
        push    edx
        mov     eax, dword ptr [g_841758]
        push    eax
        call    esi
        mov     ecx, dword ptr [ebp + -0x20]
        sub     ecx, dword ptr [ebp + -0x28]
        mov     esi, dword ptr [ebp + -0x1c]
        sub     esi, dword ptr [ebp + -0x24]
        mov     eax, dword ptr [ebp + -0x58]
        mov     ebx, dword ptr [ebp + -0x60]
        sub     eax, ebx
        sub     eax, ecx
        cdq
        sub     eax, edx
        mov     edi, eax
        sar     edi, 0x1
        add     edi, ebx
        mov     dword ptr [ebp + -0x28], edi
        mov     eax, dword ptr [ebp + -0x54]
        mov     ebx, dword ptr [ebp + -0x5c]
        sub     eax, ebx
        sub     eax, esi
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, ebx
        mov     dword ptr [ebp + -0x24], eax
        xor     ebx, ebx
        push    ebx
        push    esi
        push    ecx
        push    eax
        push    edi
        mov     ecx, dword ptr [g_841758]
        push    ecx
        call    dword ptr [g_76b54c]
        push    0x5
        mov     edx, dword ptr [g_841758]
        push    edx
        mov     esi, dword ptr [g_76b568]
        call    esi
        mov     al, byte ptr [g_7ddd1c]
        test    al, al
        jz      L_5798
        call    FUN_006e5df0
        test    eax, eax
        jz      L_5780
        push    ebx
        push    0x6e8d80
        mov     eax, dword ptr [g_841758]
        push    eax
        push    0x82
        mov     ecx, dword ptr [g_7b82b4]
        push    ecx
        call    dword ptr [g_76b564]
        mov     dword ptr [g_841760], eax
        jmp     L_57b8
L_5780:
        mov     edx, dword ptr [g_841768]
        push    edx
        call    FUN_0072d7b0
        call    FUN_006e4a30
        call    FUN_0070c960
        jmp     L_57bd
L_5798:
        push    ebx
        push    0x6e4bc0
        mov     eax, dword ptr [g_841758]
        push    eax
        push    0x66
        mov     ecx, dword ptr [g_7b82b4]
        push    ecx
        call    dword ptr [g_76b564]
        mov     dword ptr [g_841764], eax
L_57b8:
        push    0x5
        push    eax
        call    esi
L_57bd:
        mov     dword ptr [ebp + -0x64], ebx
        mov     dword ptr [ebp + -0x4], 0x0
        mov     edi, dword ptr [g_76b550]
        mov     esi, dword ptr [g_76b5d4]
L_57d3:
        mov     eax, dword ptr [ebp + -0x64]
        test    eax, eax
        jnz     L_5842
L_57da:
        push    0x1
        push    0x0
        push    0x0
        push    0x0
        lea     edx, [ebp + -0x50]
        push    edx
        call    edi
        test    eax, eax
        jz      L_5808
        cmp     dword ptr [ebp + -0x4c], 0x12
        jz      L_5808
        lea     eax, [ebp + -0x50]
        push    eax
        call    dword ptr [g_76b554]
        lea     ecx, [ebp + -0x50]
        push    ecx
        call    dword ptr [g_76b558]
        jmp     L_57da
L_5808:
        call    esi
        sub     eax, ebx
        mov     dword ptr [ebp + -0x68], eax
        cmp     eax, 0x3c
        jc      L_5825
        call    esi
        mov     ebx, eax
        mov     dword ptr [ebp + -0x34], ebx
        call    FUN_00709c20
        mov     dword ptr [ebp + -0x64], eax
        jmp     L_57d3
L_5825:
        mov     edx, 0x3c
        sub     edx, eax
        push    edx
        call    dword ptr [g_76b0d8]
        jmp     L_57d3
        /* dead code (SEH handler/finally) not shown by Ghidra, present in ref bytes */
        mov     eax, dword ptr [ebp + -0x14]
        push    eax
        call    FUN_0070ab23
        ret
        mov     esp, dword ptr [ebp + -0x18]
L_5842:
        mov     dword ptr [ebp + -0x4], 0xffffffff
        mov     eax, dword ptr [g_841760]
        test    eax, eax
        jz      L_5876
        push    eax
        mov     esi, dword ptr [g_76b55c]
        call    esi
        mov     ecx, dword ptr [g_841760]
        push    ecx
        mov     edi, dword ptr [g_76b5a8]
        call    edi
        mov     dword ptr [g_841760], 0x0
        jmp     L_5882
L_5876:
        mov     esi, dword ptr [g_76b55c]
        mov     edi, dword ptr [g_76b5a8]
L_5882:
        mov     eax, dword ptr [g_84175c]
        test    eax, eax
        jz      L_58a1
        push    eax
        call    esi
        mov     edx, dword ptr [g_84175c]
        push    edx
        call    edi
        mov     dword ptr [g_84175c], 0x0
L_58a1:
        mov     eax, dword ptr [g_841764]
        test    eax, eax
        jz      L_58bf
        push    eax
        call    esi
        mov     eax, dword ptr [g_841764]
        push    eax
        call    edi
        mov     dword ptr [g_841764], 0x0
L_58bf:
        mov     eax, dword ptr [g_841758]
        test    eax, eax
        jz      L_58de
        push    eax
        call    esi
        mov     ecx, dword ptr [g_841758]
        push    ecx
        call    edi
        mov     dword ptr [g_841758], 0x0
L_58de:
        mov     edx, dword ptr [g_841768]
        push    edx
        call    FUN_0072d7b0
        call    FUN_006e4a30
        call    FUN_0070c960
        mov     ecx, dword ptr [ebp + -0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
