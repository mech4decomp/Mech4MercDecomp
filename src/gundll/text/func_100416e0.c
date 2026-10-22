/*
 * FUN_100416E0 (117 B) - __stdcall, RET 0x10.  Unsigned 64-bit modulo
 * helper (4 args: [esp+8]=lo dividend, [esp+0xc]=hi dividend,
 * [esp+0x10]=lo divisor, [esp+0x14]=hi divisor).  Returns remainder in
 * edx:eax.  Fast path when hi divisor == 0; otherwise shift-normalize.
 * (Transcribed from reference bytes; gaptext.  Real entry 0x100416e0,
 * preceded by 8 B of int3 padding at 0x100416d8.)
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_100416E0(void)
{
    __asm {
        push    ebx
        mov     eax, dword ptr [esp + 0x14]
        or      eax, eax
        jne     L_01
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0xc]
        xor     edx, edx
        div     ecx
        mov     eax, dword ptr [esp + 8]
        div     ecx
        mov     eax, edx
        xor     edx, edx
        jmp     L_51
    L_01:
        mov     ecx, eax
        mov     ebx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 8]
    L_0f:
        shr     ecx, 1
        rcr     ebx, 1
        shr     edx, 1
        rcr     eax, 1
        or      ecx, ecx
        jne     L_0f
        div     ebx
        mov     ecx, eax
        mul     dword ptr [esp + 0x14]
        xchg    ecx, eax
        mul     dword ptr [esp + 0x10]
        add     edx, ecx
        jb      L_3a
        cmp     edx, dword ptr [esp + 0xc]
        ja      L_3a
        jb      L_42
        cmp     eax, dword ptr [esp + 8]
        jbe     L_42
    L_3a:
        sub     eax, dword ptr [esp + 0x10]
        sbb     edx, dword ptr [esp + 0x14]
    L_42:
        sub     eax, dword ptr [esp + 8]
        sbb     edx, dword ptr [esp + 0xc]
        neg     edx
        neg     eax
        sbb     edx, 0
    L_51:
        pop     ebx
        ret     0x10
    }
}
