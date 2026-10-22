__declspec(naked) void __stdcall func_00598510(void)
{
    __asm {
        mov eax, [ecx]
        mov ecx, [eax+8]
        mov eax, [esp+4]
        mov [eax], ecx
        ret 4
    }
}
