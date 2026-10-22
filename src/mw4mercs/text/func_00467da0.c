/*
 * FUN_00467da0 (51 B) — MLR PMesh constructor (__thiscall, RET 4).
 * Calls FUN_0046bdf0, sets vtable 0x76f024, zeroes +0x90/+0x94, links +0x98.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0046bdf0(void);

__declspec(naked) void FUN_00467da0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0046bdf0
        xor     eax, eax
        mov     dword ptr [esi + 0x90], eax
        lea     ecx, [esi + 0x88]
        mov     dword ptr [esi + 0x94], eax
        mov     dword ptr [esi], 0x76f024
        mov     dword ptr [esi + 0x98], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
