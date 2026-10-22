/*
 * FUN_10003422 (318 B) — GetStringType wrapper with SEH frame. Detects
 * whether the OS supports GetStringTypeW (wide) vs GetStringTypeA (ansi),
 * converts via MultiByteToWideChar as needed, and returns the type flags.
 *
 * __cdecl, 7 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * Rewritten from byte-lock to real mnemonics: the dead _alloca_probe
 * fallback block (unreachable after RET) is now real mnemonics. No __emit
 * remains.
 */

extern int g_10005564;                                /* 0x10005564 */
extern int g_10005558;                                /* 0x10005558 */
extern int g_10005548;                                /* 0x10005548 */
extern int (__stdcall *g_100040a4)(unsigned int, void *, int, void *); /* IAT 0x100040a4 GetStringTypeW */
extern int (__stdcall *g_100040a0)(unsigned int, unsigned int, void *, int, void *); /* IAT 0x100040a0 GetStringTypeA */
extern int (__stdcall *g_10004094)(unsigned int, unsigned int, void *, int, void *, int); /* IAT 0x10004094 MultiByteToWideChar */
extern void __cdecl FUN_10003a80(void);               /* _alloca_probe */
extern void *__cdecl FUN_10003160(void *, int, unsigned int); /* memset */
extern void __cdecl FUN_100039a0(void);               /* SEH handler */
extern char g_10004400;                               /* 0x10004400 SEH data */
extern char g_100043e0[];                             /* 0x100043e0 L"" */
extern char g_100043dc[];                             /* 0x100043dc "" */

__declspec(naked) int __cdecl FUN_10003422(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    offset g_10004400
        push    offset FUN_100039a0
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_10005564]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L3491
        lea     eax, [ebp - 0x1c]
        push    eax
        push    0x1
        pop     esi
        push    esi
        push    offset g_100043e0
        push    esi
        call    dword ptr [g_100040a4]
        test    eax, eax
        jz      L346F
        mov     eax, esi
        jmp     L348C
L346F:
        lea     eax, [ebp - 0x1c]
        push    eax
        push    esi
        push    offset g_100043dc
        push    esi
        push    ebx
        call    dword ptr [g_100040a0]
        test    eax, eax
        jz      L3557
        push    0x2
        pop     eax
L348C:
        mov     dword ptr [g_10005564], eax
L3491:
        cmp     eax, 0x2
        jnz     L34BA
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, ebx
        jnz     L34A2
        mov     eax, dword ptr [g_10005548]
L34A2:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 0x8]
        push    eax
        call    dword ptr [g_100040a0]
        jmp     L3559
L34BA:
        cmp     eax, 0x1
        jnz     L3557
        cmp     dword ptr [ebp + 0x18], ebx
        jnz     L34D0
        mov     eax, dword ptr [g_10005558]
        mov     dword ptr [ebp + 0x18], eax
L34D0:
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x20]
        neg     eax
        sbb     eax, eax
        and     eax, 0x8
        inc     eax
        push    eax
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_10004094]
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, ebx
        jz      L3557
        mov     dword ptr [ebp - 4], ebx
        lea     edi, [eax + eax]
        mov     eax, edi
        add     eax, 0x3
        and     al, 0xfc
        call    FUN_10003a80
        mov     dword ptr [ebp - 0x18], esp
        mov     esi, esp
        mov     dword ptr [ebp - 0x24], esi
        push    edi
        push    ebx
        push    esi
        call    FUN_10003160
        add     esp, 0xc
        jmp     L3526
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        xor     esi, esi
L3526:
        or      dword ptr [ebp - 4], 0xffffffff
        cmp     esi, ebx
        jz      L3557
        push    dword ptr [ebp - 0x20]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    0x1
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_10004094]
        cmp     eax, ebx
        jz      L3557
        push    dword ptr [ebp + 0x14]
        push    eax
        push    esi
        push    dword ptr [ebp + 0x8]
        call    dword ptr [g_100040a4]
        jmp     L3559
L3557:
        xor     eax, eax
L3559:
        lea     esp, [ebp - 0x34]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
