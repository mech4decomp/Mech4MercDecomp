/*
 * FUN_00694950 (19 B) - HUD element constructor wrapper (__thiscall, RET 0x4).
 * Calls FUN_00694680 and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00694680(void);

__declspec(naked) void FUN_00694950(void *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00694680
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
