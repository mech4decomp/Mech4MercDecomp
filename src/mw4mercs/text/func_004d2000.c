/*
 * FUN_004d2000 (265 B) — MLR network subsystem: init a renderer-table object
 * and look up a renderer by name. __thiscall (this=ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00417170(void);
extern void __cdecl FUN_004cff20(void);
extern void __cdecl FUN_004171e0(void);
extern void __cdecl FUN_00417260(void);
extern void __cdecl FUN_00413c70(void);
extern void __cdecl FUN_00417280(void);
extern void __cdecl FUN_004171b0(void);

extern unsigned short g_007db0ae;
extern unsigned int  g_007db0b8;
extern unsigned short g_007db0ac;

__declspec(naked) void FUN_004d2000(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x0
        push    0x0
        mov     esi, ecx
        push    0x0
        call    FUN_0041e690
        mov     cx, word ptr [g_007db0ae]
        mov     edx, dword ptr [g_007db0b8]
        mov     ax, word ptr [g_007db0ac]
        mov     word ptr [esi + 0x42], cx
        add     edx, 0x14
        mov     word ptr [esi + 0x40], ax
        push    edx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi], 0x772570
        call    FUN_00417170
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0x7725a0
        jz      L_4d20c0
        push    eax
        call    FUN_004cff20
        add     esp, 0x4
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esi + 0x28], eax
        call    FUN_004171e0
        lea     ecx, [esp + 0x10]
        call    FUN_00417260
        mov     edi, eax
        test    edi, edi
        jz      L_4d20c7
L_4d2076:
        mov     ebp, dword ptr [esp + 0x2c]
        lea     ebx, [esi + 0x20]
L_4d207d:
        mov     eax, dword ptr [edi + 0x10]
        push    ebp
        mov     ecx, ebx
        mov     dword ptr [ebx], eax
        call    FUN_00413c70
        test    al, al
        jnz     L_4d209f
        lea     ecx, [esp + 0x10]
        call    FUN_00417260
        mov     edi, eax
        test    edi, edi
        jnz     L_4d207d
        jmp     L_4d20c7
L_4d209f:
        mov     cx, word ptr [edi + 0x1a]
        mov     dx, word ptr [esi + 0x24]
        mov     word ptr [esi + 0x40], cx
        mov     word ptr [esi + 0x42], dx
        mov     eax, dword ptr [esi + 0x38]
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esi + 0x34]
        mov     dword ptr [esi + 0x1c], eax
        jmp     L_4d20f4
L_4d20c0:
        mov     dword ptr [esi + 0x28], 0
L_4d20c7:
        lea     ecx, [esp + 0x10]
        call    FUN_004171e0
        lea     ecx, [esp + 0x10]
        call    FUN_00417280
        mov     cx, word ptr [eax + 0x1a]
        mov     edx, dword ptr [eax + 0x10]
        mov     word ptr [esi + 0x40], cx
        mov     dword ptr [esi + 0x20], edx
        mov     dword ptr [esi + 0x3c], 0
        mov     word ptr [esi + 0x24], 0xffff
L_4d20f4:
        lea     ecx, [esp + 0x10]
        call    FUN_004171b0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x14
        ret     0x8
    }
}
