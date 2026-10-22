// FUN_006F7960 (8 bytes)
// mov dword [ecx+0x08], 0; ret
// __thiscall setter: sets this->field_08 = 0.
__declspec(naked) void func_006f7960(void)
{
    __asm {
        mov dword ptr [ecx+0x08], 0
        ret
    }
}
