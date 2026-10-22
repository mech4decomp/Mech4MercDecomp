/* FUN_006e04d0 - 154 bytes, __thiscall, RET */
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
__declspec(naked) void FUN_006e04d0(void)
{
    __asm {
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi + 0x10c], eax
        mov     dword ptr [esi + 0x114], eax
        push    edi
        mov     dword ptr [esi + 0x4], eax
        mov     edi, dword ptr [esi + 0x114]
        cmp     edi, 0x64
        mov     dword ptr [esi + 0x108], eax
        mov     dword ptr [esi + 0x110], eax
        mov     dword ptr [esi], 0x64
        jz      L_e0565
        push    ebx
        push    ebp
        push    0x190
        call    FUN_004084d0
        mov     ebp, dword ptr [esi + 0x110]
        add     esp, 0x4
        test    ebp, ebp
        mov     ebx, eax
        jz      L_e054e
        cmp     edi, 0x64
        mov     ecx, 0x64
        ja      L_e0529
        mov     ecx, edi
    L_e0529:
        mov     eax, ecx
        dec     ecx
        test    eax, eax
        jz      L_e0545
        mov     edx, ebp
        lea     eax, [ebx + ecx*0x4]
        sub     edx, ebx
        inc     ecx
    L_e0538:
        mov     edi, dword ptr [edx + eax*0x1]
        mov     dword ptr [eax], edi
        dec     ecx
        sub     eax, 0x4
        test    ecx, ecx
        ja      L_e0538
    L_e0545:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
    L_e054e:
        pop     ebp
        mov     dword ptr [esi + 0x110], ebx
        pop     ebx
        pop     edi
        mov     dword ptr [esi + 0x114], 0x64
        mov     eax, esi
        pop     esi
        ret
    L_e0565:
        pop     edi
        mov     eax, esi
        pop     esi
        ret
    }
}
