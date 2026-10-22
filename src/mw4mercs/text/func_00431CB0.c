/*
 * FUN_00431CB0 (27 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00431CB0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0xb4]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0xb8]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        ret    8
    }
}
