/*
 * FUN_00692230 (37 B) - __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * Stores param_1 into *this; if param_2 == 1 ORs in bit 0;
 * if param_3 == 1 ORs in bit 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00692230(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        mov     bl, byte ptr [esp + 0xc]
        mov     edx, 1
        cmp     bl, dl
        mov     dword ptr [ecx], eax
        pop     ebx
        jnz     L_skip1
        or      eax, edx
        mov     dword ptr [ecx], eax
L_skip1:
        cmp     byte ptr [esp + 0xc], dl
        jnz     L_skip2
        or      dword ptr [ecx], 2
L_skip2:
        ret     0xc
    }
}
