__declspec(naked) int func_0059CF90(void)
{
    __asm {
        mov eax, [ecx+0x28]
        test eax, eax
        jnz skip_ret
        ret
skip_ret:
        mov ecx, [ecx+0x6C]
        mov eax, [ecx+eax*4-4]
        ret
    }
}
