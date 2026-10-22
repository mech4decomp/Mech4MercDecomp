/*
 * FUN_004d2230 (221 B) — MLR network subsystem: init a renderer-table object
 * and look up a renderer by name. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cff20(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00417260(void);
extern void __cdecl FUN_00413c70(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004171b0(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d2230(void)
{
    __asm {
        sub     esp, 0x14
        mov     eax, dword ptr [esp + 0x18]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_004cff20
        mov     ecx, dword ptr [g_007db0b8]
        add     ecx, 0x14
        add     esp, 0x4
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x28], eax
        call    FUN_00417170
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x7725a0
        call    FUN_004171e0
        lea     ecx, [esp + 0x10]
        call    FUN_00417260
        mov     edi, eax
        xor     ebx, ebx
        cmp     edi, ebx
        jz      L_4d22a7
        mov     ebp, dword ptr [esp + 0x2c]
        lea     ebx, [esi + 0x20]
L_4d2285:
        mov     edx, dword ptr [edi + 0x10]
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [ebx], edx
        call    FUN_00413c70
        test    al, al
        jnz     L_4d22ec
        lea     ecx, [esp + 0x10]
        call    FUN_00417260
        mov     edi, eax
        test    edi, edi
        jnz     L_4d2285
        xor     ebx, ebx
L_4d22a7:
        lea     ecx, [esp + 0x10]
        call    FUN_004171e0
        lea     ecx, [esp + 0x10]
        call    FUN_00417280
        mov     cx, word ptr [eax + 0x1a]
        mov     edx, dword ptr [eax + 0x10]
        mov     word ptr [esi + 0x40], cx
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x3c], ebx
        mov     word ptr [esi + 0x24], 0xffff
        mov     dword ptr [esi + 0x14], ebx
        mov     dword ptr [esi + 0x10], ebx
        mov     dword ptr [esi + 0x1c], ebx
L_4d22d9:
        lea     ecx, [esp + 0x10]
        call    FUN_004171b0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8
L_4d22ec:
        mov     ax, word ptr [edi + 0x1a]
        mov     cx, word ptr [esi + 0x24]
        mov     word ptr [esi + 0x40], ax
        mov     word ptr [esi + 0x42], cx
        mov     eax, dword ptr [esi + 0x38]
        mov     edx, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x1c], edx
        jmp     L_4d22d9
    }
}
