/* FUN_0064de10 - ABL object accessor: return *this (3 B, __thiscall) */

__declspec(naked) void FUN_0064de10(void)
{
    __asm {
        mov eax, dword ptr [ecx]
        ret
    }
}
