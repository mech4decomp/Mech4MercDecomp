// FUN_006F7700 (4 bytes)
// mov eax, [ecx+0x40]; ret
// __thiscall getter: returns this->field_40.
__declspec(naked) void func_006f7700(void)
{
    __asm {
        mov eax, [ecx+0x40]
        ret
    }
}
