/* FUN_006e0e10 - 66 bytes, __thiscall, RET 0x4 */
__declspec(naked) void FUN_006e0e10(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x4]
        xor     edx, edx
        test    edi, edi
        jle     L_e0e41
        mov     ebx, dword ptr [ecx + 0x110]
        mov     esi, dword ptr [esp + 0x10]
        mov     ecx, ebx
    L_e0e28:
        mov     eax, dword ptr [ecx]
        cmp     esi, dword ptr [eax + 0x24]
        jz      L_e0e49
        cmp     esi, dword ptr [eax + 0x28]
        jz      L_e0e49
        cmp     esi, dword ptr [eax + 0x2c]
        jz      L_e0e49
        inc     edx
        add     ecx, 0x4
        cmp     edx, edi
        jl      L_e0e28
    L_e0e41:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
    L_e0e49:
        mov     eax, dword ptr [ebx + edx*0x4]
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
