/*
 * FUN_0073ADE0 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaee8;

__declspec(naked) void FUN_0073ADE0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaee8]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaee8], eax
        ret
    }
}
