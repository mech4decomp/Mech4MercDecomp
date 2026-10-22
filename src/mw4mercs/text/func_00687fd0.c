/*
 * FUN_00687fd0 (46 B) — __thiscall.
 *
 * Calls FUN_006b0710(arg1, arg2), sets vtable 0x798c04, zeroes
 * this->[0x20], sets this->[0x8] = 8, returns this. RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_00687fd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_006b0710
        mov     dword ptr [esi], 0x798c04
        mov     dword ptr [esi + 0x20], 0x0
        mov     dword ptr [esi + 0x8], 0x8
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
