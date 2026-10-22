__declspec(naked) void __stdcall func_005982E0(void)
{
    __asm {
        mov ecx, [ecx]
        mov eax, [esp+4]
        mov [eax], ecx
        ret 4
    }
}
