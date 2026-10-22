__declspec(naked) void __stdcall FUN_004e68e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dword ptr [ecx + 0x4c], eax
        ret     4
    }
}
