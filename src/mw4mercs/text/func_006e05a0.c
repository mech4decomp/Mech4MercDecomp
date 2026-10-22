/* FUN_006e05a0 - 125 bytes, __thiscall, RET */
extern void __cdecl FUN_004084e0(void *);
__declspec(naked) void FUN_006e05a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jle     L_e05c8
        push    ebx
        push    edi
        mov     edi, dword ptr [esi + 0x110]
        mov     ebx, eax
    L_e05b4:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      L_e05c0
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    L_e05c0:
        add     edi, 0x4
        dec     ebx
        jne     L_e05b4
        pop     edi
        pop     ebx
    L_e05c8:
        mov     eax, dword ptr [esi + 0x114]
        test    eax, eax
        jz      L_e05f5
        mov     ecx, dword ptr [esi + 0x110]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x110], 0x0
        mov     dword ptr [esi + 0x114], 0x0
    L_e05f5:
        mov     eax, dword ptr [esi + 0x110]
        test    eax, eax
        jz      L_e0608
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_e0608:
        mov     esi, dword ptr [esi + 0x108]
        test    esi, esi
        jz      L_e061b
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_e061b:
        pop     esi
        ret
    }
}
