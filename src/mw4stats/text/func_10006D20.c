/*
 * MW4Stats.dll - FUN_10006d20 (0x10006D20, 87 B, __stdcall)
 * Validate a wide-char identifier string (alnum/_/./-). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10006d20(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x4]
        test ecx, ecx
        jnz L_d2d
    L_d28:
        xor al, al
        ret 0x4
    L_d2d:
        mov ax, word ptr [ecx]
    L_d30:
        cmp ax, 0x41
        jc L_d3c
        cmp ax, 0x5a
        jbe L_d66
    L_d3c:
        cmp ax, 0x61
        jc L_d48
        cmp ax, 0x7a
        jbe L_d66
    L_d48:
        cmp ax, 0x30
        jc L_d54
        cmp ax, 0x39
        jbe L_d66
    L_d54:
        cmp ax, 0x5f
        jz L_d66
        cmp ax, 0x2e
        jz L_d66
        cmp ax, 0x2d
        jnz L_d28
    L_d66:
        mov ax, word ptr [ecx+0x2]
        add ecx, 0x2
        test ax, ax
        jnz L_d30
        mov al, 0x1
        ret 0x4
    }
}
