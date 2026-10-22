/*
 * FUN_100327a0 (34 B) — __thiscall, RET 0xC.
 * Virtual dispatch: calls (*(this->field_0xC)->vtable[0x60/4])
 * (this->field_0xC, param_1->field_0x18, param_2, param_3, 0).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_100327a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     edx, dword ptr [eax + 0x18]
        mov     eax, dword ptr [ecx + 0xc]
        mov     ecx, dword ptr [eax]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    0x0
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x60]
        pop     esi
        ret     0xC
    }
}
