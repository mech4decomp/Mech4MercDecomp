/*
 * FUN_10042369 (47 B) — __cdecl.
 * Find index of first zero short within param_2 shorts; return index+1 if found, else param_2.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10042369(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     ecx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        xor     edx, edx
        cmp     ecx, edx
        jz      ret_param2
    loop1:
        cmp     word ptr [eax], dx
        jz      found
        inc     eax
        inc     eax
        dec     ecx
        jnz     loop1
    found:
        cmp     ecx, edx
        jz      ret_param2
        cmp     word ptr [eax], dx
        jnz     ret_param2
        sub     eax, dword ptr [ebp + 0x8]
        sar     eax, 1
        inc     eax
        pop     ebp
        ret
    ret_param2:
        mov     eax, dword ptr [ebp + 0xc]
        pop     ebp
        ret
    }
}
