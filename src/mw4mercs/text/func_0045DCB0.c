/*
 * FUN_0045DCB0 (27 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_0045DCB0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0xa8]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0xac]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        ret    8
    }
}
