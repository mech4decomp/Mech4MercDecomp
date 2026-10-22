/*
 * FUN_00689a10 (46 B) — __thiscall constructor (RET 8, two stack params).
 *
 * Saves this (ECX) in ESI, calls FUN_006b0710(param_1, param_2) on this,
 * then initializes the vtable pointer and two fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006b0710(void);

__declspec(naked) void __stdcall FUN_00689a10(void)
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
        mov     dword ptr [esi], 0x798d50
        mov     dword ptr [esi + 0x20], 0
        mov     dword ptr [esi + 0x8], 4
        mov     eax, esi
        pop     esi
        ret     8
    }
}
