/*
 * FUN_0062fb70 (271 B) — __cdecl, 2 stack params.
 * Iterates a linked list of "DamageZone" nodes, dispatching each.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7b8c10;   /* 0x007b8c10 */
extern unsigned int g_7db0b0;   /* 0x007db0b0 */
extern unsigned int g_7db0a0;   /* 0x007db0a0 */
extern unsigned int g_7b8810;   /* 0x007b8810 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_0041ee70(int a);
extern void __cdecl FUN_00412b80(void *p);
extern void __cdecl FUN_004cfbd0(void *p);
extern void *__cdecl FUN_004084c0(int a, int b);
extern char __cdecl FUN_00411cb0(void *a, void *b, int c);
extern void __cdecl FUN_004e61b0(void);
extern void __cdecl FUN_005b6d70(int a, int b);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004cfc90(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void __cdecl FUN_0062fb70(void)
{
    __asm {
        sub     esp, 0x38
        mov     eax, dword ptr [g_7b8c10]
        push    ebx
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00415180
        push    0x0
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x18], 0x0
        mov     dword ptr [esp + 0x1C], 0x0
        mov     dword ptr [esp + 0x10], 0x76cd9c
        call    FUN_0041ee70
        mov     esi, dword ptr [esp + 0x4C]
        lea     ecx, [esi + 0xC]
        push    ecx
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x76d1f0
        call    FUN_00412b80
        mov     edx, dword ptr [g_7db0b0]
        mov     ecx, dword ptr [g_7db0a0]
        lea     eax, [esp + 0xC]
        push    esi
        mov     dword ptr [esp + 0x50], edx
        mov     dword ptr [g_7db0b0], eax
        call    FUN_004cfbd0
        mov     ecx, dword ptr [g_7b8810]
        push    ecx
        push    0xC
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_fc0b
        mov     edx, dword ptr [esi + 0x44]
        lea     ecx, [esi + 0x44]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax], 0x76cd64
        mov     edi, eax
        jmp     L_fc0d
L_fc0b:
        xor     edi, edi
L_fc0d:
        mov     ebx, dword ptr [esp + 0x48]
L_fc11:
        mov     eax, dword ptr [edi + 0x8]
        test    eax, eax
        jz      L_fc51
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     eax, dword ptr [eax + 0x4]
        mov     dword ptr [edi + 0x8], eax
        jz      L_fc51
        push    0x0
        lea     ecx, [esp + 0x4C]
        push    ecx
        push    0x77430c
        mov     ecx, esi
        call    FUN_00411cb0
        test    al, al
        push    esi
        push    ebx
        jnz     L_fc47
        call    FUN_004e61b0
        add     esp, 0x8
        jmp     L_fc11
L_fc47:
        call    FUN_005b6d70
        add     esp, 0x8
        jmp     L_fc11
L_fc51:
        mov     edx, dword ptr [esp + 0x4C]
        push    edi
        mov     dword ptr [g_7db0b0], edx
        call    FUN_004084e0
        mov     ecx, dword ptr [g_7db0a0]
        add     esp, 0x4
        call    FUN_004cfc90
        lea     ecx, [esp + 0xC]
        call    FUN_00412b60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x38
        ret
    }
}
