/*
 * FUN_0064e2a0 (36 B) — Virtual dispatch helper.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 * If (this->field_4 & 0xfffffffc) != 0, calls virtual method at
 * vtable+0x24 on the object at (this->field_4 & 0xfffffffc),
 * passing (this, param_1, param_2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0064e2a0(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        test    eax, 0xfffffffc
        jz      L_done
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        push    esi
        mov     esi, dword ptr [esp + 0xC]
        and     eax, 0xfffffffc
        mov     edx, dword ptr [eax]
        push    esi
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x24]
        pop     esi
L_done:
        ret     8
    }
}
