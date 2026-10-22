/*
 * FUN_004BA420 (extent 0x4BA420-0x4BA497, 119 B) - .text data block.
 * __thiscall-style (this in ecx), ret 0xc.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0048BD20(void);
extern void __cdecl FUN_0048EDA0(void);

__declspec(naked) void __stdcall FUN_004BA420(void)
{
    __asm {
        sub    esp, 0x30
        push   ebx
        push   esi
        mov    ebx, ecx
        push   edi
        lea    ecx, [esp + 0xc]
        call   FUN_0048BD20
        mov    eax, dword ptr [ebx + 0x160]
        mov    esi, dword ptr [esp + 0x44]
        mov    edx, dword ptr [ebx + 0x14c]
        mov    dword ptr [esp + 0x1c], eax
        mov    eax, dword ptr [ebx + 0x154]
        mov    dword ptr [esp + 0x20], 0
        mov    ecx, 6
        lea    edi, [esp + 0x24]
        rep movsd
        mov    ecx, dword ptr [ebx + 0x144]
        mov    dword ptr [esp + 0xc], ecx
        mov    ecx, dword ptr [ebx + 0x15c]
        mov    dword ptr [esp + 0x10], edx
        mov    dword ptr [esp + 0x14], eax
        mov    eax, dword ptr [esp + 0x40]
        lea    edx, [esp + 0xc]
        mov    dword ptr [esp + 0x18], ecx
        mov    ecx, dword ptr [eax + 0x26c]
        push   edx
        call   FUN_0048EDA0
        pop    edi
        pop    esi
        pop    ebx
        add    esp, 0x30
        ret    0xc
    }
}
