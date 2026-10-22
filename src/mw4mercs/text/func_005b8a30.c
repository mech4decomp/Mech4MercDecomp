/*
 * FUN_005b8a30 (49 B) — RET (three stack params).
 *
 * Copies 12-byte elements from param_1 to param_3 while param_1 != param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b8a30(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        cmp     ecx, edx
        mov     eax, dword ptr [esp + 0xc]
        jz      L_8a60
        push    esi
    L_8a41:
        test    eax, eax
        jz      L_8a55
        mov     esi, dword ptr [ecx]
        mov     dword ptr [eax], esi
        mov     esi, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], esi
        mov     esi, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], esi
    L_8a55:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, edx
        jnz     L_8a41
        pop     esi
    L_8a60:
        ret
    }
}
