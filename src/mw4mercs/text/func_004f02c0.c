__declspec(naked) void func_004f02c0(void)
{
    __asm {
        mov     eax, [esp+4]
        mov     edx, [esp+8]
        mov     [ecx+0x2C8], eax
        mov     eax, [esp+0xC]
        mov     [ecx+0x2CC], edx
        mov     edx, [esp+0x10]
        mov     [ecx+0x2D0], eax
        mov     [ecx+0x2D4], edx
        ret     0x10
    }
}
