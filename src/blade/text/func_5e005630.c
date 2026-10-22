/*
 * FUN_5e005630 (115 B) — switch over param_2 (1..3). Copies 0x10 dwords
 * from param_1+offset into param_3 (out param). Returns 0x80070057 on
 * bad args.
 *
 * __stdcall, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e005630(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jnz     L1
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     0xc
    L1:
        mov     eax, dword ptr [esp + 0x10]
        dec     eax
        jz      L_case1
        dec     eax
        jz      L_case2
        dec     eax
        jz      L_case3
        pop     edi
        mov     eax, 0x80070057
        pop     esi
        ret     0xc
    L_case3:
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, 0x10
        lea     esi, [eax + 0x440c]
        xor     eax, eax
        rep movsd
        pop     edi
        pop     esi
        ret     0xc
    L_case2:
        mov     ecx, dword ptr [esp + 0xc]
        xor     eax, eax
        lea     esi, [ecx + 0x43cc]
        mov     ecx, 0x10
        rep movsd
        pop     edi
        pop     esi
        ret     0xc
    L_case1:
        mov     edx, dword ptr [esp + 0xc]
        mov     ecx, 0x10
        xor     eax, eax
        lea     esi, [edx + 0x438c]
        rep movsd
        pop     edi
        pop     esi
        ret     0xc
    }
}
