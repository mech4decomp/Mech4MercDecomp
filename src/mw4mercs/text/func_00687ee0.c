/*
 * FUN_00687ee0 (62 B) — cdecl helper.
 *
 * Computes (param_2 - param_1)/12; if > 0, copies that many dwords from
 * param_1 to param_3 via rep movsd and returns param_3 + count*12/4.
 * Otherwise returns param_3.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687ee0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        sub     ecx, esi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_ret
        mov     eax, dword ptr [esp + 0x10]
        lea     edx, [edx + edx*0x2]
        shl     edx, 0x2
        push    edi
        mov     ecx, edx
        shr     ecx, 0x2
        mov     edi, eax
        rep     movsd
        pop     edi
        add     eax, edx
        pop     esi
        ret
    L_ret:
        mov     eax, dword ptr [esp + 0x10]
        pop     esi
        ret
    }
}
