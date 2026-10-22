/*
 * FUN_0061E650 (24 B) — calls FUN_0061e670(param_1, param_2) then returns
 * *(param_1 + 0x3c). __cdecl, 2 params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0061e670(void);

__declspec(naked) void FUN_0061e650(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    eax
        push    esi
        call    FUN_0061e670
        mov     eax, dword ptr [esi + 0x3c]
        add     esp, 0x8
        pop     esi
        ret
    }
}
