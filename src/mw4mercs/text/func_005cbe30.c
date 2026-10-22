/*
 * FUN_005cbe30 (25 B) — __thiscall (ECX = this), RET 4 (one stack param).
 * Sets/clears bit 0 of *this based on whether [esp+4] == 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbe30(void)
{
    __asm {
        cmp     byte ptr [esp + 0x4], 0x1
        mov     eax, dword ptr [ecx]
        jnz     L_41
        or      eax, 0x1
        mov     dword ptr [ecx], eax
        ret     0x4
L_41:
        and     eax, 0xfffffffe
        mov     dword ptr [ecx], eax
        ret     0x4
    }
}
