/*
 * FUN_10004437 (318 B, __cdecl) — GetStringType wrapper with SEH frame.
 * Detects whether the OS supports GetStringTypeW (wide) vs GetStringTypeA
 * (ansi), converts via MultiByteToWideChar as needed, and returns the type
 * flags. Uses _alloca_probe (FUN_10002f70) + _memset (FUN_10003fc0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c40;   /* string-type mode flag (0/1/2) */
extern int g_10008c34;   /* default codepage */
extern int g_10008c24;   /* default LCID */
extern void *g_100050bc; /* GetStringTypeW IAT */
extern void *g_100050b8; /* GetStringTypeA IAT */
extern void *g_100050ac; /* MultiByteToWideChar IAT */
extern void __cdecl FUN_10002f70(void);   /* _alloca_probe */
extern void __cdecl FUN_10003fc0(void);   /* memset */

__declspec(naked) int FUN_10004437(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x10005498
        push    0x10004110
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x18
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, dword ptr [g_10008c40]
        xor     ebx, ebx
        cmp     eax, ebx
        jnz     L_3ea6
        lea     eax, [ebp - 0x1c]
        push    eax
        push    1
        pop     esi
        push    esi
        push    0x10005478
        push    esi
        call    dword ptr [g_100050bc]
        test    eax, eax
        jz      L_3e84
        mov     eax, esi
        jmp     L_3ea1
L_3e84:
        lea     eax, [ebp - 0x1c]
        push    eax
        push    esi
        push    0x10005474
        push    esi
        push    ebx
        call    dword ptr [g_100050b8]
        test    eax, eax
        jz      L_3e6c
        push    2
        pop     eax
L_3ea1:
        mov     dword ptr [g_10008c40], eax
L_3ea6:
        cmp     eax, 2
        jnz     L_3ecf
        mov     eax, dword ptr [ebp + 0x1c]
        cmp     eax, ebx
        jnz     L_3eb7
        mov     eax, dword ptr [g_10008c24]
L_3eb7:
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        push    eax
        call    dword ptr [g_100050b8]
        jmp     L_3e6e
L_3ecf:
        cmp     eax, 1
        jnz     L_3e6c
        cmp     dword ptr [ebp + 0x18], ebx
        jnz     L_3ee5
        mov     eax, dword ptr [g_10008c34]
        mov     dword ptr [ebp + 0x18], eax
L_3ee5:
        push    ebx
        push    ebx
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x20]
        neg     eax
        sbb     eax, eax
        and     eax, 8
        inc     eax
        push    eax
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_100050ac]
        mov     dword ptr [ebp - 0x20], eax
        cmp     eax, ebx
        jz      L_3e6c
        mov     dword ptr [ebp - 4], ebx
        lea     edi, [eax + eax]
        mov     eax, edi
        add     eax, 3
        and     al, 0xfc
        call    FUN_10002f70
        mov     dword ptr [ebp - 0x18], esp
        mov     esi, esp
        mov     dword ptr [ebp - 0x24], esi
        push    edi
        push    ebx
        push    esi
        call    FUN_10003fc0
        add     esp, 0xc
        jmp     L_3e3b
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     ebx, ebx
        xor     esi, esi
L_3e3b:
        or      dword ptr [ebp - 4], -1
        cmp     esi, ebx
        jz      L_3e6c
        push    dword ptr [ebp - 0x20]
        push    esi
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    1
        push    dword ptr [ebp + 0x18]
        call    dword ptr [g_100050ac]
        cmp     eax, ebx
        jz      L_3e6c
        push    dword ptr [ebp + 0x14]
        push    eax
        push    esi
        push    dword ptr [ebp + 8]
        call    dword ptr [g_100050bc]
        jmp     L_3e6e
L_3e6c:
        xor     eax, eax
L_3e6e:
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
