/*
 * FUN_5e03452c (43 B) — bounded string-length helper. Returns the length of
 * the NUL-terminated string at [esp+4] but capped at the count in [esp+8]
 * (returns the full count if the string is longer than the cap).
 *
 * __cdecl, RET (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_5e03452c(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 1]
        jz      L_549
    L_53c:
        cmp     byte ptr [eax], 0
        jz      L_549
        inc     eax
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jnz     L_53c
    L_549:
        cmp     byte ptr [eax], 0
        pop     esi
        jnz     L_554
        sub     eax, dword ptr [esp + 4]
        ret
    L_554:
        mov     eax, edx
        ret
    }
}
