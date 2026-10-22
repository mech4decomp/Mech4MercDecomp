/* FUN_006e0d00 - 74 bytes, __thiscall, RET 0x4 */
__declspec(naked) void FUN_006e0d00(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [ecx + 0x4]
        push    ebp
        push    esi
        xor     esi, esi
        test    ebx, ebx
        push    edi
        jle     L_e0d31
        mov     ecx, dword ptr [ecx + 0x110]
        mov     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x10], ecx
        mov     edi, ecx
    L_e0d1e:
        mov     ecx, dword ptr [edi]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x8]
        cmp     ebp, eax
        jz      L_e0d3b
        inc     esi
        add     edi, 0x4
        cmp     esi, ebx
        jl      L_e0d1e
    L_e0d31:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        pop     ecx
        ret     0x4
    L_e0d3b:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx + esi*0x4]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x4
    }
}
