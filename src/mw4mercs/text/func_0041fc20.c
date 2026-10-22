/*
 * FUN_0041fc20 (35 B) — object constructor (__thiscall, RET 0x8, 2 params).
 * Stores param1 at +0x4, param2 at +0xc, calls FUN_00415d40(param2), sets
 * vtable 0x76d960 at +0x0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415d40(void);

__declspec(naked) void FUN_0041fc20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x4], eax
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     dword ptr [esi + 0xc], eax
        call    FUN_00415d40
        mov     dword ptr [esi], 0x76d960
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
