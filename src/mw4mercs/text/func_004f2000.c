__declspec(naked) void func_004f2000(void)
{
    __asm {
        mov     eax, [esp+4]
        mov     dx, [eax]
        cmp     dx, [ecx]
        jne     l_diff
        mov     dx, [eax+2]
        cmp     dx, [ecx+2]
        jne     l_diff
        mov     eax, [eax+4]
        cmp     eax, [ecx+4]
        jne     l_diff
        mov     eax, 1
        ret     4
l_diff:
        xor     eax, eax
        ret     4
    }
}
