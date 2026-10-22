/* FUN_006e6cd0 - 169 bytes, __cdecl, RET */
extern void *g_0076b560;
extern int g_841770;
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_004084e0(void *);
__declspec(naked) void FUN_006e6cd0(void)
{
    __asm {
        sub     esp, 0x10c
        push    ebx
        mov     ebx, dword ptr [g_0076b560]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x11c]
        push    0x0
        push    0x0
        push    0x190
        push    edi
        call    ebx
        mov     esi, eax
        test    esi, esi
        jz      L_e6d6f
        lea     eax, [esi*0x4 + 0x0]
        push    ebp
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     ebp, eax
        push    ebp
        push    esi
        push    0x191
        push    edi
        mov     dword ptr [esp + 0x28], ebp
        call    ebx
        test    esi, esi
        jle     L_e6d65
        mov     dword ptr [esp + 0x10], esi
    L_e6d21:
        mov     esi, dword ptr [ebp]
        push    0x0
        push    esi
        push    0x199
        push    edi
        call    ebx
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    esi
        push    0x189
        push    edi
        mov     dword ptr [esp + 0x24], eax
        call    ebx
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x124]
        mov     dword ptr [eax*0x4 + g_841770], edx
        mov     eax, dword ptr [esp + 0x10]
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jne     L_e6d21
        mov     ebp, dword ptr [esp + 0x18]
    L_e6d65:
        push    ebp
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebp
    L_e6d6f:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x10c
        ret
    }
}
