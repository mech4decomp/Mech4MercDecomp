/*
 * FUN_004d0690 (427 B) — MLR network subsystem: model update/load
 * (__thiscall, RET 0xc). Pushes a path, tries to load a model; on failure
 * builds a model table, iterates connections, and updates the global
 * model pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db0b0;
extern int g_007b8c10;
extern int g_007b8810;
extern void FUN_004cfbd0(void);
extern void FUN_004d2230(void);
extern void FUN_004d24f0(void);
extern void FUN_004d2310(void);
extern void FUN_004cfc90(void);
extern void FUN_004d2630(void);
extern void FUN_004d2840(void);
extern void FUN_00415180(void);
extern void FUN_0041ee70(void);
extern void FUN_00412b80(void);
extern void FUN_004084c0(void);
extern void FUN_006fab90(void);
extern void FUN_004d0600(void);
extern void FUN_004d2680(void);
extern void FUN_00412e70(void);
extern void FUN_004084e0(void);
extern void FUN_0041ef60(void);
extern void FUN_00412b60(void);

__declspec(naked) void FUN_004d0690(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x64
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [edi]
        mov     ebx, ecx
        push    edi
        mov     dword ptr [ebp - 0x4], ebx
        call    FUN_004cfbd0
        push    0x0
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, esi
        call    FUN_004d2230
        mov     eax, dword ptr [esi + 0x3c]
        test    eax, eax
        jz      loc_722
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jbe     loc_722
        mov     ecx, esi
        call    FUN_004d24f0
        test    al, al
        jz      loc_722
        mov     ecx, esi
        call    FUN_004d2310
        mov     eax, dword ptr [esi]
        mov     edi, dword ptr [ebp + 0x10]
        mov     ecx, esi
        call    dword ptr [eax + 0x4]
        mov     cx, word ptr [eax + 0x1a]
        add     word ptr [edi + 0x2], cx
        mov     ecx, ebx
        call    FUN_004cfc90
        mov     eax, dword ptr [g_007db0b0]
        test    eax, eax
        jz      loc_832
        mov     ecx, esi
        call    FUN_004d2630
        test    al, al
        jnz     loc_832
        mov     edx, dword ptr [g_007db0b0]
        push    edx
        mov     ecx, esi
        call    FUN_004d2840
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
loc_722:
        mov     eax, dword ptr [g_007b8c10]
        push    eax
        lea     ecx, [ebp - 0x64]
        call    FUN_00415180
        xor     ebx, ebx
        push    ebx
        lea     ecx, [ebp - 0x54]
        mov     dword ptr [ebp - 0x5c], ebx
        mov     dword ptr [ebp - 0x58], ebx
        mov     dword ptr [ebp - 0x64], 0x76cd9c
        call    FUN_0041ee70
        lea     ecx, [edi + 0xc]
        push    ecx
        lea     ecx, [ebp - 0x64]
        mov     dword ptr [ebp - 0x64], 0x76d1f0
        call    FUN_00412b80
        mov     ecx, dword ptr [g_007b8810]
        mov     edx, dword ptr [g_007db0b0]
        push    ecx
        lea     eax, [ebp - 0x64]
        push    0xc
        mov     dword ptr [ebp + 0x8], edx
        mov     dword ptr [g_007db0b0], eax
        call    FUN_004084c0
        add     esp, 0x8
        cmp     eax, ebx
        jz      loc_798
        mov     edx, dword ptr [edi + 0x44]
        lea     ecx, [edi + 0x44]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     dword ptr [ebp + 0xc], eax
        jmp     loc_79b
loc_798:
        mov     dword ptr [ebp + 0xc], ebx
loc_79b:
        mov     eax, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [eax + 0x8]
        cmp     eax, ebx
        jz      loc_7ab
        mov     ebx, dword ptr [eax]
        test    ebx, ebx
        jnz     loc_7c0
loc_7ab:
        mov     ecx, dword ptr [edi]
        push    ecx
        push    0x772410
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      loc_7c0
        int     3
loc_7c0:
        push    0x0
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041ee70
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        push    ebx
        mov     ebx, dword ptr [ebp - 0x4]
        lea     eax, [ebp - 0x2c]
        push    eax
        mov     ecx, ebx
        call    FUN_004d0600
        lea     ecx, [ebp - 0x64]
        push    ecx
        lea     edx, [ebp - 0x2c]
        push    edx
        mov     ecx, esi
        call    FUN_004d2680
        mov     edi, dword ptr [ebp + 0x8]
        test    edi, edi
        jz      loc_809
        mov     ecx, esi
        call    FUN_004d2630
        test    al, al
        jnz     loc_809
        lea     eax, [ebp - 0x64]
        push    eax
        mov     ecx, edi
        call    FUN_00412e70
loc_809:
        mov     ecx, ebx
        mov     dword ptr [g_007db0b0], edi
        call    FUN_004cfc90
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        call    FUN_004084e0
        add     esp, 0x4
        lea     ecx, [ebp - 0x2c]
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x64]
        call    FUN_00412b60
loc_832:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
