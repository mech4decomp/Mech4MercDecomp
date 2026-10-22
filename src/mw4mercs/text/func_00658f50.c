/*
 * FUN_00658f50 (43 B) — __cdecl copy helper.
 *
 * Copies (param_2 - param_1)/8 dwords from param_1 to param_3 via rep movsd,
 * returns param_3 + count*2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00658f50(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     edx, esi
        sar     edx, 0x3
        test    edx, edx
        jle     L_done
        mov     ecx, edx
        push    edi
        and     ecx, 0x1fffffff
        mov     edi, eax
        shl     ecx, 0x1
        rep movsd
        lea     eax, [eax + edx*0x8]
        pop     edi
    L_done:
        pop     esi
        ret
    }
}
