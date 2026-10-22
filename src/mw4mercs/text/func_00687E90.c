/*
 * FUN_00687E90 (67 B) — __cdecl (RET 0). Computes count = (arg1-arg0)/12
 * (signed div by 12 via magic 0x2aaaaaab); if > 0, copies count 12-byte
 * elements from arg0 to arg2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687E90(void)
{
    __asm {
        mov     edx, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 4]
        sub     edx, ecx
        mov     eax, 0x2aaaaaab
        imul    edx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_687ece
        mov     eax, dword ptr [esp + 0xc]
        push    esi
L_687eb3:
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 4]
        mov     dword ptr [eax + 4], esi
        mov     esi, dword ptr [ecx + 8]
        mov     dword ptr [eax + 8], esi
        add     ecx, 0xc
        add     eax, 0xc
        dec     edx
        jne     L_687eb3
        pop     esi
        ret
L_687ece:
        mov     eax, dword ptr [esp + 0xc]
        ret
    }
}
