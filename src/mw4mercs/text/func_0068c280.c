/*
 * FUN_0068c280 (37 B) — __cdecl element copy loop.
 *
 * If param_1 != param_2, copy dwords from param_1 to param_3
 * (skipping writes when param_3 == NULL) until param_1 == param_2.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0068c280(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xC]
        jz      L_done
        push    esi
L_loop:
        test    eax, eax
        jz      L_skip
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
L_skip:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, edx
        jnz     L_loop
        pop     esi
L_done:
        ret
    }
}
