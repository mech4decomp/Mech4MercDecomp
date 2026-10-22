/*
 * FUN_004D1EE0 (35 B) — Compare two short[2] arrays (__cdecl, RET 0).
 *
 * Returns 1 if both shorts match, 0 otherwise.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __cdecl FUN_004d1ee0(short *a, short *b)
{
    __asm {
        mov     eax, [esp + 4]
        mov     dx, word ptr [eax]
        mov     ecx, [esp + 8]
        cmp     dx, word ptr [ecx]
        jnz     l_diff
        mov     ax, word ptr [eax + 2]
        cmp     ax, word ptr [ecx + 2]
        jnz     l_diff
        mov     eax, 1
        ret
    l_diff:
        xor     eax, eax
        ret
    }
}
