/*
 * FUN_5e003000 (41 B) — __stdcall, RET 8 (2 stack params). If the source
 * dword is 0x2c, copies 0xb dwords into param_1+8; else returns E_INVALIDARG.
 *
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_5e003000(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        cmp     dword ptr [esi], 0x2c
        jnz     L_3020
        mov     eax, dword ptr [esp + 0x8]
        push    edi
        mov     ecx, 0xb
        lea     edi, [eax + 0x8]
        xor     eax, eax
        rep movsd
        pop     edi
        pop     esi
        ret     0x8
L_3020:
        mov     eax, 0x80070057
        pop     esi
        ret     0x8
    }
}
