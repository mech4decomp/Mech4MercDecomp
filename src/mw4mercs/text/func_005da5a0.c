/*
 * FUN_005da5a0 (41 B) — copy (param_2-param_1)>>2 dwords from param_1 to
 * param_3 using rep movsd; returns param_3 + count.
 *
 * __cdecl, 3 stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_005da5a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     eax, esi
        sar     eax, 0x2
        test    eax, eax
        jle     L5C3
        mov     edx, dword ptr [esp + 0x10]
        push    edi
        mov     ecx, eax
        mov     edi, edx
        rep movsd
        pop     edi
        lea     eax, [edx + eax*0x4]
        pop     esi
        ret
L5C3:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
