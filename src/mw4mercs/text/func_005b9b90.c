/*
 * FUN_005b9b90 (304 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_005f07c0(void);
extern void __stdcall FUN_005ba670(void);
extern void __stdcall FUN_005ba810(void);
extern void __stdcall FUN_005ba2a0(void);
extern void __stdcall FUN_005ba7b0(void);
extern void __stdcall FUN_005b9ac0(void);
extern void __stdcall FUN_005b9940(void);
extern void __stdcall FUN_005ba4e0(void);
extern void __stdcall FUN_004084e0(void);

__declspec(naked) void __stdcall FUN_005b9b90(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x1c
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ebx, dword ptr [ecx + 0x20]
        push    edi
        mov     ecx, esi
        xor     ebx, 0x85739531
        call    FUN_005f07c0
        mov     eax, dword ptr [eax + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        mov     ecx, dword ptr [eax + 0x9c]
        add     eax, 0x80
        mov     dword ptr [esi + 0x1c8], edx
        mov     edx, dword ptr [eax + 0x2c]
        mov     dword ptr [esi + 0x1cc], ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x1d0], edx
        call    FUN_005ba670
        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x17]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_005ba810
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_005f07c0
        mov     ebp, dword ptr [eax + 0xd8]
        mov     ecx, esi
        add     ebp, 0x80
        lea     edi, [esi + 0x2e0]
        call    FUN_005ba2a0
        fstp    dword ptr [esp + 0x18]
        mov     edx, dword ptr [edi + 0x4]
        mov     eax, dword ptr [edi]
        push    edx
        push    eax
        mov     ecx, edi
        add     ebx, 0x2b8
        call    FUN_005ba7b0
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        push    ebp
        lea     edx, [esp + 0x24]
        push    edx
        lea     eax, [esp + 0x2c]
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     edx, [esp + 0x3c]
        push    edx
        mov     ecx, ebx
        call    FUN_005b9ac0
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x20]
        push    edi
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x34]
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005b9940
        mov     edi, dword ptr [esp + 0x14]
        test    edi, edi
        jz      L_9c9d
L_9c88:
        mov     edx, dword ptr [edi + 0x4]
        push    edx
        mov     ecx, esi
        call    FUN_005ba4e0
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_9c88
        mov     edi, dword ptr [esp + 0x14]
L_9c9d:
        test    edi, edi
        mov     esi, edi
        jz      L_9cb8
L_9ca3:
        mov     eax, esi
        test    eax, eax
        mov     esi, dword ptr [esi]
        jz      L_9cb4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_9cb4:
        test    esi, esi
        jnz     L_9ca3
L_9cb8:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }


}
