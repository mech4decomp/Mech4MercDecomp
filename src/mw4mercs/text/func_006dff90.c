/* FUN_006dff90 - 52 bytes, __cdecl, RET */
__declspec(naked) void FUN_006dff90(void)
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
        jle     L_dffc2
        mov     edx, dword ptr [esp + 0xc]
    L_dffb4:
        cmp     byte ptr [ecx], 0x80
        jbe     L_dffbb
        mov     dword ptr [edx], esi
    L_dffbb:
        add     edx, 0x4
        dec     ecx
        dec     eax
        jne     L_dffb4
    L_dffc2:
        pop     esi
        ret
    }
}
