/* FUN_0042a270 - MLR setter (__thiscall, RET 0x14, 5 params) */
__declspec(naked) void func_0042a270(void)
{
    __asm {
        mov eax, dword ptr [esp + 0x4]
        mov edx, dword ptr [esp + 0x8]
        mov dword ptr [ecx + 0xa0], eax
        mov eax, dword ptr [esp + 0xc]
        mov dword ptr [ecx + 0x10], edx
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x14], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [ecx + 0xa4], edx
        mov dword ptr [ecx + 0xa8], eax
        ret 0x14
    }
}
