/*
 * FUN_00413DAE (9 B) — alignment pad (2 nops) + getter: returns
 * dword at [[ecx+0x1c]+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00413DAE(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [eax + 0x18]
        ret
    }
}
