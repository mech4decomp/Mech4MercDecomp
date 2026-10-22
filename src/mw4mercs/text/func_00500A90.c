/*
 * FUN_00500A90 (19 bytes) - .text data block 0x50097C.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00500A90(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    dword ptr [eax], edx
        ret    8
    }
}
