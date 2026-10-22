/*
 * FUN_0068d590 (63 B) — __cdecl helper.
 *
 * Computes (param_2 - param_1) / 0x18; if > 0, copies that many 0x18-byte
 * elements from param_1 to param_3 and returns param_3 + count*6; else
 * returns param_3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068d590(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_skip
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [edx + edx*2]
        shl     edx, 0x3
        push    edi
        mov     ecx, edx
        shr     ecx, 0x2
        mov     edi, eax
        rep movsd
        pop     edi
        add     eax, edx
        pop     esi
        ret
    L_skip:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
