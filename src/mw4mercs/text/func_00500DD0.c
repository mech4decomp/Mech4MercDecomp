/*
 * FUN_00500DD0 (39 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00500DD0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        add    eax, ecx
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], edx
        mov    edx, dword ptr [eax + 4]
        mov    dword ptr [ecx + 4], edx
        mov    edx, dword ptr [eax + 8]
        mov    eax, dword ptr [eax + 0xc]
        mov    dword ptr [ecx + 8], edx
        mov    dword ptr [ecx + 0xc], eax
        ret    8
    }
}
