/*
 * FUN_00682920 (11 bytes) - .text data block 0x682790.
 */
#pragma warning(disable : 4035 4793)

__declspec(naked) void FUN_00682920(void)
{
    __asm {
        mov    eax, dword ptr [ecx + 4]
        movsx  eax, byte ptr [eax + 0x54a]
        ret
    }
}
