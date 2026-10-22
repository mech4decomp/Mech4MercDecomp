/*
 * FUN_1003a46f (491 B) __cdecl.
 * SEH-guarded string-mapping wrapper. Detects wide/ansi LCMapString
 * support (DAT_10075698), then maps via LCMapStringW or a
 * WideCharToMultiByte -> LCMapStringA -> MultiByteToWideChar path.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075698;   /* DAT_10075698 map-mode flag */
extern unsigned int g_1007568c;   /* DAT_1007568c codepage */
extern void *g_10049130;          /* IAT: LCMapStringW */
extern void *g_1004912c;          /* IAT: LCMapStringA */
extern void *g_100490fc;          /* IAT: WideCharToMultiByte */
extern void *g_10049100;          /* IAT: MultiByteToWideChar */
extern void __cdecl FUN_1003a678(void);   /* rel32 call */
extern void __cdecl FUN_10037940(void);   /* rel32 call (alloca) */
extern void __cdecl FUN_10037f30(void);   /* rel32 call (_strncpy) */

__declspec(naked) void __cdecl FUN_1003a46f(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -0x1
        push    0x1004b738
        push    0x1003eb9c
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     esi, esi
        cmp     dword ptr [g_10075698], esi
        jnz     L_1003a4e5
        push    esi
        push    esi
        push    0x1
        pop     ebx
        push    ebx
        push    0x1004b71c
        mov     edi, 0x100
        push    edi
        push    esi
        call    dword ptr [g_10049130]
        test    eax, eax
        jz      L_1003a4c3
        mov     dword ptr [g_10075698], ebx
        jmp     L_1003a4e5
    L_1003a4c3:
        push    esi
        push    esi
        push    ebx
        push    0x1004b718
        push    edi
        push    esi
        call    dword ptr [g_1004912c]
        test    eax, eax
        jz      L_1003a664
        mov     dword ptr [g_10075698], 0x2
    L_1003a4e5:
        cmp     dword ptr [ebp + 0x14], esi
        jle     L_1003a4fa
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        call    FUN_1003a678
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x14], eax
    L_1003a4fa:
        mov     eax, dword ptr [g_10075698]
        cmp     eax, 0x1
        jnz     L_1003a521
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10049130]
        jmp     L_1003a666
    L_1003a521:
        cmp     eax, 0x2
        jnz     L_1003a664
        cmp     dword ptr [ebp + 0x20], esi
        jnz     L_1003a537
        mov     eax, dword ptr [g_1007568c]
        mov     dword ptr [ebp + 0x20], eax
    L_1003a537:
        push    esi
        push    esi
        push    esi
        push    esi
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    0x220
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_100490fc]
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, esi
        jz      L_1003a664
        mov     dword ptr [ebp - 0x4], esi
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x1c], eax
        jmp     L_1003a57d
        /* embedded alloca helper (separate fn in ref byte range) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     esi, esi
        mov     dword ptr [ebp - 0x1c], esi
    L_1003a57d:
        or      dword ptr [ebp - 0x4], 0xffffffff
        cmp     dword ptr [ebp - 0x1c], esi
        jz      L_1003a664
        push    esi
        push    esi
        push    dword ptr [ebp - 0x20]
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    0x220
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_100490fc]
        test    eax, eax
        jz      L_1003a664
        push    esi
        push    esi
        push    dword ptr [ebp - 0x20]
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004912c]
        mov     edi, eax
        mov     dword ptr [ebp - 0x2c], edi
        cmp     edi, esi
        jz      L_1003a664
        mov     dword ptr [ebp - 0x4], 0x1
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10037940
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, esp
        mov     dword ptr [ebp - 0x24], ebx
        or      dword ptr [ebp - 0x4], 0xffffffff
        jmp     L_1003a600
        /* embedded alloca helper (separate fn in ref byte range) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     esi, esi
        xor     ebx, ebx
        or      dword ptr [ebp - 0x4], 0xffffffff
        mov     edi, dword ptr [ebp - 0x2c]
    L_1003a600:
        cmp     ebx, esi
        jz      L_1003a664
        push    edi
        push    ebx
        push    dword ptr [ebp - 0x20]
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1004912c]
        test    eax, eax
        jz      L_1003a664
        test    byte ptr [ebp + 0xd], 0x4
        jz      L_1003a63e
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, esi
        jz      L_1003a660
        cmp     eax, edi
        jl      L_1003a62f
        mov     eax, edi
    L_1003a62f:
        push    eax
        push    ebx
        push    dword ptr [ebp + 0x18]
        call    FUN_10037f30
        add     esp, 0xc
        jmp     L_1003a660
    L_1003a63e:
        cmp     dword ptr [ebp + 0x1c], esi
        jnz     L_1003a647
        push    esi
        push    esi
        jmp     L_1003a64d
    L_1003a647:
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
    L_1003a64d:
        push    edi
        push    ebx
        push    0x1
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10049100]
        mov     edi, eax
        cmp     edi, esi
        jz      L_1003a664
    L_1003a660:
        mov     eax, edi
        jmp     L_1003a666
    L_1003a664:
        xor     eax, eax
    L_1003a666:
        lea     esp, [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
