/*
 * FUN_004e0550 (55 B) — __thiscall constructor. Calls FUN_00415180 with the
 * incoming arg, zeroes several dword fields, installs vtable 0x773adc,
 * sets field 0x10 to -1, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);

__declspec(naked) void FUN_004e0550(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     eax, eax
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x18], eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0xc], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x773adc
        mov     dword ptr [esi + 0x10], 0xffffffff
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
