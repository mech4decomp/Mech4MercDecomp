/*
 * func_0050D9D0 - Character conversion
 * Converts a value 0-63 to a base64-like character
 * 0-25 -> 'A'-'Z', 26-51 -> 'a'-'z', 52-61 -> '0'-'9', 62 -> '+', 63 -> '/'
 */
__declspec(naked) void func_0050D9D0()
{
    __asm {
        mov     al, [esp + 4]
        cmp     al, 0x1a
        jae     c2
        add     eax, 0x41
        ret
    c2:
        cmp     al, 0x34
        jae     c3
        add     eax, 0x47
        ret
    c3:
        cmp     al, 0x3e
        jae     c4
        sub     eax, 4
        ret
    c4:
        jne     c5
        mov     al, 0x2b
        ret
    c5:
        cmp     al, 0x3f
        setne   al
        dec     eax
        and     eax, 0x2f
        ret
    }
}
