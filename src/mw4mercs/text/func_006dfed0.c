/* FUN_006dfed0 - 58 bytes, __cdecl, RET */
__declspec(naked) void FUN_006dfed0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [eax + 0x24]
        sub     ecx, esi
        and     edx, 0xffffff
        xor     eax, eax
        test    ecx, ecx
        jle     L_dff07
        mov     esi, dword ptr [esp + 0x10]
    L_dfef7:
        cmp     byte ptr [eax + edi*0x1], 0x80
        jbe     L_dfeff
        mov     dword ptr [esi], edx
    L_dfeff:
        add     esi, 0x4
        inc     eax
        cmp     eax, ecx
        jl      L_dfef7
    L_dff07:
        pop     edi
        pop     esi
        ret
    }
}
