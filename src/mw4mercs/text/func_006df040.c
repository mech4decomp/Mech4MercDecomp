/* FUN_006df040 - 109 bytes, __cdecl, RET */
__declspec(naked) void FUN_006df040(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edx + 0x10]
        push    ebx
        mov     ebx, dword ptr [eax + 0x20]
        push    esi
        mov     esi, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        sar     edx, cl
        and     ecx, 0xffffff
        sub     eax, edi
        test    eax, eax
        mov     dword ptr [esp + 0x10], ecx
        jle     L_df0a9
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        xor     edi, edi
    L_df07b:
        xor     ecx, ecx
        mov     cl, byte ptr [edi + esi*0x1]
        and     ecx, 0xf
        shl     ecx, 0x4
        cmp     ecx, 0x80
        jle     L_df095
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebp], ecx
    L_df095:
        dec     ebx
        test    ebx, ebx
        jg      L_df09f
        lea     esi, [esi + edx*0x2]
        mov     ebx, edx
    L_df09f:
        add     ebp, 0x4
        sub     edi, 0x2
        dec     eax
        jne     L_df07b
        pop     ebp
    L_df0a9:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
