/*
 * FUN_00760A10 (extent 0x760A10-0x760A82, 114 B) - .text data block.
 * __stdcall, ret 0xc.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_00760E70(void);
extern void __cdecl FUN_00769000(void);

__declspec(naked) void __stdcall FUN_00760A10(void)
{
    __asm {
        sub    esp, 0x50
        push   esi
        mov    esi, dword ptr [esp + 0x60]
        push   4
        push   esi
        call   FUN_00760E70
        add    esp, 8
        test   ax, ax
        jne    L_34
        mov    eax, 0x322
        pop    esi
        add    esp, 0x50
        ret    0xc
    L_34:
        mov    edx, dword ptr [esp + 0x58]
        push   edi
        mov    ecx, 0x14
        xor    eax, eax
        lea    edi, [esp + 8]
        rep stosd
        mov    eax, dword ptr [esp + 0x60]
        lea    ecx, [esp + 8]
        push   ecx
        push   edx
        mov    dword ptr [esp + 0x10], 0xc08a5335
        mov    dword ptr [esp + 0x14], 0x50
        mov    dword ptr [esp + 0x18], 9
        mov    dword ptr [esp + 0x20], eax
        call   FUN_00769000
        mov    ecx, dword ptr [esp + 0x50]
        add    esp, 8
        mov    dword ptr [esi], ecx
        pop    edi
        pop    esi
        add    esp, 0x50
        ret    0xc
    }
}
