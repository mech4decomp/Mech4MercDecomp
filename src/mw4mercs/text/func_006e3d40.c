/* FUN_006e3d40 - 142 bytes, __cdecl, RET */
extern void *g_0076b308;
extern void *g_0076b134;
extern void __cdecl FUN_006e2950(void);
extern void __cdecl FUN_006e2f50(void *);
__declspec(naked) void FUN_006e3d40(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        test    esi, esi
        push    edi
        jnz     L_e3d53
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
    L_e3d53:
        mov     ebp, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [g_0076b308]
        mov     eax, ebp
        dec     ebp
        test    eax, eax
        jz      L_e3d7e
        movsx   ebx, byte ptr [esp + 0x20]
    L_e3d69:
        push    ebx
        push    esi
        call    edi
        mov     esi, eax
        add     esp, 0x8
        test    esi, esi
        jz      L_e3d97
        inc     esi
        mov     ecx, ebp
        dec     ebp
        test    ecx, ecx
        jne     L_e3d69
    L_e3d7e:
        movsx   edx, byte ptr [esp + 0x20]
        push    edx
        push    esi
        call    edi
        add     esp, 0x8
        test    eax, eax
        jnz     L_e3da7
        push    esi
        call    dword ptr [g_0076b134]
        jmp     L_e3da9
    L_e3d97:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_006e2950
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        ret
    L_e3da7:
        sub     eax, esi
    L_e3da9:
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebx, eax
        push    ebx
        call    FUN_006e2f50
        mov     edi, eax
        mov     ecx, ebx
        mov     eax, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        ret
    }
}
