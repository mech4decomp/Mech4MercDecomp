/*
 * FUN_10001463 (444 B) — CRT stdio/std-handle init: allocate the handle
 * table, init entries, read STARTUPINFO reserved handles, then bind the
 * three standard handles (stdin/stdout/stderr) via GetStdHandle.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_100021e2(unsigned int);   /* _malloc */
extern void __cdecl FUN_10001186(int);             /* __amsg_exit */

extern void (__stdcall *g_GetStartupInfoA)(void *);   /* IAT 0x1000503c */
extern unsigned int (__stdcall *g_GetFileType)(void *); /* IAT 0x10005038 */
extern void *(__stdcall *g_GetStdHandle)(int);         /* IAT 0x10005034 */
extern void (__stdcall *g_SetHandleCount)(unsigned int); /* IAT 0x10005030 */

extern char g_10009000;          /* handle table base 0x10009000 */
extern unsigned int g_10009100;  /* handle count 0x10009100 */

__declspec(naked) void __stdcall FUN_10001463(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x48
        push    ebx
        push    esi
        push    edi
        push    0x480
        call    FUN_100021e2
        mov     esi, eax
        pop     ecx
        test    esi, esi
        jnz     L_485
        push    0x1b
        call    FUN_10001186
        pop     ecx
L_485:
        mov     dword ptr [g_10009000], esi
        mov     dword ptr [g_10009100], 0x20
        lea     eax, [esi + 0x480]
L_49b:
        cmp     esi, eax
        jnc     L_4bd
        and     byte ptr [esi + 4], 0
        or      dword ptr [esi], 0xffffffff
        and     dword ptr [esi + 8], 0
        mov     byte ptr [esi + 5], 0xa
        mov     eax, dword ptr [g_10009000]
        add     esi, 0x24
        add     eax, 0x480
        jmp     L_49b
L_4bd:
        lea     eax, [ebp - 0x48]
        push    eax
        call    dword ptr [g_GetStartupInfoA]
        cmp     word ptr [ebp - 0x16], 0
        jz      L_5a3
        mov     eax, dword ptr [ebp - 0x14]
        test    eax, eax
        jz      L_5a3
        mov     edi, dword ptr [eax]
        lea     ebx, [eax + 4]
        lea     eax, [ebx + edi]
        mov     dword ptr [ebp - 4], eax
        mov     eax, 0x800
        cmp     edi, eax
        jl      L_4f3
        mov     edi, eax
L_4f3:
        cmp     dword ptr [g_10009100], edi
        jge     L_551
        mov     esi, 0x10009004
L_500:
        push    0x480
        call    FUN_100021e2
        test    eax, eax
        pop     ecx
        jz      L_54b
        add     dword ptr [g_10009100], 0x20
        mov     dword ptr [esi], eax
        lea     ecx, [eax + 0x480]
L_51e:
        cmp     eax, ecx
        jnc     L_53e
        and     byte ptr [eax + 4], 0
        or      dword ptr [eax], 0xffffffff
        and     dword ptr [eax + 8], 0
        mov     byte ptr [eax + 5], 0xa
        mov     ecx, dword ptr [esi]
        add     eax, 0x24
        add     ecx, 0x480
        jmp     L_51e
L_53e:
        add     esi, 4
        cmp     dword ptr [g_10009100], edi
        jl      L_500
        jmp     L_551
L_54b:
        mov     edi, dword ptr [g_10009100]
L_551:
        xor     esi, esi
        test    edi, edi
        jle     L_5a3
L_557:
        mov     eax, dword ptr [ebp - 4]
        mov     ecx, dword ptr [eax]
        cmp     ecx, -1
        jz      L_599
        mov     al, byte ptr [ebx]
        test    al, 1
        jz      L_599
        test    al, 8
        jnz     L_576
        push    ecx
        call    dword ptr [g_GetFileType]
        test    eax, eax
        jz      L_599
L_576:
        mov     ecx, esi
        mov     eax, esi
        sar     ecx, 5
        and     eax, 0x1f
        mov     ecx, dword ptr [ecx*4 + g_10009000]
        lea     eax, [eax + eax*8]
        lea     eax, [ecx + eax*4]
        mov     ecx, dword ptr [ebp - 4]
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax], ecx
        mov     cl, byte ptr [ebx]
        mov     byte ptr [eax + 4], cl
L_599:
        add     dword ptr [ebp - 4], 4
        inc     esi
        inc     ebx
        cmp     esi, edi
        jl      L_557
L_5a3:
        xor     ebx, ebx
L_5a5:
        mov     ecx, dword ptr [g_10009000]
        lea     eax, [ebx + ebx*8]
        cmp     dword ptr [ecx + eax*4], -1
        lea     esi, [ecx + eax*4]
        jnz     L_604
        test    ebx, ebx
        mov     byte ptr [esi + 4], 0x81
        jnz     L_5c4
        push    -0xa
        pop     eax
        jmp     L_5ce
L_5c4:
        mov     eax, ebx
        dec     eax
        neg     eax
        sbb     eax, eax
        add     eax, -0xb
L_5ce:
        push    eax
        call    dword ptr [g_GetStdHandle]
        mov     edi, eax
        cmp     edi, -1
        jz      L_5f3
        push    edi
        call    dword ptr [g_GetFileType]
        test    eax, eax
        jz      L_5f3
        and     eax, 0xff
        mov     dword ptr [esi], edi
        cmp     eax, 2
        jnz     L_5f9
L_5f3:
        or      byte ptr [esi + 4], 0x40
        jmp     L_608
L_5f9:
        cmp     eax, 3
        jnz     L_608
        or      byte ptr [esi + 4], 8
        jmp     L_608
L_604:
        or      byte ptr [esi + 4], 0x80
L_608:
        inc     ebx
        cmp     ebx, 3
        jl      L_5a5
        push    dword ptr [g_10009100]
        call    dword ptr [g_SetHandleCount]
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
