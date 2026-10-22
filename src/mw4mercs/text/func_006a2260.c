/*
 * FUN_006a2260 (25 B) — __thiscall flag setter: if (param == 1) set bit0 of
 * [this], else clear bit0. RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a2260(void)
{
    __asm {
        cmp     byte ptr [esp + 0x4], 0x1
        mov     eax, dword ptr [ecx]
        jnz     L_clear
        or      eax, 0x1
        mov     dword ptr [ecx], eax
        ret     0x4
L_clear:
        and     eax, 0xfffffffe
        mov     dword ptr [ecx], eax
        ret     0x4
    }
}
