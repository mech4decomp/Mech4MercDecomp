__declspec(naked) int __stdcall FUN_004c82a0(int param_1)
{
    __asm {
        mov eax, [esp + 4]
        mov eax, [eax + 0x10]
        ret 4
    }
}
