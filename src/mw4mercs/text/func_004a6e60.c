/*
 * FUN_004a6e60 (60 B) — MLR: object constructor (__thiscall). Sets vtable
 * 0x7703d0, zeroes 0x2b4/0x2b8/0x2bc, sizes 0x26c/0x270 to 0x80, and
 * calls FUN_004a9380(0x527).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a9380(void);

__declspec(naked) void FUN_004a6e60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x527
        call    FUN_004a9380
        xor     eax, eax
        mov     dword ptr [esi + 0x2bc], eax
        mov     ecx, 0x80
        mov     dword ptr [esi + 0x2b4], eax
        mov     dword ptr [esi + 0x2b8], eax
        mov     dword ptr [esi], 0x7703d0
        mov     dword ptr [esi + 0x270], ecx
        mov     dword ptr [esi + 0x26c], ecx
        mov     eax, esi
        pop     esi
        ret
    }
}
