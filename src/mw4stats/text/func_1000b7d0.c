/*
 * FUN_1000b7d0 (114 B) - __cdecl. Returns 1 if the wide string param_1 is
 * empty or consists entirely of whitespace/control characters; otherwise 0.
 * Uses wcslen (function pointer @ 0x100210f4) to bound the scan.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100210f4;   /* wcslen function pointer @ 0x100210f4 */

__declspec(naked) int FUN_1000b7d0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        test    ebx, ebx
        push    edi
        jz      L_ret1
        cmp     word ptr [ebx], 0
        jz      L_ret1
        mov     ebp, dword ptr [g_100210f4]
        push    ebx
        xor     esi, esi
        call    ebp
        add     esp, 0x4
        test    eax, eax
        jbe     L_ret1
        mov     edi, ebx
L_scan:
        mov     ax, word ptr [edi]
        cmp     ax, 0x9
        jz      L_ok
        cmp     ax, 0xa
        jz      L_ok
        cmp     ax, 0xd
        jz      L_ok
        cmp     ax, 0x20
        jc      L_hi
        cmp     ax, 0xd7ff
        jbe     L_ok
L_hi:
        cmp     ax, 0xe000
        jc      L_ret0
        cmp     ax, 0xfffd
        ja      L_ret0
L_ok:
        push    ebx
        inc     esi
        add     edi, 0x2
        call    ebp
        add     esp, 0x4
        cmp     esi, eax
        jc      L_scan
L_ret1:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x1
        pop     ebx
        ret
L_ret0:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret
    }
}
