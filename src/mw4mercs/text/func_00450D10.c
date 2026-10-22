/*
 * FUN_00450D10 (21 bytes) - .text data block 0x450CEF.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00450D10(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x64]
        mov    edx, dword ptr [esp + 4]
        mov    dword ptr [edx], eax
        mov    eax, dword ptr [ecx + 0x68]
        mov    ecx, dword ptr [esp + 8]
        mov    dword ptr [ecx], eax
        ret    8
    }
}
