/*
 * FUN_100381b1 (56 B) — __cdecl. Wide-char bounded string compare.
 */

__declspec(naked) void __cdecl FUN_100381b1(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp+0x10], 0
        jnz     L_go
        xor     eax, eax
        pop     ebp
        ret
L_go:
        dec     dword ptr [ebp+0x10]
        mov     edx, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x8]
        jz      L_done
L_loop:
        mov     ax, word ptr [ecx]
        test    ax, ax
        jz      L_done
        cmp     ax, word ptr [edx]
        jnz     L_done
        inc     ecx
        inc     ecx
        inc     edx
        inc     edx
        dec     dword ptr [ebp+0x10]
        jnz     L_loop
L_done:
        movzx   eax, word ptr [ecx]
        movzx   ecx, word ptr [edx]
        sub     eax, ecx
        pop     ebp
        ret
    }
}
