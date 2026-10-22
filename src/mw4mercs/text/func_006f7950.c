// FUN_006F7950 (4 bytes)
// mov eax, [ecx+0x08]; ret
// __thiscall getter: returns this->field_08.
__declspec(naked) void func_006f7950(void)
{
    __asm {
        mov eax, [ecx+0x08]
        ret
    }
}
