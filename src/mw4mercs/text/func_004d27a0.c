/*
 * FUN_004d27a0 (154 B) — MLR network subsystem: renderer-table update /
 * registration helper. __thiscall (this=ECX), RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004cff20(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_00413ad0(void);

extern unsigned int g_007db0b8;

__declspec(naked) void FUN_004d27a0(void)
{
    __asm {
        sub     esp, 0x20
        mov     eax, dword ptr [esp + 0x24]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_004cff20
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x40]
        mov     edi, eax
        mov     eax, dword ptr [g_007db0b8]
        add     esp, 0x4
        lea     edx, [esp + 0x30]
        push    edx
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esp + 0x34], ecx
        lea     ecx, [eax + 0x14]
        call    FUN_00416f60
        mov     eax, dword ptr [eax + 0x14]
        xor     ebx, ebx
        test    eax, eax
        jz      L_4d280f
        mov     dword ptr [esp + 0xc], eax
        mov     ax, word ptr [esi + 0x24]
        push    0x0
        lea     ecx, [esp + 0x10]
        lea     ebx, [esp + 0x10]
        mov     word ptr [esp + 0x14], ax
        call    FUN_00413be0
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x24], 0x0
        mov     dword ptr [esp + 0x20], 0x0
L_4d280f:
        lea     ecx, [esi + 0x20]
        call    FUN_00413ad0
        test    ebx, ebx
        jz      L_4d2822
        mov     ecx, ebx
        call    FUN_00413ad0
L_4d2822:
        mov     eax, dword ptr [esi + 0x38]
        mov     ecx, dword ptr [esi + 0x34]
        pop     edi
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x1c], ecx
        pop     esi
        pop     ebx
        add     esp, 0x20
        ret     0x4
    }
}
