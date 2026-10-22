// FUN_006F8430 (4 bytes)
// mov eax, [ecx+0x14]; ret
// __thiscall getter: returns this->field_14.
__declspec(naked) void func_006f8430(void)
{
    __asm {
        mov eax, [ecx+0x14]
        ret
    }
}
