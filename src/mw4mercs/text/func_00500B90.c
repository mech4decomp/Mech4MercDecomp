/*
 * FUN_00500B90 (36 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00500B90(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x1c]
        add    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    dword ptr [eax], edx
        mov    edx, dword ptr [ecx + 4]
        mov    dword ptr [eax + 4], edx
        mov    edx, dword ptr [ecx + 8]
        mov    ecx, dword ptr [ecx + 0xc]
        mov    dword ptr [eax + 8], edx
        mov    dword ptr [eax + 0xc], ecx
        ret    8
    }
}
