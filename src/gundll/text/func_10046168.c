/*
 * FUN_10046168 (43 B) — __cdecl.
 * strnlen-like: scan param_1 for NUL up to param_2 chars; return offset
 * if NUL found, else param_2.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_10046168(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        test    edx, edx
        push    esi
        lea     ecx, [edx - 0x1]
        jz      L85
    L78:
        cmp     byte ptr [eax], 0x0
        jz      L85
        inc     eax
        mov     esi, ecx
        dec     ecx
        test    esi, esi
        jnz     L78
    L85:
        cmp     byte ptr [eax], 0x0
        pop     esi
        jnz     L90
        sub     eax, dword ptr [esp + 0x4]
        ret
    L90:
        mov     eax, edx
        ret
    }
}
