/*
 * FUN_100013f2 (444 B) — CRT __initstdio / stdio handle-table setup:
 * allocates the 0x480-byte handle table, seeds it from the startup
 * reserved2 block, fills the three std handles, and calls SetHandleCount.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_100057c0;                       /* 0x100057c0 handle table */
extern unsigned int g_100057c4;                       /* 0x100057c4 */
extern int g_100058c0;                                /* 0x100058c0 handle count */

extern void (__stdcall *g_GetStartupInfoA)(void *);   /* IAT 0x10004034 */
extern unsigned int (__stdcall *g_GetFileType)(void *); /* IAT 0x10004030 */
extern void *(__stdcall *g_GetStdHandle)(int);        /* IAT 0x1000402c */
extern unsigned int (__stdcall *g_SetHandleCount)(unsigned int); /* IAT 0x10004028 */

extern void *__cdecl FUN_10001e57(unsigned int);      /* _malloc */
extern void __cdecl FUN_1000117c(int);                /* __amsg_exit */

__declspec(naked) void __stdcall FUN_100013f2(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x48
        push    ebx
        push    esi
        push    edi
        push    0x480
        call    FUN_10001e57
        mov     esi, eax
        pop     ecx
        test    esi, esi
        jnz     L_414
        push    0x1b
        call    FUN_1000117c
        pop     ecx
L_414:
        mov     dword ptr [g_100057c0], esi
        mov     dword ptr [g_100058c0], 0x20
        lea     eax, [esi + 0x480]
L_42a:
        cmp     esi, eax
        jnc     L_44c
        and     byte ptr [esi + 4], 0
        or      dword ptr [esi], -1
        and     dword ptr [esi + 8], 0
        mov     byte ptr [esi + 5], 0xa
        mov     eax, dword ptr [g_100057c0]
        add     esi, 0x24
        add     eax, 0x480
        jmp     L_42a
L_44c:
        lea     eax, [ebp - 0x48]
        push    eax
        call    dword ptr [g_GetStartupInfoA]
        cmp     word ptr [ebp - 0x16], 0
        jz      L_532
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jz      L_532
        mov     edi, dword ptr [eax]
        lea     ebx, [eax + 4]
        lea     eax, [ebx + edi]
        mov     dword ptr [ebp - 4], eax
        mov     eax, 0x800
        cmp     edi, eax
        jl      L_482
        mov     edi, eax
L_482:
        cmp     dword ptr [g_100058c0], edi
        jge     L_4e0
        mov     esi, 0x100057c4
L_48f:
        push    0x480
        call    FUN_10001e57
        test    eax, eax
        pop     ecx
        jz      L_4da
        add     dword ptr [g_100058c0], 0x20
        mov     dword ptr [esi], eax
        lea     ecx, [eax + 0x480]
L_4ad:
        cmp     eax, ecx
        jnc     L_4cd
        and     byte ptr [eax + 4], 0
        or      dword ptr [eax], -1
        and     dword ptr [eax + 8], 0
        mov     byte ptr [eax + 5], 0xa
        mov     ecx, dword ptr [esi]
        add     eax, 0x24
        add     ecx, 0x480
        jmp     L_4ad
L_4cd:
        add     esi, 4
        cmp     dword ptr [g_100058c0], edi
        jl      L_48f
        jmp     L_4e0
L_4da:
        mov     edi, dword ptr [g_100058c0]
L_4e0:
        xor     esi, esi
        test    edi, edi
        jle     L_532
L_4e6:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [eax]
        cmp     ecx, -1
        jz      L_528
        mov     al, byte ptr [ebx]
        test    al, 1
        jz      L_528
        test    al, 8
        jnz     L_505
        push    ecx
        call    dword ptr [g_GetFileType]
        test    eax, eax
        jz      L_528
L_505:
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_100057c0]
        lea     eax, [eax + eax*8]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax + 4], cl
L_528:
        add     dword ptr [ebp - 4], 4
        inc     esi
        inc     ebx
        cmp     esi, edi
        jl      L_4e6
L_532:
        xor     ebx, ebx
L_534:
        mov     ecx, dword ptr [g_100057c0]
        lea     eax, [ebx + ebx*8]
        cmp     dword ptr [ecx + eax*4], -1
        lea     esi, [ecx + eax*4]
        jnz     L_593
        test    ebx, ebx
        mov     byte ptr [esi + 4], 0x81
        jnz     L_553
        push    -0xa
        pop     eax
        jmp     L_55d
L_553:
        mov     eax, ebx
        dec     eax
        neg     eax
        sbb     eax, eax
        add     eax, -0xb
L_55d:
        push    eax
        call    dword ptr [g_GetStdHandle]
        mov     edi, eax
        cmp     edi, -1
        jz      L_582
        push    edi
        call    dword ptr [g_GetFileType]
        test    eax, eax
        jz      L_582
        and     eax, 0xff
        mov     dword ptr [esi], edi
        cmp     eax, 2
        jnz     L_588
L_582:
        or      byte ptr [esi + 4], 0x40
        jmp     L_597
L_588:
        cmp     eax, 3
        jnz     L_597
        or      byte ptr [esi + 4], 8
        jmp     L_597
L_593:
        or      byte ptr [esi + 4], 0x80
L_597:
        inc     ebx
        cmp     ebx, 3
        jl      L_534
        push    dword ptr [g_100058c0]
        call    dword ptr [g_SetHandleCount]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
