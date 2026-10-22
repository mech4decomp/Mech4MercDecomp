/*
 * FUN_00500D20 (19 bytes) - .text data block 0x50097C.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00500D20(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 0x1c]
        mov    ecx, dword ptr [esp + 4]
        mov    dl, byte ptr [eax + ecx]
        mov    eax, dword ptr [esp + 8]
        mov    byte ptr [eax], dl
        ret    8
    }
}
