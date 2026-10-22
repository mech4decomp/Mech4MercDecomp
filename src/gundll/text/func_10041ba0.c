/*
 * FUN_10041ba0 (27 B) - __cdecl. Copies 3 dwords from param_2 to
 * param_1 (overlapping forward copy).
 *
 * __cdecl.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_10041ba0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        push    esi
        push    3
        sub     ecx, eax
        pop     edx
L_loop:
        mov     esi, dword ptr [eax]
        mov     dword ptr [ecx + eax*1], esi
        add     eax, 4
        dec     edx
        jnz     L_loop
        pop     esi
        ret
    }
}
