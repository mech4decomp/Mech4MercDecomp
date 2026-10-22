/*
 * FUN_0047a680 (43 B) — MLR PMesh constructor variant (__thiscall, RET 0x4).
 * Calls FUN_0047fec0 with arg, zeroes buffer fields, sets vtable and a flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0047fec0(void);

__declspec(naked) void FUN_0047a680(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_0047fec0
        xor     eax, eax
        mov     dword ptr [esi+0x58], eax
        mov     dword ptr [esi+0x5c], eax
        mov     dword ptr [esi+0x60], eax
        mov     dword ptr [esi+0x64], eax
        mov     dword ptr [esi], 0x76f4fc
        mov     byte ptr [esi+0x12], 0x1
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
