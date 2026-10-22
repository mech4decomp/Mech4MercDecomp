/*
 * FUN_0073AE20 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b7064;

__declspec(naked) void FUN_0073AE20(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b7064]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_007b7064], eax
        ret
    }
}
