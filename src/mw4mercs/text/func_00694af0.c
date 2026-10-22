/*
 * FUN_00694af0 (25 B) — __thiscall HUD element flag setter. If the byte
 * param at [esp+4] == 1, sets bit 0 of *this; otherwise clears it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00694af0(void)
{
    __asm {
        cmp     byte ptr [esp+4], 1
        mov     eax, dword ptr [ecx]
        jnz     clear
        or      eax, 1
        mov     dword ptr [ecx], eax
        ret     4
clear:
        and     eax, 0fffffffeh
        mov     dword ptr [ecx], eax
        ret     4
    }
}
