/*
 * FUN_005cbb90 (35 B) — memcpy-style forward copy of dwords.
 *
 * __cdecl, RET 0 (3 params).
 *   param_1 (ESP+0x8) = source
 *   param_2 (ESP+0xc) = destination
 *   (ESP+0x4)         = source end
 *
 * Count = (param_2 - param_1) >> 2. Copies count dwords via REP MOVSD,
 * returning dest + count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void *__stdcall FUN_005cbb90(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        sar     edx, 0x2
        test    edx, edx
        jle     l_b1
        push    edi
        mov     edi, eax
        mov     ecx, edx
        rep movsd
        lea     eax, [eax + edx*0x4]
        pop     edi
l_b1:
        pop     esi
        ret
    }
}
