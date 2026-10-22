/*
 * FUN_00472bc0 (39 B) — MLR object constructor variant (__thiscall, RET 0x4).
 * Calls FUN_004766c0, sets vtable 0x76f2d4 and members.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_004766c0(void);

__declspec(naked) void FUN_00472bc0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004766c0
        xor     eax, eax
        mov     dword ptr [esi + 0x70], eax
        lea     ecx, [esi + 0x68]
        mov     dword ptr [esi + 0x74], eax
        mov     dword ptr [esi], 0x76f2d4
        mov     dword ptr [esi + 0x78], ecx
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
