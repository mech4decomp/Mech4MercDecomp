/*
 * MW4Stats.dll - FUN_10006cc0 (0x10006CC0, 93 B, __stdcall)
 * Validate a wide-char identifier string (alnum/_/./:/-). RET 0x4.
 * Transcribed from MW4Stats.dll reference bytes.
 */
__declspec(naked) void FUN_10006cc0(void)
{
    __asm {
        mov ecx, dword ptr [esp+0x4]
        test ecx, ecx
        jnz L_cd
    L_cc8:
        xor al, al
        ret 0x4
    L_cd:
        mov ax, word ptr [ecx]
    L_cd0:
        cmp ax, 0x41
        jc L_cdc
        cmp ax, 0x5a
        jbe L_d0c
    L_cdc:
        cmp ax, 0x61
        jc L_ce8
        cmp ax, 0x7a
        jbe L_d0c
    L_ce8:
        cmp ax, 0x30
        jc L_cf4
        cmp ax, 0x39
        jbe L_d0c
    L_cf4:
        cmp ax, 0x5f
        jz L_d0c
        cmp ax, 0x2e
        jz L_d0c
        cmp ax, 0x3a
        jz L_d0c
        cmp ax, 0x2d
        jnz L_cc8
    L_d0c:
        mov ax, word ptr [ecx+0x2]
        add ecx, 0x2
        test ax, ax
        jnz L_cd0
        mov al, 0x1
        ret 0x4
    }
}
