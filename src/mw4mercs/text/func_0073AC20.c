/*
 * FUN_0073AC20 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_008aaeb0;

__declspec(naked) void FUN_0073AC20(void)
{
    __asm {
        mov    ecx, dword ptr [g_008aaeb0]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_008aaeb0], eax
        ret
    }
}
