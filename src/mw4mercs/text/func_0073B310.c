/*
 * FUN_0073B310 (19 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73e4;

__declspec(naked) void FUN_0073B310(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73e4]
        xor    eax, eax
        test   ecx, ecx
        sete   al
        mov    dword ptr [g_007b73e4], eax
        ret
    }
}
