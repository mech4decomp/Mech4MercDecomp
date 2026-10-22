/*
 * FUN_0061ae30 (12 B) — __thiscall: calls FUN_0061ae40, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_0061ae40(void);

__declspec(naked) void FUN_0061ae30(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0061ae40
        mov     eax, esi
        pop     esi
        ret
    }
}
