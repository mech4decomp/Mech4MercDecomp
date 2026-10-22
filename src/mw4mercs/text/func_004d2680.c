/*
 * FUN_004d2680 (285 B) — MLR network subsystem: renderer-table update /
 * registration helper. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00413ad0(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_00413a30(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d2680(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        xor     eax, eax
        mov     ax, word ptr [esi + 0x40]
        push    edi
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_007db0b8]
        lea     ecx, [eax + 0x14]
        call    FUN_00416f60
        mov     eax, dword ptr [eax + 0x14]
        mov     ebp, dword ptr [esp + 0x3c]
        xor     ecx, ecx
        xor     edi, edi
        cmp     eax, ecx
        jz      L_4d26f3
        cmp     ebp, ecx
        mov     edx, dword ptr [esi + 0x28]
        lea     edi, [esp + 0x14]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x1c], edx
        jz      L_4d26e7
        mov     edx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp + 0x24]
        lea     ecx, [ebp + 0x10]
        sub     eax, edx
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x28], eax
        call    dword ptr [edx + 0x4]
        sub     eax, dword ptr [esp + 0x28]
        mov     dword ptr [esp + 0x2c], eax
        xor     ecx, ecx
        jmp     L_4d26ef
L_4d26e7:
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x2c], ecx
L_4d26ef:
        mov     dword ptr [esp + 0x30], ecx
L_4d26f3:
        mov     ebx, dword ptr [esp + 0x38]
        cmp     ebx, ecx
        jz      L_4d271e
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0xc]
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        mov     dword ptr [ebx + 0x8], 0xffffffec
        call    dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x38], eax
        mov     eax, dword ptr [ebx + 0x1c]
        mov     dword ptr [esi + 0x34], eax
        xor     ecx, ecx
        jmp     L_4d2724
L_4d271e:
        mov     dword ptr [esi + 0x38], ecx
        mov     dword ptr [esi + 0x34], ecx
L_4d2724:
        cmp     dword ptr [esi + 0x3c], ecx
        lea     ecx, [esi + 0x20]
        jz      L_4d276c
        call    FUN_00413ad0
        test    edi, edi
        jz      L_4d2784
        mov     cx, word ptr [esi + 0x42]
        mov     word ptr [edi + 0x4], cx
        push    0x1
        mov     ecx, edi
        call    FUN_00413be0
        mov     edx, dword ptr [ebp + 0x24]
        mov     ebx, dword ptr [ebp + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        lea     ecx, [ebp + 0x10]
        sub     edx, ebx
        mov     dword ptr [esp + 0x28], edx
        call    dword ptr [eax + 0x4]
        sub     eax, dword ptr [esp + 0x28]
        mov     ecx, edi
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_00413ad0
        jmp     L_4d2784
L_4d276c:
        call    FUN_00413a30
        test    edi, edi
        mov     cx, word ptr [esi + 0x24]
        mov     word ptr [esi + 0x42], cx
        jz      L_4d2784
        mov     ecx, edi
        call    FUN_00413a30
L_4d2784:
        mov     eax, dword ptr [esi + 0x38]
        mov     edx, dword ptr [esi + 0x34]
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x1c], edx
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x24
        ret     0x8
    }
}
