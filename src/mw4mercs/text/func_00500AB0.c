/*
 * FUN_00500AB0 (19 bytes) - .text data block 0x50097C.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00500AB0(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 8]
        mov    edx, dword ptr [ecx]
        mov    ecx, dword ptr [esp + 4]
        mov    dword ptr [eax + ecx], edx
        ret    8
    }
}
