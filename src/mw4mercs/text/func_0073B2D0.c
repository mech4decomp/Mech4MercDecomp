/*
 * FUN_0073B2D0 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaeb8;

__declspec(naked) void FUN_0073B2D0(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaeb8]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaeb8], eax
        ret
    }
}
