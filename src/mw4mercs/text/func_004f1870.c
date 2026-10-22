/*
 * FUN_004f1870 (125 B) - Adept::ComponentWeb constructor (__thiscall, RET 0xc,
 * 3 params). Calls base ctor FUN_00415180, initializes vtable 0x76cd9c and a
 * sub-object at [this+0x38] (vtable 0x774f18) via FUN_00416990, copies a
 * 4-byte id pair from param_2, and if param_3 != 0 calls FUN_004f19c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00416990(void);
extern void __cdecl FUN_004f19c0(void);

__declspec(naked) void FUN_004f1870(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        xor     edi, edi
        mov     dword ptr [esi], 0x76cd9c
        mov     word ptr [esi + 0x14], 0xffff
        mov     word ptr [esi + 0x16], di
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0x18], edi
        mov     dword ptr [esi + 0x24], edi
        mov     dword ptr [esi + 0x20], edi
        push    edi
        lea     ebx, [esi + 0x38]
        mov     dword ptr [esi + 0x2c], edi
        mov     dword ptr [esi + 0x28], edi
        push    edi
        mov     ecx, ebx
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0xc], edi
        mov     dword ptr [esi + 0x34], edi
        mov     dword ptr [esi + 0x30], edi
        call    FUN_00416990
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ecx, edi
        mov     dx, word ptr [eax]
        mov     ax, word ptr [eax + 0x2]
        mov     dword ptr [ebx], 0x774f18
        mov     dword ptr [esi + 0x10], ecx
        mov     word ptr [esi + 0x14], dx
        mov     word ptr [esi + 0x16], ax
        jz      L18e5
        push    esi
        call    FUN_004f19c0
L18e5:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     0xc
    }
}
