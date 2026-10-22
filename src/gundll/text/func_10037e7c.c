/*
 * FUN_10037e7c (117 B) — __cdecl.
 * Char/wide-char case conversion helper. Uses global 0x1007567c (a
 * conversion handle) when set, else a simple ASCII A-Z -> a-z mapping.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003a6a8(void);
extern void __cdecl FUN_1003a46f(void);
extern int g_1007567c;

__declspec(naked) void __cdecl FUN_10037e7c(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, dword ptr [ebp + 0x8]
        cmp     ax, 0xffff
        jnz     L_8e
        or      ax, ax
        leave
        ret
    L_8e:
        cmp     dword ptr [g_1007567c], 0
        jnz     L_a8
        cmp     ax, 0x41
        jc      L_eef
        cmp     ax, 0x5a
        ja      L_eef
        add     eax, 0x20
        leave
        ret
    L_a8:
        cmp     ax, 0x100
        jnc     L_c2
        push    0x1
        push    eax
        call    FUN_1003a6a8
        pop     ecx
        test    eax, eax
        pop     ecx
        jnz     L_c2
        mov     ax, word ptr [ebp + 0x8]
        leave
        ret
    L_c2:
        push    0x0
        lea     eax, [ebp - 2]
        push    0x1
        push    eax
        lea     eax, [ebp + 0x8]
        push    0x1
        push    eax
        push    0x100
        push    dword ptr [g_1007567c]
        call    FUN_1003a46f
        add     esp, 0x1c
        test    eax, eax
        mov     ax, word ptr [ebp + 0x8]
        jz      L_eef
        mov     ax, word ptr [ebp - 2]
    L_eef:
        leave
        ret
    }
}
