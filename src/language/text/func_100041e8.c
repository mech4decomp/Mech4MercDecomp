/*
 * FUN_100041e8 (511 B, __cdecl) — locale-aware string case-mapping wrapper.
 * Detects whether the OS supports LCMapStringW vs LCMapStringA, then maps a
 * multibyte string to wide/back via MultiByteToWideChar / LCMapStringW /
 * WideCharToMultiByte. Uses an SEH frame + _alloca_probe (FUN_10002f70).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c3c;   /* mapping-mode flag (0/1/2) */
extern int g_10008c34;   /* default codepage */
extern void *g_100050b4; /* LCMapStringW IAT */
extern void *g_100050b0; /* LCMapStringA IAT */
extern void *g_100050ac; /* MultiByteToWideChar IAT */
extern void *g_10005050; /* WideCharToMultiByte IAT */
extern int __cdecl FUN_1000440c(void);
extern void __cdecl FUN_10002f70(void);   /* _alloca_probe */

__declspec(naked) int FUN_100041e8(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    -1
        push    0x10005480
        push    0x10004110
        mov     eax, fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x1c
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [ebp - 0x18], esp
        xor     edi, edi
        cmp     dword ptr [g_10008c3c], edi
        jnz     L_3e5e
        push    edi
        push    edi
        push    1
        pop     ebx
        push    ebx
        push    0x10005478
        mov     esi, 0x100
        push    esi
        push    edi
        call    dword ptr [g_100050b4]
        test    eax, eax
        jz      L_3e3c
        mov     dword ptr [g_10008c3c], ebx
        jmp     L_3e5e
L_3e3c:
        push    edi
        push    edi
        push    ebx
        push    0x10005474
        push    esi
        push    edi
        call    dword ptr [g_100050b0]
        test    eax, eax
        jz      L_3e76
        mov     dword ptr [g_10008c3c], 2
L_3e5e:
        cmp     dword ptr [ebp + 0x14], edi
        jle     L_3e73
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        call    FUN_1000440c
        pop     ecx
        pop     ecx
        mov     dword ptr [ebp + 0x14], eax
L_3e73:
        mov     eax, dword ptr [g_10008c3c]
        cmp     eax, 2
        jnz     L_3e9a
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    dword ptr [g_100050b0]
        jmp     L_3e78
L_3e9a:
        cmp     eax, 1
        jnz     L_3e76
        cmp     dword ptr [ebp + 0x20], edi
        jnz     L_3eb0
        mov     eax, dword ptr [g_10008c34]
        mov     dword ptr [ebp + 0x20], eax
L_3eb0:
        push    edi
        push    edi
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        mov     eax, dword ptr [ebp + 0x24]
        neg     eax
        sbb     eax, eax
        and     eax, 8
        inc     eax
        push    eax
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_100050ac]
        mov     ebx, eax
        mov     dword ptr [ebp - 0x1c], ebx
        cmp     ebx, edi
        jz      L_3e76
        mov     dword ptr [ebp - 4], edi
        lea     eax, [ebx + ebx]
        add     eax, 3
        and     al, 0xfc
        call    FUN_10002f70
        mov     dword ptr [ebp - 0x18], esp
        mov     eax, esp
        mov     dword ptr [ebp - 0x24], eax
        or      dword ptr [ebp - 4], -1
        jmp     L_3e0b
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        mov     dword ptr [ebp - 0x24], edi
        or      dword ptr [ebp - 4], -1
        mov     ebx, dword ptr [ebp - 0x1c]
L_3e0b:
        cmp     dword ptr [ebp - 0x24], edi
        jz      L_3e76
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0x14]
        push    dword ptr [ebp + 0x10]
        push    1
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_100050ac]
        test    eax, eax
        jz      L_3e76
        push    edi
        push    edi
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    dword ptr [g_100050b4]
        mov     esi, eax
        mov     dword ptr [ebp - 0x28], esi
        cmp     esi, edi
        jz      L_3e76
        test    byte ptr [ebp + 0xd], 4
        jz      L_3e8a
        cmp     dword ptr [ebp + 0x1c], edi
        jz      L_3e05
        cmp     esi, dword ptr [ebp + 0x1c]
        jg      L_3e76
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
        push    ebx
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    dword ptr [g_100050b4]
        test    eax, eax
        jnz     L_3e05
L_3e76:
        xor     eax, eax
L_3e78:
        lea     esp, [ebp - 0x38]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     dword ptr fs:[0], ecx
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
L_3e8a:
        mov     dword ptr [ebp - 4], 1
        lea     eax, [esi + esi]
        add     eax, 3
        and     al, 0xfc
        call    FUN_10002f70
        mov     dword ptr [ebp - 0x18], esp
        mov     ebx, esp
        mov     dword ptr [ebp - 0x20], ebx
        or      dword ptr [ebp - 4], -1
        jmp     L_3ebe
        /* dead _alloca_probe fallback block (unreachable after RET) */
        push    1
        pop     eax
        ret
        mov     esp, dword ptr [ebp - 0x18]
        xor     edi, edi
        xor     ebx, ebx
        or      dword ptr [ebp - 4], -1
        mov     esi, dword ptr [ebp - 0x28]
L_3ebe:
        cmp     ebx, edi
        jz      L_3e76
        push    esi
        push    ebx
        push    dword ptr [ebp - 0x1c]
        push    dword ptr [ebp - 0x24]
        push    dword ptr [ebp + 0xc]
        push    dword ptr [ebp + 8]
        call    dword ptr [g_100050b4]
        test    eax, eax
        jz      L_3e76
        cmp     dword ptr [ebp + 0x1c], edi
        push    edi
        push    edi
        jnz     L_3ee5
        push    edi
        push    edi
        jmp     L_3eeb
L_3ee5:
        push    dword ptr [ebp + 0x1c]
        push    dword ptr [ebp + 0x18]
L_3eeb:
        push    esi
        push    ebx
        push    0x220
        push    dword ptr [ebp + 0x20]
        call    dword ptr [g_10005050]
        mov     esi, eax
        cmp     esi, edi
        jz      L_3e76
L_3e05:
        mov     eax, esi
        jmp     L_3e78
    }
}
