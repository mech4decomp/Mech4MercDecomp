// FUN_006F7840 (4 bytes)
// mov al, [ecx+0x54]; ret
// __thiscall byte getter: returns this->field_54 (byte).
__declspec(naked) void func_006f7840(void)
{
    __asm {
        mov al, [ecx+0x54]
        ret
    }
}
