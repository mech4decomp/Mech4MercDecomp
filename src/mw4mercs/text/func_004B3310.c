/*
 * FUN_004B3310 (37 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004B3310(void)
{
    __asm {
        mov    eax, dword ptr [esp + 8]
        mov    edx, dword ptr [esp + 4]
        mov    ecx, dword ptr [ecx + 0x17c]
        push   esi
        mov    esi, dword ptr [eax]
        mov    eax, dword ptr [eax + 4]
        and    edx, 0xffff
        mov    dword ptr [ecx + edx*8], esi
        mov    dword ptr [ecx + edx*8 + 4], eax
        pop    esi
        ret    8
    }
}
