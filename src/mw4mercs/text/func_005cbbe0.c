/*
 * FUN_005cbbe0 (25 B) — Set/clear bit 0 of *this based on a byte flag.
 *
 * __thiscall (ECX = this), RET 4 (one byte param at ESP+0x4).
 *   if (param == 1) *this |= 1; else *this &= ~1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbbe0(void)
{
    __asm {
        cmp     byte ptr [esp + 0x4], 0x1
        mov     eax, dword ptr [ecx]
        jnz     l_f1
        or      eax, 0x1
        mov     dword ptr [ecx], eax
        ret     0x4
l_f1:
        and     eax, 0xfffffffe
        mov     dword ptr [ecx], eax
        ret     0x4
    }
}
