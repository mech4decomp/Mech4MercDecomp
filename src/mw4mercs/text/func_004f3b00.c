/*
 * FUN_004f3b00 (410 B) — MLR/Adept component-list build helper (__thiscall,
 * RET 0x4, 1 param). Iterates a component list, building sub-objects and
 * copying 0xc-dword blocks, then finalizes a result structure.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_004de340(void);
extern void __cdecl FUN_004154d0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_0041acb0(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_004f3ca0(void);
extern void __cdecl FUN_0041a070(void);

extern int g_007b8cec;   /* DAT_007b8cec */
extern int g_007b8ce8;   /* DAT_007b8ce8 */
extern int g_007b8cf0;   /* DAT_007b8cf0 */

__declspec(naked) void FUN_004f3b00(void)
{
    __asm {
        sub     esp, 0xa0
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        push    0x1
        mov     dword ptr [esp + 0x20], esi
        call    dword ptr [eax + 0x48]
        push    0x7b8d88
        lea     ecx, [esp + 0x14]
        xor     ebp, ebp
        call    FUN_0040c5d0
        mov     ecx, dword ptr [g_007b8cec]
        mov     edx, dword ptr [g_007b8ce8]
        mov     eax, dword ptr [g_007b8cf0]
        mov     dword ptr [esp + 0x24], ecx
        push    0x7b9460
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00419460
        lea     ebx, [esi + 0x170]
L3B58:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      L3C28
        mov     ecx, eax
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x30], ebx
        mov     dword ptr [esp + 0x2c], 0x7751d0
        call    FUN_004de340
        mov     esi, eax
        push    ebx
        mov     ecx, esi
        call    FUN_004154d0
        push    esi
        mov     ecx, ebx
        call    FUN_004179b0
        add     esi, 0x10
        push    esi
        lea     ecx, [esp + 0x84]
        call    FUN_00428850
        mov     ecx, 0xc
        lea     esi, [esp + 0x80]
        lea     edi, [esp + 0x44]
        lea     edx, [esp + 0x44]
        rep     movsd
        push    edx
        lea     ecx, [esp + 0x3c]
        call    FUN_0041acb0
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x38]
        mov     edx, dword ptr [esp + 0x40]
        mov     dword ptr [esp + 0x24], eax
        lea     eax, [esp + 0x44]
        mov     dword ptr [esp + 0x20], ecx
        push    eax
        lea     ecx, [esp + 0x78]
        mov     dword ptr [esp + 0x2c], edx
        call    FUN_00419480
        lea     ecx, [esp + 0x74]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_0040c410
        sub     esp, 0xc
        lea     edx, [esp + 0x1c]
        mov     ecx, esp
        push    edx
        call    FUN_0040c5d0
        call    FUN_004f3ca0
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x48]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx + 0x168]
        inc     ebp
        cmp     ebp, edx
        jg      L3C53
        test    al, al
        jnz     L3C53
        mov     esi, ecx
        jmp     L3B58
L3C28:
        mov     esi, dword ptr [esi + 0xd8]
        add     esi, 0x80
        push    esi
        lea     ecx, [esp + 0x24]
        call    FUN_0041acb0
        mov     edx, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x10], edx
        mov     eax, dword ptr [esi + 0x1c]
        mov     dword ptr [esp + 0x14], eax
        mov     ecx, dword ptr [esi + 0x2c]
        mov     dword ptr [esp + 0x18], ecx
L3C53:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x50], edx
        lea     edx, [esp + 0x20]
        mov     dword ptr [esp + 0x70], ecx
        push    edx
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x64], eax
        call    FUN_0041a070
        mov     eax, dword ptr [esp + 0xb4]
        mov     ecx, 0xc
        lea     esi, [esp + 0x44]
        mov     edi, eax
        rep     movsd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xa0
        ret     0x4
    }
}
