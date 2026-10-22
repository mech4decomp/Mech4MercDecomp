// FUN_006F7550 (10 bytes)
// mov al, [esp+4]; mov [ecx+0x30], al; ret 4
// __thiscall byte setter: sets this->field_30 = (byte)param.
__declspec(naked) void func_006f7550(void)
{
    __asm {
        mov al, [esp+4]
        mov [ecx+0x30], al
        ret 4
    }
}
