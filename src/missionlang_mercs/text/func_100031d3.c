/*
 * FUN_100031d3 (511 B) — locale string-mapping wrapper with SEH frame.
 * Detects whether the OS supports LCMapStringW (wide) vs LCMapStringA (ansi),
 * converts via MultiByteToWideChar/WideCharToMultiByte as needed, and maps
 * the string. Uses _alloca_probe (0x10003a80) for the temp buffers.
 *
 * __cdecl, 8 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the dead _alloca_probe
 * fallback blocks (unreachable after RET) are now real mnemonics. No __emit
 * remains.
 */

extern int g_10005560;                                /* 0x10005560 */
extern int g_10005558;                                /* 0x10005558 */
extern int (__stdcall *g_1000409c)(unsigned int, unsigned int, void *, int, void *, int); /* IAT 0x1000409c LCMapStringW */
extern int (__stdcall *g_10004098)(unsigned int, unsigned int, void *, int, void *, int); /* IAT 0x10004098 LCMapStringA */
extern int (__stdcall *g_10004094)(unsigned int, unsigned int, void *, int, void *, int); /* IAT 0x10004094 MultiByteToWideChar */
extern int (__stdcall *g_10004048)(unsigned int, unsigned int, void *, int, void *, int, void *, void *); /* IAT 0x10004048 WideCharToMultiByte */
extern void __cdecl FUN_100033f7(void);
extern void __cdecl FUN_10003a80(void);               /* _alloca_probe */
extern void __cdecl FUN_100039a0(void);               /* SEH handler */
extern char g_100043e8;                               /* 0x100043e8 SEH data */
extern char g_100043e0[];                             /* 0x100043e0 L"" */
extern char g_100043dc[];                             /* 0x100043dc "" */

__declspec(naked) int __cdecl FUN_100031d3(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_100043e8
        push    offset FUN_100039a0
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     edi, edi
        cmp     dword ptr [g_10005560], edi
        jnz     L3249
        push    edi
        push    edi
        push    0x1
        pop     ebx
        push    ebx
        push    offset g_100043e0
        mov     esi, 0x100
        push    esi
        push    edi
        call    dword ptr [g_1000409c]
        test    eax, eax
        jz      L3227
        mov     dword ptr [g_10005560], ebx
        jmp     L3249
L3227:
        push    edi
        push    edi
        push    ebx
        push    offset g_100043dc
        push    esi
        push    edi
        call    dword ptr [g_10004098]
        test    eax, eax
        jz      L3361
        mov     dword ptr [g_10005560], 0x2
L3249:
        cmp     dword ptr [ebp + 0x14], edi
        jle     L325E
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        call    FUN_100033f7
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x14], eax
L325E:
        mov     eax, dword ptr [g_10005560]
        cmp     eax, 0x2
        jnz     L3285
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_10004098]
        jmp     L3363
L3285:
        cmp     eax, 0x1
        jnz     L3361
        cmp     dword ptr [ebp + 0x20], edi
        jnz     L329B
        mov     eax, dword ptr [g_10005558]
        mov     dword ptr [ebp + 0x20], eax
L329B:
        push    edi
        push    edi
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x24]
        neg     eax
        sbb     eax, eax
        and     eax, 0x8
        inc     eax
        push    eax
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10004094]
        mov     ebx, eax
        mov     dword ptr [ebp - 0x1c], ebx
        cmp     ebx, edi
        jz      L3361
        mov     dword ptr [ebp - 4], edi
        lea     eax, [ebx + ebx]
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10003a80
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x24], eax
        or      dword ptr [ebp - 4], 0xffffffff
        jmp     L32F6
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        mov     dword ptr [ebp - 0x24], edi
        or      dword ptr [ebp - 4], 0xffffffff
        mov     ebx, dword ptr [ebp - 0x1c]
L32F6:
        cmp     dword ptr [ebp - 0x24], edi
        jz      L3361
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    0x1
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10004094]
        test    eax, eax
        jz      L3361
        push    edi
        push    edi
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1000409c]
        mov     esi, eax
        mov     dword ptr [ebp - 0x28], esi
        cmp     esi, edi
        jz      L3361
        test    byte ptr [ebp + 0xd], 0x4
        jz      L3375
        cmp     dword ptr [ebp + 0x1c], edi
        jz      L33F0
        cmp     esi, dword ptr [ebp + 0x1c]
        jg      L3361
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1000409c]
        test    eax, eax
        jnz     L33F0
L3361:
        xor     eax, eax
L3363:
        lea     esp, [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
L3375:
        mov     dword ptr [ebp - 4], 0x1
        lea     eax, [esi + esi]
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10003a80
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, esp
        mov     dword ptr [ebp - 0x20], ebx
        or      dword ptr [ebp - 4], 0xffffffff
        jmp     L33A9
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        xor     ebx, ebx
        or      dword ptr [ebp - 4], 0xffffffff
        mov     esi, dword ptr [ebp - 0x28]
L33A9:
        cmp     ebx, edi
        jz      L3361
        push    esi
        push    ebx
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_1000409c]
        test    eax, eax
        jz      L3361
        cmp     dword ptr [ebp + 0x1c], edi
        push    edi
        push    edi
        jnz     L33D0
        push    edi
        push    edi
        jmp     L33D6
L33D0:
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
L33D6:
        push    esi
        push    ebx
        push    0x220
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10004048]
        mov     esi, eax
        cmp     esi, edi
        jz      L3361
L33F0:
        mov     eax, esi
        jmp     L3363
    }
}
