/*
 * FUN_1003a678 (48 B) — __cdecl.
 * Find index of first zero short within param_2 shorts; return index if found, else param_2.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003a678(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 1]
        jz      check
    loop1:
        cmp     word ptr [eax], 0
        jz      check
        inc     eax
        mov     esi, ecx
        inc     eax
        dec     ecx
        test    esi, esi
        jnz     loop1
    check:
        cmp     word ptr [eax], 0
        pop     esi
        jnz     ret_param2
        sub     eax, dword ptr [esp + 0x4]
        sar     eax, 1
        ret
    ret_param2:
        mov     eax, edx
        ret
    }
}
