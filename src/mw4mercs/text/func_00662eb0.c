/*
 * FUN_00662eb0 (37 B) — __thiscall flag setter.
 *
 * *this = param_1; if (param_2 == 1) *this |= 1;
 * if (param_3 == 1) *this |= 2.
 *
 * __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_00662eb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]    ; param_1
        push    ebx
        mov     bl, byte ptr [esp + 0xC]    ; param_2 (after push)
        mov     edx, 1
        cmp     bl, dl
        mov     dword ptr [ecx], eax
        pop     ebx
        jnz     L_skip1
        or      eax, edx
        mov     dword ptr [ecx], eax
L_skip1:
        cmp     byte ptr [esp + 0xC], dl    ; param_3 (after pop)
        jnz     L_skip2
        or      dword ptr [ecx], 2
L_skip2:
        ret     0xC
    }
}
