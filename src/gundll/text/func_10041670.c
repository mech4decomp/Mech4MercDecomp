/*
 * FUN_10041670 (104 B) - __stdcall, RET 0x10.  Unsigned 64-bit division
 * helper (4 args: [esp+0xc]=lo dividend, [esp+0x10]=hi dividend,
 * [esp+0x14]=lo divisor, [esp+0x18]=hi divisor).  Returns quotient in
 * edx:eax.  Fast path when hi divisor == 0; otherwise shift-normalize.
 * (Transcribed from reference bytes; gaptext.  Real entry 0x10041670,
 * preceded by 14 B of int3 padding at 0x10041662.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_10041670(void)
{
    __asm {
        push    ebx
        push    esi
        mov     eax, dword ptr [esp + 0x18]
        or      eax, eax
        jne     L_92
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esp + 0x10]
        xor     edx, edx
        div     ecx
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0xc]
        div     ecx
        mov     edx, ebx
        jmp     L_d3
    L_92:
        mov     ecx, eax
        mov     ebx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
    L_a0:
        shr     ecx, 1
        rcr     ebx, 1
        shr     edx, 1
        rcr     eax, 1
        or      ecx, ecx
        jne     L_a0
        div     ebx
        mov     esi, eax
        mul     dword ptr [esp + 0x18]
        mov     ecx, eax
        mov     eax, dword ptr [esp + 0x14]
        mul     esi
        add     edx, ecx
        jb      L_ce
        cmp     edx, dword ptr [esp + 0x10]
        ja      L_ce
        jb      L_cf
        cmp     eax, dword ptr [esp + 0xc]
        jbe     L_cf
    L_ce:
        dec     esi
    L_cf:
        xor     edx, edx
        mov     eax, esi
    L_d3:
        pop     esi
        pop     ebx
        ret     0x10
    }
}
