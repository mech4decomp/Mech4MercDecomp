/*
 * FUN_00688430 (50 B) — __thiscall constructor. Calls FUN_006b0710()
 * (this in ecx, args param_1/param_2), sets vtable 0x798c84, zeroes
 * several fields, sets [this+0x8] = 7, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006b0710(void);

__declspec(naked) void FUN_00688430(void)
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
        xor     eax, eax
        mov     dword ptr [esi], 0x798c84
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x8], 0x7
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
