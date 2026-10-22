__declspec(naked) void func_00593FA0(void)
{
    __asm {
        mov eax, [esp+4]
        mov edx, [esp+8]
        mov [ecx+0x14], eax
        mov [ecx+0x1c], edx
        ret 8
    }
}
