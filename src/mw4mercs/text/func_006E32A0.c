/*
 * FUN_006E32A0 (21 B) — __thiscall: passes &arg and 1 to FUN_006E2B20,
 * returns this.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_006E2B20(void);

__declspec(naked) void FUN_006E32A0(void)
{
    __asm {
        push    esi
        lea     eax, [esp + 8]
        push    eax
        mov     esi, ecx
        push    1
        call    FUN_006E2B20
        mov     eax, esi
        pop     esi
        ret     4
    }
}
