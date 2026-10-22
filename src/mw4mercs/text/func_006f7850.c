// FUN_006F7850 (10 bytes)
// mov al, [esp+4]; mov [ecx+0x54], al; ret 4
// __thiscall byte setter: sets this->field_54 = (byte)param.
__declspec(naked) void func_006f7850(void)
{
    __asm {
        mov al, [esp+4]
        mov [ecx+0x54], al
        ret 4
    }
}
