__declspec(naked) void func_004d8580(void)
{
    __asm {
        mov     al, [esp+4]
        cmp     al, 0x1A
        jae     l_case2
        add     eax, 0x41
        ret
l_case2:
        cmp     al, 0x34
        jae     l_case3
        add     eax, 0x47
        ret
l_case3:
        cmp     al, 0x3E
        jae     l_case4
        sub     eax, 4
        ret
l_case4:
        jne     l_case5
        mov     al, 0x2B
        ret
l_case5:
        cmp     al, 0x3F
        setne   al
        dec     eax
        and     eax, 0x2F
        ret
    }
}
