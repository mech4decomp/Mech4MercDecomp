// FUN_006F75D0 (10 bytes)
// mov al, [esp+4]; mov [ecx+0x38], al; ret 4
// __thiscall byte setter: sets this->field_38 = (byte)param.
__declspec(naked) void func_006f75d0(void)
{
    __asm {
        mov al, [esp+4]
        mov [ecx+0x38], al
        ret 4
    }
}
