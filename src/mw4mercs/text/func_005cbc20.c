/*
 * FUN_005cbc20 (37 B) — Store a value into *this and set flag bits
 * based on two byte params.
 *
 * __thiscall (ECX = this), RET 0xC (3 params).
 *   param_1 (ESP+0x4) = value
 *   param_2 (ESP+0x8) = byte flag -> sets bit 0
 *   param_3 (ESP+0xc) = byte flag -> sets bit 1
 *
 *   *this = param_1;
 *   if (param_2 == 1) *this |= 1;
 *   if (param_3 == 1) *this |= 2;
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005cbc20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        mov     edx, 0x1
        cmp     bl, dl
        mov     dword ptr [ecx], eax
        pop     ebx
        jnz     l_39
        or      eax, edx
        mov     dword ptr [ecx], eax
l_39:
        cmp     byte ptr [esp + 0xc], dl
        jnz     l_42
        or      dword ptr [ecx], 0x2
l_42:
        ret     0xc
    }
}
