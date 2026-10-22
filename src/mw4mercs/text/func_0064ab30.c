/*
 * FUN_0064ab30 (593 B) — Teardown/cleanup routine that walks a global
 * registry (DAT_0080d970 / DAT_0080d97c) and a secondary list
 * (DAT_0080d974), removing each entry from a global container
 * (DAT_008058b8) via FUN_0061ef00 and freeing it via FUN_006f4230.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058b8;   /* 0x008058b8 */
extern int g_80d97c;   /* 0x0080d97c */
extern int g_80d970;   /* 0x0080d970 */
extern int g_80d974;   /* 0x0080d974 */

extern void __cdecl FUN_0061ef00(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_0064ab30(void)
{
    __asm {
        mov     ecx, dword ptr [g_8058b8]
        sub     esp, 0x14
        push    ebp
        xor     ebp, ebp
        cmp     ecx, ebp
        jz      L_ad7c
        cmp     dword ptr [g_80d97c], ebp
        push    ebx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        jle     L_ac9d
L_ab57:
        mov     eax, dword ptr [g_80d970]
        mov     dword ptr [esp + 0x18], ebp
L_ab60:
        mov     edx, dword ptr [eax + ebp*1]
        test    edx, edx
        mov     dword ptr [esp + 0x20], edx
        jz      L_abd2
        mov     esi, dword ptr [ecx + 0x10]
        mov     edi, dword ptr [ecx + 0x14]
        lea     eax, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], ecx
        jz      L_abc1
        lea     ebx, [esi + 0x4]
L_ab86:
        cmp     dword ptr [esi], edx
        jnz     L_abb7
        mov     edi, dword ptr [eax + 0x4]
        cmp     ebx, edi
        jz      L_abab
        mov     eax, dword ptr [esp + 0x20]
        push    0x0
        push    eax
        push    esi
        push    edi
        push    ebx
        call    FUN_0061ef00
        mov     ecx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x30]
        add     esp, 0x14
L_abab:
        mov     edx, dword ptr [esp + 0x20]
        add     edi, -0x4
        mov     dword ptr [eax + 0x4], edi
        jmp     L_abbd
L_abb7:
        add     esi, 0x4
        add     ebx, 0x4
L_abbd:
        cmp     esi, dword ptr [ecx]
        jnz     L_ab86
L_abc1:
        push    edx
        call    FUN_006f4230
        mov     ecx, dword ptr [g_8058b8]
        mov     eax, dword ptr [g_80d970]
L_abd2:
        xor     edi, edi
        mov     dword ptr [eax + ebp*1], edi
        mov     dword ptr [eax + ebp*1 + 0x4], edi
        mov     edx, dword ptr [eax + ebp*1 + 0x8]
        test    edx, edx
        mov     dword ptr [esp + 0x10], edi
        jle     L_ac7d
L_abeb:
        mov     edx, dword ptr [eax + ebp*1 + 0xc]
        mov     edx, dword ptr [edx + edi*4]
        test    edx, edx
        mov     dword ptr [esp + 0x1c], edx
        jz      L_ac61
        mov     esi, dword ptr [ecx + 0x10]
        mov     eax, dword ptr [ecx + 0x14]
        lea     ebp, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, eax
        mov     dword ptr [esp + 0x20], ecx
        jz      L_ac4c
        lea     ebx, [esi + 0x4]
L_ac11:
        cmp     dword ptr [esi], edx
        jnz     L_ac42
        mov     edi, dword ptr [ebp + 0x4]
        cmp     ebx, edi
        jz      L_ac32
        mov     eax, dword ptr [esp + 0x20]
        push    0x0
        push    eax
        push    esi
        push    edi
        push    ebx
        call    FUN_0061ef00
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x14
L_ac32:
        mov     edx, dword ptr [esp + 0x1c]
        add     edi, -0x4
        mov     dword ptr [ebp + 0x4], edi
        mov     edi, dword ptr [esp + 0x10]
        jmp     L_ac48
L_ac42:
        add     esi, 0x4
        add     ebx, 0x4
L_ac48:
        cmp     esi, dword ptr [ecx]
        jnz     L_ac11
L_ac4c:
        push    edx
        call    FUN_006f4230
        mov     ecx, dword ptr [g_8058b8]
        mov     eax, dword ptr [g_80d970]
        mov     ebp, dword ptr [esp + 0x18]
L_ac61:
        mov     edx, dword ptr [eax + ebp*1 + 0xc]
        mov     dword ptr [edx + edi*4], 0x0
        mov     edx, dword ptr [eax + ebp*1 + 0x8]
        inc     edi
        cmp     edi, edx
        mov     dword ptr [esp + 0x10], edi
        jl      L_abeb
L_ac7d:
        mov     edx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [g_80d97c]
        inc     edx
        add     ebp, 0x28
        cmp     edx, esi
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x18], ebp
        jl      L_ab60
        jmp     L_aca2
L_ac9d:
        mov     eax, dword ptr [g_80d970]
L_aca2:
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      L_ad04
        mov     esi, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        lea     ebp, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, edx
        mov     dword ptr [esp + 0x20], ecx
        jz      L_acf8
        lea     ebx, [esi + 0x4]
L_acc1:
        cmp     dword ptr [esi], eax
        jnz     L_acee
        mov     edi, dword ptr [ebp + 0x4]
        cmp     ebx, edi
        jz      L_ace2
        mov     eax, dword ptr [esp + 0x20]
        push    0x0
        push    eax
        push    esi
        push    edi
        push    ebx
        call    FUN_0061ef00
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x14
L_ace2:
        mov     eax, dword ptr [esp + 0x1c]
        add     edi, -0x4
        mov     dword ptr [ebp + 0x4], edi
        jmp     L_acf4
L_acee:
        add     esi, 0x4
        add     ebx, 0x4
L_acf4:
        cmp     esi, dword ptr [ecx]
        jnz     L_acc1
L_acf8:
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_8058b8]
L_ad04:
        mov     eax, dword ptr [g_80d974]
        test    eax, eax
        mov     dword ptr [g_80d970], 0x0
        mov     dword ptr [esp + 0x1c], eax
        jz      L_ad6f
        mov     esi, dword ptr [ecx + 0x10]
        mov     edx, dword ptr [ecx + 0x14]
        lea     ebp, [ecx + 0x10]
        add     ecx, 0x14
        cmp     esi, edx
        mov     dword ptr [esp + 0x20], ecx
        jz      L_ad69
        lea     ebx, [esi + 0x4]
L_ad32:
        cmp     dword ptr [esi], eax
        jnz     L_ad5f
        mov     edi, dword ptr [ebp + 0x4]
        cmp     ebx, edi
        jz      L_ad53
        mov     ecx, dword ptr [esp + 0x20]
        push    0x0
        push    ecx
        push    esi
        push    edi
        push    ebx
        call    FUN_0061ef00
        mov     ecx, dword ptr [esp + 0x34]
        add     esp, 0x14
L_ad53:
        mov     eax, dword ptr [esp + 0x1c]
        add     edi, -0x4
        mov     dword ptr [ebp + 0x4], edi
        jmp     L_ad65
L_ad5f:
        add     esi, 0x4
        add     ebx, 0x4
L_ad65:
        cmp     esi, dword ptr [ecx]
        jnz     L_ad32
L_ad69:
        push    eax
        call    FUN_006f4230
L_ad6f:
        pop     edi
        pop     esi
        mov     dword ptr [g_80d974], 0x0
        pop     ebx
L_ad7c:
        pop     ebp
        add     esp, 0x14
        ret
    }
}
