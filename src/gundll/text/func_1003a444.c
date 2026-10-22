/*
 * FUN_1003a444 (43 B) — __cdecl.
 * strnlen-like: returns offset of first NUL within param_2 bytes of
 * param_1, or param_2 if none found.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1003a444(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 1]
        je      skip2
    loop_:
        cmp     byte ptr [eax], 0x0
        je      skip2
        inc     eax
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jne     loop_
    skip2:
        cmp     byte ptr [eax], 0x0
        pop     esi
        jne     ret_edx
        sub     eax, dword ptr [esp + 0x4]
        ret
    ret_edx:
        mov     eax, edx
        ret
    }
}
