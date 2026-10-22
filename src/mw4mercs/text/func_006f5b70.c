// FUN_006F5B70 (4 bytes)
// mov eax, [ecx+0x28]; ret
// __thiscall getter: returns this->field_28.
__declspec(naked) void func_006f5b70(void)
{
    __asm {
        mov eax, [ecx+0x28]
        ret
    }
}
