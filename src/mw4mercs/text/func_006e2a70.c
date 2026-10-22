/* FUN_006e2a70 - 69 bytes, __thiscall, RET 0x4 */
extern void __cdecl FUN_006e27b0(void);
extern void *g_0076b134;
extern void __cdecl FUN_006e2890(void *);
__declspec(naked) void FUN_006e2a70(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        call    FUN_006e27b0
        mov     esi, dword ptr [esp + 0x10]
        test    esi, esi
        mov     eax, dword ptr [eax]
        mov     dword ptr [ebx], eax
        jz      L_e2aad
        push    esi
        call    dword ptr [g_0076b134]
        mov     edi, eax
        test    edi, edi
        jz      L_e2aad
        push    edi
        mov     ecx, ebx
        call    FUN_006e2890
        mov     ecx, edi
        mov     edi, dword ptr [ebx]
        mov     edx, ecx
        shr     ecx, 0x2
        rep movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep movsb
    L_e2aad:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        ret     0x4
    }
}
