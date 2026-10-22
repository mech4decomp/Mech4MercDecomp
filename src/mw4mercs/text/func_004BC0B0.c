/*
 * FUN_004BC0B0 (29 bytes true extent) - .text data block.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_004BC0B0(void)
{
    __asm {
        mov    edx, dword ptr [esp + 0xc]
        mov    ecx, dword ptr [ecx + 0x144]
        mov    eax, dword ptr [ecx]
        push   edx
        mov    edx, dword ptr [esp + 0xc]
        push   edx
        mov    edx, dword ptr [esp + 0xc]
        push   edx
        call   dword ptr [eax + 4]
        ret    0xc
    }
}
