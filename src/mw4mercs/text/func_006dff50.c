/* FUN_006dff50 - 52 bytes, __cdecl, RET */
__declspec(naked) void FUN_006dff50(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        sub     eax, edx
        and     esi, 0xffffff
        test    eax, eax
        jle     L_dff82
        mov     edx, dword ptr [esp + 0xc]
    L_dff74:
        cmp     byte ptr [ecx], 0x80
        jbe     L_dff7b
        mov     dword ptr [edx], esi
    L_dff7b:
        add     edx, 0x4
        dec     ecx
        dec     eax
        jne     L_dff74
    L_dff82:
        pop     esi
        ret
    }
}
