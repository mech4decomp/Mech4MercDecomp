__declspec(naked) void func_005905F0(void)
{
    __asm {
        mov al, [ecx+0x510]
        test al, al
        sete al
        mov [ecx+0x510], al
        ret
    }
}
