/*
 * FUN_004618d0 (39 B) — MLR_I_C_DeT_PMesh constructor (__thiscall, RET 0x4).
 * Calls FUN_004651c0 base ctor, sets vtable 0x76ee3c, zeroes +0xa0/+0xa4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004651c0(void);

__declspec(naked) void FUN_004618d0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004651c0
        xor     eax, eax
        mov     dword ptr [esi+0xa0], eax
        mov     dword ptr [esi+0xa4], eax
        mov     dword ptr [esi], 0x76ee3c
        mov     eax, esi
        pop     esi
        ret     4
    }
}
