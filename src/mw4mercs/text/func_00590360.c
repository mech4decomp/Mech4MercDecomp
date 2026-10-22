__declspec(naked) int func_00590360(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x5b8]
        xor     eax, eax
        cmp     edx, 2
        setz    al
        ret
    }
}
