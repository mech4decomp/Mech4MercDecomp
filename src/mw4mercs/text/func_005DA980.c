/*
 * FUN_005DA980 (37 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_005DA980(void)
{
    __asm {
        mov    edx, dword ptr [esp + 8]
        test   edx, edx
        jbe    L_5da9a0
        mov    eax, dword ptr [esp + 0xc]
        mov    eax, dword ptr [eax]
        push   esi
        mov    esi, dword ptr [esp + 8]
        push   edi
        mov    edi, esi
        mov    ecx, edx
        rep stosd
        pop    edi
        lea    eax, [esi + edx*4]
        pop    esi
        ret
L_5da9a0:
        mov    eax, dword ptr [esp + 4]
        ret
    }
}
