// FUN_006F7940 (10 bytes)
// mov eax, [esp+4]; mov [ecx+0x08], eax; ret 4
// __thiscall dword setter: sets this->field_08 = param.
__declspec(naked) void func_006f7940(void)
{
    __asm {
        mov eax, [esp+4]
        mov [ecx+0x08], eax
        ret 4
    }
}
