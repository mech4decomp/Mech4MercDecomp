/*
 * FUN_0073B9F0 (18 bytes) - .text data block 0x73A900.
 */
#pragma warning(disable : 4035 4793)

extern int g_007b73dc;

__declspec(naked) void FUN_0073B9F0(void)
{
    __asm {
        mov    ecx, dword ptr [g_007b73dc]
        xor    eax, eax
        cmp    ecx, 0x320
        sete   al
        ret
    }
}
