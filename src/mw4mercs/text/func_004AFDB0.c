/*
 * FUN_004AFDB0 (49 bytes) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004AFDB0(void)
{
    __asm {
        mov    edx, dword ptr [ecx + 0x14c]
        mov    eax, dword ptr [esp + 4]
        mov    ecx, dword ptr [esp + 8]
        and    eax, 0xffff
        shl    eax, 4
        add    eax, edx
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
