/* FUN_006e0de0 - 39 bytes, __thiscall, RET 0x4 */
__declspec(naked) void FUN_006e0de0(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4]
        push    esi
        xor     eax, eax
        test    edx, edx
        jle     L_e0e00
        mov     ecx, dword ptr [ecx + 0x110]
        mov     esi, dword ptr [esp + 0x8]
    L_e0df4:
        cmp     esi, dword ptr [ecx]
        jz      L_e0e03
        inc     eax
        add     ecx, 0x4
        cmp     eax, edx
        jl      L_e0df4
    L_e0e00:
        or      eax, 0xffffffff
    L_e0e03:
        pop     esi
        ret     0x4
    }
}
