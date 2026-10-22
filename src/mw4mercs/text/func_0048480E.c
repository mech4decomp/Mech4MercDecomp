/*
 * FUN_0048480E (extent 0x48480E-0x484884, 118 B) - .text data block.
 * __thiscall-style (this in ecx), ret 8.
 */
#pragma warning(disable : 4035 4793)

extern int  g_007da7f8;
extern void __cdecl FUN_00423E00(void);

__declspec(naked) void __stdcall FUN_0048480E(void)
{
    __asm {
        nop
        nop
        push   ebx
        push   ebp
        mov    ebp, dword ptr [esp + 0xc]
        mov    ebx, ecx
        mov    edx, dword ptr [ebx + 0xa0]
        push   esi
        push   edi
        lea    esi, [ebp + 0x28]
        lea    edi, [ebx + 0x54]
        mov    ecx, 0x10
        rep movsd
        mov    ecx, dword ptr [ebx + 0x9c]
        mov    eax, dword ptr [ebx]
        push   ecx
        mov    ecx, dword ptr [edx]
        push   ecx
        mov    ecx, ebx
        call   dword ptr [eax + 0x14]
        mov    edx, dword ptr [g_007da7f8]
        mov    esi, dword ptr [ebx]
        push   1
        push   edx
        push   ecx
        lea    eax, [ebp + 0x24]
        mov    ecx, esp
        push   eax
        mov    dword ptr [esp + 0x24], 0xffffffff
        call   FUN_00423E00
        mov    ecx, ebx
        call   dword ptr [esi + 0x18]
        test   eax, eax
        je     L1
        mov    ecx, dword ptr [esp + 0x18]
        mov    edx, dword ptr [ecx]
        lea    eax, [esp + 0x14]
        push   eax
        add    ebp, 4
        push   ebp
        push   ebx
        call   dword ptr [edx + 8]
    L1:
        mov    eax, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
