__declspec(naked) void func_00581370(void)
{
    __asm {
        mov eax, [esp+4]
        test eax, eax
        je skip
        mov ecx, [esp+8]
        mov edx, [ecx]
        mov [eax], edx
skip:
        ret
    }
}
