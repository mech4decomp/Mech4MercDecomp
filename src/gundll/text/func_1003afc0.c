/*
 * FUN_1003afc0 (57 B) - __cdecl. Iterates param_2 times over the
 * 16-bit word array param_1, calling FUN_1003af6f(word, param_3,
 * param_4) each iteration, stopping early if *param_4 becomes -1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003af6f(int, void *, int *);

__declspec(naked) void __cdecl FUN_1003afc0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        mov     eax, ebx
        dec     ebx
        push    esi
        push    edi
        test    eax, eax
        jle     L_done
        mov     edi, dword ptr [esp + 0x1c]
        mov     esi, dword ptr [esp + 0x10]
    L_loop:
        mov     ax, word ptr [esi]
        push    edi
        push    dword ptr [esp + 0x1c]
        inc     esi
        inc     esi
        push    eax
        call    FUN_1003af6f
        add     esp, 0xc
        cmp     dword ptr [edi], -0x1
        jz      L_done
        mov     eax, ebx
        dec     ebx
        test    eax, eax
        jg      L_loop
    L_done:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
