/*
 * FUN_0068d5d0 (48 B) - Copies 6 dwords (0x18 bytes) per element from
 * param_1 to param_3 while advancing, until param_1 reaches param_2.
 * If param_3 is NULL, only advances (no copy).
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0068d5d0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc]
        cmp     edx, ebx
        jz      L_done
        push    esi
        push    edi
L_loop:
        test    eax, eax
        jz      L_skip
        mov     ecx, 0x6
        mov     esi, edx
        mov     edi, eax
        rep movsd
L_skip:
        add     edx, 0x18
        add     eax, 0x18
        cmp     edx, ebx
        jnz     L_loop
        pop     edi
        pop     esi
L_done:
        pop     ebx
        ret
    }
}
