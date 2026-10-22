/* FUN_006e1ae0 - 34 bytes, __cdecl, RET */
__declspec(naked) void FUN_006e1ae0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        test    edx, edx
        jg      L_e1aec
        or      eax, 0xffffffff
        ret
    L_e1aec:
        mov     ecx, 0x1000000
        test    edx, ecx
        mov     eax, 0x18
        jnz     L_e1b01
    L_e1afa:
        sar     ecx, 0x1
        dec     eax
        test    ecx, edx
        jz      L_e1afa
    L_e1b01:
        ret
    }
}
