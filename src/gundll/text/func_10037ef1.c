/*
 * FUN_10037ef1 (61 B) — __cdecl.
 * Copies a null-terminated short string, then zero-fills the remainder.
 */

__declspec(naked) void FUN_10037ef1(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        test    ecx, ecx
        mov     esi, edi
        jz      L10037f29
        mov     edx, dword ptr [esp + 0x10]
    L10037f05:
        mov     ax, word ptr [edx]
        mov     word ptr [edi], ax
        inc     edi
        inc     edi
        inc     edx
        inc     edx
        test    ax, ax
        jz      L10037f17
        dec     ecx
        jnz     L10037f05
    L10037f17:
        test    ecx, ecx
        jz      L10037f29
        dec     ecx
        jz      L10037f29
        xor     eax, eax
        shr     ecx, 0x1
        rep stosd
        adc     ecx, ecx
        __emit 0x66 /* __emit: MSVC6 emits rep stosw as F3 66 AB; ref uses 66 F3 AB */
        rep stosd
    L10037f29:
        mov     eax, esi
        pop     edi
        pop     esi
        ret
    }
}
