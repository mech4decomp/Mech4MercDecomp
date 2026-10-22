/*
 * func_0051EC20 - 104 bytes
 * Counter/state machine with increment/decrement operations
 */
__declspec(naked) void func_0051EC20()
{
    
__asm {
        mov     edx, [ecx + 0x40D98]
        test    edx, edx
        jle     L_ret0
        mov     eax, [esp + 4]
        mov     eax, [eax + 4]
        mov     eax, [eax]
        cmp     eax, 1
        jne     L_cmp2
        mov     eax, [ecx + 0x40D94]
        inc     eax
        cmp     eax, edx
        jge     L_ret1
        mov     [ecx + 0x40D94], eax
        mov     eax, 1
        ret     8
L_cmp2:
        cmp     eax, 2
        jne     L_cmp3
        mov     eax, [ecx + 0x40D94]
        test    eax, eax
        je      L_ret1
        dec     eax
        mov     [ecx + 0x40D94], eax
        mov     eax, 1
        ret     8
L_cmp3:
        cmp     eax, 3
        jne     L_ret1
        dec     edx
        mov     [ecx + 0x40D94], edx
L_ret1:
        mov     eax, 1
        ret     8
L_ret0:
        xor     eax, eax
        ret     8
    }

}
