/* FUN_006defd0 - 111 bytes, __cdecl, RET */
__declspec(naked) void FUN_006defd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        mov     ecx, dword ptr [eax + 0x4]
        mov     edx, dword ptr [ecx + 0x24]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [edx + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [eax + 0x20]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [esp + 0x20]
        sar     edx, cl
        and     ecx, 0xffffff
        sub     eax, ebx
        xor     esi, esi
        test    eax, eax
        mov     dword ptr [esp + 0x14], ecx
        jle     L_df03a
        mov     ebx, dword ptr [esp + 0x18]
    L_df00b:
        xor     ecx, ecx
        mov     cl, byte ptr [edi + esi*0x2]
        and     ecx, 0xf
        shl     ecx, 0x4
        cmp     ecx, 0x80
        jle     L_df024
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], ecx
    L_df024:
        dec     ebp
        test    ebp, ebp
        jg      L_df032
        mov     ecx, edx
        neg     ecx
        lea     edi, [edi + ecx*0x2]
        mov     ebp, edx
    L_df032:
        add     ebx, 0x4
        inc     esi
        cmp     esi, eax
        jl      L_df00b
    L_df03a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
