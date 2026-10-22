/*
 * FUN_0046FCA0 (42 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_0047A6B0(void);

__declspec(naked) void FUN_0046FCA0(void)
{
    __asm {
        push   esi
        push   edi
        mov    edi, dword ptr [esp + 0xc]
        mov    esi, ecx
        push   edi
        call   FUN_0047A6B0
        mov    eax, dword ptr [edi]
        push   1
        mov    ecx, edi
        call   dword ptr [eax + 0x18]
        lea    edi, [esi + 0x70]
        mov    esi, eax
        mov    ecx, 6
        rep movsd
        pop    edi
        mov    al, 1
        pop    esi
        ret    4
    }
}
