/*
 * FUN_00482C60 (extent 0x482C60-0x482CCE, 110 B) - .text data block.
 * __thiscall-style (this in ecx), ret 8.
 */
#pragma warning(disable : 4035 4793)

extern int  g_007da7f8;
extern void __cdecl FUN_00423E00(void);

__declspec(naked) void __stdcall FUN_00482C60(void)
{
    __asm {
        push   ebx
        push   ebp
        mov    ebp, dword ptr [esp + 0xc]
        push   esi
        mov    ebx, ecx
        push   edi
        lea    esi, [ebp + 0x28]
        lea    edi, [ebx + 0x54]
        mov    ecx, 0x10
        rep movsd
        mov    ecx, dword ptr [ebx + 0x9c]
        mov    edx, dword ptr [ecx]
        mov    eax, dword ptr [ebx]
        push   4
        push   edx
        mov    ecx, ebx
        call   dword ptr [eax + 0x14]
        mov    eax, dword ptr [g_007da7f8]
        mov    esi, dword ptr [ebx]
        push   1
        push   eax
        push   ecx
        lea    edx, [ebp + 0x24]
        mov    ecx, esp
        push   edx
        mov    dword ptr [esp + 0x24], 0xffffffff
        call   FUN_00423E00
        mov    ecx, ebx
        call   dword ptr [esi + 0x18]
        test   eax, eax
        je     L1
        mov    ecx, dword ptr [esp + 0x18]
        mov    eax, dword ptr [ecx]
        lea    edx, [esp + 0x14]
        push   edx
        add    ebp, 4
        push   ebp
        push   ebx
        call   dword ptr [eax + 8]
    L1:
        mov    eax, dword ptr [esp + 0x14]
        pop    edi
        pop    esi
        pop    ebp
        pop    ebx
        ret    8
    }
}
