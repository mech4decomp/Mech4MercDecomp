/*
 * FUN_1000440c (43 B, __cdecl) — bounded string length: scan up to param_2
 * bytes for a NUL; return the offset of the NUL (or param_2 if none found).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int FUN_1000440c(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     eax, dword ptr [esp + 4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 1]
        jz      L_4429
L_441c:
        cmp     byte ptr [eax], 0
        jz      L_4429
        inc     eax
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jnz     L_441c
L_4429:
        cmp     byte ptr [eax], 0
        pop     esi
        jnz     L_4434
        sub     eax, dword ptr [esp + 4]
        ret
L_4434:
        mov     eax, edx
        ret
    }
}
