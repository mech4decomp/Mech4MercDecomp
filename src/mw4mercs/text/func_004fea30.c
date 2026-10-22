/*
 * FUN_004FEA30 (196 B) -- MLR/Adept pick/raycast helper (__thiscall, RET 0xC).
 * Transforms a matrix via FUN_004fe4a0, does an FPU distance check, then
 * recurses through a linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004fe4a0(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00417f30(void);

extern float g_76c5b0;    /* 0x0076c5b0 */

__declspec(naked) void __stdcall FUN_004fea30(void)
{
    __asm {
        sub     esp, 0x30
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        test    byte ptr [edi + 0x9c], 0x80
        jz      L_4fea4c
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4fea4c:
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [esp + 0x44]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     ecx, edi
        call    FUN_004fe4a0
        lea     eax, [esp + 0xc]
        push    eax
        lea     ecx, [edi + 0x10]
        lea     esi, [edi + 0x50]
        push    ecx
        mov     ecx, esi
        call    FUN_00417d80
        fld     dword ptr [edi + 0x8c]
        fcomp   dword ptr [g_76c5b0]
        mov     ebx, dword ptr [esp + 0x40]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4feaa4
        push    esi
        lea     ecx, [ebx + 0x50]
        call    FUN_00417f30
        test    eax, eax
        jz      L_4feaa4
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4feaa4:
        mov     esi, dword ptr [edi + 0x90]
        test    esi, esi
        jz      L_4feab3
        cmp     dword ptr [esi], 0x0
        jnz     L_4feabe
L_4feab3:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret     0xc
L_4feabe:
        push    ebp
        xor     ebp, ebp
L_4feac1:
        test    esi, esi
        jz      L_4feae8
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 0x4]
        jz      L_4feae8
        mov     eax, dword ptr [edi + 0x98]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        push    ebx
        call    FUN_004fea30
        test    eax, eax
        jz      L_4feac1
        mov     ebp, eax
        jmp     L_4feac1
L_4feae8:
        mov     eax, ebp
        pop     ebp
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x30
        ret     0xc
    }
}
