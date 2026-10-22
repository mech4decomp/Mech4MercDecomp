__declspec(naked) void __stdcall func_005982D0(void)
{
    __asm {
        mov eax, ecx
        mov ecx, [esp+4]
        mov edx, [ecx]
        mov [eax], edx
        ret 4
    }
}
