/* FUN_005fb9b0 - __thiscall: if (this->field_2fc) call virtual(offset 0xf0)(param_1) */
__declspec(naked) void func_005fb9b0(void)
{
    __asm {
        mov ecx, dword ptr [ecx + 0x2fc]
        test ecx, ecx
        jz L_5fb9c7
        mov edx, dword ptr [esp + 0x4]
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0xf0]
L_5fb9c7:
        ret 0x4
    }
}
