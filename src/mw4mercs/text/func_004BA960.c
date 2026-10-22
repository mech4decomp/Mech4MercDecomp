/*
 * FUN_004BA960 (51 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_004C1890(void);

__declspec(naked) void FUN_004BA960(void)
{
    __asm {
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push   edi
        call   FUN_004C1890
        mov    eax, dword ptr [edi]
        push   0xc
        lea    ecx, [esi + 0x178]
        push   ecx
        mov    ecx, edi
        call   dword ptr [eax + 0x24]
        mov    edx, dword ptr [eax]
        push   0x10
        add    esi, 0x184
        push   esi
        mov    ecx, eax
        call   dword ptr [edx + 0x24]
        pop    edi
        pop    esi
        ret    4
    }
}
