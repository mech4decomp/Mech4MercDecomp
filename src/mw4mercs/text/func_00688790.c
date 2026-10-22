/*
 * FUN_00688790 (65 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Constructor: calls FUN_006b0710, installs vtable 0x798d08, zeroes
 * several fields, sets field +8 = 5.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006b0710(void);

__declspec(naked) void * __fastcall FUN_00688790(void)
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
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x798d08
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x8], 0x5
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
