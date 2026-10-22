/*
 * FUN_0050136B (39 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0050136B(void)
{
    __asm {
        nop
        nop
        nop
        nop
        nop
        mov    eax, dword ptr [esp + 4]
        push   esi
        mov    esi, dword ptr [eax + 0xd8]
        push   edi
        mov    edi, dword ptr [esp + 0x10]
        add    esi, 0x80
        mov    ecx, 0xc
        rep movsd
        pop    edi
        pop    esi
        ret    8
    }
}
