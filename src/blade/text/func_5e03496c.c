/*
 * FUN_5e03496c (43 B) — duplicates a NUL-terminated string into a freshly
 * allocated buffer (strdup-style). Returns the new copy, or NULL if the
 * source is NULL or allocation fails.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e02e6b0(void);
extern void __cdecl FUN_5e02b6e4(void);
extern void __cdecl FUN_5e02e220(void);

__declspec(naked) void FUN_5e03496c(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]
        test    esi, esi
        jz      L_993
        push    esi
        call    FUN_5e02e6b0
        inc     eax
        push    eax
        call    FUN_5e02b6e4
        pop     ecx
        test    eax, eax
        pop     ecx
        jz      L_993
        push    esi
        push    eax
        call    FUN_5e02e220
        pop     ecx
        pop     ecx
        pop     esi
        ret
    L_993:
        xor     eax, eax
        pop     esi
        ret
    }
}
