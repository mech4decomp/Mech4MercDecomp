/*
 * FUN_100337b0 (93 B) - __stdcall, RET 0x14. Loop over a buffer of ushorts,
 * calling FUN_10033230 per entry while the value <= 999; accumulates a 16-bit
 * count, then advances param_1 and decrements param_2 by that count.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10033230(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_100337b0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi]
        xor     esi, esi
        test    eax, eax
        jbe     L_f9
        mov     ebx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x20]
        xor     ecx, ecx
        __emit 0x8D   /* __emit: MSVC6 encodes lea ebx,[ebx] as 8D 1B; ref uses disp32 alignment-NOP form 8D 9B 00 00 00 00 */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_d0:
        mov     edx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edx]
        add     eax, ecx
        cmp     word ptr [eax], 0x3e7
        ja      L_fd
        mov     ecx, dword ptr [esp + 0x1c]
        push    ebx
        push    ebp
        push    ecx
        push    eax
        call    FUN_10033230
        xor     ecx, ecx
        add     esi, eax
        mov     eax, dword ptr [edi]
        mov     cx, si
        cmp     ecx, eax
        jc      L_d0
L_f9:
        mov     edx, dword ptr [esp + 0x14]
L_fd:
        xor     eax, eax
        mov     ax, si
        add     dword ptr [edx], eax
        sub     dword ptr [edi], eax
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
