__declspec(naked) void func_00599640(void)
{
    __asm {
        mov eax, ecx
        mov ecx, [esp+4]
        mov edx, [ecx]
        mov cl, [ecx+4]
        mov [eax], edx
        mov [eax+4], cl
        ret 4
    }
}
