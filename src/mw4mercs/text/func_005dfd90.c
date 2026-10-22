/*
 * func_005dfd90 - Setter for field at offset 0x44c (__thiscall, ECX = this)
 * this->0x44c = arg0 (stack arg, ret 4)
 */
__declspec(naked) void func_005dfd90(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x44c], eax
        ret     4
    }
}
